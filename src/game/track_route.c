/**
 * Burnout 3: Takedown — race route from Gamedata.bgd (see track_route.h)
 */

#include "track_route.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Ribbon shape. These are measured, not tuned: rung widths across all 36
 * tracks have a median of 7.1-8.5, and widening the band past 30 starts
 * pairing unrelated points in dense areas. */
#define RUNG_MIN_WIDTH   6.0f
#define RUNG_MAX_WIDTH  30.0f
#define RUNG_MIN_ADV     2.0f
#define RUNG_MAX_ADV    40.0f
#define RUNG_MIN_COUNT     6

/* Chaining. A junction hands off between ribbons whose ends nearly touch;
 * 25 units is a little over two rung widths. */
#define JOIN_DIST       25.0f
#define CLOSE_DIST      60.0f   /* route counts as a loop within this */

typedef struct {
    int   first;        /* index of the first centre point */
    int   count;
    int   used;
} Ribbon;

typedef struct { float x, y, z, hw; } Centre;

static float dist_xz(float ax, float az, float bx, float bz) {
    const float dx = ax - bx, dz = az - bz;
    return sqrtf(dx * dx + dz * dz);
}

/* A record is a candidate road vertex when its pad word is zero and the
 * position is finite and inside any plausible world. */
static int rec_ok(const float *r) {
    if (r[3] != 0.0f) return 0;
    for (int i = 0; i < 3; i++)
        if (!isfinite(r[i])) return 0;
    if (r[0] < -9000.0f || r[0] > 9000.0f) return 0;
    if (r[1] <  -600.0f || r[1] > 1200.0f) return 0;
    if (r[2] < -9000.0f || r[2] > 9000.0f) return 0;
    return (fabsf(r[0]) + fabsf(r[1]) + fabsf(r[2])) > 0.0f;
}

static float rung_width(const float *p, int i) {
    return dist_xz(p[i * 4], p[i * 4 + 2], p[(i + 1) * 4], p[(i + 1) * 4 + 2]);
}

/* ── Lap search ────────────────────────────────────────────────── */

#define MAX_PATH      64        /* ribbons in one lap */
#define MAX_VISITS 400000       /* search budget */
#define MIN_LAP     1500.0f     /* shorter "cycles" are lane-change loops */
#define MIN_TURN      -0.2f     /* below this a junction move is a reversal */
#define START_CANDIDATES  12    /* ribbons near the spawn to try */

typedef struct { int ribbon; int entry_end; } PathStep;

typedef struct {
    const Centre  *centres;
    const Ribbon  *ribbons;
    int            nribbon;
    const int     *junc;        /* junction id per endpoint (2 per ribbon) */
    unsigned char *used;
    PathStep      *path;
    int            depth;
    PathStep      *best;
    int            best_depth;
    float          best_len;
    int            start_junc;
    long           visits;
} RouteSearch;

static float ribbon_length(const RouteSearch *S, int ri) {
    const Ribbon *rb = &S->ribbons[ri];
    float L = 0.0f;
    for (int k = 1; k < rb->count; k++)
        L += dist_xz(S->centres[rb->first + k].x, S->centres[rb->first + k].z,
                     S->centres[rb->first + k - 1].x,
                     S->centres[rb->first + k - 1].z);
    return L;
}

/* Unit direction leaving ribbon `ri` when it was entered at `end`. */
static void ribbon_exit_dir(const RouteSearch *S, int ri, int end,
                            float *ox, float *oz) {
    const Ribbon *rb = &S->ribbons[ri];
    const Centre *a, *b;
    if (end == 0) { a = &S->centres[rb->first + rb->count - 2];
                    b = &S->centres[rb->first + rb->count - 1]; }
    else          { a = &S->centres[rb->first + 1];
                    b = &S->centres[rb->first]; }
    float dx = b->x - a->x, dz = b->z - a->z;
    const float L = sqrtf(dx * dx + dz * dz);
    if (L > 1e-6f) { dx /= L; dz /= L; }
    *ox = dx; *oz = dz;
}

/* Unit direction entering ribbon `ri` at `end`. */
static void ribbon_entry_dir(const RouteSearch *S, int ri, int end,
                             float *ox, float *oz) {
    const Ribbon *rb = &S->ribbons[ri];
    const Centre *a, *b;
    if (end == 0) { a = &S->centres[rb->first];
                    b = &S->centres[rb->first + 1]; }
    else          { a = &S->centres[rb->first + rb->count - 1];
                    b = &S->centres[rb->first + rb->count - 2]; }
    float dx = b->x - a->x, dz = b->z - a->z;
    const float L = sqrtf(dx * dx + dz * dz);
    if (L > 1e-6f) { dx /= L; dz /= L; }
    *ox = dx; *oz = dz;
}

/* Depth-first search for the longest cycle back to S->start_junc. */
static void route_search(RouteSearch *S, int at_junc, int came_ribbon,
                         int came_end, float length)
{
    if (S->visits++ > MAX_VISITS) return;

    float hx, hz;
    ribbon_exit_dir(S, came_ribbon, came_end, &hx, &hz);

    for (int ri = 0; ri < S->nribbon; ri++) {
        if (S->used[ri]) continue;
        for (int end = 0; end < 2; end++) {
            if (S->junc[ri * 2 + end] != at_junc) continue;
            float dx, dz;
            ribbon_entry_dir(S, ri, end, &dx, &dz);
            if (hx * dx + hz * dz < MIN_TURN) continue;   /* reversal */

            const float L = length + ribbon_length(S, ri);
            const int other = S->junc[ri * 2 + (1 - end)];

            if (other == S->start_junc && L > MIN_LAP) {
                if (L > S->best_len && S->depth + 1 <= MAX_PATH) {
                    S->best_len = L;
                    S->path[S->depth].ribbon = ri;
                    S->path[S->depth].entry_end = end;
                    S->best_depth = S->depth + 1;
                    memcpy(S->best, S->path,
                           (size_t)S->best_depth * sizeof(PathStep));
                }
                continue;
            }
            if (S->depth + 1 >= MAX_PATH) continue;

            S->used[ri] = 1;
            S->path[S->depth].ribbon = ri;
            S->path[S->depth].entry_end = end;
            S->depth++;
            route_search(S, other, ri, end, L);
            S->depth--;
            S->used[ri] = 0;
        }
    }
}

int track_route_load(const char *path, float spawn_x, float spawn_z,
                     const float centre[3], float radius,
                     TrackRoute *out)
{
    memset(out, 0, sizeof(*out));
    if (!centre || radius <= 0.0f) return -1;
    /* Generous: the ribbon network may reach a little past the geometry's
     * bounding sphere, but nowhere near multiples of it. */
    const float reach = radius * 1.25f;

    FILE *f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "[ROUTE] Cannot open %s\n", path);
        return -1;
    }
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (size < 0x1000) { fclose(f); return -1; }

    float *raw = (float *)malloc((size_t)size);
    if (!raw) { fclose(f); return -1; }
    if (fread(raw, 1, (size_t)size, f) != (size_t)size) {
        free(raw); fclose(f); return -1;
    }
    fclose(f);

    const int nrec = (int)(size / 16);

    /* ── Pass 1: find ribbons, collecting their centre points ── */
    Centre *centres = (Centre *)malloc((size_t)nrec * sizeof(Centre));
    Ribbon *ribbons = (Ribbon *)malloc((size_t)(nrec / 8 + 1) * sizeof(Ribbon));
    if (!centres || !ribbons) {
        free(centres); free(ribbons); free(raw); return -1;
    }
    int ncentre = 0, nribbon = 0;

    for (int i = 0; i + 3 < nrec; ) {
        if (!rec_ok(&raw[i * 4]) || !rec_ok(&raw[(i + 1) * 4])) { i++; continue; }
        float w = rung_width(raw, i);
        if (w < RUNG_MIN_WIDTH || w > RUNG_MAX_WIDTH) { i++; continue; }

        const int first = ncentre;
        int j = i, rungs = 0;
        while (j + 3 < nrec) {
            if (!rec_ok(&raw[(j + 2) * 4]) || !rec_ok(&raw[(j + 3) * 4])) break;
            const float w1 = rung_width(raw, j);
            const float w2 = rung_width(raw, j + 2);
            const float adv = dist_xz(raw[j * 4], raw[j * 4 + 2],
                                      raw[(j + 2) * 4], raw[(j + 2) * 4 + 2]);
            if (w1 < RUNG_MIN_WIDTH || w1 > RUNG_MAX_WIDTH ||
                w2 < RUNG_MIN_WIDTH || w2 > RUNG_MAX_WIDTH ||
                adv < RUNG_MIN_ADV  || adv > RUNG_MAX_ADV) break;

            Centre *c = &centres[ncentre++];
            c->x  = (raw[j * 4]     + raw[(j + 1) * 4])     * 0.5f;
            c->y  = (raw[j * 4 + 1] + raw[(j + 1) * 4 + 1]) * 0.5f;
            c->z  = (raw[j * 4 + 2] + raw[(j + 1) * 4 + 2]) * 0.5f;
            c->hw = w1 * 0.5f;
            rungs++;
            j += 2;
        }
        /* Reject a run that strays outside the track. Checking every
         * point, not just the ends, is what kills the long diagonal — it
         * starts inside the city and walks out. */
        int inside = (rungs >= RUNG_MIN_COUNT);
        for (int k = first; inside && k < ncentre; k++) {
            const float dx = centres[k].x - centre[0];
            const float dz = centres[k].z - centre[2];
            if (dx * dx + dz * dz > reach * reach) inside = 0;
        }
        if (inside) {
            ribbons[nribbon].first = first;
            ribbons[nribbon].count = rungs;
            ribbons[nribbon].used  = 0;
            nribbon++;
            i = j + 2;
        } else {
            ncentre = first;      /* discard the short or out-of-bounds run */
            i = (rungs ? j + 2 : i + 1);
        }
    }
    free(raw);

    out->ribbon_count = nribbon;
    if (nribbon == 0) {
        fprintf(stderr, "[ROUTE] No road ribbons in %s\n", path);
        free(centres); free(ribbons);
        return -1;
    }

    /* ── Pass 2: find a lap ──
     * Ribbons are lanes, not roads: three parallel ribbons can share a
     * junction, all pointing the same way. Cluster their endpoints into
     * junctions, then search the resulting graph for the longest cycle
     * through the ribbon nearest the spawn.
     *
     * A greedy "always take the straightest continuation" walk is not
     * enough — it cannot back out of a dead end, and on US/C1_V1 the spawn
     * sits on a road that dead-ends 1200 units east, so the greedy version
     * covered 7 of 203 ribbons and never closed. The search finds a
     * 9485-unit closed lap on the same data. */
    /* ── Pass 1b: split ribbons at T-junctions ──
     * Most junctions are not end-to-end. Measured on three tracks, 292 of
     * 358 endpoints (AS/C1_V1), 760 of 904 (EU/M1_V1) and 354 of 406
     * (US/C1_V1) land against the *interior* of another ribbon rather than
     * its end — a side road meeting a road that carries straight on. With
     * endpoint-only clustering those connections do not exist, which is
     * why a lap search found one on 5 tracks of 36 and immediately ran out
     * of candidates on the rest. Splitting a ribbon where another's end
     * touches it turns each T into two real endpoints. */
    {
        const int in_ribbons = nribbon;
        Ribbon *split = (Ribbon *)malloc((size_t)ncentre * sizeof(Ribbon));
        if (!split) { free(centres); free(ribbons); return -1; }
        int nsplit = 0;

        for (int r = 0; r < in_ribbons; r++) {
            const int first = ribbons[r].first, count = ribbons[r].count;
            int prev = 0;
            for (int k = 2; k < count - 2; k++) {
                const Centre *c = &centres[first + k];
                int touched = 0;
                for (int o = 0; o < in_ribbons && !touched; o++) {
                    if (o == r) continue;
                    for (int e = 0; e < 2; e++) {
                        const Centre *ep = &centres[ribbons[o].first +
                                           (e ? ribbons[o].count - 1 : 0)];
                        if (dist_xz(c->x, c->z, ep->x, ep->z) <= JOIN_DIST) {
                            touched = 1; break;
                        }
                    }
                }
                /* Keep pieces long enough to have a direction. */
                if (touched && k - prev >= 3 && count - 1 - k >= 3) {
                    split[nsplit].first = first + prev;
                    split[nsplit].count = k - prev + 1;   /* share the node */
                    split[nsplit].used  = 0;
                    nsplit++;
                    prev = k;
                }
            }
            split[nsplit].first = first + prev;
            split[nsplit].count = count - prev;
            split[nsplit].used  = 0;
            nsplit++;
        }
        free(ribbons);
        ribbons = split;
        nribbon = nsplit;
        out->ribbon_count = nribbon;
    }

    /* Candidate start ribbons, nearest the spawn first. The single nearest
     * is not enough: on most tracks it is a short isolated fragment — a
     * slip road, or a lane the detector cut off — whose junctions have no
     * other ribbon, so the search dies immediately. Trying a handful finds
     * the one that is actually part of the circuit. */
    float *spawn_d = (float *)malloc((size_t)nribbon * sizeof(float));
    int   *order   = (int *)malloc((size_t)nribbon * sizeof(int));
    if (!spawn_d || !order) {
        free(spawn_d); free(order); free(centres); free(ribbons); return -1;
    }
    for (int r = 0; r < nribbon; r++) {
        float dmin = 1e30f;
        for (int k = 0; k < ribbons[r].count; k++) {
            const Centre *c = &centres[ribbons[r].first + k];
            const float dd = dist_xz(c->x, c->z, spawn_x, spawn_z);
            if (dd < dmin) dmin = dd;
        }
        spawn_d[r] = dmin;
        order[r] = r;
    }
    for (int a = 1; a < nribbon; a++) {          /* insertion sort by distance */
        const int key = order[a];
        int b = a - 1;
        while (b >= 0 && spawn_d[order[b]] > spawn_d[key]) { order[b + 1] = order[b]; b--; }
        order[b + 1] = key;
    }
    const int start_rib = order[0];
    const float best = spawn_d[start_rib];

    int *parent = (int *)malloc((size_t)nribbon * 2 * sizeof(int));
    if (!parent) { free(centres); free(ribbons); return -1; }
    for (int k = 0; k < nribbon * 2; k++) parent[k] = k;

    /* endpoint k: ribbon k/2, head when even, tail when odd */
    #define EP_X(k) (centres[ribbons[(k)/2].first + (((k)&1) ? ribbons[(k)/2].count-1 : 0)].x)
    #define EP_Z(k) (centres[ribbons[(k)/2].first + (((k)&1) ? ribbons[(k)/2].count-1 : 0)].z)

    for (int a = 0; a < nribbon * 2; a++) {
        int ra = a; while (parent[ra] != ra) ra = parent[ra] = parent[parent[ra]];
        for (int b = a + 1; b < nribbon * 2; b++) {
            if (dist_xz(EP_X(a), EP_Z(a), EP_X(b), EP_Z(b)) > JOIN_DIST) continue;
            int rb = b; while (parent[rb] != rb) rb = parent[rb] = parent[parent[rb]];
            ra = a;     while (parent[ra] != ra) ra = parent[ra] = parent[parent[ra]];
            if (ra != rb) parent[ra] = rb;
        }
    }
    int *junc = (int *)malloc((size_t)nribbon * 2 * sizeof(int));
    if (!junc) { free(parent); free(centres); free(ribbons); return -1; }
    for (int k = 0; k < nribbon * 2; k++) {
        int r = k; while (parent[r] != r) r = parent[r];
        junc[k] = r;
    }
    free(parent);

    RouteSearch S;
    S.centres = centres; S.ribbons = ribbons; S.nribbon = nribbon;
    S.junc = junc;
    S.used = (unsigned char *)calloc((size_t)nribbon, 1);
    S.path = (PathStep *)malloc((size_t)MAX_PATH * sizeof(PathStep));
    S.best = (PathStep *)malloc((size_t)MAX_PATH * sizeof(PathStep));
    if (!S.used || !S.path || !S.best) {
        free(S.used); free(S.path); free(S.best);
        free(junc); free(centres); free(ribbons); return -1;
    }
    S.depth = 0; S.best_len = 0.0f; S.best_depth = 0; S.visits = 0;

    /* Each candidate, both directions — only one direction leads around
     * the circuit. Keep the longest lap found across all of them. */
    int lap_from = -1;
    for (int cand = 0; cand < START_CANDIDATES && cand < nribbon; cand++) {
        const int rib = order[cand];
        const float before = S.best_len;
        for (int se = 0; se < 2; se++) {
            S.start_junc = junc[rib * 2 + se];
            memset(S.used, 0, (size_t)nribbon);
            S.used[rib] = 1;
            S.path[0].ribbon = rib;
            S.path[0].entry_end = se;
            S.depth = 1;
            S.visits = 0;              /* budget is per candidate */
            route_search(&S, junc[rib * 2 + (1 - se)], rib, se,
                         ribbon_length(&S, rib));
        }
        if (S.best_len > before) lap_from = rib;
        /* A lap through a ribbon this close to the spawn is the one the
         * player is standing on; no need to look further out. */
        if (S.best_depth > 0 && spawn_d[rib] < 40.0f) break;
    }
    free(spawn_d);
    free(order);

    RouteNode *nodes = (RouteNode *)malloc((size_t)ncentre * sizeof(RouteNode));
    if (!nodes) {
        free(S.used); free(S.path); free(S.best);
        free(junc); free(centres); free(ribbons); return -1;
    }
    int nn = 0, used_count = 0;

    if (S.best_depth > 0) {
        for (int p = 0; p < S.best_depth; p++) {
            const int ri = S.best[p].ribbon, end = S.best[p].entry_end;
            const Ribbon *rb = &ribbons[ri];
            used_count++;
            if (end == 0)
                for (int k = 0; k < rb->count; k++) {
                    const Centre *c = &centres[rb->first + k];
                    nodes[nn].x = c->x; nodes[nn].y = c->y; nodes[nn].z = c->z;
                    nodes[nn].half_width = c->hw; nn++;
                }
            else
                for (int k = rb->count - 1; k >= 0; k--) {
                    const Centre *c = &centres[rb->first + k];
                    nodes[nn].x = c->x; nodes[nn].y = c->y; nodes[nn].z = c->z;
                    nodes[nn].half_width = c->hw; nn++;
                }
        }
    } else {
        /* No cycle: fall back to the single ribbon at the spawn so the
         * caller still gets a usable stretch of road, and report it. */
        const Ribbon *rb = &ribbons[start_rib];
        for (int k = 0; k < rb->count; k++) {
            const Centre *c = &centres[rb->first + k];
            nodes[nn].x = c->x; nodes[nn].y = c->y; nodes[nn].z = c->z;
            nodes[nn].half_width = c->hw; nn++;
        }
        used_count = 1;
    }

    free(S.used); free(S.path); free(S.best);
    free(junc);
    free(centres);
    free(ribbons);

    if (nn < 2) { free(nodes); return -1; }

    nodes[0].dist = 0.0f;
    for (int k = 1; k < nn; k++)
        nodes[k].dist = nodes[k - 1].dist +
            dist_xz(nodes[k].x, nodes[k].z, nodes[k - 1].x, nodes[k - 1].z);

    out->nodes  = nodes;
    out->count  = nn;
    out->length = nodes[nn - 1].dist;
    out->closed = dist_xz(nodes[0].x, nodes[0].z,
                          nodes[nn - 1].x, nodes[nn - 1].z) < CLOSE_DIST;
    out->ribbons_used = used_count;

    fprintf(stderr, "[ROUTE] %d nodes, %.0f units, %s (%d of %d ribbons; "
                    "lap from ribbon %d, nearest is %.0f from the spawn)\n",
            out->count, out->length, out->closed ? "closed lap" : "open route",
            out->ribbons_used, out->ribbon_count, lap_from, best);
    return 0;
}

void track_route_free(TrackRoute *r)
{
    if (!r) return;
    free(r->nodes);
    memset(r, 0, sizeof(*r));
}

int track_route_project(const TrackRoute *r, float x, float z,
                        float *out_dist, float *out_lateral)
{
    if (!r || r->count < 2) return 0;

    float best_d2 = 1e30f, best_dist = 0.0f, best_lat = 0.0f;
    for (int k = 0; k + 1 < r->count; k++) {
        const RouteNode *a = &r->nodes[k], *b = &r->nodes[k + 1];
        const float sx = b->x - a->x, sz = b->z - a->z;
        const float seg2 = sx * sx + sz * sz;
        if (seg2 < 1e-9f) continue;
        float t = ((x - a->x) * sx + (z - a->z) * sz) / seg2;
        if (t < 0.0f) t = 0.0f;
        if (t > 1.0f) t = 1.0f;
        const float px = a->x + sx * t, pz = a->z + sz * t;
        const float dx = x - px, dz = z - pz;
        const float d2 = dx * dx + dz * dz;
        if (d2 < best_d2) {
            best_d2 = d2;
            best_dist = a->dist + sqrtf(seg2) * t;
            /* Cross product sign: positive when the point is to the right
             * of the direction of travel. */
            const float seg_len = sqrtf(seg2);
            best_lat = (sx * dz - sz * dx) / seg_len;
        }
    }
    if (out_dist)    *out_dist = best_dist;
    if (out_lateral) *out_lateral = best_lat;
    return 1;
}

int track_route_sample(const TrackRoute *r, float dist,
                       float out_pos[3], float *out_heading)
{
    if (!r || r->count < 2) return 0;

    if (r->closed && r->length > 0.0f) {
        dist = fmodf(dist, r->length);
        if (dist < 0.0f) dist += r->length;
    }
    if (dist <= 0.0f) dist = 0.0f;
    if (dist >= r->length) dist = r->length;

    /* Binary search the node whose span contains dist. */
    int lo = 0, hi = r->count - 1;
    while (hi - lo > 1) {
        const int mid = (lo + hi) / 2;
        if (r->nodes[mid].dist <= dist) lo = mid; else hi = mid;
    }
    const RouteNode *a = &r->nodes[lo], *b = &r->nodes[hi];
    const float span = b->dist - a->dist;
    const float t = span > 1e-6f ? (dist - a->dist) / span : 0.0f;

    if (out_pos) {
        out_pos[0] = a->x + (b->x - a->x) * t;
        out_pos[1] = a->y + (b->y - a->y) * t;
        out_pos[2] = a->z + (b->z - a->z) * t;
    }
    if (out_heading) *out_heading = atan2f(b->x - a->x, b->z - a->z);
    return 1;
}
