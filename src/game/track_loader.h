/**
 * Burnout 3: Takedown - Track Geometry Loader
 *
 * Parses streamed.dat files from the Tracks directory.
 *
 * File format: chain of variable-size sections, each with:
 *   - 128-byte header (version, section size, bounding box positions)
 *   - Connectivity/visibility tables
 *   - Object bounding boxes + descriptors
 *   - Vertex buffer: float3 pos + uint32 packed_normal + uint32 color + float2 UV (28B stride)
 *   - Index buffer: uint16 triangle strip indices
 */

#ifndef TRACK_LOADER_H
#define TRACK_LOADER_H

#include <stdint.h>

/* Raw vertex as stored in streamed.dat (28 bytes) */
typedef struct {
    float x, y, z;           /* world position */
    uint32_t packed_normal;   /* packed normal (Xbox D3D format) */
    uint32_t color;           /* vertex color (ARGB) */
    float u, v;               /* texture coordinates */
} TrackVertex;                /* 28 bytes */

/* A section's geometry (vertex + index buffers).
 *
 * One entry per object descriptor in the section. Each object is exactly one
 * DrawIndexedVertices call in the original game: a primitive type, a run of
 * indices, and a texture. The runs are ascending but NOT contiguous (there is
 * up to one index of alignment padding between them), so both the start and
 * the length are needed. */
typedef struct {
    TrackVertex *vertices;
    uint32_t vertex_count;
    uint16_t *indices;
    uint32_t index_count;
    float center[3];          /* section center from header */
    /* Per-object strip start: strip_breaks[i] = first index of object i */
    uint32_t *strip_breaks;
    int strip_break_count;    /* == object count */
    /* Per-object index count (NOT strip_breaks[i+1] - strip_breaks[i]) */
    uint32_t *strip_lens;
    /* Per-object primitive type, as passed to DrawIndexedVertices:
     * 6 = triangle strip (all real geometry), 2 = line list. */
    uint8_t *strip_prims;
    /* Per-object texture indices (global index into static.dat texture list) */
    uint16_t *tex_indices;
    int tex_index_count;
    /* Per-object world-space bounds: 6 floats each (min xyz, then max xyz),
     * from the eight corners the game stores at descriptor +0x00. The corners
     * describe an oriented box; the enclosing AABB is what broad-phase wants
     * and measures within ~2 units of the object's own vertex extent. */
    float *obj_bbox;
} TrackChunk;

/* Road spine waypoint (de-duplicated section centers forming a driveable path) */
typedef struct {
    float x, y, z;            /* world position on road */
    float dx, dz;             /* direction to NEXT waypoint (normalized) */
    float cumulative_dist;    /* distance from start along spine */
} TrackWaypoint;

/* All geometry loaded from one streamed.dat file */
typedef struct {
    TrackChunk *chunks;
    int chunk_count;
    float center[3];          /* overall track center */
    float radius;             /* overall bounding radius */
    float spawn[3];           /* player spawn position (first section center) */
    /* Road spine (de-duplicated section centers) */
    TrackWaypoint *spine;
    int spine_count;
    float spine_length;       /* total road length */
} TrackData;

/**
 * Load track geometry from a streamed.dat file.
 * Parses section headers, extracts vertex and index buffers.
 * Builds road spine from section center positions.
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

/**
 * Map a distance-along-road + lateral offset to world position.
 * @param track    Loaded track data with spine
 * @param dist     Distance along road from start
 * @param lateral  Lateral offset (positive = right of road direction)
 * @param out_pos  Output: world position [x,y,z]
 * @param out_hdg  Output: road heading at this point (radians, can be NULL)
 */
void track_spine_to_world(const TrackData *track, float dist, float lateral,
                          float out_pos[3], float *out_hdg);

#endif /* TRACK_LOADER_H */
