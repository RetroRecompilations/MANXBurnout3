/*
 * NV2A Push Buffer Replay — Multi-State Menu System
 *
 * Replays captured push buffer data through the PGRAPH→D3D11 translator.
 * Supports multiple menu states captured from xemu, switching between them
 * based on the game's actual menu navigation state.
 *
 * Captured states:
 *   0 = main_menu      (WORLD TOUR / SINGLE EVENT / MULTIPLAYER / XBOX LIVE / DRIVER DETAILS)
 *   1 = world_tour      (USA / EUROPE / FAR EAST)
 *   2 = single_event    (RACE / TIME ATTACK / ROAD RAGE / CRASH)
 *   3 = race_setup      (Region / Track / Rivals)
 *   4 = time_attack     (Region / Track)
 *   5 = road_rage        (Region / Track)
 *   6 = crash_select    (100 crash junctions)
 *   7 = driver_details  (Progress / Rewards / Records / Profile / Settings / Training / Extras)
 */

#include "nv2a_pgraph_d3d11.h"
#include "nv2a_state.h"
#include <stdio.h>
#include <string.h>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "../d3d/d3d8_xbox.h"

/* Captured push buffer data for each menu state */
#include "menu_pushbuffer_data.h"
#include "menu_pb_main_menu.h"
#include "menu_pb_world_tour.h"
#include "menu_pb_single_event.h"
#include "menu_pb_race_setup.h"
#include "menu_pb_time_attack.h"
#include "menu_pb_road_rage.h"
#include "menu_pb_crash_select.h"
#include "menu_pb_driver_details.h"

/* Push buffer command encoding */
#define PB_INC_MASK      0xE0030003
#define PB_INC_MATCH     0x00000000
#define PB_NONINC_MASK   0xE0030003
#define PB_NONINC_MATCH  0x40000000

/* Menu state enum */
enum {
    MENU_MAIN = 0,
    MENU_WORLD_TOUR,
    MENU_SINGLE_EVENT,
    MENU_RACE_SETUP,
    MENU_TIME_ATTACK,
    MENU_ROAD_RAGE,
    MENU_CRASH_SELECT,
    MENU_DRIVER_DETAILS,
    MENU_COUNT
};

static const char *menu_names[] = {
    "Main Menu", "World Tour", "Single Event", "Race Setup",
    "Time Attack", "Road Rage", "Crash Select", "Driver Details"
};

/* Push buffer data table */
static const uint32_t *menu_pb_data[MENU_COUNT];
static uint32_t menu_pb_dwords[MENU_COUNT];

static int g_replay_active = 0;
static uint32_t g_replay_frame = 0;
static int g_current_menu = MENU_MAIN;
static int g_prev_menu = -1;
static LARGE_INTEGER g_replay_start_time;
static LARGE_INTEGER g_replay_freq;

/* Xbox memory access */
extern ptrdiff_t g_xbox_mem_offset;
#define RMEM32(addr) (*(volatile uint32_t *)((uintptr_t)(addr) + g_xbox_mem_offset))

static void init_pb_table(void)
{
    menu_pb_data[MENU_MAIN]           = menu_pb_main_menu;
    menu_pb_dwords[MENU_MAIN]         = MENU_PB_MAIN_MENU_DWORDS;

    menu_pb_data[MENU_WORLD_TOUR]     = menu_pb_world_tour;
    menu_pb_dwords[MENU_WORLD_TOUR]   = MENU_PB_WORLD_TOUR_DWORDS;

    menu_pb_data[MENU_SINGLE_EVENT]   = menu_pb_single_event;
    menu_pb_dwords[MENU_SINGLE_EVENT] = MENU_PB_SINGLE_EVENT_DWORDS;

    menu_pb_data[MENU_RACE_SETUP]     = menu_pb_race_setup;
    menu_pb_dwords[MENU_RACE_SETUP]   = MENU_PB_RACE_SETUP_DWORDS;

    menu_pb_data[MENU_TIME_ATTACK]    = menu_pb_time_attack;
    menu_pb_dwords[MENU_TIME_ATTACK]  = MENU_PB_TIME_ATTACK_DWORDS;

    menu_pb_data[MENU_ROAD_RAGE]      = menu_pb_road_rage;
    menu_pb_dwords[MENU_ROAD_RAGE]    = MENU_PB_ROAD_RAGE_DWORDS;

    menu_pb_data[MENU_CRASH_SELECT]   = menu_pb_crash_select;
    menu_pb_dwords[MENU_CRASH_SELECT] = MENU_PB_CRASH_SELECT_DWORDS;

    menu_pb_data[MENU_DRIVER_DETAILS] = menu_pb_driver_details;
    menu_pb_dwords[MENU_DRIVER_DETAILS] = MENU_PB_DRIVER_DETAILS_DWORDS;
}

/*
 * Detect current menu state.
 * Uses fe_menu.c state machine (driven by keyboard/gamepad input)
 * with number key overrides for direct access.
 */
extern int fe_menu_get_pb_state(void);

static int detect_menu_state(void)
{
    /* Number key overrides for direct access */
    if (GetAsyncKeyState('1') & 0x8000) return MENU_MAIN;
    if (GetAsyncKeyState('2') & 0x8000) return MENU_WORLD_TOUR;
    if (GetAsyncKeyState('3') & 0x8000) return MENU_SINGLE_EVENT;
    if (GetAsyncKeyState('4') & 0x8000) return MENU_RACE_SETUP;
    if (GetAsyncKeyState('5') & 0x8000) return MENU_TIME_ATTACK;
    if (GetAsyncKeyState('6') & 0x8000) return MENU_ROAD_RAGE;
    if (GetAsyncKeyState('7') & 0x8000) return MENU_CRASH_SELECT;
    if (GetAsyncKeyState('8') & 0x8000) return MENU_DRIVER_DETAILS;

    /* Auto-detect from fe_menu state machine */
    int pb_state = fe_menu_get_pb_state();
    if (pb_state >= 0 && pb_state < MENU_COUNT)
        return pb_state;

    return g_current_menu;
}

/*
 * Parse and dispatch push buffer commands through the D3D11 translator.
 */
static void replay_pushbuffer(const uint32_t *data, uint32_t num_dwords)
{
    uint32_t pos = 0;
    uint32_t method_count = 0;
    uint32_t draw_count = 0;

    while (pos < num_dwords) {
        uint32_t header = data[pos];

        if (header == 0) { pos++; continue; }

        /* Increasing method */
        if ((header & PB_INC_MASK) == PB_INC_MATCH) {
            uint32_t count = (header >> 18) & 0x7FF;
            uint32_t method = header & 0x1FFC;
            uint32_t subchannel = (header >> 13) & 7;

            if (count == 0 || pos + 1 + count > num_dwords) { pos++; continue; }

            for (uint32_t i = 0; i < count; i++) {
                pgraph_d3d11_method(subchannel, method + i * 4, data[pos + 1 + i]);
                method_count++;
            }
            pos += 1 + count;
            if (method == 0x17FC && data[pos - count] != 0) draw_count++;
        }
        /* Non-increasing method */
        else if ((header & PB_NONINC_MASK) == PB_NONINC_MATCH) {
            uint32_t count = (header >> 18) & 0x7FF;
            uint32_t method = header & 0x1FFC;
            uint32_t subchannel = (header >> 13) & 7;

            if (count == 0 || pos + 1 + count > num_dwords) { pos++; continue; }

            for (uint32_t i = 0; i < count; i++) {
                pgraph_d3d11_method(subchannel, method, data[pos + 1 + i]);
                method_count++;
            }
            pos += 1 + count;
        }
        else { pos++; }
    }

    g_replay_frame++;
    if (g_replay_frame <= 5 || (g_replay_frame % 300) == 0) {
        PgraphD3D11Stats stats;
        pgraph_d3d11_get_stats(&stats);
        fprintf(stderr, "[PB-REPLAY] Frame %u [%s]: %u methods, %u draws, "
                "translator draws=%u verts=%u\n",
                g_replay_frame, menu_names[g_current_menu],
                method_count, draw_count,
                stats.draw_calls, stats.vertices_submitted);
    }

    pgraph_d3d11_flush();
}

/*
 * Draw a cursor highlight overlay using D3D8 DrawPrimitiveUP.
 * Renders a semi-transparent orange bar at the selected menu item position.
 */
extern IDirect3DDevice8 *d3d8_GetDevice(void);
extern int fe_menu_get_pb_state(void);

/* Per-menu item positions (Y coordinates for each cursor position) */
/* Main menu: 5 items (WORLD TOUR, SINGLE EVENT, MULTIPLAYER, XBOX LIVE, DRIVER DETAILS) */
static const float main_menu_y[] = { 200, 240, 280, 320, 360 };
/* Single Event: 4 items */
static const float single_event_y[] = { 220, 260, 300, 340 };

static void draw_cursor_overlay(int menu, int cursor)
{
    IDirect3DDevice8 *dev = d3d8_GetDevice();
    if (!dev) return;

    /* Determine Y position based on menu and cursor */
    float y = 0;
    int valid = 0;
    if (menu == MENU_MAIN && cursor < 5) {
        y = main_menu_y[cursor];
        valid = 1;
    } else if (menu == MENU_SINGLE_EVENT && cursor < 4) {
        y = single_event_y[cursor];
        valid = 1;
    }
    /* Other sub-menus don't have cursor navigation yet */
    if (!valid) return;

    /* Draw a semi-transparent highlight bar */
    float x1 = 120, x2 = 520;
    float y1 = y - 4, y2 = y + 22;
    uint32_t color = 0x40FF8800;  /* semi-transparent orange */

    struct { float x, y, z, rhw; uint32_t color; } verts[6] = {
        { x1, y1, 0, 1, color }, { x2, y1, 0, 1, color }, { x1, y2, 0, 1, color },
        { x1, y2, 0, 1, color }, { x2, y1, 0, 1, color }, { x2, y2, 0, 1, color },
    };

    dev->lpVtbl->BeginScene(dev);
    dev->lpVtbl->SetTexture(dev, 0, NULL);
    dev->lpVtbl->SetRenderState(dev, 7, 0);    /* D3DRS_ZENABLE = FALSE */
    dev->lpVtbl->SetRenderState(dev, 27, 1);   /* D3DRS_ALPHABLENDENABLE = TRUE */
    dev->lpVtbl->SetRenderState(dev, 19, 5);   /* D3DRS_SRCBLEND = SRCALPHA */
    dev->lpVtbl->SetRenderState(dev, 20, 6);   /* D3DRS_DESTBLEND = INVSRCALPHA */
    dev->lpVtbl->DrawPrimitiveUP(dev, 4, 2, verts, 20); /* TRIANGLELIST, 2 tris */
    dev->lpVtbl->EndScene(dev);
}

/*
 * Called once per frame when replay is active.
 * Detects menu state and replays the appropriate push buffer.
 */
void nv2a_pb_replay_frame(void)
{
    if (!g_replay_active) return;

    /* Detect and potentially switch menu state */
    int new_menu = detect_menu_state();
    if (new_menu != g_current_menu) {
        fprintf(stderr, "[PB-REPLAY] Menu switch: %s -> %s\n",
                menu_names[g_current_menu], menu_names[new_menu]);
        g_current_menu = new_menu;
    }

    /* Inject inherited texture state (font atlas) */
    pgraph_d3d11_method(0, 0x1B00, 0x021C4100);
    pgraph_d3d11_method(0, 0x1B08, 0x40010303);

    /* Replay the current menu state's push buffer */
    const uint32_t *pb = menu_pb_data[g_current_menu];
    uint32_t dwords = menu_pb_dwords[g_current_menu];

    if (pb && dwords > 0) {
        /* For the main menu, use the original data with chyron handling */
        if (g_current_menu == MENU_MAIN) {
            /* Replay in segments, skipping chyron (Draw 5) for re-draw with scroll */
            #define CHYRON_BEGIN_DWORD  6175
            #define CHYRON_END_DWORD    7455
            #define CHYRON_INLINE_DATA  6178
            #define CHYRON_INLINE_COUNT 1275

            replay_pushbuffer(menu_pushbuffer_data, CHYRON_BEGIN_DWORD);
            replay_pushbuffer(&menu_pushbuffer_data[CHYRON_END_DWORD],
                              MENU_PB_DWORDS - CHYRON_END_DWORD);

            /* Re-draw chyron on top with scroll animation */
            pgraph_d3d11_method(0, 0x1B00, 0x021C4100);
            pgraph_d3d11_method(0, 0x1B08, 0x40010303);

            LARGE_INTEGER now;
            QueryPerformanceCounter(&now);
            double elapsed = (double)(now.QuadPart - g_replay_start_time.QuadPart)
                           / (double)g_replay_freq.QuadPart;
            pgraph_d3d11_set_chyron_scroll((uint32_t)(elapsed * 50.0));

            pgraph_d3d11_method(0, 0x17FC, 6);
            for (uint32_t i = 0; i < CHYRON_INLINE_COUNT; i++)
                pgraph_d3d11_method(0, 0x1818, menu_pushbuffer_data[CHYRON_INLINE_DATA + i]);
            pgraph_d3d11_method(0, 0x17FC, 0);
            pgraph_d3d11_set_chyron_scroll(0);
        } else {
            /* Other menus: replay the full captured push buffer */
            replay_pushbuffer(pb, dwords);
        }
    }

    /* Draw cursor highlight overlay on top of the PB replay */
    {
        extern int g_fe_cursor;  /* from fe_menu.c */
        draw_cursor_overlay(g_current_menu, g_fe_cursor);
    }
}

void nv2a_pb_replay_set_active(int active)
{
    g_replay_active = active;
    g_replay_frame = 0;
    g_current_menu = MENU_MAIN;

    extern volatile int g_suppress_present;
    g_suppress_present = active ? 1 : 0;

    if (active) {
        init_pb_table();
        pgraph_d3d11_init();
        QueryPerformanceFrequency(&g_replay_freq);
        QueryPerformanceCounter(&g_replay_start_time);
        fprintf(stderr, "[PB-REPLAY] Multi-state replay ENABLED (%d menu states)\n", MENU_COUNT);
        fprintf(stderr, "[PB-REPLAY] Keys 1-8 switch menu states:\n");
        for (int i = 0; i < MENU_COUNT; i++)
            fprintf(stderr, "  %d = %s (%u dwords)\n", i + 1, menu_names[i],
                    menu_pb_dwords[i]);
    } else {
        fprintf(stderr, "[PB-REPLAY] Push buffer replay disabled\n");
    }
}

int nv2a_pb_replay_is_active(void)
{
    return g_replay_active;
}
