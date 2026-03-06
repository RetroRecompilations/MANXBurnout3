/**
 * Burnout 3: Takedown - Track Geometry Loader
 *
 * Parses streamed.dat track files using section-based format:
 *   - File is a chain of variable-size sections
 *   - Each section header: version(1) at +0x00, section_size at +0x08,
 *     bounding position at +0x10, waypoint offset at +0x54, object count at +0x60
 *   - Vertex buffer starts at: header[+0x54] + 0x50
 *     (equivalently: 0x0C90 + object_count * 0x90)
 *   - Vertex format: float3 pos + uint32 packed_normal + uint32 color + float2 UV (28B stride)
 *   - Index data (uint16 triangle strip) follows vertex buffer
 */

#include "track_loader.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRACK_VERTEX_STRIDE  28
#define MIN_VERTS_PER_SECTION 10

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

    /* Parse section chain */
    int max_sections = 256;
    TrackChunk *chunks = (TrackChunk *)calloc(max_sections, sizeof(TrackChunk));
    int chunk_count = 0;

    float overall_min[3] = {  1e30f,  1e30f,  1e30f };
    float overall_max[3] = { -1e30f, -1e30f, -1e30f };
    int total_verts = 0, total_indices = 0;

    uint32_t sec_off = 0;
    while (sec_off + 0x80 <= (uint32_t)file_size) {
        const uint8_t *sec = data + sec_off;

        /* Read section header */
        uint32_t version, sec_size, waypoint_off;
        memcpy(&version,      sec + 0x00, 4);
        memcpy(&sec_size,     sec + 0x08, 4);
        memcpy(&waypoint_off, sec + 0x54, 4);

        if (version != 1 || sec_size == 0 || sec_size > (uint32_t)file_size ||
            sec_off + sec_size > (uint32_t)file_size)
            break;

        /* Read object count from +0x60 */
        uint32_t obj_count;
        memcpy(&obj_count, sec + 0x60, 4);

        /* Section center position from header (+0x10) */
        float cx, cy, cz;
        memcpy(&cx, sec + 0x10, 4);
        memcpy(&cy, sec + 0x14, 4);
        memcpy(&cz, sec + 0x18, 4);

        /* Vertex buffer starts at waypoint_offset + 0x50 */
        uint32_t vb_start = waypoint_off + 0x50;
        if (vb_start >= sec_size || vb_start + TRACK_VERTEX_STRIDE > sec_size) {
            sec_off += sec_size;
            continue;
        }

        /* Sections come in pairs. Only type-0 sections (where vb_start matches
         * the formula 0x0C90 + obj_count * 0x90) have the expected vertex/index
         * layout. Type-1 sections have a different internal format — skip them. */
        uint32_t expected_vb = 0x0C90 + obj_count * 0x90;
        if (vb_start != expected_vb) {
            sec_off += sec_size;
            continue;
        }

        /* Count valid vertices at stride 28 */
        uint32_t vb_count = 0;
        uint32_t off = vb_start;
        while (off + TRACK_VERTEX_STRIDE <= sec_size) {
            float x, y, z;
            memcpy(&x, sec + off,     4);
            memcpy(&y, sec + off + 4, 4);
            memcpy(&z, sec + off + 8, 4);

            /* Valid vertex: finite coords, at least one > 10 (world scale) */
            if (x == x && y == y && z == z &&
                fabsf(x) < 50000.0f && fabsf(y) < 50000.0f && fabsf(z) < 50000.0f &&
                (fabsf(x) > 10.0f || fabsf(z) > 10.0f)) {
                vb_count++;
                off += TRACK_VERTEX_STRIDE;
            } else {
                break;
            }
        }
        uint32_t vb_end = vb_start + vb_count * TRACK_VERTEX_STRIDE;

        if (vb_count < MIN_VERTS_PER_SECTION) {
            sec_off += sec_size;
            continue;
        }

        if (chunk_count >= max_sections) {
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

        /* Collect index data (uint16 values after vertex buffer) */
        uint32_t ib_count = 0;
        uint32_t ib_off = vb_end;
        while (ib_off + 2 <= sec_size) {
            uint16_t idx;
            memcpy(&idx, sec + ib_off, 2);
            if (idx < vb_count) {
                ib_count++;
                ib_off += 2;
            } else {
                break;
            }
        }

        if (ib_count >= 3) {
            chunk->index_count = ib_count;
            chunk->indices = (uint16_t *)malloc((size_t)ib_count * sizeof(uint16_t));
            memcpy(chunk->indices, sec + vb_end, ib_count * 2);
        }

        /* Read per-object strip boundaries from object descriptors.
         * Each 0x90-byte object descriptor at section+0x0C90 has idx_count at +0x84.
         * Objects define separate triangle strips within the shared index buffer. */
        if (obj_count > 0 && ib_count >= 3) {
            chunk->strip_breaks = (uint32_t *)malloc((obj_count + 1) * sizeof(uint32_t));
            chunk->strip_break_count = 0;
            uint32_t cum = 0;
            for (uint32_t oi = 0; oi < obj_count; oi++) {
                uint32_t desc_off = 0x0C90 + oi * 0x90 + 0x84;
                if (desc_off + 4 <= sec_size) {
                    uint32_t obj_idx_count;
                    memcpy(&obj_idx_count, sec + desc_off, 4);
                    chunk->strip_breaks[chunk->strip_break_count++] = cum;
                    cum += obj_idx_count;
                }
            }
            /* Final sentinel = total indices covered by objects */
            chunk->strip_breaks[chunk->strip_break_count] = cum;
        }

        /* Read per-object texture indices from section header at +0x84.
         * Each uint16 is a global index into the static.dat texture list. */
        if (obj_count > 0) {
            chunk->tex_indices = (uint16_t *)malloc(obj_count * sizeof(uint16_t));
            chunk->tex_index_count = 0;
            for (uint32_t oi = 0; oi < obj_count; oi++) {
                uint32_t ti_off = 0x84 + oi * 2;
                if (ti_off + 2 <= sec_size) {
                    memcpy(&chunk->tex_indices[oi], sec + ti_off, 2);
                    chunk->tex_index_count++;
                }
            }
        }

        total_verts += (int)vb_count;
        total_indices += (int)ib_count;
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

    fprintf(stderr, "[TRACK] Loaded %s: %d sections, %d verts, %d indices\n",
            path, chunk_count, total_verts, total_indices);
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
        free(track->chunks[i].tex_indices);
    }
    free(track->chunks);
    free(track->spine);
    memset(track, 0, sizeof(TrackData));
}
