/**
 * Xbox D3D8 -> DXVK D3D8 -> Vulkan.
 *
 * The game's own D3D8 calls, forwarded to DXVK's native D3D8 rather than
 * to a hand-written Vulkan backend. DXVK is a complete, maintained D3D8
 * implementation under a zlib licence; what has to be written here is
 * only the difference between *Xbox* D3D8 and desktop D3D8.
 *
 * Nothing Xbox-specific is translated yet — this establishes the device
 * and the calls whose arguments are already decoded. Swizzled textures,
 * register combiners and vertex-shader microcode come later, and the
 * knowledge for them already exists in manx_xbox_texture and
 * vulkan_d3d8.c.
 *
 * DXVK Native picks its window backend at runtime: DXVK_WSI_DRIVER must
 * be set (SDL3 here) or it throws out of CreateD3D9 with an unwind abort
 * that looks like a DXVK bug and is not.
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>

#include <d3d8.h>
#include <SDL3/SDL.h>

#include "b3_native_env.h"

namespace {

SDL_Window       *g_window = nullptr;
IDirect3D8       *g_d3d    = nullptr;
IDirect3DDevice8 *g_device = nullptr;
IDirect3DTexture8 *g_movie_texture = nullptr;
int               g_width  = 640;
int               g_height = 480;
unsigned char    *g_readback = nullptr;
unsigned char    *g_published = nullptr;
std::mutex        g_published_mutex;
unsigned long     g_published_generation = 0;
unsigned char    *g_movie_frame = nullptr;
std::mutex        g_movie_mutex;
unsigned long     g_movie_generation = 0;
unsigned long     g_movie_uploaded_generation = 0;
bool              g_movie_bound = false;
bool              g_movie_requested = false;

} // namespace

extern "C" {

/* Bring up DXVK's D3D8 on a hidden SDL3 window with a lockable back
 * buffer, so a headless test can read the frame back. */
int b3_dxvk_init(int width, int height)
{
    if (g_device) return 1;
    g_width = width;
    g_height = height;

    if (!getenv("DXVK_WSI_DRIVER"))
        setenv("DXVK_WSI_DRIVER", "SDL3", 0);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "b3_dxvk: SDL_Init failed: %s\n", SDL_GetError());
        return 0;
    }
    g_window = SDL_CreateWindow("Burnout 3", width, height,
                                SDL_WINDOW_HIDDEN | SDL_WINDOW_VULKAN);
    if (!g_window) {
        std::fprintf(stderr, "b3_dxvk: no window: %s\n", SDL_GetError());
        return 0;
    }

    g_d3d = Direct3DCreate8(D3D_SDK_VERSION);
    if (!g_d3d) { std::fprintf(stderr, "b3_dxvk: Direct3DCreate8 failed\n"); return 0; }

    D3DPRESENT_PARAMETERS pp{};
    pp.BackBufferWidth        = width;
    pp.BackBufferHeight       = height;
    pp.BackBufferFormat       = D3DFMT_X8R8G8B8;
    pp.BackBufferCount        = 1;
    pp.SwapEffect             = D3DSWAPEFFECT_DISCARD;
    pp.Windowed               = TRUE;
    pp.hDeviceWindow          = (HWND)g_window;
    pp.EnableAutoDepthStencil = TRUE;
    pp.AutoDepthStencilFormat = D3DFMT_D24S8;
    pp.Flags                  = D3DPRESENTFLAG_LOCKABLE_BACKBUFFER;

    /* The booted game drives the device from its own thread while the host
     * reads the back buffer from this one. Without D3DCREATE_MULTITHREADED
     * that is undefined, and it fails silently rather than loudly. */
    HRESULT hr = g_d3d->CreateDevice(0, D3DDEVTYPE_HAL, (HWND)g_window,
                                     D3DCREATE_HARDWARE_VERTEXPROCESSING |
                                     D3DCREATE_MULTITHREADED,
                                     &pp, &g_device);
    if (FAILED(hr) || !g_device) {
        std::fprintf(stderr, "b3_dxvk: CreateDevice failed %#lx\n", (unsigned long)hr);
        return 0;
    }
    g_readback = (unsigned char *)std::calloc((size_t)width * height, 4);
    g_published = (unsigned char *)std::calloc((size_t)width * height, 4);
    g_movie_frame = (unsigned char *)std::calloc((size_t)width * height, 4);

    /* The Xbox D3D startup publishes the active display dimensions through
     * these two Criterion globals.  Frontend construction consumes them to
     * turn its 640x480 design-space coordinates into the RenderWare root
     * transform.  Desktop DXVK never executes that Xbox device callback, so
     * publish the equivalent native device contract here. */
    if (float *guest_width = static_cast<float *>(b3_env_ptr(0x00557870)))
        *guest_width = static_cast<float>(width);
    if (float *guest_height = static_cast<float *>(b3_env_ptr(0x005592C8)))
        *guest_height = static_cast<float>(height);

    std::fprintf(stderr, "b3_dxvk: DXVK D3D8 device up (%dx%d)\n", width, height);
    return 1;
}

void b3_dxvk_shutdown(void)
{
    if (g_movie_texture) { g_movie_texture->Release(); g_movie_texture = nullptr; }
    std::free(g_movie_frame); g_movie_frame = nullptr;
    std::free(g_published); g_published = nullptr;
    std::free(g_readback); g_readback = nullptr;
    if (g_device) { g_device->Release(); g_device = nullptr; }
    if (g_d3d)    { g_d3d->Release();    g_d3d = nullptr; }
    if (g_window) { SDL_DestroyWindow(g_window); g_window = nullptr; }
    SDL_Quit();
}

void *b3_dxvk_device(void) { return g_device; }

/* Presentation decodes on the SDL thread, but D3D texture creation/upload
 * belongs on the XBE render thread. Publish an ordinary CPU copy here; the
 * next retail SetTexture call consumes it below. */
void b3_dxvk_set_movie_frame(const void *bgra, int width, int height)
{
    if (!bgra || !g_movie_frame || width != g_width || height != g_height)
        return;
    std::lock_guard<std::mutex> lock(g_movie_mutex);
    std::memcpy(g_movie_frame, bgra, (size_t)width * height * 4);
    ++g_movie_generation;
}

void b3_dxvk_bind_guest_texture(unsigned stage, int movie_surface)
{
    if (!g_device) return;
    if (stage == 0) g_movie_requested = movie_surface != 0;
    if (!movie_surface) {
        g_device->SetTexture(stage, nullptr);
        if (stage == 0) g_movie_bound = false;
        return;
    }

    std::lock_guard<std::mutex> lock(g_movie_mutex);
    if (!g_movie_generation) {
        g_device->SetTexture(stage, nullptr);
        if (stage == 0) g_movie_bound = false;
        return;
    }
    if (!g_movie_texture) {
        HRESULT hr = g_device->CreateTexture(
            g_width, g_height, 1, 0, D3DFMT_X8R8G8B8,
            D3DPOOL_MANAGED, &g_movie_texture);
        if (FAILED(hr) || !g_movie_texture) return;
    }
    if (g_movie_generation != g_movie_uploaded_generation) {
        D3DLOCKED_RECT locked{};
        if (SUCCEEDED(g_movie_texture->LockRect(0, &locked, nullptr, 0))) {
            for (int y = 0; y < g_height; y++)
                std::memcpy((unsigned char *)locked.pBits +
                                (size_t)y * locked.Pitch,
                            g_movie_frame + (size_t)y * g_width * 4,
                            (size_t)g_width * 4);
            g_movie_texture->UnlockRect(0);
            g_movie_uploaded_generation = g_movie_generation;
        }
    }
    g_device->SetTexture(stage, g_movie_texture);
    if (stage == 0) g_movie_bound = true;
}

int b3_dxvk_movie_texture_bound(void) { return g_movie_bound ? 1 : 0; }

void b3_dxvk_movie_texture_size(int *width, int *height)
{
    if (width) *width = g_width;
    if (height) *height = g_height;
}

void b3_dxvk_refresh_movie_texture(void)
{
    if (g_movie_requested)
        b3_dxvk_bind_guest_texture(0, 1);
}

namespace { bool g_in_scene = false; }

void b3_dxvk_begin(void)
{
    if (g_device && !g_in_scene) { g_device->BeginScene(); g_in_scene = true; }
}
void b3_dxvk_end(void)
{
    if (g_device && g_in_scene) { g_device->EndScene(); g_in_scene = false; }
}

/* The booted game does not call BeginScene — that is a host concept, not
 * something Xbox D3D8 requires, so the game never had a reason to. Desktop
 * D3D8 rejects every draw issued outside a scene, silently as far as the
 * caller can tell. Opening one lazily on the first draw is what makes the
 * game's own submissions land. */
void b3_dxvk_scene_ensure(void) { b3_dxvk_begin(); }

/* Xbox Clear -> desktop Clear. The flag bits differ: the Xbox uses 0x80
 * for the colour buffer and 0x01/0x02 for the depth and stencil halves of
 * its combined Z buffer. */
void b3_dxvk_clear(unsigned xbox_flags, unsigned colour, float z, unsigned stencil)
{
    if (!g_device) return;
    DWORD flags = 0;
    if (xbox_flags & 0x80) flags |= D3DCLEAR_TARGET;
    if (xbox_flags & 0x01) flags |= D3DCLEAR_ZBUFFER;
    if (xbox_flags & 0x02) flags |= D3DCLEAR_STENCIL;
    if (!flags) return;
    g_device->Clear(0, nullptr, flags, (D3DCOLOR)colour, z, stencil);
}

void b3_dxvk_set_transform(unsigned state, const float *matrix)
{
    if (!g_device || !matrix) return;
    g_device->SetTransform((D3DTRANSFORMSTATETYPE)state, (const D3DMATRIX *)matrix);
}

/* Read the back buffer. Returns BGRA rows, or null. */
const unsigned char *b3_dxvk_readback(int *out_w, int *out_h)
{
    if (out_w) *out_w = g_width;
    if (out_h) *out_h = g_height;
    if (!g_device || !g_readback) return nullptr;

    /* A scene opened lazily by a draw has to be closed before the back
     * buffer can be read, or the readback races the commands still in it. */
    b3_dxvk_end();

    IDirect3DSurface8 *back = nullptr;
    if (FAILED(g_device->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &back)) || !back)
        return nullptr;

    D3DLOCKED_RECT lr{};
    const unsigned char *result = nullptr;
    if (SUCCEEDED(back->LockRect(&lr, nullptr, D3DLOCK_READONLY))) {
        for (int y = 0; y < g_height; y++)
            std::memcpy(g_readback + (size_t)y * g_width * 4,
                        (const unsigned char *)lr.pBits + (size_t)y * lr.Pitch,
                        (size_t)g_width * 4);
        back->UnlockRect();
        result = g_readback;
    }
    back->Release();
    return result;
}

/* Publish only at the end of the XBE's retail frame callback. Sampling the
 * live back buffer from the presentation thread catches the clear half of a
 * frame and produces white flashing. This boundary also keeps DXVK access on
 * the game thread; the visible window receives an ordinary CPU copy. */
void b3_dxvk_publish_frame(void)
{
    int width = 0, height = 0;
    const unsigned char *frame = b3_dxvk_readback(&width, &height);
    if (frame && g_published && width == g_width && height == g_height) {
        std::lock_guard<std::mutex> lock(g_published_mutex);
        std::memcpy(g_published, frame, (size_t)width * height * 4);
        ++g_published_generation;
    }
    b3_dxvk_begin();
}

unsigned long b3_dxvk_copy_published(void *destination, size_t capacity,
                                     int *out_w, int *out_h)
{
    const size_t required = (size_t)g_width * g_height * 4;
    std::lock_guard<std::mutex> lock(g_published_mutex);
    if (!destination || !g_published || capacity < required ||
        !g_published_generation)
        return 0;
    std::memcpy(destination, g_published, required);
    if (out_w) *out_w = g_width;
    if (out_h) *out_h = g_height;
    return g_published_generation;
}

} // extern "C"
