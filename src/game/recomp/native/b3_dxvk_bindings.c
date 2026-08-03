#define _GNU_SOURCE
/**
 * XDK bindings -> DXVK.
 *
 * Strong definitions that override the recording stubs in
 * b3_native_runtime.c. Arguments come off the emulated stack with the
 * convention the render test pins: the caller pushes right-to-left then a
 * return-address slot, so argument N is at esp + 4*(N+1).
 *
 * Link this and the game's own D3D8 calls drive DXVK. Leave it out and
 * they are merely counted.
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "b3_native_runtime.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <execinfo.h>

void b3_dxvk_clear(unsigned xbox_flags, unsigned colour, float z, unsigned stencil);
void b3_dxvk_set_transform(unsigned state, const float *matrix);
void b3_dxvk_set_fvf(unsigned fvf);
void b3_dxvk_bind_guest_texture(unsigned stage, int movie_surface);

#define ARG(n) MEM32(g_esp + 4 * ((n) + 1))

/* Xbox D3D8 is __stdcall: the CALLEE removes the arguments. A transformed
 * caller lays down the args then a return-address slot and expects the
 * stack to come back balanced. A C binding that never touches g_esp
 * leaves all of it behind, the emulated stack drifts downward with every
 * call, and the caller's POP32s then restore callee-saved registers from
 * stale argument words.
 *
 * That is not a subtle corruption — it silently breaks loops. The four
 * vertex buffers sub_0017E8A0 creates in a `for (esi = 0; esi < 4; esi++)`
 * became an infinite loop stuck at esi == 1, because esi was restored
 * from rubbish after every call: 76 million allocations instead of four.
 *
 * Every binding must end with this, naming its argument count. */
#define XDK_RETURN(nargs) do { g_esp += 4 * ((nargs) + 1); } while (0)

static float argf(int n) { uint32_t v = ARG(n); float f; memcpy(&f, &v, 4); return f; }

/* ── Native controller boundary ────────────────────────────────────
 * Criterion polls the Xbox XInput API into its own four-pad objects before
 * the profile/save screen accepts Start. Keep those game-owned objects and
 * replace only the XDK hardware calls with the host input state. */
extern uint16_t g_xinput_buttons;
extern int16_t  g_xinput_thumb_lx;
extern int16_t  g_xinput_thumb_ly;
extern uint8_t  g_xinput_left_trigger;
extern uint8_t  g_xinput_right_trigger;

void sub_00363D8A(void)   /* XInitDevices */
{
    g_eax = 0;
    XDK_RETURN(2);
}

void sub_00363DB1(void)   /* XGetDeviceChanges(type, insertions, removals) */
{
    static int announced;
    const uint32_t insertions = ARG(1);
    const uint32_t removals = ARG(2);
    if (insertions >= 0x10000u) MEM32(insertions) = announced ? 0u : 1u;
    if (removals >= 0x10000u) MEM32(removals) = 0;
    if (getenv("B3_INPUT_TRACE") && !announced)
        fprintf(stderr, "[B3-INPUT] native controller inserted (port 0)\n");
    announced = 1;
    g_eax = 1;
    XDK_RETURN(3);
}

void sub_00363C24(void)   /* XInputOpen(type, port, slot, params) */
{
    const uint32_t port = ARG(1);
    g_eax = port == 0 ? 0xB3000001u : 0;
    if (getenv("B3_INPUT_TRACE"))
        fprintf(stderr, "[B3-INPUT] open port=%u handle=%08X\n", port, g_eax);
    XDK_RETURN(4);
}

void sub_00363C7A(void)   /* XInputClose */
{
    g_eax = 0;
    XDK_RETURN(1);
}

void sub_00363C86(void)   /* XInputGetState(handle, XINPUT_STATE *) */
{
    static uint32_t packet;
    const uint32_t handle = ARG(0);
    const uint32_t state = ARG(1);
    if (handle != 0xB3000001u || state < 0x10000u) {
        g_eax = 0x48Fu; /* ERROR_DEVICE_NOT_CONNECTED */
        XDK_RETURN(2);
        return;
    }

    memset((void *)XBOX_PTR(state), 0, 24);
    MEM32(state) = ++packet;
    MEM16(state + 4) = g_xinput_buttons & 0x00FFu;
    MEM8(state + 6) = (g_xinput_buttons & 0x1000u) ? 255 : 0; /* A */
    MEM8(state + 7) = (g_xinput_buttons & 0x2000u) ? 255 : 0; /* B */
    MEM8(state + 12) = g_xinput_left_trigger;
    MEM8(state + 13) = g_xinput_right_trigger;
    MEM16(state + 14) = (uint16_t)g_xinput_thumb_lx;
    MEM16(state + 16) = (uint16_t)g_xinput_thumb_ly;
    if (getenv("B3_INPUT_TRACE") && g_xinput_buttons)
        fprintf(stderr, "[B3-INPUT] poll buttons=%04X state=%08X\n",
                g_xinput_buttons, state);
    g_eax = 0;
    XDK_RETURN(2);
}

void sub_00363CF9(void)   /* XInputSetState (vibration) */
{
    g_eax = 0;
    XDK_RETURN(2);
}

void sub_0034C2E0(void)   /* D3DDevice_Clear(Count, pRects, Flags, Colour, Z, Stencil) */
{
    g_b3_clear.count   = ARG(0);
    g_b3_clear.rects   = ARG(1);
    g_b3_clear.flags   = ARG(2);
    g_b3_clear.colour  = ARG(3);
    g_b3_clear.z       = argf(4);
    g_b3_clear.stencil = ARG(5);
    g_b3_clear.valid   = 1;
    b3_call_note("D3DDevice_Clear");
    b3_dxvk_clear(g_b3_clear.flags, g_b3_clear.colour,
                  g_b3_clear.z, g_b3_clear.stencil);
    XDK_RETURN(6);
}

void sub_0034D410(void)   /* D3DDevice_SetTransform(State, pMatrix) */
{
    g_b3_xform.state  = ARG(0);
    g_b3_xform.matrix = ARG(1);
    g_b3_xform.valid  = 1;
    b3_call_note("D3DDevice_SetTransform");
    /* Xbox transform-state numbering is not desktop D3D8's. Desktop has
     * VIEW=2, PROJECTION=3, TEXTURE0..7=16..23 and WORLDMATRIX(n)=256+n;
     * DXVK indexes a fixed array and asserts outside it. Forward only what
     * maps, and report the rest so the mapping can be built from evidence
     * rather than guessed. */
    if (getenv("B3_XFORM_TRACE"))
        fprintf(stderr, "[XFORM] state=%u (%#x) matrix=%#x\n",
                g_b3_xform.state, g_b3_xform.state, g_b3_xform.matrix);

    /* The Xbox transform-state enum, read off the callee rather than
     * guessed. State 1 is PROJECTION, not a world matrix: the branch at
     * `cmp eax,1` reads m22/m23/m32/m33 from the matrix and derives near
     * and far planes into device+0x93C/+0x940, which only a projection
     * matrix has. The dirty-mask table at 0x35BEB4 has exactly ten live
     * entries, confirming the range:
     *
     *   Xbox 0     VIEW          -> desktop 2
     *   Xbox 1     PROJECTION    -> desktop 3
     *   Xbox 2..5  TEXTURE0..3   -> desktop 16..19
     *   Xbox 6..9  WORLD..WORLD3 -> desktop 256..259
     *
     * The game only ever pushes 0, 1 and 6. An earlier mapping sent state 1
     * to WORLDMATRIX(0), which loaded the projection matrix into the world
     * slot and dropped view and world entirely.
     *
     * Every exit below goes through the single XDK_RETURN at the end. This
     * function is the hottest call in the file, and the three early returns
     * it used to have leaked 12 bytes of simulated stack each — enough on
     * its own to make every later argument read land in the wrong place. */
    const unsigned st = g_b3_xform.state;
    unsigned desktop = 0;
    if      (st == 0)            desktop = 2;
    else if (st == 1)            desktop = 3;
    else if (st >= 2 && st <= 5) desktop = 16 + (st - 2);
    else if (st >= 6 && st <= 9) desktop = 256 + (st - 6);

    /* A matrix pointer has to be a real one; the not-yet-booted object
     * graph hands out small integers. */
    if (desktop && g_b3_xform.matrix >= 0x10000u)
        b3_dxvk_set_transform(desktop, (const float *)XBOX_PTR(g_b3_xform.matrix));

    XDK_RETURN(2);
}

void sub_0034DCA0(void)   /* D3DDevice_SetTexture(Stage, pTexture) */
{
    const uint32_t stage = ARG(0);
    const uint32_t texture = ARG(1);
    const uint32_t active_texture = MEM32(0x75DB70);
    const int movie_surface = texture >= 0x10000u &&
        texture == active_texture &&
        MEM32(texture + 0x18) == 640u &&
        MEM32(texture + 0x1C) == 480u;

    b3_call_note("D3DDevice_SetTexture");
    b3_dxvk_bind_guest_texture(stage, movie_surface);
    XDK_RETURN(2);
}

/* ── Draw path ──────────────────────────────────────────────────────
 * Xbox signatures per Cxbx-Reloaded. Returns go in eax, as the
 * transformed caller expects. */

uint32_t b3_dxvk_create_vertex_buffer(uint32_t length);
uint32_t b3_dxvk_lock_vertex_buffer(uint32_t handle);
void b3_dxvk_set_stream_source(unsigned stream, uint32_t handle, unsigned stride);
void b3_dxvk_draw_vertices(unsigned type, unsigned start, unsigned count);
void b3_dxvk_draw_vertices_up(unsigned type, unsigned count, const void *v, unsigned stride);
void b3_dxvk_draw_indexed(unsigned type, unsigned count, const void *indices);

/* Which transformed function is calling? The host return address maps
 * back to a generated symbol, which is enough to find a runaway loop
 * without ptrace (restricted here by Yama). */
static void note_caller(const char *what, const void *ra)
{
    static const void *seen[8];
    static int n = 0;
    if (!getenv("B3_CALLER_TRACE")) return;
    for (int i = 0; i < n; i++) if (seen[i] == ra) return;
    if (n < 8) seen[n++] = ra;
    Dl_info info;
    if (dladdr(ra, &info) && info.dli_sname)
        fprintf(stderr, "[CALLER] %s <- %s (+%tu)\n", what, info.dli_sname,
                (const char *)ra - (const char *)info.dli_saddr);
    else
        fprintf(stderr, "[CALLER] %s <- %p (unresolved)\n", what, ra);
}

/* Full host call stack, once, deep into the run. __builtin_return_address
 * beyond level 0 is unreliable and faulted here; backtrace() with
 * -rdynamic resolves the transformed symbols properly. */
static void dump_stack_once(void)
{
    static int done = 0;
    if (done || !getenv("B3_STACK_TRACE")) return;
    done = 1;
    void *frames[24];
    const int n = backtrace(frames, 24);
    char **names = backtrace_symbols(frames, n);
    fprintf(stderr, "[STACK] %d frames:\n", n);
    for (int i = 0; i < n && names; i++) fprintf(stderr, "   %s\n", names[i]);
    free(names);
}

void sub_0034FBC0(void)   /* CreateVertexBuffer2(Length) -> vertex buffer */
{
    static unsigned long hits = 0;
    if (++hits == 100000) dump_stack_once();
    /* The caller's loop runs esi = 0..3 and derives Length from a table
     * indexed by esi. Four distinct lengths means the loop is advancing;
     * one length forever means the counter is not surviving the call. */
    if (getenv("B3_LEN_TRACE") && hits <= 12)
        fprintf(stderr, "[LEN] call %lu length=%u esi=%#x\n",
                hits, ARG(0), g_esi);
    note_caller("CreateVertexBuffer2", __builtin_return_address(0));
    b3_call_note("D3DDevice_CreateVertexBuffer2");
    g_eax = b3_dxvk_create_vertex_buffer(ARG(0));
    XDK_RETURN(1);
}

void sub_0034FC10(void)   /* VertexBuffer_Lock2(pVB, Flags) -> writable ptr */
{
    b3_call_note("D3DVertexBuffer_Lock2");
    g_eax = b3_dxvk_lock_vertex_buffer(ARG(0));
    XDK_RETURN(2);
}

void sub_0034EDB0(void)   /* SetStreamSource(Stream, pVB, Stride) */
{
    b3_call_note("D3DDevice_SetStreamSource");
    b3_dxvk_set_stream_source(ARG(0), ARG(1), ARG(2));
    XDK_RETURN(3);
}

void sub_0034FD80(void)   /* DrawVerticesUP(Type, Count, pData, Stride) */
{
    b3_call_note("D3DDevice_DrawVerticesUP");
    const uint32_t data = ARG(2);
    if (data >= 0x10000u)
        b3_dxvk_draw_vertices_up(ARG(0), ARG(1),
                                 (const void *)XBOX_PTR(data), ARG(3));
    XDK_RETURN(4);
}

void sub_00350000(void)   /* DrawIndexedVertices(Type, Count, pIndexData) */
{
    b3_call_note("D3DDevice_DrawIndexedVertices");
    const uint32_t idx = ARG(2);
    if (idx >= 0x10000u)
        b3_dxvk_draw_indexed(ARG(0), ARG(1), (const void *)XBOX_PTR(idx));
    XDK_RETURN(3);
}

/* ── Push-buffer space ──────────────────────────────────────────────
 * D3D_MakeRequestedSpace(minSpace, requestedSpace) reserves room in the
 * NV2A push buffer and *spin-waits* for the GPU to consume what is
 * already queued, by comparing the ring's put and get pointers in the
 * device structure. Nothing consumes them here, so get never advances
 * and the game loops forever — 168 million calls in six seconds, with
 * every vertex-buffer allocation retried alongside.
 *
 * This project already found the answer once and recorded it in
 * CLAUDE.md: report the GPU as fully caught up by copying put (+0x30)
 * into get (+0x2C). The device address comes from D3D_g_pDevice, named
 * by XbSymbolDatabase.
 */
#define D3D_G_PDEVICE_VA 0x0035FB48u
#define PB_GET_OFFSET    0x2C
#define PB_PUT_OFFSET    0x30

uint32_t b3_dxvk_push_space(uint32_t device_va, uint32_t requested);

void sub_003518E0(void)   /* MakeRequestedSpace(minSpace, requestedSpace) */
{
    note_caller("MakeRequestedSpace", __builtin_return_address(0));
    b3_call_note("D3D_MakeRequestedSpace");
    /* Returns the new write pointer in eax; the caller writes there and
     * stores the advanced value back into device+0x00 itself. */
    g_eax = b3_dxvk_push_space(MEM32(D3D_G_PDEVICE_VA), ARG(1));
    XDK_RETURN(2);
}

/* ── Host storage ───────────────────────────────────────────────────
 * sub_001CFDD0("u:\\") asks the kernel for the save drive's allocation
 * unit size, through an indirect call the dispatcher cannot resolve. It
 * therefore returns zero, and the caller immediately computes
 *
 *   blocks = (clusterSize + 0xE9FF) / clusterSize
 *
 * which divides by zero and takes the process out with SIGFPE.
 *
 * Querying host storage is a service, not game logic, so it is answered
 * here rather than transformed. 16 KB is the original Xbox hard disk's
 * cluster size, so the block count the game derives matches what the
 * real hardware would have given it. */
void sub_001CFDD0(void)
{
    b3_call_note("XapiGetAllocationUnitSize");
    g_eax = 0x4000;          /* 16 KB, the Xbox HDD cluster size */
    XDK_RETURN(1);           /* __stdcall: one argument (the drive path) */
}

/* ── Vertex declaration ─────────────────────────────────────────────
 * D3DDevice_SetVertexShader(Handle) is where the vertex layout enters the
 * device. D3D8LTCG's format setup (0x003591F0) reads the handle back from
 * device+0x794 and walks its 16 attribute slots to derive the layout; with
 * this call left as a recording stub that field stays zero, the layout is
 * unknowable, and the draw path is reduced to guessing a format from the
 * stride — which produced a "diffuse" of 00000000 and texcoords of (0,0).
 *
 * Storing the handle is what makes the declaration readable. */
void sub_0034F6D0(void)
{
    b3_call_note("D3DDevice_SetVertexShader");
    const uint32_t handle = ARG(0);
    b3_dxvk_set_fvf(handle);
    XDK_RETURN(1);
}
