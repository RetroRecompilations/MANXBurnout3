// vulkan_d3d8.h — Standalone Vulkan D3D8 backend for Burnout3.
//
// Creates its own VkInstance/VkDevice/VkRenderPass and implements
// the full Xbox IDirect3DDevice8 COM vtable on Vulkan draw commands.
// GPU-accelerated — no CPU rasterizer.  Cross-platform C99.
//
// Present() submits the command buffer, waits for the GPU, then
// copies the rendered RGBA8 frame back to the host.  MANX
// passes that frame through its own Vulkan presenter via
// present_rgba_frame().
//
// Usage:
//   vulkan_d3d8_init(640, 480);           // GPU device + render target
//   IDirect3D8 *d3d = vulkan_d3d8_get();  // game calls D3D8 COM methods
//   // … per frame …
//   uint8_t *frame = vulkan_d3d8_present(&w, &h);  // GPU renders → RGBA8
//   vulkan_d3d8_shutdown();

#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Create Vulkan instance, device, and a w×h RGBA8 render target.
// Returns 1 on success.
int  vulkan_d3d8_init(int width, int height);

// Destroy all Vulkan resources.
void vulkan_d3d8_shutdown(void);

// Submit the current command buffer, wait for GPU completion, and
// copy the rendered RGBA8 backbuffer to host memory.  Returns a
// pointer valid until the next BeginScene(), or NULL on failure.
// *out_width and *out_height receive the backbuffer dimensions.
const uint8_t *vulkan_d3d8_present(int *out_width, int *out_height);

// The D3D8 factory and device objects the game calls through.
struct IDirect3D8        *vulkan_d3d8_get_d3d8(void);
struct IDirect3DDevice8  *vulkan_d3d8_get_device(void);

// Inject the current input state into the Xbox memory registers
// the recompiled game reads.
void vulkan_d3d8_inject_input(int throttle, int steering, int boost);

// Returns 1 once the game state machine has reached the menu or
// gameplay state (ready to render).
int  vulkan_d3d8_game_ready(void);

#ifdef __cplusplus
}
#endif
