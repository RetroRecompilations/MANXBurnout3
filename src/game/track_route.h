/**
 * Burnout 3: Takedown — race route from Gamedata.bgd
 *
 * Gamedata.bgd (1.8-2.7 MB per track, never opened by either tree before)
 * carries the drivable road network as ribbon strips: runs of 16-byte
 * records {float x, y, z, pad=0} whose points alternate between the left
 * and right edge of a road, so each consecutive pair is one rung across
 * the carriageway and the midpoints are the centreline.
 *
 * The file as a whole is a serialised memory image — its header is full of
 * stale Win32 pointers from the machine that saved it (0x0012xxxx stack
 * addresses, 0x7c34xxxx msvcr71) — so there is no usable table of contents
 * to walk. The ribbons are found by their shape instead, which is safe
 * because the shape is very specific: two edges 6-30 units apart advancing
 * 2-40 units per rung, for at least six rungs.
 *
 * Measured on US/C1_V1: of 400 sampled centre points, 98% have real track
 * geometry within 7 units in XZ and a median height error of 0.00. All 36
 * shipped tracks yield a network, median rung width 7.1-8.5 units on every
 * one of them.
 *
 * The route is the lap: ribbons are chained end to end from the spawn,
 * preferring the straightest continuation at each junction, which turns
 * the network into an ordered centreline with cumulative distance. That
 * supports lap counting, checkpoints, and race position — none of which
 * the road "spine" in track_loader.h can do, since it is de-duplicated
 * section centres in file order and is not a world-space path.
 */

#ifndef TRACK_ROUTE_H
#define TRACK_ROUTE_H

typedef struct {
    float x, y, z;
    float half_width;   /* from the rung that produced this point */
    float dist;         /* cumulative distance from the route start */
} RouteNode;

typedef struct {
    RouteNode *nodes;
    int    count;
    float  length;      /* total centreline length */
    int    closed;      /* route returns to within CLOSE_DIST of its start */
    int    ribbon_count;    /* ribbons found in the file */
    int    ribbons_used;    /* how many the route chained */
} TrackRoute;

/* Build a route from `path` (…/Gamedata.bgd), starting at the ribbon
 * nearest (spawn_x, spawn_z).
 *
 * `centre` and `radius` are the loaded track's own bounds (TrackData's
 * center/radius) and are required, not advisory: scanning the whole file
 * by shape alone also matches unrelated float data, and on US/C1_V1 that
 * produced a dead-straight 6000-unit "road" running diagonally out to
 * (6961, 6967) when the track itself only spans ~1760 units around
 * (1512, 1279). Ribbons outside the track are rejected.
 *
 * Returns 0 on success. */
int  track_route_load(const char *path, float spawn_x, float spawn_z,
                      const float centre[3], float radius,
                      TrackRoute *out);
void track_route_free(TrackRoute *r);

/* Nearest point on the route to (x, z). Writes distance along the route
 * and signed lateral offset (positive = right of travel). Returns 0 when
 * the route is empty. */
int  track_route_project(const TrackRoute *r, float x, float z,
                         float *out_dist, float *out_lateral);

/* Position and heading at a distance along the route, wrapping when the
 * route is closed. Returns 0 when the route is empty. */
int  track_route_sample(const TrackRoute *r, float dist,
                        float out_pos[3], float *out_heading);

#endif /* TRACK_ROUTE_H */
