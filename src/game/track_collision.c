/**
 * Burnout 3: Takedown — track collision (see track_collision.h)
 */

#include "track_collision.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* World units per grid cell. Objects are mostly road strips and building
 * faces tens of units across, so this keeps the average cell occupancy in
 * single digits without the cell array getting large. */
#define CELL_SIZE 32.0f
#define MAX_DIM   512

/* A triangle counts as a wall below this and as ground above it. Burnout's
 * ramps are steep; anything the car could plausibly drive up must stay on
 * the ground side or it becomes an invisible barrier. */
#define GROUND_NY 0.5f

typedef struct {
    int chunk;
    int object;
} ObjRef;

struct TrackCollision {
    const TrackData *track;
    float origin[2];         /* world XZ of cell (0,0) */
    int   nx, nz;
    int  *cell_start;        /* nx*nz + 1 prefix offsets into refs */
    ObjRef *refs;
    int   ref_count;
    int   last_probed;
};

static int cell_index(const TrackCollision *tc, int cx, int cz) {
    return cz * tc->nx + cx;
}

/* Cell range an AABB covers, clamped to the grid. Returns 0 if it is
 * entirely outside. */
static int bbox_cells(const TrackCollision *tc, const float *bb,
                      int *x0, int *z0, int *x1, int *z1) {
    *x0 = (int)floorf((bb[0] - tc->origin[0]) / CELL_SIZE);
    *z0 = (int)floorf((bb[2] - tc->origin[1]) / CELL_SIZE);
    *x1 = (int)floorf((bb[3] - tc->origin[0]) / CELL_SIZE);
    *z1 = (int)floorf((bb[5] - tc->origin[1]) / CELL_SIZE);
    if (*x1 < 0 || *z1 < 0 || *x0 >= tc->nx || *z0 >= tc->nz) return 0;
    if (*x0 < 0) *x0 = 0;
    if (*z0 < 0) *z0 = 0;
    if (*x1 >= tc->nx) *x1 = tc->nx - 1;
    if (*z1 >= tc->nz) *z1 = tc->nz - 1;
    return 1;
}

/* An object's bounds are only usable when the loader captured them and the
 * corners were finite; a section that failed the bbox read leaves 1e30. */
static const float *obj_bounds(const TrackData *track, int c, int o) {
    const TrackChunk *ch = &track->chunks[c];
    if (!ch->obj_bbox || o >= ch->strip_break_count) return NULL;
    const float *bb = &ch->obj_bbox[o * 6];
    for (int i = 0; i < 6; i++)
        if (!isfinite(bb[i]) || fabsf(bb[i]) > 1e20f) return NULL;
    if (bb[3] < bb[0] || bb[4] < bb[1] || bb[5] < bb[2]) return NULL;
    return bb;
}

TrackCollision *track_collision_build(const TrackData *track)
{
    if (!track || track->chunk_count <= 0 || !track->chunks) return NULL;

    TrackCollision *tc = (TrackCollision *)calloc(1, sizeof(TrackCollision));
    if (!tc) return NULL;
    tc->track = track;

    float minx = 1e30f, minz = 1e30f, maxx = -1e30f, maxz = -1e30f;
    int usable = 0;
    for (int c = 0; c < track->chunk_count; c++) {
        const TrackChunk *ch = &track->chunks[c];
        for (int o = 0; o < ch->strip_break_count; o++) {
            const float *bb = obj_bounds(track, c, o);
            if (!bb) continue;
            if (bb[0] < minx) minx = bb[0];
            if (bb[2] < minz) minz = bb[2];
            if (bb[3] > maxx) maxx = bb[3];
            if (bb[5] > maxz) maxz = bb[5];
            usable++;
        }
    }
    if (!usable) {
        fprintf(stderr, "[COLLIDE] Track has no object bounds — collision off\n");
        free(tc);
        return NULL;
    }

    tc->origin[0] = minx;
    tc->origin[1] = minz;
    tc->nx = (int)ceilf((maxx - minx) / CELL_SIZE) + 1;
    tc->nz = (int)ceilf((maxz - minz) / CELL_SIZE) + 1;
    if (tc->nx < 1) tc->nx = 1;
    if (tc->nz < 1) tc->nz = 1;
    if (tc->nx > MAX_DIM) tc->nx = MAX_DIM;
    if (tc->nz > MAX_DIM) tc->nz = MAX_DIM;

    const int ncells = tc->nx * tc->nz;
    tc->cell_start = (int *)calloc((size_t)ncells + 1, sizeof(int));
    if (!tc->cell_start) { free(tc); return NULL; }

    /* Counting pass, then a prefix sum, then a fill pass — one allocation
     * for the references instead of a per-cell growable list. */
    for (int c = 0; c < track->chunk_count; c++) {
        const TrackChunk *ch = &track->chunks[c];
        for (int o = 0; o < ch->strip_break_count; o++) {
            const float *bb = obj_bounds(track, c, o);
            int x0, z0, x1, z1;
            if (!bb || !bbox_cells(tc, bb, &x0, &z0, &x1, &z1)) continue;
            for (int z = z0; z <= z1; z++)
                for (int x = x0; x <= x1; x++)
                    tc->cell_start[cell_index(tc, x, z) + 1]++;
        }
    }
    for (int i = 0; i < ncells; i++)
        tc->cell_start[i + 1] += tc->cell_start[i];
    tc->ref_count = tc->cell_start[ncells];

    tc->refs = (ObjRef *)malloc((size_t)tc->ref_count * sizeof(ObjRef));
    if (!tc->refs) { free(tc->cell_start); free(tc); return NULL; }

    int *cursor = (int *)malloc((size_t)ncells * sizeof(int));
    if (!cursor) { free(tc->refs); free(tc->cell_start); free(tc); return NULL; }
    memcpy(cursor, tc->cell_start, (size_t)ncells * sizeof(int));

    for (int c = 0; c < track->chunk_count; c++) {
        const TrackChunk *ch = &track->chunks[c];
        for (int o = 0; o < ch->strip_break_count; o++) {
            const float *bb = obj_bounds(track, c, o);
            int x0, z0, x1, z1;
            if (!bb || !bbox_cells(tc, bb, &x0, &z0, &x1, &z1)) continue;
            for (int z = z0; z <= z1; z++) {
                for (int x = x0; x <= x1; x++) {
                    ObjRef *r = &tc->refs[cursor[cell_index(tc, x, z)]++];
                    r->chunk = c;
                    r->object = o;
                }
            }
        }
    }
    free(cursor);

    fprintf(stderr, "[COLLIDE] Grid %dx%d over %d objects, %d refs "
                    "(%.1f per cell)\n",
            tc->nx, tc->nz, usable, tc->ref_count,
            (double)tc->ref_count / (double)ncells);
    return tc;
}

void track_collision_free(TrackCollision *tc)
{
    if (!tc) return;
    free(tc->cell_start);
    free(tc->refs);
    free(tc);
}

void track_collision_stats(const TrackCollision *tc,
                           int *out_cells, int *out_refs, int *out_last_probed)
{
    if (out_cells)       *out_cells       = tc ? tc->nx * tc->nz : 0;
    if (out_refs)        *out_refs        = tc ? tc->ref_count : 0;
    if (out_last_probed) *out_last_probed = tc ? tc->last_probed : 0;
}

/* ── Triangle iteration ──────────────────────────────────────────
 * Objects are triangle strips with degenerate restarts. Yield each
 * non-degenerate triangle with the strip's alternating winding. */
typedef void (*TriFn)(void *ctx, const float *a, const float *b, const float *c);

static void for_each_triangle(const TrackChunk *ch, int obj, TriFn fn, void *ctx)
{
    if (!ch->strip_breaks || !ch->strip_lens || !ch->indices || !ch->vertices)
        return;
    if (ch->strip_prims && ch->strip_prims[obj] != 6) return;   /* not a strip */

    const uint32_t start = ch->strip_breaks[obj];
    const uint32_t len   = ch->strip_lens[obj];
    if (start + len > ch->index_count || len < 3) return;

    for (uint32_t i = 0; i + 2 < len; i++) {
        uint16_t i0 = ch->indices[start + i];
        uint16_t i1 = ch->indices[start + i + 1];
        uint16_t i2 = ch->indices[start + i + 2];
        if (i0 == i1 || i1 == i2 || i0 == i2) continue;    /* restart */
        if (i0 >= ch->vertex_count || i1 >= ch->vertex_count ||
            i2 >= ch->vertex_count) continue;
        const TrackVertex *v0 = &ch->vertices[i0];
        const TrackVertex *v1 = &ch->vertices[i1];
        const TrackVertex *v2 = &ch->vertices[i2];
        const float a[3] = {v0->x, v0->y, v0->z};
        const float b[3] = {v1->x, v1->y, v1->z};
        const float c[3] = {v2->x, v2->y, v2->z};
        if (i & 1) fn(ctx, a, c, b);
        else       fn(ctx, a, b, c);
    }
}

static void tri_normal(const float *a, const float *b, const float *c, float *n)
{
    const float e0[3] = {b[0] - a[0], b[1] - a[1], b[2] - a[2]};
    const float e1[3] = {c[0] - a[0], c[1] - a[1], c[2] - a[2]};
    n[0] = e0[1] * e1[2] - e0[2] * e1[1];
    n[1] = e0[2] * e1[0] - e0[0] * e1[2];
    n[2] = e0[0] * e1[1] - e0[1] * e1[0];
    float len = sqrtf(n[0] * n[0] + n[1] * n[1] + n[2] * n[2]);
    if (len > 1e-12f) { n[0] /= len; n[1] /= len; n[2] /= len; }
    else              { n[0] = 0; n[1] = 1; n[2] = 0; }
}

/* Closest point on triangle abc to p (Ericson, Real-Time Collision
 * Detection §5.1.5). */
static void closest_on_tri(const float *p, const float *a, const float *b,
                           const float *c, float *out)
{
    float ab[3], ac[3], ap[3];
    for (int i = 0; i < 3; i++) {
        ab[i] = b[i] - a[i];
        ac[i] = c[i] - a[i];
        ap[i] = p[i] - a[i];
    }
    float d1 = ab[0]*ap[0] + ab[1]*ap[1] + ab[2]*ap[2];
    float d2 = ac[0]*ap[0] + ac[1]*ap[1] + ac[2]*ap[2];
    if (d1 <= 0 && d2 <= 0) { memcpy(out, a, 12); return; }

    float bp[3];
    for (int i = 0; i < 3; i++) bp[i] = p[i] - b[i];
    float d3 = ab[0]*bp[0] + ab[1]*bp[1] + ab[2]*bp[2];
    float d4 = ac[0]*bp[0] + ac[1]*bp[1] + ac[2]*bp[2];
    if (d3 >= 0 && d4 <= d3) { memcpy(out, b, 12); return; }

    float vc = d1 * d4 - d3 * d2;
    if (vc <= 0 && d1 >= 0 && d3 <= 0) {
        float v = d1 / (d1 - d3);
        for (int i = 0; i < 3; i++) out[i] = a[i] + v * ab[i];
        return;
    }

    float cp[3];
    for (int i = 0; i < 3; i++) cp[i] = p[i] - c[i];
    float d5 = ab[0]*cp[0] + ab[1]*cp[1] + ab[2]*cp[2];
    float d6 = ac[0]*cp[0] + ac[1]*cp[1] + ac[2]*cp[2];
    if (d6 >= 0 && d5 <= d6) { memcpy(out, c, 12); return; }

    float vb = d5 * d2 - d1 * d6;
    if (vb <= 0 && d2 >= 0 && d6 <= 0) {
        float w = d2 / (d2 - d6);
        for (int i = 0; i < 3; i++) out[i] = a[i] + w * ac[i];
        return;
    }

    float va = d3 * d6 - d5 * d4;
    if (va <= 0 && (d4 - d3) >= 0 && (d5 - d6) >= 0) {
        float w = (d4 - d3) / ((d4 - d3) + (d5 - d6));
        for (int i = 0; i < 3; i++) out[i] = b[i] + w * (c[i] - b[i]);
        return;
    }

    float denom = 1.0f / (va + vb + vc);
    float v = vb * denom, w = vc * denom;
    for (int i = 0; i < 3; i++) out[i] = a[i] + ab[i] * v + ac[i] * w;
}

/* ── Wall query ──────────────────────────────────────────────────── */

typedef struct {
    float prev[3];      /* where the car was before this substep */
    float p[3];         /* where it wants to be */
    float radius;
    float step_top;     /* walls topping out below this are mountable */
    float push[3];      /* accumulated separation */
    float normal[3];    /* deepest contact's normal */
    float deepest;
    int   hits;
    float tri[9];       /* deepest contact's triangle, for B3_COLLIDE_DUMP */
    float tri_n[3];
} WallCtx;

static void wall_tri(void *vctx, const float *a, const float *b, const float *c)
{
    WallCtx *w = (WallCtx *)vctx;
    float n[3];
    tri_normal(a, b, c, n);
    if (fabsf(n[1]) >= GROUND_NY) return;    /* drivable, not a wall */

    /* A kerb or pavement riser the car can mount is not a wall. Test the
     * top of the face, not its height: a tall barrier standing on a ledge
     * must still block. */
    float top = a[1];
    if (b[1] > top) top = b[1];
    if (c[1] > top) top = c[1];
    if (top <= w->step_top) return;

    /* Contact is decided against the finite triangle, so a car passing
     * beside the face is not caught by its infinite plane. */
    float q[3];
    closest_on_tri(w->p, a, b, c, q);
    float d[3] = {w->p[0] - q[0], w->p[1] - q[1], w->p[2] - q[2]};
    if (d[0]*d[0] + d[1]*d[1] + d[2]*d[2] >= w->radius * w->radius) return;

    /* Separate to the side the car approached from, not along p - q. The
     * winding of this geometry is not consistent, so the face normal does
     * not reliably point outward, and a car that reached the plane would
     * be pushed straight through it. The previous position does say which
     * side is outside. */
    float dp = n[0] * (w->prev[0] - a[0]) + n[1] * (w->prev[1] - a[1])
             + n[2] * (w->prev[2] - a[2]);
    float dc = n[0] * (w->p[0]    - a[0]) + n[1] * (w->p[1]    - a[1])
             + n[2] * (w->p[2]    - a[2]);
    float side = (dp >= 0.0f) ? 1.0f : -1.0f;

    float depth = w->radius - dc * side;
    if (depth <= 0.0f) return;               /* already clear of the face */

    float dir[3] = {n[0] * side, 0.0f, n[2] * side};   /* never lift the car */
    float hl = sqrtf(dir[0]*dir[0] + dir[2]*dir[2]);
    if (hl < 1e-6f) return;
    dir[0] /= hl; dir[2] /= hl;

    for (int i = 0; i < 3; i++) w->push[i] += dir[i] * depth;
    if (depth > w->deepest) {
        w->deepest = depth;
        memcpy(w->normal, dir, sizeof w->normal);
        memcpy(w->tri, a, 12);
        memcpy(w->tri + 3, b, 12);
        memcpy(w->tri + 6, c, 12);
        memcpy(w->tri_n, n, sizeof w->tri_n);
    }
    w->hits++;
}

int track_collision_move(const TrackCollision *tc,
                         const float from[3], const float to[3],
                         float radius, float step_height,
                         float out_pos[3], float out_normal[3])
{
    memcpy(out_pos, to, 3 * sizeof(float));
    if (!tc) return 0;

    /* Substep so a fast car cannot pass through a thin wall between
     * frames: at 75 units/s and 60 Hz a single step is 1.25 units, but a
     * long dt (a stall, or the 0.25 s clamp) would be 19. */
    float delta[3] = {to[0] - from[0], to[1] - from[1], to[2] - from[2]};
    float dist = sqrtf(delta[0]*delta[0] + delta[2]*delta[2]);
    int steps = (int)(dist / (radius * 0.5f)) + 1;
    if (steps > 16) steps = 16;

    float pos[3] = {from[0], from[1], from[2]};
    float step[3] = {delta[0] / (float)steps,
                     delta[1] / (float)steps,
                     delta[2] / (float)steps};
    int any = 0;
    float last_n[3] = {0, 0, 0};

    /* Each substep advances from the *corrected* position. Recomputing it
     * from `from` instead would throw away every correction but the last,
     * which lets the car finish the move inside — or beyond — the wall. */
    for (int s = 0; s < steps; s++) {
        WallCtx w;
        memset(&w, 0, sizeof w);
        memcpy(w.prev, pos, sizeof w.prev);
        for (int i = 0; i < 3; i++) pos[i] += step[i];
        memcpy(w.p, pos, sizeof w.p);
        w.radius = radius;
        w.step_top = (pos[1] < w.prev[1] ? pos[1] : w.prev[1])
                   - radius + step_height;

        int cx = (int)floorf((pos[0] - tc->origin[0]) / CELL_SIZE);
        int cz = (int)floorf((pos[2] - tc->origin[1]) / CELL_SIZE);
        int reach = (int)(radius / CELL_SIZE) + 1;
        int probed = 0;
        for (int z = cz - reach; z <= cz + reach; z++) {
            if (z < 0 || z >= tc->nz) continue;
            for (int x = cx - reach; x <= cx + reach; x++) {
                if (x < 0 || x >= tc->nx) continue;
                int ci = cell_index(tc, x, z);
                for (int r = tc->cell_start[ci]; r < tc->cell_start[ci + 1]; r++) {
                    const ObjRef *ref = &tc->refs[r];
                    const float *bb = obj_bounds(tc->track, ref->chunk, ref->object);
                    if (!bb) continue;
                    if (pos[0] + radius < bb[0] || pos[0] - radius > bb[3] ||
                        pos[2] + radius < bb[2] || pos[2] - radius > bb[5] ||
                        pos[1] + radius < bb[1] || pos[1] - radius > bb[4])
                        continue;
                    for_each_triangle(&tc->track->chunks[ref->chunk],
                                      ref->object, wall_tri, &w);
                    probed++;
                }
            }
        }
        ((TrackCollision *)tc)->last_probed = probed;

        if (w.hits) {
            if (getenv("B3_COLLIDE_DUMP")) {
                const float *t = w.tri;
                float e0 = sqrtf((t[3]-t[0])*(t[3]-t[0]) + (t[4]-t[1])*(t[4]-t[1]) +
                                 (t[5]-t[2])*(t[5]-t[2]));
                float e1 = sqrtf((t[6]-t[0])*(t[6]-t[0]) + (t[7]-t[1])*(t[7]-t[1]) +
                                 (t[8]-t[2])*(t[8]-t[2]));
                fprintf(stderr, "[COLLIDE-TRI] depth=%.2f n=(%.2f,%.2f,%.2f) "
                                "edges=%.2f,%.2f y=[%.1f..%.1f] at (%.0f,%.0f)\n",
                        w.deepest, w.tri_n[0], w.tri_n[1], w.tri_n[2], e0, e1,
                        fminf(t[1], fminf(t[4], t[7])),
                        fmaxf(t[1], fmaxf(t[4], t[7])), t[0], t[2]);
            }
            /* Averaging the pushes keeps a corner (two walls at once) from
             * launching the car twice as far as either wall requires. */
            for (int i = 0; i < 3; i++) pos[i] += w.push[i] / (float)w.hits;
            memcpy(last_n, w.normal, sizeof last_n);
            any = 1;
        }
    }

    memcpy(out_pos, pos, 3 * sizeof(float));
    if (out_normal) memcpy(out_normal, last_n, 3 * sizeof(float));
    return any;
}

/* ── Ground query ────────────────────────────────────────────────── */

typedef struct {
    float x, z;
    float lo, hi;      /* accepted height window */
    float best;
    int   found;
} GroundCtx;

static void ground_tri(void *vctx, const float *a, const float *b, const float *c)
{
    GroundCtx *g = (GroundCtx *)vctx;
    float n[3];
    tri_normal(a, b, c, n);
    if (fabsf(n[1]) < GROUND_NY) return;     /* wall, not drivable */

    /* Barycentric test in XZ. */
    float d = (b[2] - c[2]) * (a[0] - c[0]) + (c[0] - b[0]) * (a[2] - c[2]);
    if (fabsf(d) < 1e-9f) return;
    float l0 = ((b[2] - c[2]) * (g->x - c[0]) + (c[0] - b[0]) * (g->z - c[2])) / d;
    float l1 = ((c[2] - a[2]) * (g->x - c[0]) + (a[0] - c[0]) * (g->z - c[2])) / d;
    float l2 = 1.0f - l0 - l1;
    if (l0 < 0 || l1 < 0 || l2 < 0) return;

    float y = l0 * a[1] + l1 * b[1] + l2 * c[1];
    if (y < g->lo || y > g->hi) return;
    /* Highest surface in the window: overpasses stack, and the car belongs
     * on the one it is standing on, not the tunnel floor beneath it. */
    if (!g->found || y > g->best) { g->best = y; g->found = 1; }
}

int track_collision_ground(const TrackCollision *tc, float x, float z,
                           float y_hint, float up, float down, float *out_y)
{
    if (!tc) return 0;

    GroundCtx g;
    g.x = x; g.z = z;
    g.lo = y_hint - down;
    g.hi = y_hint + up;
    g.best = 0; g.found = 0;

    int cx = (int)floorf((x - tc->origin[0]) / CELL_SIZE);
    int cz = (int)floorf((z - tc->origin[1]) / CELL_SIZE);
    if (cx < 0 || cz < 0 || cx >= tc->nx || cz >= tc->nz) return 0;

    int ci = cell_index(tc, cx, cz);
    int probed = 0;
    for (int r = tc->cell_start[ci]; r < tc->cell_start[ci + 1]; r++) {
        const ObjRef *ref = &tc->refs[r];
        const float *bb = obj_bounds(tc->track, ref->chunk, ref->object);
        if (!bb) continue;
        if (x < bb[0] || x > bb[3] || z < bb[2] || z > bb[5]) continue;
        if (bb[4] < g.lo || bb[1] > g.hi) continue;
        for_each_triangle(&tc->track->chunks[ref->chunk], ref->object,
                          ground_tri, &g);
        probed++;
    }
    ((TrackCollision *)tc)->last_probed = probed;

    if (g.found && out_y) *out_y = g.best;
    return g.found;
}
