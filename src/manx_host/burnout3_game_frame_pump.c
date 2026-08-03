// burnout3_game_frame_pump.c — Native Linux game loop for Burnout 3.
//
// Replaces the Windows game_frame_pump() from main.c line 2298 with a
// Linux-native implementation. Key differences:
//
//   Win32 API                   → Linux replacement
//   ─────────────────────────────────────────────────────
//   QueryPerformanceCounter     → clock_gettime(CLOCK_MONOTONIC)
//   PeekMessageA / TranslateMsg → removed (no Win32 message pump)
//   GetAsyncKeyState            → g_keyboard_state[] bitmask (windows.h)
//   XInputGetState              → g_xinput_* globals (windows.h)
//
// The function injects keyboard/XInput values into the Xbox memory space
// (via MEM32 macros on g_xbox_mem_offset), then calls fe_menu_update()
// to let the frontend menu process input and render through Vulkan.

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <math.h>

// ── Windows stub (provides GetAsyncKeyState, XInputGetState, VK_*, MEM32, etc.) ──
#include "windows.h"

// ── 3D gameplay renderer (rw_renderer.c) + vehicle models ─────
#include "d3d8_xbox.h"
#include "rw_renderer.h"
#include "bgv_loader.h"
#include "track_loader.h"
#include "track_collision.h"

extern TrackData g_track_data;

// ── Game state ─────────────────────────────────────────────
// The game's own thread (sub_00156400) runs the real frontend and
// advances the state machine. This pump only handles input injection,
// Present triggering, and racing physics when the game is in-race.
extern int g_game_ready;

// ── Kernel shim ────────────────────────────────────────────────
extern const char *xbox_get_game_dir(void);
extern IDirect3DDevice8 *xbox_GetD3DDevice(void);

// Track spawn point, filled in by rw_load_track()
extern float g_track_spawn_x, g_track_spawn_y, g_track_spawn_z, g_track_spawn_hdg;

// ── Render chain toggle ────────────────────────────────────────
int g_gen_render_chain_enabled = 1;

// ── Keyboard state bitmask (256 bits = 4 x 64-bit words) ──────
// Populated by the MANX session before calling game_frame_pump().
uint64_t g_keyboard_state[4] = {0, 0, 0, 0};

// ── Camera globals (rw_bridge.c) ──────────────────────────────
int      g_created_camera_count = 0;
uint32_t g_created_cameras[64]  = {0};

// ── Frame counter (rw_bridge.c) ───────────────────────────────
volatile uint32_t g_present_count = 0;

// ── Rendered-frame counter (perf tests) ───────────────────────
static unsigned long s_work_frames = 0;

unsigned long burnout3_frame_counter(void) { return s_work_frames; }

// ── Game running flag ──────────────────────────────────────────
static int g_running = 1;

int burnout3_is_racing(void) {
    /* State 5 is the frontend, not a race.  The frontend owns the
     * authoritative race flag while the state words transition. */
    extern int fe_menu_is_racing(void);
    return fe_menu_is_racing();
}

/* ── fe_menu helpers — real implementations now live in fe_menu.c ──
 * (compiled into burnout3_recomp alongside this file).  The stubs
 * that used to be here were removed to avoid multiple-definition
 * linker errors. */

// ═══════════════════════════════════════════════════════════════
//  Racing: track load, native drive physics, 3D render
// ═══════════════════════════════════════════════════════════════
//
// The Windows build integrated the fake physics body in recomp_manual.c
// (sub_000636D0 override) and rendered gameplay from its WinMain loop.
// Neither is compiled here, so the pump provides both natively:
// rw_gameplay_render() reads the physics body at 0x5FFF00 and we
// integrate it from MANX's inputs.

#define PHYS_BODY  0x5FFF00
#define PMEMF(a) (*(volatile float *)((uintptr_t)(a) + g_xbox_mem_offset))

/* Baseline for the teleport guard below. Anything that moves the car on
 * purpose — a respawn, a test setting up a scenario — must clear this,
 * otherwise the guard correctly treats the move as an outside write and
 * undoes it. */
static float s_guard_x, s_guard_z;
static int   s_guard_valid = 0;

/* Collision world for the resident track. Rebuilt on every track load;
 * NULL when the track has no usable object bounds. */
static TrackCollision *s_collision = NULL;
static float s_car_y = 0.0f;          /* surface height under the car */
static float s_prev_x = 0.0f, s_prev_z = 0.0f;   /* start of this frame's move */

/* Car collision sphere, and how far the ground search looks from the car's
 * last known height. The window has to clear a kerb without reaching the
 * deck of an overpass overhead. */
#define B3_CAR_RADIUS   2.0f
#define B3_GROUND_UP    6.0f
#define B3_GROUND_DOWN 12.0f
/* Kerbs and pavement risers around a metre tall line every road; a car
 * mounts those rather than being stopped dead by them. */
#define B3_STEP_HEIGHT  1.2f

void b3_collision_rebuild(void) {
    track_collision_free(s_collision);
    s_collision = track_collision_build(&g_track_data);
    s_prev_x = PMEMF(PHYS_BODY + 0x10);
    s_prev_z = PMEMF(PHYS_BODY + 0x14);
    if (s_collision)
        track_collision_ground(s_collision, s_prev_x, s_prev_z, s_car_y,
                               1e6f, 1e6f, &s_car_y);
}

void b3_physics_resync(void) {
    s_guard_valid = 0;
    s_prev_x = PMEMF(PHYS_BODY + 0x10);
    s_prev_z = PMEMF(PHYS_BODY + 0x14);
    if (s_collision)
        track_collision_ground(s_collision, s_prev_x, s_prev_z, s_car_y,
                               1e6f, 1e6f, &s_car_y);
}

static int       s_race_ready = 0;      // track + spawn done for this race
static int       s_track_loaded = 0;    // track geometry resident (kept across races)
static int       s_models_loaded = 0;
static BGV_Model s_player_model;
#define B3_TRAFFIC_MODELS 5
static BGV_Model s_traffic_models[B3_TRAFFIC_MODELS];

/* ── Content catalogues ──────────────────────────────────────────
 * 36 loadable tracks and 67 cars ship; a hardcoded first-hit scan reached
 * one of each, and "loaded once" latches meant even a changed selection was
 * ignored on the second race. Both are enumerated at startup and chosen
 * by index instead. */

#define B3_MAX_TRACKS 64
#define B3_MAX_CARS  128

typedef struct { char name[24]; char path[1024]; } B3Entry;

static B3Entry s_tracks[B3_MAX_TRACKS];
static int     s_track_count = 0;
static int     s_track_sel = 0;      /* selection for the NEXT race */
static int     s_track_live = -1;    /* which one is actually resident */

static B3Entry s_cars[B3_MAX_CARS];
static int     s_car_count = 0;
static int     s_car_sel = 0;
static int     s_car_live = -1;

static void b3_scan_catalogues(void) {
    if (s_track_count) return;

    static const char *regions[] = { "US", "EU", "AS" };
    static const char *codes[] = {
        "C1_V1", "C1_V2", "C2_V1", "C2_V2", "C3_V1", "C3_V2",
        "C4_V1", "C4_V2", "C5_V1", "C5_V2",
        "M1_V1", "M1_V2", "M2_V1", "M2_V2",
        "P1_V1", "P1_V2", "P2_V1", "P2_V2",
    };
    for (unsigned r = 0; r < sizeof(regions) / sizeof(*regions); r++) {
        for (unsigned c = 0; c < sizeof(codes) / sizeof(*codes) &&
                             s_track_count < B3_MAX_TRACKS; c++) {
            char path[1024];
            snprintf(path, sizeof(path), "%s/Tracks/%s/%s/streamed.dat",
                     xbox_get_game_dir(), regions[r], codes[c]);
            FILE *f = fopen(path, "rb");
            if (!f) continue;
            /* Some entries are placeholders: US/C5_V1/streamed.dat is a
             * zero-byte file. Existence is not enough — listing it put an
             * unloadable track in the menu. */
            fseek(f, 0, SEEK_END);
            long sz = ftell(f);
            fclose(f);
            if (sz < 0x100) continue;
            B3Entry *e = &s_tracks[s_track_count++];
            snprintf(e->name, sizeof(e->name), "%s %s", regions[r], codes[c]);
            snprintf(e->path, sizeof(e->path), "%s", path);
        }
    }

    /* pveh/<CLASS>/Car<N>.bgv. vlist.bin holds no usable name table (4 KB
     * of binary, header 6/107 then per-entry flags), so cars are named by
     * class and number rather than inventing marketing names. */
    static const char *classes[] = {
        "COMP", "CUPE", "HEVY", "HSPC", "MSCL", "SPRT", "SUPR", "TSPC",
    };
    for (unsigned k = 0; k < sizeof(classes) / sizeof(*classes); k++) {
        /* Numbering is sparse, not 1..count: HEVY reaches Car36 and HSPC
         * Car25, so scanning to the class size misses cars entirely. */
        for (int n = 1; n <= 40 && s_car_count < B3_MAX_CARS; n++) {
            char path[1024];
            snprintf(path, sizeof(path), "%s/pveh/%s/Car%d.bgv",
                     xbox_get_game_dir(), classes[k], n);
            FILE *f = fopen(path, "rb");
            if (!f) continue;
            fclose(f);
            B3Entry *e = &s_cars[s_car_count++];
            snprintf(e->name, sizeof(e->name), "%s %d", classes[k], n);
            snprintf(e->path, sizeof(e->path), "%s", path);
        }
    }

    fprintf(stderr, "[RACE] Catalogue: %d tracks, %d cars\n",
            s_track_count, s_car_count);
}

/* Selection API used by the frontend. */
int  b3_track_count(void)      { b3_scan_catalogues(); return s_track_count; }
int  b3_car_count(void)        { b3_scan_catalogues(); return s_car_count; }
const char *b3_track_name(int i) {
    b3_scan_catalogues();
    return (i >= 0 && i < s_track_count) ? s_tracks[i].name : "";
}
const char *b3_car_name(int i) {
    b3_scan_catalogues();
    return (i >= 0 && i < s_car_count) ? s_cars[i].name : "";
}
void b3_select_track(int i) {
    b3_scan_catalogues();
    if (i >= 0 && i < s_track_count) s_track_sel = i;
}
void b3_select_car(int i) {
    b3_scan_catalogues();
    if (i >= 0 && i < s_car_count) s_car_sel = i;
}
int  b3_selected_track(void)   { return s_track_sel; }
int  b3_selected_car(void)     { return s_car_sel; }

/* Load the selected track, replacing whatever is resident. */
static void b3_load_selected_track(void) {
    b3_scan_catalogues();
    if (s_track_count == 0) {
        fprintf(stderr, "[RACE] No track found — procedural road only\n");
        return;
    }
    if (s_track_live == s_track_sel) return;   /* already resident */

    /* The grid holds chunk and object indices into g_track_data, so it must
     * be torn down before the chunks are freed — including when the load
     * then fails. Leaving it up crashed the next collision query against
     * freed geometry. */
    track_collision_free(s_collision);
    s_collision = NULL;

    if (s_track_live >= 0) rw_unload_track();
    if (rw_load_track(s_tracks[s_track_sel].path) == 0) {
        fprintf(stderr, "[RACE] Track %d/%d: %s\n",
                s_track_sel + 1, s_track_count, s_tracks[s_track_sel].name);
        s_track_live = s_track_sel;
        s_track_loaded = 1;
        b3_collision_rebuild();
    } else {
        fprintf(stderr, "[RACE] Track load FAILED: %s\n",
                s_tracks[s_track_sel].path);
        s_track_live = -1;
        s_track_loaded = 0;
    }
}

static void b3_race_begin(void) {
    b3_load_selected_track();

    /* Reload models when the chosen car changes, not just once ever. */
    if (s_models_loaded && s_car_live != s_car_sel) {
        bgv_free(&s_player_model);
        for (int i = 0; i < B3_TRAFFIC_MODELS; i++)
            bgv_free(&s_traffic_models[i]);
        s_models_loaded = 0;
    }

    if (!s_models_loaded) {
        char path[1200];
        b3_scan_catalogues();
        if (s_car_count > 0)
            snprintf(path, sizeof(path), "%s", s_cars[s_car_sel].path);
        else
            snprintf(path, sizeof(path), "%s/pveh/CUPE/Car1.bgv",
                     xbox_get_game_dir());
        if (bgv_load(path, &s_player_model) == 0) {
            s_car_live = s_car_sel;
            // Traffic: one model per vehicle class, tinted so the ambient
            // cars don't all look identical.
            static const char *traffic_paths[B3_TRAFFIC_MODELS] = {
                "pveh/COMP/Car1.bgv", "pveh/HEVY/Car1.bgv",
                "pveh/SPRT/Car1.bgv", "pveh/MSCL/Car1.bgv",
                "pveh/CUPE/Car2.bgv",
            };
            static const uint8_t tints[B3_TRAFFIC_MODELS][3] = {
                {255, 90, 90}, {90, 130, 255}, {240, 220, 100},
                {130, 230, 130}, {210, 210, 220},
            };
            int loaded = 0;
            for (int i = 0; i < B3_TRAFFIC_MODELS; i++) {
                snprintf(path, sizeof(path), "%s/%s",
                         xbox_get_game_dir(), traffic_paths[i]);
                if (bgv_load(path, &s_traffic_models[loaded]) == 0) {
                    bgv_tint(&s_traffic_models[loaded],
                             tints[i][0], tints[i][1], tints[i][2]);
                    loaded++;
                }
            }
            rw_gameplay_register_models(&s_player_model,
                                        s_traffic_models, loaded);
            {
                // Scale sanity: a Burnout car should be a few units long.
                float minx = 1e30f, maxx = -1e30f, miny = 1e30f, maxy = -1e30f;
                for (uint32_t v = 0; v < s_player_model.vertex_count; v++) {
                    float x = s_player_model.vertices[v].x;
                    float y = s_player_model.vertices[v].y;
                    if (x < minx) minx = x;
                    if (x > maxx) maxx = x;
                    if (y < miny) miny = y;
                    if (y > maxy) maxy = y;
                }
                fprintf(stderr,
                        "[RACE] Models: player + %d traffic (player r=%.1f "
                        "x=[%.1f..%.1f] y=[%.1f..%.1f])\n",
                        loaded, s_player_model.bounding_radius,
                        minx, maxx, miny, maxy);
            }
            s_models_loaded = 1;
        } else {
            fprintf(stderr, "[RACE] Player model load failed: %s\n", path);
            s_models_loaded = -1;  // don't retry every race
        }
    }

    // Spawn the car at the track's start line. The heading is derived from
    // the road geometry itself: the farthest road-facing vertex within scan
    // range lies along the road by construction. (The track "spine" is not
    // world-space — headings taken from it point off the map.)
    float spawn_hdg = g_track_spawn_hdg;
    s_car_y = g_track_spawn_y;
    if (s_collision) {
        track_collision_ground(s_collision, g_track_spawn_x, g_track_spawn_z,
                               s_car_y, 1e6f, 1e6f, &s_car_y);
        /* Point down the road by finding the direction the car can actually
         * drive furthest: step a sphere outwards until it hits a wall or
         * runs out of drivable surface. The old rule — aim at the farthest
         * road vertex within 300 units — picks a diagonal across a plaza as
         * readily as the road, which only looked harmless while the
         * snap-back constraint was letting the car through the scenery. */
        const int   dirs   = 36;
        const float reach  = 6.0f;    /* probe step */
        const int   steps  = 25;      /* 150 units of look-ahead */
        float best_hdg = spawn_hdg, best_run = -1.0f;

        for (int d = 0; d < dirs; d++) {
            float h = (float)d * (6.2831853f / (float)dirs);
            float px = g_track_spawn_x, pz = g_track_spawn_z, py = s_car_y;
            float run = 0.0f;
            const char *why = "ran out of look-ahead";
            for (int s = 0; s < steps; s++) {
                float nx = px + sinf(h) * reach, nz = pz + cosf(h) * reach;
                float gy;
                if (!track_collision_ground(s_collision, nx, nz, py,
                                            B3_GROUND_UP, B3_GROUND_DOWN, &gy)) {
                    why = "no road";
                    break;
                }
                const float from[3] = {px, py + B3_CAR_RADIUS, pz};
                const float to[3]   = {nx, gy + B3_CAR_RADIUS, nz};
                float out[3];
                if (track_collision_move(s_collision, from, to, B3_CAR_RADIUS,
                                         B3_STEP_HEIGHT, out, NULL)) {
                    why = "blocked";
                    break;
                }
                px = out[0]; pz = out[2]; py = gy;
                run += reach;
            }
            if (getenv("B3_SPAWN_HDG"))
                fprintf(stderr, "[SPAWN] %3.0f° run=%3.0f (%s)\n",
                        h * 57.2958f, run, why);
            if (run > best_run) { best_run = run; best_hdg = h; }
        }
        spawn_hdg = best_hdg;
        fprintf(stderr, "[RACE] Spawn heading %.0f° — %.0f units of clear road "
                        "(spawn %.0f,%.0f ground y=%.1f, header y=%.1f)\n",
                spawn_hdg * 57.2958f, best_run,
                g_track_spawn_x, g_track_spawn_z, s_car_y, g_track_spawn_y);
    } else {
        float far_d2 = 0.0f, fx = 0.0f, fz = 0.0f;
        for (int i = 0; i < g_track_data.chunk_count; i++) {
            TrackChunk *chunk = &g_track_data.chunks[i];
            float ccx = chunk->center[0] - g_track_spawn_x;
            float ccz = chunk->center[2] - g_track_spawn_z;
            if (ccx * ccx + ccz * ccz > 500.0f * 500.0f) continue;
            for (uint32_t v = 0; v < chunk->vertex_count; v += 2) {
                int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
                if (raw_ny & 0x400) raw_ny -= 0x800;
                if (raw_ny < 512) continue;
                float dx = chunk->vertices[v].x - g_track_spawn_x;
                float dz = chunk->vertices[v].z - g_track_spawn_z;
                float d2 = dx * dx + dz * dz;
                if (d2 > 300.0f * 300.0f) continue;   /* stay in scan range */
                if (d2 > far_d2) { far_d2 = d2; fx = dx; fz = dz; }
            }
        }
        if (far_d2 > 50.0f * 50.0f) spawn_hdg = atan2f(fx, fz);
    }

    PMEMF(PHYS_BODY + 0x10) = g_track_spawn_x;   // px
    PMEMF(PHYS_BODY + 0x14) = g_track_spawn_z;   // py (world Z)
    PMEMF(PHYS_BODY + 0x18) = spawn_hdg;         // heading
    PMEMF(PHYS_BODY + 0x1C) = 0.0f;              // speed
    b3_physics_resync();                         // spawn is a deliberate move

    fprintf(stderr, "[RACE] Spawned at (%.0f, %.0f) hdg=%.0f° spawn_y=%.1f\n",
            g_track_spawn_x, g_track_spawn_z,
            spawn_hdg * 57.2958f, g_track_spawn_y);

    // Diagnostic: geometry distribution near the spawn point.
    if (getenv("B3_SPAWN_SCAN")) {
        extern int rw_debug_scan_spawn(float x, float z, float radius);
        extern float g_track_authored_spawn[3];
        rw_debug_scan_spawn(g_track_spawn_x, g_track_spawn_z, 150.0f);
        rw_debug_scan_spawn(g_track_authored_spawn[0],
                            g_track_authored_spawn[2], 150.0f);
    }
    s_race_ready = 1;
}

// Same feel as the Windows fake-physics override: max 50 u/s (75 boosting),
// speed-scaled steering, exponential drag. Non-static: exercised directly
// by burnout3_gameplay_unit_test.
void b3_drive_physics(float dt, float throttle, float brake,
                      float steer, int boost) {
    float hdg = PMEMF(PHYS_BODY + 0x18);
    float spd = PMEMF(PHYS_BODY + 0x1C);

    // Boost adds thrust, not just a higher cap: with drag 0.8/s the
    // equilibrium is accel/0.8, so 35 alone tops out at ~44 and a cap-only
    // "boost" changed nothing (caught by burnout3_gameplay_unit_test).
    const float max_spd = boost ? 75.0f : 50.0f;
    const float accel   = boost ? 65.0f : 35.0f;
    spd += throttle * accel * dt;
    spd -= brake * 60.0f * dt;
    spd -= spd * 0.8f * dt;                       // drag
    if (spd < 0.0f) spd = 0.0f;
    if (spd > max_spd) spd = max_spd;

    // Steering authority ramps in with speed, full by 10 u/s.
    float authority = spd < 10.0f ? spd / 10.0f : 1.0f;
    hdg += steer * 1.8f * authority * dt;

    PMEMF(PHYS_BODY + 0x10) += sinf(hdg) * spd * dt;
    PMEMF(PHYS_BODY + 0x14) += cosf(hdg) * spd * dt;
    PMEMF(PHYS_BODY + 0x18) = hdg;
    PMEMF(PHYS_BODY + 0x1C) = spd;

    // ── Teleport guard ──
    // The physics can only move the car a fraction of a unit per frame, so
    // any larger jump came from somewhere else writing the body — the
    // renderer's free-fly camera (F) does exactly that, at up to 50 units
    // a frame, which walks the car clean through the city and out over the
    // harbour with the road constraint never getting a say. Anything
    // implausible is undone here, before the road check runs.
    {
        float px = PMEMF(PHYS_BODY + 0x10);
        float pz = PMEMF(PHYS_BODY + 0x14);
        float limit = spd * dt * 4.0f + 4.0f;
        if (s_guard_valid) {
            float dx = px - s_guard_x, dz = pz - s_guard_z;
            if (dx * dx + dz * dz > limit * limit) {
                PMEMF(PHYS_BODY + 0x10) = s_guard_x;
                PMEMF(PHYS_BODY + 0x14) = s_guard_z;
                px = s_guard_x; pz = s_guard_z;
            }
        }
    }

    // ── Collision ──
    // Slide the car against the track's real wall triangles, found through
    // the broad-phase grid over the per-object bounds in streamed.dat.
    if (s_collision) {
        struct timespec t_coll;
        clock_gettime(CLOCK_MONOTONIC, &t_coll);
        float px = PMEMF(PHYS_BODY + 0x10);
        float pz = PMEMF(PHYS_BODY + 0x14);

        /* Follow the surface first: the car's height decides which floor of
         * an overpass its wall query sees. */
        float gy;
        if (track_collision_ground(s_collision, s_prev_x, s_prev_z, s_car_y,
                                   B3_GROUND_UP, B3_GROUND_DOWN, &gy))
            s_car_y = gy;

        const float from[3] = {s_prev_x, s_car_y + B3_CAR_RADIUS, s_prev_z};
        const float to[3]   = {px,       s_car_y + B3_CAR_RADIUS, pz};
        float out[3], n[3];
        int hit = track_collision_move(s_collision, from, to,
                                       B3_CAR_RADIUS, B3_STEP_HEIGHT, out, n);
        if (getenv("B3_COLLIDE_SCAN")) {
            static int cs = 0, hits = 0;
            struct timespec te;
            clock_gettime(CLOCK_MONOTONIC, &te);
            if (hit) hits++;
            if (cs++ % 30 == 0) {
                int probed = 0;
                track_collision_stats(s_collision, NULL, NULL, &probed);
                fprintf(stderr, "[COLLIDE] pos=(%.1f,%.1f,%.1f) spd=%.1f "
                                "hits=%d/30 n=(%.2f,%.2f) probed=%d "
                                "%.2fms\n",
                        px, s_car_y, pz, spd, hits,
                        hit ? n[0] : 0.0f, hit ? n[2] : 0.0f, probed,
                        (double)(te.tv_sec - t_coll.tv_sec) * 1000.0 +
                        (double)(te.tv_nsec - t_coll.tv_nsec) / 1e6);
                hits = 0;
            }
        }
        if (hit) {
            PMEMF(PHYS_BODY + 0x10) = out[0];
            PMEMF(PHYS_BODY + 0x14) = out[2];
            /* Scrub speed by how square the hit was: a scrape along a
             * barrier should cost little, a head-on should cost most. */
            float into = -(sinf(hdg) * n[0] + cosf(hdg) * n[2]);
            if (into < 0.0f) into = 0.0f;
            PMEMF(PHYS_BODY + 0x1C) = spd * (1.0f - 0.75f * into);
        }
        s_prev_x = PMEMF(PHYS_BODY + 0x10);
        s_prev_z = PMEMF(PHYS_BODY + 0x14);
    }
    // Fallback for a track whose object bounds did not parse: keep the car
    // near upward-facing vertices and revert when it leaves them. Coarse —
    // it cannot tell a wall from a gap — but better than no containment.
    else if (g_track_data.chunk_count > 0) {
        static float last_good_x, last_good_z;
        static int have_good = 0;
        float px = PMEMF(PHYS_BODY + 0x10);
        float pz = PMEMF(PHYS_BODY + 0x14);

        float best_d2 = 1e30f;
        for (int i = 0; i < g_track_data.chunk_count && best_d2 > 4.0f; i++) {
            TrackChunk *chunk = &g_track_data.chunks[i];
            float ccx = chunk->center[0] - px;
            float ccz = chunk->center[2] - pz;
            /* Sections span 350-650 units, so a 400-unit cull can miss the
             * very chunk the car is standing on and report "no road". */
            if (ccx * ccx + ccz * ccz > 900.0f * 900.0f) continue;
            for (uint32_t v = 0; v < chunk->vertex_count; v += 2) {
                int raw_ny = (int)((chunk->vertices[v].packed_normal >> 11) & 0x7FF);
                if (raw_ny & 0x400) raw_ny -= 0x800;
                if (raw_ny < 512) continue;   /* ny < 0.5 → wall/ceiling */
                float dx = chunk->vertices[v].x - px;
                float dz = chunk->vertices[v].z - pz;
                float d2 = dx * dx + dz * dz;
                if (d2 < best_d2) best_d2 = d2;
                if (best_d2 <= 4.0f) break;   /* on the road for sure */
            }
        }

        // Road polys span 100+ units, so mid-poly positions can be tens
        // of units from the nearest VERTEX while still on tarmac. This
        // is corner-distance, not edge-distance — keep it generous.
        const float max_offroad = 45.0f;
        if (getenv("B3_ROAD_SCAN")) {
            static int rs = 0;
            if (rs++ % 60 == 0)
                fprintf(stderr, "[ROAD] pos=(%.0f,%.0f) nearest=%.0f %s\n",
                        px, pz, best_d2 > 1e29f ? -1.0f : sqrtf(best_d2),
                        best_d2 <= max_offroad * max_offroad ? "on" : "OFF");
        }
        if (best_d2 <= max_offroad * max_offroad) {
            last_good_x = px; last_good_z = pz; have_good = 1;
        } else if (have_good) {
            /* Put the car back and stop it. Only scrubbing speed let it
             * keep skating along the barrier and, at a gap in the road
             * vertices, slip through into the harbour basin — from where
             * the circuit reads as a distant ring and the game looks
             * broken when it is not. */
            PMEMF(PHYS_BODY + 0x10) = last_good_x;
            PMEMF(PHYS_BODY + 0x14) = last_good_z;
            PMEMF(PHYS_BODY + 0x1C) = 0.0f;
        }
    }

    /* Baseline last: it must record where the car ENDED UP after every
     * correction. Taking it before the road constraint made the guard
     * "restore" the rejected off-road position on the following frame, so
     * the two fought and the car crept outwards anyway — caught by
     * test_road_constraint_blocks_offroad. */
    s_guard_x = PMEMF(PHYS_BODY + 0x10);
    s_guard_z = PMEMF(PHYS_BODY + 0x14);
    s_guard_valid = 1;
}

// ═══════════════════════════════════════════════════════════════
//  Native Linux game frame pump
// ═══════════════════════════════════════════════════════════════

void game_frame_pump(void) {
    extern void burnout3_kernel_service_resource_worker(void);
    burnout3_kernel_service_resource_worker();

    // ── Frame timing (~60 fps throttle) ────────────────────────
    //
    // The throttle is suppressed until the game has reached its menu
    // state (state >= 5). During boot the bridge pumps frames in a
    // tight loop so the game's state machine advances; once the menu
    // is rendering we throttle to ~60 Hz.
    static uint64_t last_time_ns = 0;
    static int first_frame = 1;

    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    uint64_t now_ns = (uint64_t)now.tv_sec * 1000000000ULL + (uint64_t)now.tv_nsec;

    int throttle_enabled = (MEM32(0x4D53B8) >= 5);
    if (first_frame) {
        last_time_ns = now_ns;
        first_frame = 0;
        // Unblock the game thread's two init loops:
        //
        // 1. sub_00156400's first loop calls sub_001D9420() which reads
        //    MEM32(0x4D64D8) to get a RenderWare object pointer. This is
        //    BSS (zero-initialized) and the loop exits only when
        //    sub_001D9420 returns non-zero — which can't happen with a
        //    null pointer.  Point it at the RenderCtx rw_state_init
        //    already set up so the loop exits after the first frame.
        //
        // 2. Second loop spins on MEM8(0x4D5378) == 0.  Unblocked below.
        MEM32(0x4D64D8) = 0x4D6170;  // RenderCtx from rw_state_init
        MEM8(0x4D5378) = 1;          // unblock second init spin-wait
        if (throttle_enabled) return;
    }

    float frame_dt = 1.0f / 60.0f;
    if (throttle_enabled) {
        uint64_t elapsed_ns = now_ns - last_time_ns;
        if (elapsed_ns < 16666667ULL) {
            return;
        }
        frame_dt = (float)elapsed_ns / 1000000000.0f;
        if (frame_dt > 0.25f) frame_dt = 0.25f;
        last_time_ns = now_ns;
    }

    s_work_frames++;

    // ── 'R' key: force race launch ─────────────────────────────
    if (GetAsyncKeyState(VK_R)) {
        // Game thread handles race state; write the pending-state
        // word to force a transition.
        if (MEM32(0x4D53B8) < 5) {
            MEM32(0x4D53B4) = 5;
        }
    }

    // ── Frontend / menu rendering ─────────────────────────────
    // The generated WinMain is one-shot initialisation, so this pump owns
    // both frontend update and rendering.  State 5 means menus; treating
    // it as gameplay made the frontend disappear as soon as the bridge
    // marked its 600-frame boot countdown complete.
    extern void fe_menu_update(float dt);
    extern int fe_menu_is_racing(void);
    extern int fe_menu_render_frame(void);

    int is_racing = fe_menu_is_racing();
    if (!is_racing)
        MEM32(0x4D53B8) = 5;

    /* In race mode this advances the state transition and handles Back;
     * in frontend mode it decodes intros and processes navigation. */
    fe_menu_update(frame_dt);
    is_racing = fe_menu_is_racing();

    if (!is_racing) {
        MEM32(0x4D53B8) = 5;
        fe_menu_render_frame();
        return;
    }

    // ── Gameplay input injection ───────────────────────────────
    int key_w     = (GetAsyncKeyState('W') || GetAsyncKeyState(VK_UP))    ? 1 : 0;
    int key_s     = (GetAsyncKeyState('S') || GetAsyncKeyState(VK_DOWN))  ? 1 : 0;
    int key_a     = (GetAsyncKeyState('A') || GetAsyncKeyState(VK_LEFT))  ? 1 : 0;
    int key_d     = (GetAsyncKeyState('D') || GetAsyncKeyState(VK_RIGHT)) ? 1 : 0;
    int key_shift = GetAsyncKeyState(VK_SHIFT) ? 1 : 0;
    int key_enter = GetAsyncKeyState(VK_RETURN) ? 1 : 0;
    int key_esc   = GetAsyncKeyState(VK_ESCAPE) ? 1 : 0;

    XINPUT_STATE xi;
    int pad_connected = (XInputGetState(0, &xi) == 0);

    float throttle = 0.0f;
    float brake    = 0.0f;
    if (key_w)      throttle = 1.0f;
    if (key_s)      brake    = 1.0f;
    if (pad_connected) {
        float rt = (float)xi.bRightTrigger / 255.0f;
        float lt = (float)xi.bLeftTrigger  / 255.0f;
        if (rt > throttle) throttle = rt;
        if (lt > brake)    brake    = lt;
    }

    float steer = 0.0f;
    if (key_a)      steer = -1.0f;
    if (key_d)      steer =  1.0f;
    if (pad_connected) {
        float pad_steer = (float)xi.sThumbLX / 32767.0f;
        if      (pad_steer < -1.0f) pad_steer = -1.0f;
        else if (pad_steer >  1.0f) pad_steer =  1.0f;
        if (pad_steer != 0.0f) steer = pad_steer;
    }

    float boost = 0.0f;
    if (key_shift) boost = 1.0f;
    if (pad_connected && (xi.wButtons & XINPUT_GAMEPAD_A)) boost = 1.0f;

    // ── Racing: native physics + 3D render ────────────────────
    if (is_racing) {
        /* Generation, not just the flag: back-to-back races need fresh
         * track/car setup. The game's state machine owns race state. */
        static unsigned s_race_gen = 0;
        unsigned gen = MEM32(0x4D53B8);
        if (gen != s_race_gen) { s_race_gen = gen; s_race_ready = 0; }

        if (!s_race_ready) b3_race_begin();

        b3_drive_physics(frame_dt, throttle, brake, steer, boost > 0.0f);

        IDirect3DDevice8 *dev = xbox_GetD3DDevice();
        if (dev) {
            struct timespec r0, r1;
            const int time_it = getenv("B3_FRAME_TIME") != NULL;
            if (time_it) clock_gettime(CLOCK_MONOTONIC, &r0);
            dev->lpVtbl->BeginScene(dev);
            rw_gameplay_render();
            dev->lpVtbl->EndScene(dev);
            if (time_it) {
                static int rc = 0;
                clock_gettime(CLOCK_MONOTONIC, &r1);
                if (rc++ % 30 == 0)
                    fprintf(stderr, "[FRAME] gameplay render %.1fms\n",
                            (double)(r1.tv_sec - r0.tv_sec) * 1000.0 +
                            (double)(r1.tv_nsec - r0.tv_nsec) / 1e6);
            }
        }
    } else {
        s_race_ready = 0;  // next race respawns at the start line
    }

    // ── Inject into Xbox memory ────────────────────────────────
    // These addresses correspond to the game's input accumulators.
    // 0x4D652C = throttle force, 0x4D6B20 = steer left force,
    // 0x4D6B24 = steer right force, 0x4D6B28 = brake force.
    // 0x5FFD0C = boost state.

    // Scale factors — ensure non-zero for physics engine
    float scale_forward  = *(float *)&MEM32(0x557870);
    float scale_sideways = *(float *)&MEM32(0x3B1C40);
    float scale_angular  = *(float *)&MEM32(0x5592C8);
    if (scale_forward  < 0.001f) scale_forward  = 1.0f;
    if (scale_sideways < 0.001f) scale_sideways = 1.0f;
    if (scale_angular  < 0.001f) scale_angular  = 1.0f;

    // Force throttle
    if (throttle > 0.0f) {
        MEM32(0x4D652C) = *(uint32_t *)&throttle;
        // Forward velocity: push through scale factor
        float fwd_vel = throttle * 0.5f;
        uint32_t vel_ptr = MEM32(0x557880);
        if (vel_ptr) {
            MEM32(vel_ptr + 0x2C) = *(uint32_t *)&fwd_vel;
        }
    }

    // Force steering
    float steer_left  = (steer < 0.0f) ? -steer : 0.0f;
    float steer_right = (steer > 0.0f) ?  steer : 0.0f;
    MEM32(0x4D6B20) = *(uint32_t *)&steer_left;
    MEM32(0x4D6B24) = *(uint32_t *)&steer_right;

    // Force brake
    if (brake > 0.0f) {
        MEM32(0x4D6B28) = *(uint32_t *)&brake;
    }

    // Force boost
    if (boost > 0.0f) {
        MEM32(0x5FFD0C) = 1;
    }

    // ── Force non-zero velocity vector (anti-stuck) ────────────
    // The physics engine needs valid velocity vectors. If zero,
    // push a small forward velocity to prevent division by zero.
    {
        uint32_t phys_ptr = MEM32(0x557880);
        if (phys_ptr) {
            float vx = *(float *)&MEM32(phys_ptr + 0x2C);
            float vy = *(float *)&MEM32(phys_ptr + 0x30);
            float vz = *(float *)&MEM32(phys_ptr + 0x34);
            if (vx == 0.0f) { vx = 0.001f; MEM32(phys_ptr + 0x2C) = *(uint32_t *)&vx; }
            if (vy == 0.0f) { vy = 0.001f; MEM32(phys_ptr + 0x30) = *(uint32_t *)&vy; }
            if (vz == 0.0f) { vz = 0.001f; MEM32(phys_ptr + 0x34) = *(uint32_t *)&vz; }
        }
    }

    // ── Menu navigation injected into Xbox memory ──────────────
    // The game's own thread processes input for menus. During racing
    // we inject directly into the physics input accumulators.
    if (!is_racing) {
        if (key_enter) MEM8(0x4A1C74) = 1;  // Confirm
        if (key_esc)   MEM8(0x4A1C75) = 1;  // Back
        if (key_w)     MEM8(0x4A1C76) = 1;  // Up
        if (key_s)     MEM8(0x4A1C77) = 1;  // Down
        if (key_a)     MEM8(0x4A1C78) = 1;  // Left
        if (key_d)     MEM8(0x4A1C79) = 1;  // Right

        if (pad_connected) {
            if (xi.wButtons & XINPUT_GAMEPAD_A)           MEM8(0x4A1C74) = 1;
            if (xi.wButtons & XINPUT_GAMEPAD_B)           MEM8(0x4A1C75) = 1;
            if (xi.wButtons & XINPUT_GAMEPAD_DPAD_UP)     MEM8(0x4A1C76) = 1;
            if (xi.wButtons & XINPUT_GAMEPAD_DPAD_DOWN)   MEM8(0x4A1C77) = 1;
            if (xi.wButtons & XINPUT_GAMEPAD_DPAD_LEFT)   MEM8(0x4A1C78) = 1;
            if (xi.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT)  MEM8(0x4A1C79) = 1;
        }
    }

    // ── 'G' key: toggle render chain ───────────────────────────
    static int g_was_down = 0;
    int g_down = GetAsyncKeyState(VK_G) ? 1 : 0;
    if (g_down && !g_was_down) {
        g_gen_render_chain_enabled = !g_gen_render_chain_enabled;
    }
    g_was_down = g_down;
}
