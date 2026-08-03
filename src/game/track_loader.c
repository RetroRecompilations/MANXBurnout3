/**
 * Burnout 3: Takedown - Track Geometry Loader
 *
 * Parses streamed.dat track files. The layout below is not inferred: it is
 * read straight out of the retail XBE, which loads each section as a memory
 * image and relocates a handful of self-relative offsets in place.
 *
 * The relevant routines are:
 *
 *   sub_0019CC60  loads a section and calls the fixup with the mesh header
 *                 address = section + 0x50.
 *   sub_0019B440  the fixup. With ecx = mesh header:
 *                     [ecx+0x04] += ecx          vertex data
 *                     [ecx+0x0C] += ecx          object descriptor array
 *                     count = (int16)[ecx+0x10]
 *                     for i in 0..count:
 *                         d = [ecx+0x0C] + i*0x90
 *                         [d+0x88] += d          index data (self-relative!)
 *   sub_001AD050  the draw loop:
 *                     SetStreamSource(0, &obj[0x40], 0x1C)      <- stride 28
 *                     DrawIndexedVertices([d+0x80], [d+0x84], [d+0x88])
 *
 * So, section-relative:
 *   +0x00  version (1 on disk; the game overwrites it with 2 once fixed up)
 *   +0x08  section size
 *   +0x10  centre float3
 *   +0x54  vertex data offset,      relative to section+0x50
 *   +0x5C  descriptor array offset, relative to section+0x50
 *   +0x60  descriptor count (uint16)
 *   +0x84  per-object texture ids (uint16)
 * and each 0x90-byte descriptor:
 *   +0x00  eight bbox corners (float3 + one padding dword each)
 *   +0x80  primitive type   (6 = triangle strip, 2 = line list)
 *   +0x84  index count
 *   +0x88  index data offset, relative to the descriptor's own address
 *   +0x8C  next-object byte for the material chain, -1 = end
 *
 * The vertex block runs from the vertex offset up to the first index run, and
 * that span is always an exact multiple of 28 (verified over all 36 shipped
 * streamed.dat files: no misalignment, no out-of-range index, no overlapping
 * index run).
 *
 * The padding dword after each bbox corner is uninitialised heap junk, not a
 * field. It reads 0xE32B0CB2 in the high-detail sections and something else in
 * the LOD ones, which is why it once looked like a section-type marker.
 *
 * Sections come in pairs: a high-detail section immediately followed by a
 * low-detail LOD copy of the same area, with a bit-identical centre. Only the
 * high-detail half is loaded. See the note on B3_LOAD_LOD below.
 */

#include "track_loader.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRACK_VERTEX_STRIDE  28
#define MIN_VERTS_PER_SECTION 10

/* Section-relative offsets (see the header comment). */
#define SEC_VERSION      0x00
#define SEC_SIZE         0x08
#define SEC_CENTRE       0x10
#define SEC_TEXIDS       (getenv("B3_TEXID_D4") ? 0xD4 : 0x84)
#define MESH_BASE        0x50
#define MESH_VTX_REL     (MESH_BASE + 0x04)
#define MESH_DESC_REL    (MESH_BASE + 0x0C)
#define MESH_DESC_COUNT  (MESH_BASE + 0x10)

/* Descriptor-relative offsets. */
#define DESC_STRIDE      0x90
#define DESC_PRIM        0x80
#define DESC_ICOUNT      0x84
#define DESC_IOFF        0x88

static uint32_t rd_u32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static int32_t  rd_s32(const uint8_t *p) { int32_t  v; memcpy(&v, p, 4); return v; }
static uint16_t rd_u16(const uint8_t *p) { uint16_t v; memcpy(&v, p, 2); return v; }

int track_load(const char *path, TrackData *track)
{
    memset(track, 0, sizeof(TrackData));

    FILE *f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "[TRACK] Cannot open: %s\n", path);
        return -1;
    }

    fseek(f, 0, SEEK_END);
    long file_size = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (file_size < 0x100) {
        fprintf(stderr, "[TRACK] File too small: %ld bytes\n", file_size);
        fclose(f);
        return -1;
    }

    uint8_t *data = (uint8_t *)malloc((size_t)file_size);
    if (!data) { fclose(f); return -1; }
    fread(data, 1, (size_t)file_size, f);
    fclose(f);

    /* Parse section chain. The largest shipped track (EU/M1) has 260
     * sections, so 256 was not enough headroom even before B3_LOAD_LOD. */
    int max_sections = 1024;
    TrackChunk *chunks = (TrackChunk *)calloc(max_sections, sizeof(TrackChunk));
    int chunk_count = 0;

    float overall_min[3] = {  1e30f,  1e30f,  1e30f };
    float overall_max[3] = { -1e30f, -1e30f, -1e30f };
    int total_verts = 0, total_indices = 0;
    int total_objects = 0, section_count = 0, lod_skipped = 0, rejected = 0;

    const int load_lod = getenv("B3_LOAD_LOD") ? 1 : 0;
    int have_prev_centre = 0;
    float prev_centre[3] = { 0.0f, 0.0f, 0.0f };

    uint32_t sec_off = 0;
    while (sec_off + 0x100 <= (uint32_t)file_size) {
        const uint8_t *sec = data + sec_off;

        /* Read section header */
        uint32_t version  = rd_u32(sec + SEC_VERSION);
        uint32_t sec_size = rd_u32(sec + SEC_SIZE);

        if (version != 1 || sec_size < 0x100 || sec_size > (uint32_t)file_size ||
            sec_off + sec_size > (uint32_t)file_size)
            break;

        section_count++;

        /* Section center position from header (+0x10) */
        float cx, cy, cz;
        memcpy(&cx, sec + SEC_CENTRE + 0, 4);
        memcpy(&cy, sec + SEC_CENTRE + 4, 4);
        memcpy(&cz, sec + SEC_CENTRE + 8, 4);

        /* Sections alternate high-detail / LOD, and the LOD copy repeats its
         * partner's centre bit for bit. Measured over all 36 shipped
         * streamed.dat files: the alternation never breaks, the centres are
         * always exactly equal, and the LOD half carries about 30% of the
         * vertices over the same bounding box. Loading both draws the world
         * twice, so the LOD half is skipped. B3_LOAD_LOD=1 loads it anyway,
         * for inspection. */
        int is_lod = (have_prev_centre &&
                      cx == prev_centre[0] &&
                      cy == prev_centre[1] &&
                      cz == prev_centre[2]);
        have_prev_centre = 1;
        prev_centre[0] = cx;
        prev_centre[1] = cy;
        prev_centre[2] = cz;
        if (is_lod && !load_lod) {
            lod_skipped++;
            sec_off += sec_size;
            continue;
        }

        /* Mesh header at section+0x50; both offsets are relative to it. */
        int32_t  vtx_rel   = rd_s32(sec + MESH_VTX_REL);
        int32_t  desc_rel  = rd_s32(sec + MESH_DESC_REL);
        uint32_t obj_count = rd_u16(sec + MESH_DESC_COUNT);

        int64_t vb64 = (int64_t)MESH_BASE + vtx_rel;
        int64_t db64 = (int64_t)MESH_BASE + desc_rel;

        if (obj_count == 0 ||
            vb64 < MESH_BASE || vb64 + TRACK_VERTEX_STRIDE > (int64_t)sec_size ||
            db64 < MESH_BASE ||
            db64 + (int64_t)obj_count * DESC_STRIDE > (int64_t)sec_size) {
            rejected++;
            sec_off += sec_size;
            continue;
        }

        uint32_t vb_start = (uint32_t)vb64;
        uint32_t db_start = (uint32_t)db64;

        /* Walk the object descriptors. Each one is a single
         * DrawIndexedVertices call, and its index run is located by an offset
         * relative to the descriptor itself. The runs ascend in object order
         * but are not contiguous: consecutive runs are separated by up to one
         * index of alignment padding, so the length has to come from +0x84
         * rather than from the next run's start.
         *
         * The vertex block is everything between the vertex offset and the
         * first index run. That span is an exact multiple of 28 in every
         * section of every shipped track, which is the check below.
         *
         * What this replaces, measured on US/C1_V1: the old cumulative-sum
         * rule (object k starts where object k-1's count ended) ignores that
         * padding, so only 82 of 1744 objects started on the right index —
         * the rest were off by up to 34, mean 10. An odd offset also flips
         * the strip's winding. Separately the old index reader had no end
         * condition at all, so it ran 329168 indices where there are 265733,
         * appending 24% trailing junk to the last object's strip. */
        uint32_t *ob_start = (uint32_t *)malloc((size_t)obj_count * sizeof(uint32_t));
        uint32_t *ob_len   = (uint32_t *)malloc((size_t)obj_count * sizeof(uint32_t));
        uint8_t  *ob_prim  = (uint8_t  *)malloc((size_t)obj_count * sizeof(uint8_t));
        float    *ob_bbox  = (float    *)malloc((size_t)obj_count * 6 * sizeof(float));
        int ok = (ob_start != NULL && ob_len != NULL && ob_prim != NULL &&
                  ob_bbox != NULL);

        int64_t idx_lo = -1, idx_hi = -1;

        for (uint32_t o = 0; ok && o < obj_count; o++) {
            uint32_t d = db_start + o * DESC_STRIDE;
            uint32_t prim   = rd_u32(sec + d + DESC_PRIM);
            uint32_t icount = rd_u32(sec + d + DESC_ICOUNT);
            int32_t  ioff   = rd_s32(sec + d + DESC_IOFF);
            int64_t  start  = (int64_t)d + ioff;

            if (icount == 0 || icount > sec_size / 2 ||
                start < (int64_t)vb_start ||
                start + (int64_t)icount * 2 > (int64_t)sec_size) {
                ok = 0;
                break;
            }
            ob_start[o] = (uint32_t)start;
            ob_len[o]   = icount;
            ob_prim[o]  = (uint8_t)(prim > 0xFF ? 0 : prim);

            /* Eight corners at the descriptor's own address, each a float3
             * followed by a padding dword of uninitialised heap junk. */
            float *bb = &ob_bbox[o * 6];
            bb[0] = bb[1] = bb[2] =  1e30f;
            bb[3] = bb[4] = bb[5] = -1e30f;
            for (int c = 0; c < 8; c++) {
                float p[3];
                memcpy(p, sec + d + c * 16, sizeof p);
                for (int a = 0; a < 3; a++) {
                    if (p[a] < bb[a])     bb[a]     = p[a];
                    if (p[a] > bb[3 + a]) bb[3 + a] = p[a];
                }
            }

            if (idx_lo < 0 || start < idx_lo) idx_lo = start;
            if (start + (int64_t)icount * 2 > idx_hi)
                idx_hi = start + (int64_t)icount * 2;
        }

        int64_t vspan = ok ? (idx_lo - (int64_t)vb_start) : -1;
        if (!ok || vspan <= 0 || (vspan % TRACK_VERTEX_STRIDE) != 0) {
            rejected++;
            free(ob_start); free(ob_len); free(ob_prim); free(ob_bbox);
            sec_off += sec_size;
            continue;
        }

        uint32_t vb_count = (uint32_t)(vspan / TRACK_VERTEX_STRIDE);

        if (vb_count < MIN_VERTS_PER_SECTION || chunk_count >= max_sections) {
            if (vb_count < MIN_VERTS_PER_SECTION) rejected++;
            free(ob_start); free(ob_len); free(ob_prim); free(ob_bbox);
            sec_off += sec_size;
            continue;
        }

        TrackChunk *chunk = &chunks[chunk_count];
        chunk->center[0] = cx;
        chunk->center[1] = cy;
        chunk->center[2] = cz;

        /* Copy vertices */
        chunk->vertex_count = vb_count;
        chunk->vertices = (TrackVertex *)malloc((size_t)vb_count * sizeof(TrackVertex));

        for (uint32_t i = 0; i < vb_count; i++) {
            uint32_t vo = vb_start + i * TRACK_VERTEX_STRIDE;
            TrackVertex *v = &chunk->vertices[i];
            memcpy(&v->x,             sec + vo,      4);
            memcpy(&v->y,             sec + vo + 4,  4);
            memcpy(&v->z,             sec + vo + 8,  4);
            memcpy(&v->packed_normal, sec + vo + 12, 4);
            memcpy(&v->color,         sec + vo + 16, 4);
            memcpy(&v->u,             sec + vo + 20, 4);
            memcpy(&v->v,             sec + vo + 24, 4);

            if (v->x < overall_min[0]) overall_min[0] = v->x;
            if (v->y < overall_min[1]) overall_min[1] = v->y;
            if (v->z < overall_min[2]) overall_min[2] = v->z;
            if (v->x > overall_max[0]) overall_max[0] = v->x;
            if (v->y > overall_max[1]) overall_max[1] = v->y;
            if (v->z > overall_max[2]) overall_max[2] = v->z;
        }

        /* Copy the whole index region in one go and record each object's run
         * relative to its start. The region ends where the last run ends —
         * the old reader had no end at all, because its `idx < vertex_count`
         * test never fails and so ate the rest of the section. */
        uint32_t ib_count = (uint32_t)((idx_hi - idx_lo) / 2);
        chunk->index_count = ib_count;
        chunk->indices = (uint16_t *)malloc((size_t)ib_count * sizeof(uint16_t));
        if (chunk->indices)
            memcpy(chunk->indices, sec + idx_lo, (size_t)ib_count * 2);

        /* Per-object index run, primitive type and texture id.
         *
         * The texture ids are a uint16 array inline in the section header at
         * +0x84, one per object, indexing the static.dat texture list. */
        chunk->strip_breaks = (uint32_t *)malloc((size_t)obj_count * sizeof(uint32_t));
        chunk->strip_lens   = (uint32_t *)malloc((size_t)obj_count * sizeof(uint32_t));
        chunk->strip_prims  = (uint8_t  *)malloc((size_t)obj_count * sizeof(uint8_t));
        chunk->tex_indices  = (uint16_t *)malloc((size_t)obj_count * sizeof(uint16_t));

        if (chunk->strip_breaks && chunk->strip_lens && chunk->strip_prims &&
            chunk->tex_indices && chunk->indices) {
            for (uint32_t oi = 0; oi < obj_count; oi++) {
                chunk->strip_breaks[oi] = (uint32_t)((ob_start[oi] - idx_lo) / 2);
                chunk->strip_lens[oi]   = ob_len[oi];
                chunk->strip_prims[oi]  = ob_prim[oi];
                uint32_t ti_off = SEC_TEXIDS + oi * 2;
                chunk->tex_indices[oi] =
                    (ti_off + 2 <= sec_size) ? rd_u16(sec + ti_off) : 0;
            }
            chunk->strip_break_count = (int)obj_count;
            chunk->tex_index_count   = (int)obj_count;
            chunk->obj_bbox = ob_bbox;
            ob_bbox = NULL;   /* ownership moved to the chunk */
        }

        free(ob_start);
        free(ob_len);
        free(ob_prim);
        free(ob_bbox);

        total_verts += (int)vb_count;
        total_indices += (int)ib_count;
        total_objects += (int)obj_count;
        chunk_count++;

        sec_off += sec_size;
    }

    free(data);

    if (chunk_count == 0) {
        fprintf(stderr, "[TRACK] No geometry sections found in %s\n", path);
        free(chunks);
        return -1;
    }

    track->chunks = chunks;
    track->chunk_count = chunk_count;

    track->center[0] = (overall_min[0] + overall_max[0]) * 0.5f;
    track->center[1] = (overall_min[1] + overall_max[1]) * 0.5f;
    track->center[2] = (overall_min[2] + overall_max[2]) * 0.5f;

    float tdx = overall_max[0] - overall_min[0];
    float tdy = overall_max[1] - overall_min[1];
    float tdz = overall_max[2] - overall_min[2];
    track->radius = sqrtf(tdx * tdx + tdy * tdy + tdz * tdz) * 0.5f;

    /* Spawn position = center of first section */
    track->spawn[0] = chunks[0].center[0];
    track->spawn[1] = chunks[0].center[1];
    track->spawn[2] = chunks[0].center[2];

    /* Build road spine from section centers (de-duplicate paired sections) */
    {
        /* Collect unique centers (sections come in pairs with same center) */
        float (*raw_centers)[3] = (float(*)[3])malloc(chunk_count * sizeof(float[3]));
        int raw_count = 0;
        for (int i = 0; i < chunk_count; i++) {
            float cx = chunks[i].center[0];
            float cy = chunks[i].center[1];
            float cz = chunks[i].center[2];
            /* Skip if same as previous */
            if (raw_count > 0) {
                float dx = cx - raw_centers[raw_count-1][0];
                float dz = cz - raw_centers[raw_count-1][2];
                if (dx*dx + dz*dz < 1.0f) continue;
            }
            raw_centers[raw_count][0] = cx;
            raw_centers[raw_count][1] = cy;
            raw_centers[raw_count][2] = cz;
            raw_count++;
        }

        track->spine = (TrackWaypoint *)calloc(raw_count, sizeof(TrackWaypoint));
        track->spine_count = raw_count;

        float cum = 0.0f;
        for (int i = 0; i < raw_count; i++) {
            track->spine[i].x = raw_centers[i][0];
            track->spine[i].y = raw_centers[i][1];
            track->spine[i].z = raw_centers[i][2];
            track->spine[i].cumulative_dist = cum;

            /* Direction to next waypoint */
            int next = (i + 1) % raw_count;
            float dx = raw_centers[next][0] - raw_centers[i][0];
            float dz = raw_centers[next][2] - raw_centers[i][2];
            float len = sqrtf(dx*dx + dz*dz);
            if (len > 0.001f) {
                track->spine[i].dx = dx / len;
                track->spine[i].dz = dz / len;
            } else {
                track->spine[i].dx = 0.0f;
                track->spine[i].dz = 1.0f;
            }
            if (i < raw_count - 1) cum += len;
        }
        track->spine_length = cum;

        free(raw_centers);
        fprintf(stderr, "[TRACK] Road spine: %d waypoints, %.0f units long\n",
                raw_count, cum);
    }

    fprintf(stderr, "[TRACK] Loaded %s: %d/%d sections, %d objects, %d verts, %d indices"
                    " (%d LOD sections skipped, %d rejected)\n",
            path, chunk_count, section_count, total_objects, total_verts, total_indices,
            lod_skipped, rejected);
    fprintf(stderr, "[TRACK] Center=(%.0f, %.0f, %.0f) Radius=%.0f Spawn=(%.0f, %.0f, %.0f)\n",
            track->center[0], track->center[1], track->center[2], track->radius,
            track->spawn[0], track->spawn[1], track->spawn[2]);

    return 0;
}

void track_spine_to_world(const TrackData *track, float dist, float lateral,
                          float out_pos[3], float *out_hdg)
{
    if (!track->spine || track->spine_count < 2) {
        out_pos[0] = dist; out_pos[1] = 0; out_pos[2] = lateral;
        if (out_hdg) *out_hdg = 0;
        return;
    }

    /* Wrap distance to track length */
    float total = track->spine_length;
    if (total < 1.0f) total = 1.0f;
    dist = fmodf(dist, total);
    if (dist < 0.0f) dist += total;

    /* Find which segment we're on */
    int seg = 0;
    for (int i = 0; i < track->spine_count - 1; i++) {
        if (dist >= track->spine[i].cumulative_dist &&
            dist < track->spine[i+1].cumulative_dist) {
            seg = i;
            break;
        }
    }
    if (seg >= track->spine_count - 1) seg = track->spine_count - 2;

    /* Interpolate along segment */
    float seg_start = track->spine[seg].cumulative_dist;
    float seg_end   = track->spine[seg+1].cumulative_dist;
    float seg_len   = seg_end - seg_start;
    float t = (seg_len > 0.001f) ? (dist - seg_start) / seg_len : 0.0f;

    float wx = track->spine[seg].x + t * (track->spine[seg+1].x - track->spine[seg].x);
    float wy = track->spine[seg].y + t * (track->spine[seg+1].y - track->spine[seg].y);
    float wz = track->spine[seg].z + t * (track->spine[seg+1].z - track->spine[seg].z);

    /* Direction along road at this point */
    float dir_x = track->spine[seg].dx;
    float dir_z = track->spine[seg].dz;

    /* Perpendicular (right) = rotate direction 90 degrees CW */
    float perp_x =  dir_z;
    float perp_z = -dir_x;

    /* Apply lateral offset */
    out_pos[0] = wx + lateral * perp_x;
    out_pos[1] = wy;
    out_pos[2] = wz + lateral * perp_z;

    /* Road heading (angle from +Z axis, CW positive) */
    if (out_hdg) {
        *out_hdg = atan2f(dir_x, dir_z);
    }
}

void track_free(TrackData *track)
{
    if (!track) return;
    for (int i = 0; i < track->chunk_count; i++) {
        free(track->chunks[i].vertices);
        free(track->chunks[i].indices);
        free(track->chunks[i].strip_breaks);
        free(track->chunks[i].strip_lens);
        free(track->chunks[i].strip_prims);
        free(track->chunks[i].tex_indices);
        free(track->chunks[i].obj_bbox);
    }
    free(track->chunks);
    free(track->spine);
    memset(track, 0, sizeof(TrackData));
}
