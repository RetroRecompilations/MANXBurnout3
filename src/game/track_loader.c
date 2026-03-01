/**
 * Burnout 3: Takedown - Track Geometry Loader
 *
 * Loads world-space vertex data from streamed.dat track files.
 * Scans the binary file for clusters of valid float3 coordinates
 * at stride 28, extracting geometry chunks for 3D rendering.
 */

#include "track_loader.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRACK_VERTEX_STRIDE  28
#define MIN_CLUSTER_VERTS    50
#define SCAN_START_OFFSET    0x1000   /* skip header/index area */

/* Check if a float is a valid, finite coordinate (not NaN, not tiny denorm) */
static int is_valid_float(float v)
{
    if (v != v) return 0;                /* NaN */
    if (v == 0.0f) return 1;
    float a = fabsf(v);
    if (a < 1e-6f || a > 100000.0f) return 0;
    return 1;
}

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

    if (file_size < SCAN_START_OFFSET + TRACK_VERTEX_STRIDE * MIN_CLUSTER_VERTS) {
        fprintf(stderr, "[TRACK] File too small: %ld bytes\n", file_size);
        fclose(f);
        return -1;
    }

    uint8_t *data = (uint8_t *)malloc((size_t)file_size);
    if (!data) {
        fclose(f);
        return -1;
    }
    fread(data, 1, (size_t)file_size, f);
    fclose(f);

    fprintf(stderr, "[TRACK] Scanning %s (%ld bytes)...\n", path, file_size);

    /* ── Phase 1: Scan for vertex clusters ── */

    typedef struct { uint32_t offset; uint32_t count; } ClusterInfo;
    ClusterInfo *clusters = NULL;
    int cluster_count = 0;
    int cluster_cap = 0;

    uint32_t cur_start = 0;
    int cur_count = 0;
    int in_cluster = 0;

    for (uint32_t off = SCAN_START_OFFSET;
         off + TRACK_VERTEX_STRIDE <= (uint32_t)file_size;
         off += TRACK_VERTEX_STRIDE)
    {
        float x, y, z;
        memcpy(&x, data + off,     4);
        memcpy(&y, data + off + 4, 4);
        memcpy(&z, data + off + 8, 4);

        /* Valid world-space vertex: all coords are valid floats,
         * and at least one horizontal coord has "world scale" (> 100) */
        int valid = is_valid_float(x) && is_valid_float(y) && is_valid_float(z);
        int world_scale = (fabsf(x) > 100.0f || fabsf(z) > 100.0f);

        if (valid && world_scale) {
            if (!in_cluster) {
                cur_start = off;
                cur_count = 1;
                in_cluster = 1;
            } else {
                cur_count++;
            }
        } else {
            if (in_cluster && cur_count >= MIN_CLUSTER_VERTS) {
                if (cluster_count >= cluster_cap) {
                    cluster_cap = cluster_cap ? cluster_cap * 2 : 32;
                    clusters = (ClusterInfo *)realloc(clusters,
                                    (size_t)cluster_cap * sizeof(ClusterInfo));
                }
                clusters[cluster_count].offset = cur_start;
                clusters[cluster_count].count = (uint32_t)cur_count;
                cluster_count++;
            }
            in_cluster = 0;
        }
    }
    /* Handle trailing cluster */
    if (in_cluster && cur_count >= MIN_CLUSTER_VERTS) {
        if (cluster_count >= cluster_cap) {
            cluster_cap = cluster_cap ? cluster_cap * 2 : 32;
            clusters = (ClusterInfo *)realloc(clusters,
                            (size_t)cluster_cap * sizeof(ClusterInfo));
        }
        clusters[cluster_count].offset = cur_start;
        clusters[cluster_count].count = (uint32_t)cur_count;
        cluster_count++;
    }

    if (cluster_count == 0) {
        fprintf(stderr, "[TRACK] No vertex clusters found\n");
        free(data);
        free(clusters);
        return -1;
    }

    /* ── Phase 2: Extract chunk data ── */

    track->chunks = (TrackChunk *)calloc((size_t)cluster_count, sizeof(TrackChunk));
    track->chunk_count = cluster_count;

    float overall_min[3] = {  1e30f,  1e30f,  1e30f };
    float overall_max[3] = { -1e30f, -1e30f, -1e30f };
    int total_verts = 0;

    for (int i = 0; i < cluster_count; i++) {
        TrackChunk *chunk = &track->chunks[i];
        uint32_t off = clusters[i].offset;
        uint32_t cnt = clusters[i].count;

        chunk->file_offset = off;
        chunk->vertex_count = cnt;
        chunk->vertices = (TrackVertex *)malloc((size_t)cnt * sizeof(TrackVertex));
        total_verts += (int)cnt;

        float cmin[3] = {  1e30f,  1e30f,  1e30f };
        float cmax[3] = { -1e30f, -1e30f, -1e30f };

        for (uint32_t j = 0; j < cnt; j++) {
            TrackVertex *v = &chunk->vertices[j];
            uint32_t voff = off + j * TRACK_VERTEX_STRIDE;

            memcpy(&v->x,      data + voff,      4);
            memcpy(&v->y,      data + voff + 4,   4);
            memcpy(&v->z,      data + voff + 8,   4);
            memcpy(&v->packed, data + voff + 12,  4);
            memcpy(&v->pad,    data + voff + 16,  4);
            memcpy(&v->u,      data + voff + 20,  4);
            memcpy(&v->v,      data + voff + 24,  4);

            if (v->x < cmin[0]) cmin[0] = v->x;
            if (v->y < cmin[1]) cmin[1] = v->y;
            if (v->z < cmin[2]) cmin[2] = v->z;
            if (v->x > cmax[0]) cmax[0] = v->x;
            if (v->y > cmax[1]) cmax[1] = v->y;
            if (v->z > cmax[2]) cmax[2] = v->z;
        }

        chunk->center[0] = (cmin[0] + cmax[0]) * 0.5f;
        chunk->center[1] = (cmin[1] + cmax[1]) * 0.5f;
        chunk->center[2] = (cmin[2] + cmax[2]) * 0.5f;

        float dx = cmax[0] - cmin[0];
        float dy = cmax[1] - cmin[1];
        float dz = cmax[2] - cmin[2];
        chunk->radius = sqrtf(dx * dx + dy * dy + dz * dz) * 0.5f;

        for (int k = 0; k < 3; k++) {
            if (cmin[k] < overall_min[k]) overall_min[k] = cmin[k];
            if (cmax[k] > overall_max[k]) overall_max[k] = cmax[k];
        }

        fprintf(stderr, "  Chunk %2d: %5u verts at 0x%08X  center=(%.0f, %.0f, %.0f) r=%.0f\n",
                i, cnt, off,
                chunk->center[0], chunk->center[1], chunk->center[2],
                chunk->radius);
    }

    track->center[0] = (overall_min[0] + overall_max[0]) * 0.5f;
    track->center[1] = (overall_min[1] + overall_max[1]) * 0.5f;
    track->center[2] = (overall_min[2] + overall_max[2]) * 0.5f;

    float tdx = overall_max[0] - overall_min[0];
    float tdy = overall_max[1] - overall_min[1];
    float tdz = overall_max[2] - overall_min[2];
    track->radius = sqrtf(tdx * tdx + tdy * tdy + tdz * tdz) * 0.5f;

    fprintf(stderr, "[TRACK] Loaded %d chunks, %d total verts\n",
            cluster_count, total_verts);
    fprintf(stderr, "[TRACK] Center=(%.0f, %.0f, %.0f) Radius=%.0f\n",
            track->center[0], track->center[1], track->center[2],
            track->radius);

    free(data);
    free(clusters);
    return 0;
}

void track_free(TrackData *track)
{
    if (!track) return;
    for (int i = 0; i < track->chunk_count; i++) {
        free(track->chunks[i].vertices);
    }
    free(track->chunks);
    memset(track, 0, sizeof(TrackData));
}
