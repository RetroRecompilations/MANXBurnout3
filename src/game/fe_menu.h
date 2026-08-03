/**
 * Burnout 3: Takedown - Frontend Menu Renderer
 *
 * Renders menu UI when the game is in frontend/menu state (camera = 0x4D4008).
 * Uses the loaded Global.txd textures (B3Logo, FE, Buttons, etc.) and im2d-style
 * rendering through our D3D8→D3D11 layer.
 */
#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Set the game data directory (for ovid/ intro FMVs). Call before
 *  fe_menu_init; without it the boot intro is skipped entirely. */
void fe_menu_set_game_dir(const char *dir);

/** Pull decoded intro-movie audio as 48 kHz signed 16-bit stereo PCM.
 *  Returns the number of frames written; callers should silence-fill the
 *  remainder. */
int fe_menu_audio_callback(int16_t *stereo, int max_frames);

/** Initialize the menu system (call after textures are loaded). */
void fe_menu_init(void);

/** Returns 1 if we're currently in a menu state (should render menu instead of gameplay). */
int fe_menu_is_active(void);

/** Render a single menu frame. Returns 1 if menu was rendered. */
int fe_menu_render_frame(void);

/** Process input for menu navigation. Call once per frame. */
void fe_menu_update(float dt);

/** Get the current PB replay menu index (0-7, matches MENU_xxx enum in nv2a_pb_replay.c).
 *  Returns -1 if not in a PB-mapped menu state. */
int fe_menu_get_pb_state(void);

/** Returns 1 if a race is active (gameplay mode). */
int fe_menu_is_racing(void);

/** Stop the current race and return to menus. */
void fe_menu_stop_race(void);

/** Returns 1 once fe_menu_render_frame has produced a frame at least once.
 *  Used by the bridge to know when the recompiled game's state machine has
 *  advanced far enough to render menu UI (game_state == 5). Until the first
 *  render, the bridge drives fe_menu_update unconditionally so the state
 *  machine actually advances from boot-time 0 to menu 5. */
int fe_menu_rendered_once(void);

#ifdef __cplusplus
}
#endif
