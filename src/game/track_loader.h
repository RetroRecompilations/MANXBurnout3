/**
 * Burnout 3: Takedown - Track Geometry Loader
 *
 * Parses streamed.dat files from the Tracks directory to extract
 * world-space vertex data for rendering actual game tracks.
 *
 * Vertex format (28 bytes per vertex):
 *   float3 position (12B) + uint32 packed_normal (4B) +
 *   float padding (4B) + float2 UV (8B)
 *
 * Vertices are found by scanning for clusters of consecutive valid
 * world-space float3 coordinates at stride 28.
 */

#ifndef TRACK_LOADER_H
#define TRACK_LOADER_H

#include <stdint.h>

/* Raw vertex as stored in streamed.dat (28 bytes) */
typedef struct {
    float x, y, z;           /* world position */
    uint32_t packed;          /* packed normal/material data */
    float pad;                /* padding */
    float u, v;               /* texture coordinates */
} TrackVertex;                /* 28 bytes */

/* A contiguous cluster of vertices from the file */
typedef struct {
    TrackVertex *vertices;
    uint32_t vertex_count;
    uint32_t file_offset;     /* byte offset in streamed.dat */
    float center[3];          /* bounding center */
    float radius;             /* bounding radius */
} TrackChunk;

/* All geometry loaded from one streamed.dat file */
typedef struct {
    TrackChunk *chunks;
    int chunk_count;
    float center[3];          /* overall track center */
    float radius;             /* overall bounding radius */
} TrackData;

/**
 * Load track geometry from a streamed.dat file.
 * Scans for vertex clusters and extracts geometry chunks.
 *
 * @param path   Path to streamed.dat file
 * @param track  Output structure (caller-allocated, zeroed on error)
 * @return       0 on success, -1 on error
 */
int track_load(const char *path, TrackData *track);

/**
 * Free all memory allocated by track_load().
 */
void track_free(TrackData *track);

#endif /* TRACK_LOADER_H */
