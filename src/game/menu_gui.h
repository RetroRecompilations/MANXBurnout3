/**
 * Burnout 3: Takedown - ImGui Menu System
 *
 * Provides both a settings menu (xemu-style overlay) and a debug menu.
 * Toggle with F1 (settings) or F2 (debug). ESC closes any open menu.
 */

#ifndef BURNOUT3_MENU_GUI_H
#define BURNOUT3_MENU_GUI_H

#ifdef __cplusplus
extern "C" {
#endif

/* Initialize ImGui with D3D11 device/context and window handle.
 * Call after D3D device creation. Returns 0 on success. */
int menu_gui_init(void);

/* Shut down ImGui. Call before D3D device destruction. */
void menu_gui_shutdown(void);

/* Process a Win32 message for ImGui input. Returns 1 if ImGui consumed it. */
int menu_gui_wndproc(void *hwnd, unsigned int msg, unsigned long long wparam, long long lparam);

/* Start a new ImGui frame. Call once per frame before rendering. */
void menu_gui_begin_frame(void);

/* Render ImGui draw data. Call after EndScene, before Present. */
void menu_gui_render(void);

/* Toggle visibility of the settings menu */
void menu_gui_toggle_settings(void);

/* Toggle visibility of the debug menu */
void menu_gui_toggle_debug(void);

/* Returns 1 if any menu is currently visible (blocks game input) */
int menu_gui_is_active(void);

#ifdef __cplusplus
}
#endif

#endif /* BURNOUT3_MENU_GUI_H */
