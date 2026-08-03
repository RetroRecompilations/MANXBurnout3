/**
 * Burnout 3: Takedown — track collision
 *
 * Broad phase is a uniform XZ grid over the per-object bounds the game
 * already stores in streamed.dat (eight corners at each object descriptor's
 * +0x00). Narrow phase walks that object's own triangle strip.
 *
 * Triangles are split by their normal: near-vertical faces are walls and
 * block the car, near-horizontal faces are drivable and set its height.
 * A bounds-only test cannot make that distinction — the box around a road
 * strip is a flat slab the car would be permanently inside.
 */

#ifndef TRACK_COLLISION_H
#define TRACK_COLLISION_H

#include "track_loader.h"

typedef struct TrackCollision TrackCollision;

/* Build the grid for a loaded track. Returns NULL if the track has no
 * geometry or the allocation fails; callers must cope with no collision. */
TrackCollision *track_collision_build(const TrackData *track);
void track_collision_free(TrackCollision *tc);

/* Slide a sphere from `from` to `to`. Writes the resolved position to
 * out_pos (always, even when nothing is hit) and returns 1 if a wall was
 * touched, with its unit normal in out_normal (may be NULL).
 *
 * step_height is how far a wall's top may rise above the surface the car is
 * on before it blocks. The city is full of kerbs and pavement risers about
 * a metre tall, modelled as vertical strips at road level; a car mounts
 * those, and without a step the sphere — whose underside sits on the
 * tarmac — is stopped by every one of them. `from` and `to` are sphere
 * centres, so the surface is taken to be radius below the lower of them. */
int track_collision_move(const TrackCollision *tc,
                         const float from[3], const float to[3],
                         float radius, float step_height,
                         float out_pos[3], float out_normal[3]);

/* Height of the drivable surface under (x, z), searching within
 * [y_hint - down, y_hint + up]. Returns 0 when there is no surface there. */
int track_collision_ground(const TrackCollision *tc, float x, float z,
                           float y_hint, float up, float down, float *out_y);

/* Diagnostics: cells, object references, and how many objects the last
 * query examined. */
void track_collision_stats(const TrackCollision *tc,
                           int *out_cells, int *out_refs, int *out_last_probed);

#endif /* TRACK_COLLISION_H */
