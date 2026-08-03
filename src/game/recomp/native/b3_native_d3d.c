/**
 * The seam: the game's D3D8 calls, forwarded to MANX's Vulkan
 * backend.
 *
 * These are strong definitions that override the recording stubs in
 * b3_native_runtime.c. Each reads its arguments off the emulated stack
 * using the convention the render test pins (argument N at esp+4*(N+1),
 * because the caller pushes right-to-left then a return-address slot) and
 * calls through the IDirect3DDevice8 that vulkan_d3d8 provides.
 *
 * This file is what makes the game's own renderer produce pixels rather
 * than a log.
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "b3_native_runtime.h"
#include "../../../d3d/d3d8_xbox.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern IDirect3DDevice8 *xbox_GetD3DDevice(void);

#define ARG(n)  MEM32(g_esp + 4 * ((n) + 1))

static float argf(int n) { uint32_t v = ARG(n); float f; memcpy(&f, &v, 4); return f; }

/* ── Stack management ──────────────────────────────────────────────
 * Xbox D3D8 is __stdcall: the CALLEE removes its arguments. Every binding
 * must pop the stack exactly as the function it replaces did, or the
 * simulated esp drifts and every later argument read lands in the wrong
 * place.  Argument N is at esp+4*(N+1) because the caller pushes
 * right-to-left then a return-address slot, so the callee's `ret N` leaves
 * N bytes of arguments plus the 4-byte return slot. */
#define XDK_RETURN(nargs) do { g_esp += 4 * ((nargs) + 1); } while (0)

/* Xbox D3DCLEAR bits differ from desktop D3D8: the Xbox uses 0x01/0x02
 * for the depth and stencil parts of its combined Z buffer and 0xF0 for
 * the four colour channels. Burnout 3 asks for 0x83 — colour is the 0x80,
 * depth and stencil the 0x03. */
#define XBOX_CLEAR_ZBUFFER  0x01
#define XBOX_CLEAR_STENCIL  0x02
#define XBOX_CLEAR_TARGET   0x80

/* ── Vertex buffer handle management ───────────────────────────────
 * The Xbox CreateVertexBuffer2 takes only a Length and returns a resource
 * pointer in eax.  Lock2 takes that pointer and returns the data VA.
 * SetStreamSource takes the pointer and binds the VB.  We keep a small
 * handle table mapping slot indices to real D3D8 vertex buffers; the slab
 * base address makes them valid-looking Xbox addresses. */
#define MAX_VB_SLOTS 32
#define VB_SLAB_BASE 0x0B000000u

typedef struct {
    IDirect3DVertexBuffer8 *vb;
    uint32_t length;
    int      used;
} vb_slot_t;

static vb_slot_t s_vbs[MAX_VB_SLOTS];

static int vb_alloc(void) {
    for (int i = 0; i < MAX_VB_SLOTS; i++)
        if (!s_vbs[i].used) { s_vbs[i].used = 1; return i; }
    return -1;
}

static vb_slot_t *vb_get(uint32_t handle) {
    if (handle < VB_SLAB_BASE || handle >= VB_SLAB_BASE + MAX_VB_SLOTS * 4)
        return NULL;
    unsigned slot = (handle - VB_SLAB_BASE) / 4;
    if (slot >= MAX_VB_SLOTS || !s_vbs[slot].used) return NULL;
    return &s_vbs[slot];
}

static uint32_t vb_handle(int slot) {
    return VB_SLAB_BASE + (unsigned)slot * 4;
}

/* ═══════════════════════════════════════════════════════════════════
 *  D3D8 bindings
 * ═══════════════════════════════════════════════════════════════════ */

/* ── Clear ─────────────────────────────────────────────────────── */
void sub_0034C2E0(void)   /* D3DDevice_Clear(Count, pRects, Flags, Colour, Z, Stencil) */
{
    g_b3_clear.count   = ARG(0);
    g_b3_clear.rects   = ARG(1);
    g_b3_clear.flags   = ARG(2);
    g_b3_clear.colour  = ARG(3);
    g_b3_clear.z       = argf(4);
    g_b3_clear.stencil = ARG(5);
    g_b3_clear.valid   = 1;

    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) { XDK_RETURN(6); return; }

    DWORD flags = 0;
    if (g_b3_clear.flags & XBOX_CLEAR_TARGET)  flags |= D3DCLEAR_TARGET;
    if (g_b3_clear.flags & XBOX_CLEAR_ZBUFFER) flags |= D3DCLEAR_ZBUFFER;
    if (flags)
        dev->lpVtbl->Clear(dev, 0, NULL, flags,
                           (D3DCOLOR)g_b3_clear.colour, g_b3_clear.z,
                           g_b3_clear.stencil);
    XDK_RETURN(6);
}

/* ── SetRenderTarget ─────────────────────────────────────────────── */
void sub_0034CBF0(void)   /* D3DDevice_SetRenderTarget(pRenderTarget, pZStencil) — 8-byte pop */
{
    XDK_RETURN(2);
}

/* ── SetTransform ────────────────────────────────────────────────── */
void sub_0034D410(void)   /* D3DDevice_SetTransform(State, pMatrix) */
{
    g_b3_xform.state  = ARG(0);
    g_b3_xform.matrix = ARG(1);
    g_b3_xform.valid  = 1;

    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (dev && g_b3_xform.matrix >= 0x10000u)
        dev->lpVtbl->SetTransform(dev, (D3DTRANSFORMSTATETYPE)g_b3_xform.state,
                                  (const D3DMATRIX *)XBOX_PTR(g_b3_xform.matrix));
    XDK_RETURN(2);
}

/* ── SetViewport ────────────────────────────────────────────────── */
void sub_0034D530(void)   /* D3DDevice_SetViewport(pViewport) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    uint32_t vp_va = ARG(0);
    if (dev && vp_va >= 0x10000u)
        dev->lpVtbl->SetViewport(dev, (const D3DVIEWPORT8 *)XBOX_PTR(vp_va));
    XDK_RETURN(1);
}

/* ── SetTexture ──────────────────────────────────────────────────── */
void sub_0034DCA0(void)   /* D3DDevice_SetTexture(Stage, pTexture) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    uint32_t tex_va = ARG(1);
    if (dev && tex_va >= 0x10000u)
        dev->lpVtbl->SetTexture(dev, ARG(0),
                                (IDirect3DBaseTexture8 *)XBOX_PTR(tex_va));
    XDK_RETURN(2);
}

/* ── SetPalette ─────────────────────────────────────────────────── */
void sub_0034DE60(void)   /* D3DDevice_SetPalette(Stage, pPalette) */
{
    XDK_RETURN(2);
}

/* ── SetPixelShader ──────────────────────────────────────────────── */
void sub_0034E790(void)   /* D3DDevice_SetPixelShader(pPixelShader) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    uint32_t ps_va = ARG(0);
    if (dev && ps_va >= 0x10000u)
        dev->lpVtbl->SetPixelShader(dev, (DWORD)ps_va);
    XDK_RETURN(1);
}

/* ── SetPixelShaderConstant ────────────────────────────────────────
 * Xbox `ret 4` = one stack argument; the other two are registers. */
void sub_0034E9A0(void)   /* D3DDevice_SetPixelShaderConstant(Start, pData, Count) */
{
    XDK_RETURN(1);  /* pop=4: ret 4, not three stack args */
}

/* ── SetStreamSource ─────────────────────────────────────────────── */
void sub_0034EDB0(void)   /* SetStreamSource(Stream, pVB, Stride) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    vb_slot_t *vb = vb_get(ARG(1));
    if (dev && vb && vb->vb)
        dev->lpVtbl->SetStreamSource(dev, ARG(0), vb->vb, ARG(2));
    XDK_RETURN(3);
}

/* ── State flush helpers ───────────────────────────────────────────
 * These are NV2A push-buffer flush operations that have no meaning on
 * a Vulkan backend.  The game calls them to synchronise the NV2A command
 * stream; we just clean the stack. */
void sub_0034F5B0(void) { XDK_RETURN(0); }
void sub_003558A0(void) { XDK_RETURN(0); }

/* ── SetVertexShader ───────────────────────────────────────────────
 * D3DDevice_SetVertexShader(Handle) stores the FVF handle. D3D8LTCG's
 * format setup reads it back from device+0x794 and walks its 16 attribute
 * slots to derive the vertex layout; with this call left as a recording
 * stub that field stays zero and the draw path is reduced to guessing. */
void sub_0034F6D0(void)   /* D3DDevice_SetVertexShader(Handle) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (dev) dev->lpVtbl->SetVertexShader(dev, ARG(0));
    XDK_RETURN(1);
}

/* ── SetVertexShaderConstant1 ──────────────────────────────────────
 * Register convention (pop=0): both args in registers, nothing on stack. */
void sub_0034F840(void)   /* D3DDevice_SetVertexShaderConstant1(Reg, pData) */
{
    XDK_RETURN(0);  /* pop=0: register convention */
}

/* ── SetVertexShaderConstant4 ──────────────────────────────────────
 * Register convention (pop=0): args in registers, nothing on stack. */
void sub_0034F8F0(void)   /* D3DDevice_SetVertexShaderConstant4(Reg, pData, Count) */
{
    XDK_RETURN(0);  /* pop=0: register convention */
}

/* ── SetVertexShaderConstantNotInlineFast ──────────────────────────
 * pop=4 (ret 4): one stack argument. */
void sub_0034F9A0(void)   /* D3DDevice_SetVertexShaderConstantNotInlineFast(Reg, pData) */
{
    XDK_RETURN(1);  /* pop=4: ret 4 */
}

/* ── CreateVertexBuffer2 ──────────────────────────────────────────
 * Xbox signature: Length → resource pointer in eax.
 * We create a real D3D8 vertex buffer via vulkan_d3d8 and return a slab
 * handle that Lock2 and SetStreamSource resolve. */
void sub_0034FBC0(void)   /* CreateVertexBuffer2(Length) */
{
    uint32_t length = ARG(0);
    int slot = vb_alloc();
    if (slot < 0) { g_eax = 0; XDK_RETURN(1); return; }

    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) { s_vbs[slot].used = 0; g_eax = 0; XDK_RETURN(1); return; }

    IDirect3DVertexBuffer8 *vb = NULL;
    HRESULT hr = dev->lpVtbl->CreateVertexBuffer(dev, length,
        D3DUSAGE_WRITEONLY, 0, D3DPOOL_MANAGED, &vb);
    if (FAILED(hr) || !vb) {
        s_vbs[slot].used = 0;
        g_eax = 0;
        XDK_RETURN(1);
        return;
    }

    s_vbs[slot].vb     = vb;
    s_vbs[slot].length = length;
    g_eax = vb_handle(slot);
    XDK_RETURN(1);
}

/* ── VertexBuffer_Lock2 ───────────────────────────────────────────
 * Xbox signature: (pVB, Flags) → data VA in eax.
 * The caller writes vertex data to the returned address, then the draw
 * path reads it back. */
void sub_0034FC10(void)   /* VertexBuffer_Lock2(pVB, Flags) */
{
    vb_slot_t *vb = vb_get(ARG(0));
    if (!vb || !vb->vb) { g_eax = 0; XDK_RETURN(2); return; }

    BYTE *data = NULL;
    vb->vb->lpVtbl->Lock(vb->vb, 0, vb->length, &data, 0);

    /* Return the host pointer as an Xbox VA so the game can write to it.
     * XBOX_PTR(va) = (void*)((uintptr_t)(va) + g_xbox_mem_offset), so we
     * need: g_eax = (uintptr_t)data - g_xbox_mem_offset.
     *
     * This only works when the host pointer lies inside the Xbox mapping
     * (which it does when the VB staging buffer was allocated through the
     * kernel shim's memory model).  If that assumption breaks, the VA will
     * be zero and writes will fault. */
    {
        uintptr_t base = (uintptr_t)g_xbox_mem_offset;
        uintptr_t off  = (uintptr_t)data - base;
        g_eax = (off < 0xFFFFFFFFu) ? (uint32_t)off : 0;
    }
    XDK_RETURN(2);
}

/* ── DrawVerticesUP ────────────────────────────────────────────────
 * Xbox signature: (Type, Count, pVertexData, Stride). */
void sub_0034FD80(void)   /* DrawVerticesUP(Type, Count, pData, Stride) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    uint32_t data_va = ARG(2);
    if (dev && data_va >= 0x10000u)
        dev->lpVtbl->DrawPrimitiveUP(dev, (D3DPRIMITIVETYPE)ARG(0),
                                     ARG(1), (const void *)XBOX_PTR(data_va), ARG(3));
    XDK_RETURN(4);
}

/* ── DrawIndexedVertices ────────────────────────────────────────────
 * Xbox signature: (Type, Count, pIndexData).
 * The desktop D3D8 DrawIndexedPrimitiveUP needs both vertex and index
 * data. The vertex data is already bound via SetStreamSource; we pass
 * the index data as both for now — the menu primarily uses DrawVerticesUP
 * and this path is only exercised during 3D racing. */
void sub_00350000(void)   /* DrawIndexedVertices(Type, Count, pIndexData) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    uint32_t idx_va = ARG(2);
    if (dev && idx_va >= 0x10000u) {
        const void *idx = (const void *)XBOX_PTR(idx_va);
        dev->lpVtbl->DrawIndexedPrimitiveUP(dev, (D3DPRIMITIVETYPE)ARG(0),
                                            0, ARG(1), ARG(1),
                                            idx, D3DFMT_INDEX16, idx, 0);
    }
    XDK_RETURN(3);
}

/* ── MakeRequestedSpace ────────────────────────────────────────────
 * D3D_MakeRequestedSpace(minSpace, requestedSpace) reserves room in the
 * NV2A push buffer and spin-waits for the GPU to consume what is already
 * queued.  Without a real NV2A, the GPU never advances and the game loops
 * forever.  Report the GPU as fully caught up by copying put into get. */
#define D3D_G_PDEVICE_VA 0x0035FB48u
#define PB_GET_OFFSET    0x2C
#define PB_PUT_OFFSET    0x30

void sub_003518E0(void)   /* MakeRequestedSpace(minSpace, requestedSpace) */
{
    uint32_t device_va = MEM32(D3D_G_PDEVICE_VA);
    uint32_t *d = (uint32_t *)XBOX_PTR(device_va);
    uint32_t requested = ARG(1);
    /* Report the GPU as caught up: the caller needs space up to
     * put + requested, so set put = get + requested and return the
     * old get pointer as the new write position. */
    d[PB_PUT_OFFSET / 4] = d[PB_GET_OFFSET / 4] + requested;
    g_eax = d[PB_GET_OFFSET / 4];
    XDK_RETURN(2);
}

/* ── SetRenderState ──────────────────────────────────────────────── */
void sub_00355390(void)   /* D3DDevice_SetRenderState(State, Value) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (dev)
        dev->lpVtbl->SetRenderState(dev, (D3DRENDERSTATETYPE)ARG(0), ARG(1));
    XDK_RETURN(2);
}

/* ── SetTextureStageState ─────────────────────────────────────────── */
void sub_00355610(void)   /* D3DDevice_SetTextureStageState(Stage, Type, Value) */
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (dev)
        dev->lpVtbl->SetTextureStageState(dev, ARG(0),
                                          (D3DTEXTURESTAGESTATETYPE)ARG(1), ARG(2));
    XDK_RETURN(3);
}


/* Scene brackets. The Vulkan backend records into a command buffer that
 * only becomes a frame between these, exactly as the frame pump does
 * around its render call. */
void b3_scene_begin(void)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (dev) dev->lpVtbl->BeginScene(dev);
}

void b3_scene_end(void)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (dev) dev->lpVtbl->EndScene(dev);
}

/* Direct clear, for proving the backend path independently of the game. */
void b3_device_clear(uint32_t colour)
{
    IDirect3DDevice8 *dev = xbox_GetD3DDevice();
    if (!dev) return;
    dev->lpVtbl->Clear(dev, 0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER,
                       (D3DCOLOR)colour, 1.0f, 0);
}
