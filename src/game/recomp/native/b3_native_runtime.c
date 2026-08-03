/**
 * Runtime state and XDK bindings for the transformed game code.
 *
 * The generated functions keep the x86 machine state in globals and reach
 * the XDK through ordinary calls. Everything here is weak so the real
 * MANX build can override it with the kernel shim and the Vulkan
 * backed D3D8 layer; standalone, it records what the game asked for,
 * which is what the tests assert on.
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"

#include <stdio.h>
#include <string.h>

#include "b3_native_runtime.h"

/* ── machine state ──────────────────────────────────────────────── */
__attribute__((weak)) uint32_t g_eax, g_ecx, g_edx, g_esp;
__attribute__((weak)) uint32_t g_ebx, g_esi, g_edi, g_seh_ebp;
__attribute__((weak)) volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE];
__attribute__((weak)) volatile uint32_t g_icall_trace_idx;
__attribute__((weak)) volatile uint64_t g_icall_count;

/* ── call log ───────────────────────────────────────────────────── */
#define B3_LOG_MAX 256
static const char  *s_name[B3_LOG_MAX];
static unsigned long s_count[B3_LOG_MAX];
static int           s_n;

void b3_call_reset(void) {
    memset(s_name, 0, sizeof s_name);
    memset(s_count, 0, sizeof s_count);
    s_n = 0;
}

static void note(const char *n) {
    for (int i = 0; i < s_n; i++)
        if (s_name[i] == n) { s_count[i]++; return; }
    if (s_n < B3_LOG_MAX) { s_name[s_n] = n; s_count[s_n++] = 1; }
}

void b3_call_note(const char *label) { note(label); }

int b3_call_count(const char *name) {
    for (int i = 0; i < s_n; i++)
        if (strcmp(s_name[i], name) == 0) return (int)s_count[i];
    return 0;
}
int b3_call_distinct(void) { return s_n; }

void b3_call_dump(void) {
    fprintf(stderr, "  [CALLS] %d distinct:\n", s_n);
    for (int i = 0; i < s_n; i++)
        fprintf(stderr, "    %6lux  %s\n", s_count[i], s_name[i]);
}

/* ── indirect dispatch ──────────────────────────────────────────────
 * Returning NULL is safe — the generated code guards it — and every
 * request is recorded. This is how vtable targets are discovered: from
 * the game asking for them, which a static call graph cannot see. */
#define B3_ICALL_MAX 1024
static uint32_t s_icall[B3_ICALL_MAX];
static int      s_icall_n;

static recomp_func_t want(uint32_t va) {
    for (int i = 0; i < s_icall_n; i++) if (s_icall[i] == va) return 0;
    if (s_icall_n < B3_ICALL_MAX) s_icall[s_icall_n++] = va;
    return 0;
}
__attribute__((weak)) recomp_func_t recomp_lookup(uint32_t va)        { return want(va); }
__attribute__((weak)) recomp_func_t recomp_lookup_kernel(uint32_t va) { return want(va); }
__attribute__((weak)) recomp_func_t recomp_lookup_manual(uint32_t va) { return want(va); }

int  b3_icall_distinct(void) { return s_icall_n; }
uint32_t b3_icall_at(int i)  { return (i >= 0 && i < s_icall_n) ? s_icall[i] : 0; }
void b3_icall_reset(void)    { s_icall_n = 0; }

/* ── XDK bindings ───────────────────────────────────────────────────
 * Named by XbSymbolDatabase. These are the seam onto MANX: each
 * becomes a real call into the Vulkan presenter or the audio output.
 * Until then they record, so tests can assert on the sequence the game's
 * own renderer produces. */
/* Stack arguments. The generated caller pushes right-to-left and then a
 * return-address slot, so argument N is at esp + 4*(N+1) — verified
 * against the Clear call site, which lays down
 * (Stencil, Z, Colour, Flags, pRects, Count) then the slot. */
#define ARG(n)  MEM32(g_esp + 4 * ((n) + 1))
static float argf(int n) { uint32_t v = ARG(n); float f; memcpy(&f, &v, 4); return f; }

/* Last observed arguments, so tests can assert the decode is right
 * before any of this is wired to a GPU. */
b3_clear_args g_b3_clear;
b3_xform_args g_b3_xform;

/* Every stub must clean the stack exactly as the function it replaces did,
 * or the simulated esp drifts and every later argument read lands in the
 * wrong place. These are Xbox library functions: the callee removes its own
 * arguments, so the pop is the callee's own `ret N` plus the four bytes of
 * return-address slot the generated caller pushes.
 *
 * The counts in b3_lib_stubs.inc are the `ret N` recovered by walking each
 * function's control flow in the XBE, cross-checked against
 * XbSymbolDatabase's parameter lists (306 of 319 agreed; where they differ
 * the instruction stream wins, since a database parameter list can be
 * short — DrawIndexedVertices is one such case).
 *
 * The pop is NOT uniform and must not be guessed. Several of these are
 * register-convention LTCG helpers that take everything in ecx/edi/esi and
 * clean nothing; giving them a pop would corrupt the stack just as surely
 * as omitting it from the stdcall ones. Both kinds sit in the same table.
 *
 * Cost of getting this wrong, measured: with every stub popping nothing,
 * one booted frame leaked roughly 1.5 KB — 16 calls to a `ret 32` function,
 * 25 to CreateVertexShader, 21 to SetScissors — so by the time the game
 * reached DrawVerticesUP its arguments were read from thousands of bytes
 * away from where its caller had written them. */
#define XDK(sym, addr, label, pop) \
    __attribute__((weak)) void sym(void) { note(label); g_esp += 4 + (pop); }

/* Clear(Count, pRects, Flags, Colour, Z, Stencil) — decoded rather than
 * counted. This is the call that will produce the first real pixels from
 * the game's own renderer. */
__attribute__((weak)) void sub_0034C2E0(void) {
    note("D3DDevice_Clear");
    g_b3_clear.count   = ARG(0);
    g_b3_clear.rects   = ARG(1);
    g_b3_clear.flags   = ARG(2);
    g_b3_clear.colour  = ARG(3);
    g_b3_clear.z       = argf(4);
    g_b3_clear.stencil = ARG(5);
    g_b3_clear.valid   = 1;
}
XDK(sub_0034CBF0, 0x34CBF0, "D3DDevice_SetRenderTarget", 8)
/* SetTransform(State, pMatrix) */
__attribute__((weak)) void sub_0034D410(void) {
    note("D3DDevice_SetTransform");
    g_b3_xform.state  = ARG(0);
    g_b3_xform.matrix = ARG(1);
    g_b3_xform.valid  = 1;
}
XDK(sub_0034DCA0, 0x34DCA0, "D3DDevice_SetTexture", 8)
XDK(sub_0034E790, 0x34E790, "D3DDevice_SetPixelShader", 4)
XDK(sub_0034E9A0, 0x34E9A0, "D3DDevice_SetPixelShaderConstant", 4)
XDK(sub_0034EDB0, 0x34EDB0, "D3DDevice_SetStreamSource", 12)
XDK(sub_0034F6D0, 0x34F6D0, "D3DDevice_SetVertexShader", 4)
XDK(sub_0034F840, 0x34F840, "D3DDevice_SetVertexShaderConstant1", 0)
XDK(sub_0034F8F0, 0x34F8F0, "D3DDevice_SetVertexShaderConstant4", 0)
XDK(sub_0034FD80, 0x34FD80, "D3DDevice_DrawVerticesUP", 16)
XDK(sub_00350000, 0x350000, "D3DDevice_DrawIndexedVertices", 12)
XDK(sub_003518E0, 0x3518E0, "D3D_MakeRequestedSpace", 8)
XDK(sub_00355390, 0x355390, "D3DDevice_SetRenderState", 8)
XDK(sub_00355610, 0x355610, "D3DDevice_SetTextureStageState", 12)

/* D3D-section functions XbSymbolDatabase does not name. They live above
 * .text (>= 0x2CC200) so they are library code by construction and must
 * be bound, not transformed — transforming them drags in the rest of the
 * Xbox D3D implementation, which writes a push buffer we do not emulate.
 * These two are the "render state flush" pair this project hand-stubbed
 * for years without knowing what they were. */
XDK(sub_0034D530, 0x34D530, "D3DDevice_SetViewport", 4)
XDK(sub_0034DE60, 0x34DE60, "D3DDevice_SetPalette", 8)
XDK(sub_0034F9A0, 0x34F9A0, "D3DDevice_SetVertexShaderConstantNotInlineFast", 4)
XDK(sub_0034F5B0, 0x34F5B0, "D3D_StateFlush_34F5B0", 0)
XDK(sub_003558A0, 0x3558A0, "D3D_StateFlush_3558A0", 0)

/* Library functions reached by the transformed code that XbSymbolDatabase
 * does not name. Generated by the link-closure loop: anything at or above
 * 0x2CC200 is outside .text and therefore library by construction. */
#include "b3_lib_stubs.inc"
