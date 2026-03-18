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

#ifdef __cplusplus
}
#endif
