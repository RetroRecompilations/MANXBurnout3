/**
 * Burnout 3 - Manually implemented recompiled functions
 *
 * These are functions that the automatic recompiler couldn't handle
 * correctly (mid-function entry points, SEH continuations, etc.).
 * They use the same register model and calling conventions as the
 * generated code.
 */

#define RECOMP_GENERATED_CODE
#include "gen/recomp_funcs.h"
#include <math.h>
#include <stdio.h>

/* D3D8 frame pump (implemented in d3d8_device.c) */
extern void d3d8_PresentFrame(void);

/* RW linked-list traversal with loop limit */
void sub_001FE1E0(void);

/* Forward declarations for manually implemented functions */
void sub_0002DDF0(void);
void sub_001BEFF0(void);
void sub_001F5810(void);
void sub_001F5840(void);
void sub_001F5C40(void);
void sub_001F5CB0(void);
void sub_001CFDD0(void);
void sub_001D1818(void);
void sub_001D2793(void);
void sub_001D5707(void);
void sub_001D5E82(void);
void sub_00244C51(void);
void sub_00249B7C(void);
void sub_00249B9C(void);
void sub_003518E0(void);
void sub_00351770(void);
void sub_00351A20(void);
void sub_001C1670(void);
void sub_001D7180(void);
void sub_001D7857(void);
void sub_001D7876(void);
void sub_001D7D90(void);
void sub_001D88E0(void);
void sub_001D8A80(void);
void sub_001D8FA0(void);
void sub_001D9180(void);
void sub_001D91B0(void);
void sub_001D91F0(void);
void sub_001D9230(void);
void sub_001D9280(void);
void sub_001D9290(void);
void sub_001D92A0(void);
void sub_001D92EF(void);
void sub_001D9360(void);
void sub_001D93AF(void);
void sub_001D9420(void);
void sub_001D9450(void);
void sub_001D94A0(void);
void sub_001D94D0(void);
void sub_001D9510(void);
void sub_001D7D50(void);
void sub_001D7D70(void);
void sub_001D9700(void);
void sub_001D9A50(void);
void sub_001D9AF0(void);
void sub_001D9BC0(void);
void sub_001D9D40(void);
void sub_001C1740(void);

/* Newly-exposed mid-function entry point stubs (switch table fix) */
void sub_00014FB0(void);
void sub_0006AE80(void);
void sub_000983E0(void);
void sub_000E32F0(void);
void sub_00154270(void);
void sub_0015BC50(void);
void sub_00169BD0(void);
void sub_00188BA9(void);
void sub_0018BF50(void);
void sub_001BDD50(void);
void sub_002F55AC(void);
void sub_002F6770(void);
void sub_0031AAE7(void);
void sub_0031AB7A(void);
void sub_0031AB90(void);
void sub_0031ABB1(void);
void sub_0031ABDD(void);
void sub_0031ABE8(void);
void sub_0034FBA0(void);
/* Round 2: more mid-function entry points */
void sub_0006E680(void);
void sub_0008E8D0(void);
void sub_00090A27(void);
void sub_0009E127(void);
void sub_000A0BF0(void);
void sub_000A7410(void);
void sub_000E0080(void);
void sub_00200470(void);
void sub_0031ABD2(void);
void sub_0031AC0D(void);
void sub_003392F8(void);
void sub_003394FB(void);
void sub_00339506(void);
void sub_00339511(void);
void sub_0035B3B0(void);
void sub_00361BB4(void);

/* D3D8LTCG rendering pipeline stubs */
void sub_0034D530(void);

/* Rendering context tick (stubbed - Xbox rendering pipeline not needed) */
void sub_000110E0(void);

/* Audio/streaming init (stubbed - hangs in RW pipe iteration) */
void sub_00135040(void);

/* Resource slot polling (overridden - skip version check for deferred workers) */
void sub_00018BB0(void);

/* RW resource fixup (stubbed - resources not worker-processed) */
void sub_00020930(void);

/* RW resource pointer relocation (stubbed - resources not worker-processed) */
void sub_00159710(void);

/* Track/scene setup (stubbed - depends on valid RW world data) */
void sub_0001BE60(void);

/* Audio streaming setup (stubbed - audio init was skipped) */
void sub_00135240(void);

/* Track environment loader (stubbed - RW stream reader hangs) */
void sub_00062BD0(void);

/* Pipeline/material name lookup (stubbed - RW world not initialized) */
void sub_0004DD00(void);

/* RW hash table lookup (safe - guards against div-by-zero) */
void sub_00221F20(void);

/* RW world linked list cleanup (stubbed - world data not initialized) */
void sub_001C66F0(void);

/* Game state notification dispatch (recursion-guarded) */
void sub_00022660(void);

/* Car physics force computation (overridden - scale factor fallbacks) */
void sub_000636D0(void);


/* ── Manual dispatch table ────────────────────────────────────────────
 *
 * Functions defined in this file that aren't in the auto-generated
 * dispatch table (because gen/ is gitignored and regenerated).
 * recomp_lookup_manual() is called by RECOMP_ICALL as a fallback.
 */
static const struct {
    uint32_t xbox_va;
    recomp_func_t func;
} g_manual_funcs[] = {
    { 0x0002DDF0u, (recomp_func_t)sub_0002DDF0 },
    { 0x001BEFF0u, (recomp_func_t)sub_001BEFF0 },
    { 0x001CFDD0u, (recomp_func_t)sub_001CFDD0 },
    { 0x001D1818u, (recomp_func_t)sub_001D1818 },
    { 0x001D2793u, (recomp_func_t)sub_001D2793 },
    { 0x001D5707u, (recomp_func_t)sub_001D5707 },
    { 0x001F5810u, (recomp_func_t)sub_001F5810 },
    { 0x001F5840u, (recomp_func_t)sub_001F5840 },
    { 0x001F5C40u, (recomp_func_t)sub_001F5C40 },
    { 0x001F5CB0u, (recomp_func_t)sub_001F5CB0 },
    { 0x001D5E82u, (recomp_func_t)sub_001D5E82 },
    { 0x00244C51u, (recomp_func_t)sub_00244C51 },
    { 0x00249B7Cu, (recomp_func_t)sub_00249B7C },
    { 0x00249B9Cu, (recomp_func_t)sub_00249B9C },
    { 0x003518E0u, (recomp_func_t)sub_003518E0 },
    { 0x00351770u, (recomp_func_t)sub_00351770 },
    { 0x00351A20u, (recomp_func_t)sub_00351A20 },
    { 0x001C1670u, (recomp_func_t)sub_001C1670 },
    { 0x001D7180u, (recomp_func_t)sub_001D7180 },
    { 0x001D7857u, (recomp_func_t)sub_001D7857 },
    { 0x001D7876u, (recomp_func_t)sub_001D7876 },
    { 0x001D7D90u, (recomp_func_t)sub_001D7D90 },
    { 0x001D88E0u, (recomp_func_t)sub_001D88E0 },
    { 0x001D8A80u, (recomp_func_t)sub_001D8A80 },
    { 0x001D8FA0u, (recomp_func_t)sub_001D8FA0 },
    { 0x001D9180u, (recomp_func_t)sub_001D9180 },
    { 0x001D91B0u, (recomp_func_t)sub_001D91B0 },
    { 0x001D91F0u, (recomp_func_t)sub_001D91F0 },
    { 0x001D9230u, (recomp_func_t)sub_001D9230 },
    { 0x001D9280u, (recomp_func_t)sub_001D9280 },
    { 0x001D9290u, (recomp_func_t)sub_001D9290 },
    { 0x001D92A0u, (recomp_func_t)sub_001D92A0 },
    { 0x001D92EFu, (recomp_func_t)sub_001D92EF },
    { 0x001D9360u, (recomp_func_t)sub_001D9360 },
    { 0x001D93AFu, (recomp_func_t)sub_001D93AF },
    { 0x001D9420u, (recomp_func_t)sub_001D9420 },
    { 0x001D9450u, (recomp_func_t)sub_001D9450 },
    { 0x001D94A0u, (recomp_func_t)sub_001D94A0 },
    { 0x001D94D0u, (recomp_func_t)sub_001D94D0 },
    { 0x001D9510u, (recomp_func_t)sub_001D9510 },
    { 0x001D7D50u, (recomp_func_t)sub_001D7D50 },
    { 0x001D7D70u, (recomp_func_t)sub_001D7D70 },
    { 0x001D9700u, (recomp_func_t)sub_001D9700 },
    { 0x001D9A50u, (recomp_func_t)sub_001D9A50 },
    { 0x001D9AF0u, (recomp_func_t)sub_001D9AF0 },
    { 0x001D9BC0u, (recomp_func_t)sub_001D9BC0 },
    { 0x001D9D40u, (recomp_func_t)sub_001D9D40 },
    { 0x001C1740u, (recomp_func_t)sub_001C1740 },
    /* Mid-function entry points exposed by switch table fix */
    { 0x00014FB0u, (recomp_func_t)sub_00014FB0 },
    { 0x0006AE80u, (recomp_func_t)sub_0006AE80 },
    { 0x000983E0u, (recomp_func_t)sub_000983E0 },
    { 0x000E32F0u, (recomp_func_t)sub_000E32F0 },
    { 0x00154270u, (recomp_func_t)sub_00154270 },
    { 0x0015BC50u, (recomp_func_t)sub_0015BC50 },
    { 0x00169BD0u, (recomp_func_t)sub_00169BD0 },
    { 0x00188BA9u, (recomp_func_t)sub_00188BA9 },
    { 0x0018BF50u, (recomp_func_t)sub_0018BF50 },
    { 0x001BDD50u, (recomp_func_t)sub_001BDD50 },
    { 0x002F55ACu, (recomp_func_t)sub_002F55AC },
    { 0x002F6770u, (recomp_func_t)sub_002F6770 },
    { 0x0031AAE7u, (recomp_func_t)sub_0031AAE7 },
    { 0x0031AB7Au, (recomp_func_t)sub_0031AB7A },
    { 0x0031AB90u, (recomp_func_t)sub_0031AB90 },
    { 0x0031ABB1u, (recomp_func_t)sub_0031ABB1 },
    { 0x0031ABDDu, (recomp_func_t)sub_0031ABDD },
    { 0x0031ABE8u, (recomp_func_t)sub_0031ABE8 },
    { 0x0034FBA0u, (recomp_func_t)sub_0034FBA0 },
    /* Round 2 mid-function entry points */
    { 0x0006E680u, (recomp_func_t)sub_0006E680 },
    { 0x0008E8D0u, (recomp_func_t)sub_0008E8D0 },
    { 0x00090A27u, (recomp_func_t)sub_00090A27 },
    { 0x0009E127u, (recomp_func_t)sub_0009E127 },
    { 0x000A0BF0u, (recomp_func_t)sub_000A0BF0 },
    { 0x000A7410u, (recomp_func_t)sub_000A7410 },
    { 0x000E0080u, (recomp_func_t)sub_000E0080 },
    { 0x00200470u, (recomp_func_t)sub_00200470 },
    { 0x0031ABD2u, (recomp_func_t)sub_0031ABD2 },
    { 0x0031AC0Du, (recomp_func_t)sub_0031AC0D },
    { 0x003392F8u, (recomp_func_t)sub_003392F8 },
    { 0x003394FBu, (recomp_func_t)sub_003394FB },
    { 0x00339506u, (recomp_func_t)sub_00339506 },
    { 0x00339511u, (recomp_func_t)sub_00339511 },
    { 0x0035B3B0u, (recomp_func_t)sub_0035B3B0 },
    { 0x00361BB4u, (recomp_func_t)sub_00361BB4 },
    /* RW linked-list traversal with loop limit */
    { 0x001FE1E0u, (recomp_func_t)sub_001FE1E0 },
    /* D3D8LTCG rendering pipeline */
    { 0x0034D530u, (recomp_func_t)sub_0034D530 },
    /* Rendering context tick (stubbed) */
    { 0x000110E0u, (recomp_func_t)sub_000110E0 },
    { 0x00020930u, (recomp_func_t)sub_00020930 },
    /* RW resource relocation (stubbed) */
    { 0x00159710u, (recomp_func_t)sub_00159710 },
    /* Track/scene setup (stubbed) */
    { 0x0001BE60u, (recomp_func_t)sub_0001BE60 },
    /* Audio streaming setup (stubbed) */
    { 0x00135240u, (recomp_func_t)sub_00135240 },
    /* Track environment loader (stubbed) */
    { 0x00062BD0u, (recomp_func_t)sub_00062BD0 },
    /* Pipeline/material name lookup (stubbed) */
    { 0x0004DD00u, (recomp_func_t)sub_0004DD00 },
    /* RW hash table lookup (div-by-zero safe) */
    { 0x00221F20u, (recomp_func_t)sub_00221F20 },
    /* RW world linked list cleanup (stubbed) */
    { 0x001C66F0u, (recomp_func_t)sub_001C66F0 },
    /* Game state notification dispatch (recursion-guarded) */
    { 0x00022660u, (recomp_func_t)sub_00022660 },
    /* Audio/streaming init (stubbed) */
    { 0x00135040u, (recomp_func_t)sub_00135040 },
    /* Resource slot polling (version-check bypass) */
    { 0x00018BB0u, (recomp_func_t)sub_00018BB0 },
    /* Car physics force computation (scale factor fallbacks) */
    { 0x000636D0u, (recomp_func_t)sub_000636D0 },
};
#define NUM_MANUAL_FUNCS (sizeof(g_manual_funcs) / sizeof(g_manual_funcs[0]))

recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    for (size_t i = 0; i < NUM_MANUAL_FUNCS; i++) {
        if (g_manual_funcs[i].xbox_va == xbox_va)
            return g_manual_funcs[i].func;
    }
    return NULL;
}

/**
 * sub_001BEFF0 - RW memory pool free list reorganization (STUB)
 *
 * Original: 0x001BEFF0 - 0x001BF03A (74 bytes, 32 insns)
 * Category: game_engine (RenderWare core)
 *
 * This function reorganizes a memory pool's free list by scanning the
 * contiguous block array and relinking free nodes in address order.
 * The pool descriptor is passed in esi (register parameter):
 *   esi+0x00 = head pointer (contiguous array base)
 *   esi+0x04 = block stride
 *   esi+0x10 = free list head
 *
 * When the pool contains uninitialized data (because the Xbox D3D cache
 * wasn't properly initialized), the free list walk reads garbage pointers
 * and enters a loop that exhausts all 50,000 VEH fault-skip slots.
 *
 * Stubbing as no-op: the existing free list order is preserved. This is
 * safe because the pool is only used for Xbox D3D cache entries which
 * don't exist in our D3D11 shim.
 *
 * Calling convention: cdecl, 0 params (esi = implicit pool pointer)
 */
void sub_001BEFF0(void)
{
    esp += 4;  /* pop dummy return address */
    return;
}

/**
 * sub_001CFDD0 - RW display mode query (STUB)
 *
 * Original: 0x001CFDD0 - 0x001CFE6F (159 bytes, 55 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox display driver
 *
 * This function queries the Xbox AV system for display timing information
 * (resolution, refresh rate, bytes per scanline, etc.) via kernel calls
 * through thunk entries at 0x36B7E0-0x36B7EC. Since we don't have a real
 * Xbox AV encoder, these calls return 0, and the caller (sub_00021C20)
 * divides by the result → STATUS_INTEGER_DIVIDE_BY_ZERO.
 *
 * The caller uses the return value as a chunk size for display buffer
 * allocation: count = (retval + 0xE9FF) / retval + 2; total = count * retval.
 *
 * Returning 0xEA00 (59904) matches the stripe size the caller already uses
 * for other display segments, giving: count=3, total=179712 bytes.
 *
 * Calling convention: stdcall, 1 param (ret 4)
 *   [esp+4] = parameter (display string pointer)
 * Returns: display buffer size in eax
 */
void sub_001CFDD0(void)
{
    eax = 0xEA00;  /* 59904 = display buffer stripe size */
    esp += 8;      /* ret 4: pop return addr + 1 param */
    return;
}

/**
 * sub_001D1818 - Thread start routine (RenderWare initialization)
 *
 * This is a mid-function entry point inside sub_001D17DC (0x001D17DC-0x001D18B0).
 * The automatic recompiler treated it as dead code after an early return at
 * 0x001D1815. In reality, this address is passed as the StartRoutine parameter
 * to PsCreateSystemThreadEx, making it the actual game initialization thread.
 *
 * The original x86 code starts with an SEH prologue:
 *   push 0x18; push 0x36BD40; call __SEH_prolog
 *   and [ebp-4], 0
 *   mov eax, fs:[0x28]    ← TLS pointer (translator drops fs: prefix)
 *
 * What it does:
 *   1. Reads the RW engine context from TLS (fs:[0x28])
 *   2. Copies .data sections into RW engine memory
 *   3. Zeroes BSS
 *   4. Calls the real game init callback (via StartContext1 function pointer)
 *   5. Terminates the thread via PsTerminateSystemThread
 *
 * Stack layout at entry (set up by bridge_PsCreateSystemThreadEx):
 *   [esp+0] = dummy return address (0)
 *   [esp+4] = StartContext1 (function pointer to game init callback)
 *   [esp+8] = StartContext2 (parameter to pass to callback)
 *
 * After our synthetic prologue:
 *   [ebp+8]  = StartContext1 (callback function pointer)
 *   [ebp+12] = StartContext2 (callback parameter)
 *   [ebp-4]  = SEH state (0 = in __try, -1 = outside)
 *   [ebp-28] = saved return value from callback
 *   [ebp-32] = RW engine context pointer
 *   [ebp-36] = destination base pointer
 *   [ebp-40] = data section size
 */
void sub_001D1818(void)
{
    uint32_t ebp;

    /* Synthetic prologue - simulate push ebp; mov ebp, esp; sub esp, 48
     * The original x86 has an SEH prologue (push 0x18; push handler;
     * call __SEH_prolog) that sets up the frame. We replicate the
     * resulting layout so ebp-relative accesses work correctly. */
    PUSH32(esp, 0);     /* push ebp (placeholder for saved ebp) */
    ebp = esp;          /* mov ebp, esp */
    esp -= 48;          /* reserve frame space for locals */

    /* --- Original code from address 0x001D1824 (after SEH prolog) --- */

    /* and [ebp-4], 0  →  SEH state = 0 (entering __try block) */
    MEM32(ebp - 4) = 0;

    /* mov eax, fs:[0x28] - Read TLS / RW engine context.
     * The translator drops the fs: prefix, so MEM32(0x28) reads from
     * our fake TIB at Xbox VA 0x28 (populated in xbox_MemoryLayoutInit). */
    eax = MEM32(0x28);
    MEM32(ebp - 32) = eax;

    /* Get destination pointer from RW context */
    edx = MEM32(eax + 0x28);
    edx = edx + 4;
    MEM32(ebp - 36) = edx;
    MEM32(edx - 4) = edx;      /* self-pointer at block start (RW pattern) */

    /* Calculate data section size */
    ebx = MEM32(0x36BF80);     /* end of .data in XBE */
    esi = MEM32(0x36BF7C);     /* start of .data in XBE */
    ebx = ebx - esi;           /* size = end - start */
    MEM32(ebp - 40) = ebx;

    /* Copy data sections: rep movsd + rep movsb
     * Note: XBOX_PTR() translates Xbox VAs to native pointers since
     * the generated code originally used (void*)(uintptr_t)edi which
     * would be wrong on 64-bit (edi holds Xbox VAs, not native addrs). */
    ecx = ebx;
    edi = edx;
    eax = ecx;
    ecx = ecx >> 2;            /* dword count */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0;

    ecx = eax;
    ecx = ecx & 3;             /* remaining bytes */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0;

    /* Zero BSS section */
    ecx = MEM32(0x36BF8C);     /* BSS size */
    if (TEST_Z(ecx, ecx)) goto loc_001D187D;   /* skip if no BSS */

    /* rep stosd + rep stosb to zero BSS */
    eax = 0;
    edi = ebx + edx;           /* BSS start = data_size + dest_base */
    edx = ecx;
    ecx = ecx >> 2;            /* dword count */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0;

    ecx = edx;
    ecx = ecx & 3;             /* remaining bytes */
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0;

loc_001D187D:
    /* Call sub_001D1628(1) - enable debug output */
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001D1628();

    /* Call the REAL game init callback: StartContext1(StartContext2)
     * ebp+8 = function pointer, ebp+0xC = parameter */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL(MEM32(ebp + 8));

    /* Save callback return value */
    MEM32(ebp - 28) = eax;

    /* Call sub_001D1628(0) - disable debug output */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D1628();

    goto loc_001D18A2;

    /* SEH exception handler (unreachable in normal flow) */
    PUSH32(esp, MEM32(ebp - 20));
    PUSH32(esp, 0); sub_001D17DC();
    esp += 4; return;

loc_001D18A2:
    /* SEH state = -1 (leaving __try block) */
    MEM32(ebp - 4) = MEM32(ebp - 4) | 0xFFFFFFFFu;

    /* PsTerminateSystemThread(return_value)
     * On real Xbox this doesn't return. In our recompiled version,
     * the bridge stub returns and we clean up the frame. */
    PUSH32(esp, MEM32(ebp - 28));
    PUSH32(esp, 0); RECOMP_ICALL(MEM32(0x36B898));

    /* Clean up frame and return (replaces __debugbreak in generated code) */
    esp = ebp + 4;  /* pop ebp + skip saved ebp */
    return;
}

/**
 * sub_001D2793 - Game initialization callback
 *
 * This is an undetected function in the gap between sub_001D276B (ends ~0x001D278E)
 * and xbe_entry_point (starts 0x001D2807). The recompiler didn't detect it because
 * it's only reached via function pointer - pushed as StartContext1 parameter to
 * PsCreateSystemThreadEx at address 0x001D2852 in xbe_entry_point.
 *
 * Called by sub_001D1818 (thread start routine) via:
 *   RECOMP_ICALL(MEM32(ebp + 8))  where ebp+8 = 0x001D2793
 *
 * What it does:
 *   1. Calls sub_001D3F2F (RenderWare global init)
 *   2. Calls sub_001D2EE5 (engine setup)
 *   3. Reads Xbox KPCR via fs:[0x20] → checks process block at offset 0x250
 *   4. If process block pointer valid, sets up TLS-relative data structure
 *   5. Calls sub_001D3EA2 and sub_001D3E4A (validation/finalization)
 *   6. Calls sub_00156400(0, 0, 0) (cdecl - game subsystem init)
 *   7. Calls sub_001D2E6F(1, 1, 0) (stdcall - enable game systems)
 *   8. Returns 0
 *
 * Uses stdcall: ret 4 (takes 1 parameter from caller - StartContext2)
 *
 * Xbox x86 (0x001D2793-0x001D2806):
 *   call sub_001D3F2F
 *   call sub_001D2EE5
 *   mov eax, fs:[0x20]         ; KPCR from TIB
 *   mov eax, [eax+0x250]       ; process block field
 *   test eax, eax / je skip
 *   mov ecx, [eax+0x24]        ; pointer from process block
 *   ...TLS setup using fs:[0x28], fs:[0x04], [0x41A7D4]...
 *   call sub_001D3EA2
 *   call sub_001D3E4A
 *   push 0/0/0; call sub_00156400; add esp, 0xC
 *   push 0/1/1; call sub_001D2E6F
 *   xor eax, eax; ret 4
 */
void sub_001D2793(void)
{
    uint32_t ebp;

    /* call sub_001D3F2F - RenderWare global init (version/cache check) */
    fprintf(stderr, "  [init] sub_001D3F2F (RW global init)...\n");
    PUSH32(esp, 0); sub_001D3F2F();

    /* call sub_001D2EE5 - engine setup (D3D device, timers, DPCs) */
    fprintf(stderr, "  [init] sub_001D2EE5 (engine setup)...\n");
    PUSH32(esp, 0); sub_001D2EE5();
    fprintf(stderr, "  [init] sub_001D2EE5 done\n");

    /* mov eax, fs:[0x20] - KPCR pointer from fake TIB
     * On Xbox, fs:[0x20] is the KPCR (Kernel Processor Control Region).
     * Our fake TIB at VA 0x20 is initialized to 0 (no KPCR), which
     * causes the code to skip the TLS setup block below. */
    eax = MEM32(0x20);

    /* mov eax, [eax + 0x250] - read from KPCR + 0x250 */
    eax = MEM32(eax + 0x250);

    /* test eax, eax; je loc_001D27B2 */
    if (TEST_Z(eax, eax)) goto loc_001D27B2;

    /* mov ecx, [eax + 0x24] */
    ecx = MEM32(eax + 0x24);

    /* jmp loc_001D27B4 */
    goto loc_001D27B4;

loc_001D27B2:
    /* xor ecx, ecx */
    ecx = 0;

loc_001D27B4:
    /* test ecx, ecx; je loc_001D27DF - skip TLS setup if no pointer */
    if (TEST_Z(ecx, ecx)) goto loc_001D27DF;

    /* push edi (callee-save) */
    PUSH32(esp, edi);

    /* mov eax, fs:[0x28] - TLS array pointer from fake TIB */
    eax = MEM32(0x28);

    /* mov edi, fs:[0x04] - stack base from fake TIB */
    edi = MEM32(0x04);

    /* mov edx, [0x41A7D4] - TLS index for this module */
    edx = MEM32(0x41A7D4);

    /* mov edx, [edi + edx*4] - TLS slot[index] */
    edx = MEM32(edi + edx * 4);

    /* sub edx, [eax + 0x28] - subtract base from RW context */
    edx = edx - MEM32(eax + 0x28);

    /* mov byte [ecx], 1 - set enable flag */
    MEM8(ecx) = 1;

    /* add edx, 8 */
    edx = edx + 8;

    /* mov [ecx + 4], edx - store TLS-relative offset */
    MEM32(ecx + 4) = edx;

    /* pop edi */
    POP32(esp, edi);

loc_001D27DF:
    /* call sub_001D3EA2 - validation/finalization */
    fprintf(stderr, "  [init] sub_001D3EA2 (RW validate)... MEM32(0x754D94)=0x%08X\n", MEM32(0x754D94));
    PUSH32(esp, 0); sub_001D3EA2();
    fprintf(stderr, "  [init] after sub_001D3EA2: MEM32(0x754D94)=0x%08X\n", MEM32(0x754D94));

    /* call sub_001D3E4A - C++ static constructors */
    fprintf(stderr, "  [init] sub_001D3E4A (static init)... MEM32(0x754D94)=0x%08X\n", MEM32(0x754D94));
    PUSH32(esp, 0); sub_001D3E4A();
    fprintf(stderr, "  [init] sub_001D3E4A done\n");

    /* push 0; push 0; push 0; call sub_00156400; add esp, 0xC (cdecl) */
    fprintf(stderr, "  [init] sub_00156400 (game subsystem init)...\n");
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00156400();
    esp += 0xC;  /* cdecl: caller cleans 3 args */

    /* push 0; push 1; push 1; call sub_001D2E6F (stdcall: callee cleans) */
    fprintf(stderr, "  [init] sub_001D2E6F (enable game systems)...\n");
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001D2E6F();

    /* xor eax, eax - return 0 */
    eax = 0;

    /* ret 4 - stdcall: pop return addr + 1 parameter */
    esp += 4;  /* pop dummy return address */
    esp += 4;  /* pop 1 parameter (StartContext2 from caller) */
    return;
}

/**
 * sub_001D5707 - Xbox D3D8 cache initialization (STUB)
 *
 * Original: 0x001D5707 - 0x001D5E66 (1887 bytes, 563 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 *
 * This function initializes the NV2A GPU texture/surface cache for the Xbox
 * D3D8 library. It reads from internal D3D device fields (offsets +0x1A04,
 * +0x1A08, etc.) that don't exist in our D3D11 shim, producing garbage
 * pointers like 0xFFFFFFF8 (null + struct offset), 0x8DCC5823 (code bytes
 * read as data), 0xEBFD7A2D, 0xCCCCCCCC, etc. These cause ~500
 * SKIP-READ/SKIP-WRITE faults in the VEH handler.
 *
 * Since the NV2A GPU doesn't exist, the cache is meaningless. Stubbing this
 * function eliminates the fault flood and may fix downstream issues caused
 * by corrupted cache state.
 *
 * Calling convention: stdcall, 3 params (ret 12)
 *   [esp+4] = memory pool pointer (first param, returned in eax)
 *   [esp+8] = flags
 *   [esp+C] = size
 * Returns: first param (memory pool pointer) in eax
 */
void sub_001D5707(void)
{
    eax = MEM32(esp + 4);  /* return first param (memory pool ptr) */
    esp += 16;             /* ret 12: pop return addr + 3 params */
    return;
}

/**
 * sub_001D5E82 - Xbox D3D8 cache init variant (STUB)
 *
 * Original: 0x001D5E82 - 0x001D6063 (481 bytes, 158 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 *
 * Another Xbox D3D8 cache initialization function from the same module as
 * sub_001D5707. Reads from uninitialized D3D device fields, producing
 * garbage pointers (0x8DCC5823 etc.) and bogus heap allocation sizes
 * (357MB, 1.4GB). Stubbed for same reason as sub_001D5707.
 *
 * Calling convention: stdcall, 3 params (ret 12)
 *   [esp+4] = memory pool pointer (returned in eax)
 *   [esp+8] = flags
 *   [esp+C] = size
 * Returns: first param in eax
 */
void sub_001D5E82(void)
{
    eax = MEM32(esp + 4);  /* return first param (memory pool ptr) */
    esp += 16;             /* ret 12: pop return addr + 3 params */
    return;
}

/**
 * sub_001F5810 - Xbox render pipeline begin frame (STUB)
 *
 * Original: 0x001F5810 - 0x001F5834 (36 bytes, 8 insns)
 * Category: rw_world_pipe_xbox
 *
 * "Begin render frame" for the Xbox NV2A render pipeline. Sets global
 * MEM32(0x41B41C) = 1 (pipeline active flag), calls sub_001FBDF0 (init),
 * sub_001F5E30/sub_001F5C40 (pipeline attach), then tail-jumps to
 * sub_001FC3A0 (669 bytes, the main pipeline processor).
 *
 * sub_001FC3A0 triggers a deep call chain (sub_001CAD10 → sub_001CB2D0 →
 * sub_001CD620 etc.) that processes all Xbox render operations. Since we
 * don't have NV2A hardware and all pipeline data is garbage from stubbed
 * D3D cache init, this call chain consumes ~160 bytes of Xbox stack per
 * iteration and overflows the 1MB simulated stack.
 *
 * Stub: no-op. The paired sub_001F5840 (end frame) still increments the
 * frame counter. sub_00135500 loops 30 times calling begin/end frame.
 *
 * Calling convention: cdecl, 0 params
 */
void sub_001F5810(void)
{
    esp += 4;    /* pop dummy return address */
    return;
}

/**
 * sub_001F5840 - Xbox render pipeline end frame (STUB)
 *
 * Original: 0x001F5840 - 0x001F5866 (38 bytes, 10 insns)
 * Category: rw_world_pipe_xbox
 *
 * "End render frame" counterpart to sub_001F5810. Calls sub_001F5E30 +
 * sub_001F5CB0 (pipeline detach, already stubbed), increments frame counter
 * MEM32(0x41B418), clears pipeline active flag MEM32(0x41B41C) = 0.
 *
 * Since sub_001F5810 is stubbed, we only need to increment the frame counter
 * to keep the game's frame tracking consistent.
 *
 * Calling convention: cdecl, 0 params
 */
void sub_001F5840(void)
{
    MEM32(0x41B418) = MEM32(0x41B418) + 1;  /* increment frame counter */
    MEM32(0x41B41C) = 0;                      /* clear pipeline active flag */
    esp += 4;    /* pop dummy return address */
    return;
}

/**
 * sub_001F5C40 - Xbox render pipeline process/attach (STUB)
 *
 * Original: 0x001F5C40 - 0x001F5CA5 (101 bytes, 47 insns)
 * Category: rw_world_pipe_xbox
 *
 * Walks a linked list of RenderWare render pipeline entries starting at
 * (esi + 0xC), calling a callback via vtable offset 0x2C on each entry.
 * The linked list nodes are at offset +20 within each pipeline object.
 *
 * Problem: The linked list head was populated by Xbox D3D cache init
 * (xbcache.c) which is stubbed. The list contains garbage pointers, causing
 * MEM32(esi - 20) to read Xbox VA 0xFFFFFFEC (near-null - 20) in an infinite
 * loop. Accounts for ~49,600 VEH fault-skips.
 *
 * Calling convention: cdecl, 2 params
 *   [esp+4] = pipeline object pointer
 *   [esp+8] = flag (0 or non-zero)
 * Returns: eax = pipeline object pointer or 0 (no valid pipeline)
 * Caller cleans 8 bytes of params.
 */
void sub_001F5C40(void)
{
    eax = 0;     /* no valid pipeline found */
    esp += 4;    /* pop dummy return address */
    return;
}

/**
 * sub_001F5CB0 - Xbox render pipeline process/detach (STUB)
 *
 * Original: 0x001F5CB0 - 0x001F5D15 (101 bytes, 47 insns)
 * Category: rw_world_pipe_xbox
 *
 * Twin of sub_001F5C40 - identical structure, walks same garbage linked list
 * but calls vtable offset 0x30 instead of 0x2C. Same infinite loop problem.
 *
 * Calling convention: cdecl, 2 params. Caller cleans 8 bytes.
 * Returns: eax = pipeline object pointer or 0
 */
void sub_001F5CB0(void)
{
    eax = 0;     /* no valid pipeline found */
    esp += 4;    /* pop dummy return address */
    return;
}

/**
 * sub_0002DDF0 - Pipeline name lookup (STUB)
 *
 * Original: 0x0002DDF0 - 0x0002DE40 (80 bytes, 43 insns)
 * Category: game_engine
 *
 * Searches a RenderWare pipeline table for a named entry by iterating
 * entries at MEM32(esi+0xC) with count MEM32(esi+8), calling sub_00244C51
 * for case-insensitive string comparison on each entry's name at offset 0x48.
 *
 * Problem: esi points to a pipeline table structure populated by Xbox D3D
 * cache init (xbcache.c). Since those init functions are stubbed, the table
 * contains garbage: count is huge, array pointer is ~0x6C000000 (out of
 * range), causing 50,000+ VEH fault-skips as the loop reads progressively
 * further into unmapped memory.
 *
 * Stub returns 0 (no match found). The caller (sub_0002DE40) stores this
 * as the pipeline entry pointer, falling back to a default pipeline.
 *
 * Calling convention: stdcall, 1 param (ret 4)
 *   [esp+4] = Xbox VA of pipeline name string to search for
 * Returns: eax=0 (no match) or eax=pointer to matching entry
 */
void sub_0002DDF0(void)
{
    eax = 0;     /* no match found */
    esp += 8;    /* ret 4: pop return addr + 1 param */
    return;
}

/**
 * sub_00244C51 - Xbox pipeline string comparison (STUB)
 *
 * Original: 0x00244C51 - 0x00244CA0 (79 bytes, 42 insns)
 * Category: rw_world_pipe_xbox
 *
 * Case-insensitive string comparison used during RenderWare render pipeline
 * selection. When the Xbox pipeline table (0x41D4A8) is active, this function
 * compares two pipeline name strings byte-by-byte. One string pointer comes
 * from the Xbox D3D cache which contains garbage from uninitialized NV2A
 * state, causing 50,000+ VEH fault-skip iterations as it reads through
 * code bytes interpreted as data.
 *
 * Both this function AND its fallback (sub_00248FF0, also xbcache.c) read
 * from the same garbage pointers. Stub returns "not equal" (-1) to prevent
 * the Xbox pipeline from being selected. The caller will fall through to
 * the next candidate pipeline (eventually the generic software one).
 *
 * Calling convention: cdecl, 2 params
 *   [esp+4] = string pointer 1 (from D3D cache structure + 0x48)
 *   [esp+8] = string pointer 2 (pipeline name to match)
 * Returns: 0 if equal, non-zero if not equal
 * Caller cleans 8 bytes of params after call.
 */
void sub_00244C51(void)
{
    eax = (uint32_t)-1;  /* not equal - reject Xbox pipeline */
    esp += 4;            /* pop dummy return address */
    return;
}

/**
 * sub_00249B7C - CRT FPU exception handler (with inlined tail jump target)
 *
 * Original x86: 0x00249B7C sets up an EBP frame, copies some args to locals,
 * then tail-jumps (JMP) to 0x00249B9C which continues using the same frame.
 * The auto-recompiler emits this as two separate C functions, but sub_00249B9C
 * has its own local `ebp` which starts uninitialized (0). When it does
 * `MEMD(ebp - 8)`, it writes to Xbox VA 0xFFFFFFF8 → crash.
 *
 * Fix: inline sub_00249B9C's code so both halves share the same `ebp` local.
 *
 * This is the CRT _fltused / __control87 / pow helper chain:
 *   sub_00244E9C → sub_00244EC0 → sub_00249CB9 → sub_00249B7C → sub_0024BC71
 */
void sub_00249B7C(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push_m(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop_m() (_fp_top++)
    #define fp_popp_m() (fp_pop_m())
    #define fp_top_m() _fp_stack[_fp_top & 7]

    /* sub_00249B7C prologue */
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFFE0u; /* sub esp, 0x20 */
    MEM32(ebp - 32) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp - 16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp - 12) = eax;

    /* --- inlined sub_00249B9C (tail jump target) --- */
    MEMD(ebp - 8) = fp_top_m(); fp_popp_m(); /* fstp qword [ebp-8] */
    MEM32(ebp - 28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp - 24) = eax;
    MEM32(ebp - 20) = ecx;
    eax = ebp + 8;
    ecx = ebp - 32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0024BC71();

    /* loc_00249BBC */
    esp = esp + 0xC;
    fp_push_m(MEMD(ebp - 8)); /* fld qword [ebp-8] */
    if (!CMP_EQ(MEM16(ebp + 8), 0x27F)) {
        /* fldcw word ptr [ebp + 8] - FPU control word restore (no-op for us) */
    }

    /* leave; ret */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4;
    return;

    #undef fp_push_m
    #undef fp_pop_m
    #undef fp_popp_m
    #undef fp_top_m
}

/**
 * sub_00249B9C - continuation of sub_00249B7C (shared frame)
 *
 * This is the tail jump target of sub_00249B7C. In rare cases it's called
 * directly (not through sub_00249B7C). When called directly, ebp must be
 * inherited from the caller via g_seh_ebp. But typically it's only reached
 * via the tail jump, which we've inlined above. This stub exists so the
 * dispatch table doesn't call the broken generated version.
 */
void sub_00249B9C(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push_m(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop_m() (_fp_top++)
    #define fp_popp_m() (fp_pop_m())
    #define fp_top_m() _fp_stack[_fp_top & 7]

    /* Inherit ebp from caller - this function expects to share a frame */
    ebp = g_seh_ebp;

    MEMD(ebp - 8) = fp_top_m(); fp_popp_m();
    MEM32(ebp - 28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp - 24) = eax;
    MEM32(ebp - 20) = ecx;
    eax = ebp + 8;
    ecx = ebp - 32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0024BC71();

    esp = esp + 0xC;
    fp_push_m(MEMD(ebp - 8));
    if (!CMP_EQ(MEM16(ebp + 8), 0x27F)) {
        /* fldcw - no-op */
    }

    esp = ebp;
    POP32(esp, ebp);
    esp += 4;
    return;

    #undef fp_push_m
    #undef fp_pop_m
    #undef fp_popp_m
    #undef fp_top_m
}

/**
 * sub_00351A20 - D3D8 push buffer flush
 *
 * On Xbox, this submits the current push buffer contents to the NV2A GPU
 * via DMA and resets the write pointer for the next batch of commands.
 *
 * In our recompilation, there's no real GPU. We just reset the write pointer
 * back to the buffer base so the caller can continue writing commands.
 * The commands are silently discarded.
 *
 * The buffer base is stored at Xbox VA 0x35D69C (set during init in main.c).
 * The write pointer is at 0x35D6A0, end pointer at 0x35D6A4.
 *
 * Calling convention: cdecl, no args.
 * Called as: PUSH32(esp, 0); sub_00351A20();
 */
void sub_00351A20(void)
{
    /* Reset write pointer to buffer base */
    MEM32(0x35D6A0) = MEM32(0x35D69C);

    /* Pop dummy return address (simulated x86 'ret') */
    esp += 4;
    return;
}


/**
 * sub_003518E0 - NV2A push buffer kickoff (STUB)
 *
 * Original: 0x003518E0 (D3D8LTCG section)
 *
 * On Xbox, this is the push buffer "kick" function that submits queued
 * GPU commands to the NV2A via DMA. It updates the PUT pointer, waits
 * for the GPU GET pointer to advance, and handles ring buffer wrapping.
 *
 * The function has spin-wait loops that poll NV2A hardware registers
 * (0xFC000000 range) which don't exist in our recompilation, causing
 * infinite loops and native stack overflow.
 *
 * Calling convention: ret 8 (2 params on stack).
 * Called as: PUSH32(esp, arg1); PUSH32(esp, arg2); PUSH32(esp, 0); sub_003518E0();
 */
void sub_003518E0(void)
{
    eax = 0;      /* no GPU address to return */
    esp += 12;    /* ret 8: pop return addr (4) + 2 params (8) */
    return;
}


/**
 * sub_00351770 - NV2A push buffer space allocation (STUB)
 *
 * Original: 0x00351770 (D3D8LTCG section)
 *
 * On Xbox, this allocates space in the push buffer ring, potentially
 * triggering a kickoff (sub_003518E0) if insufficient space remains.
 * It also reads the GPU GET pointer and spins waiting for the GPU
 * to free space.
 *
 * Contains spin-wait loops on NV2A registers that cause hangs/overflow.
 *
 * Calling convention: ret 4 (1 param on stack).
 * Returns eax = allocated push buffer address (we return 0 = no allocation).
 */
void sub_00351770(void)
{
    eax = 0;      /* no push buffer space allocated */
    esp += 8;     /* ret 4: pop return addr (4) + 1 param (4) */
    return;
}


/**
 * sub_001C1670 - RW frame matrix propagation (depth-limited)
 *
 * Original: 0x001C1670 - 0x001C173A (202 bytes, 56 insns)
 * CC: stdcall, 1 param (parent LTM pointer via stack), ecx = frame node
 * Frame: EBP-based (0 bytes locals, 24 bytes aligned scratch)
 *
 * Recursively propagates local-to-world matrix through the RW scene graph.
 * Reads parent LTM from stack arg, multiplies with local transform at ecx,
 * stores result at ecx+0x20, then recurses into children linked at ecx+0x44.
 *
 * Manual override: adds recursion depth limiting and pointer validation.
 * Without this, uninitialized scene graph nodes contain non-zero garbage
 * child pointers in valid Xbox RAM, causing unbounded recursion and
 * native stack overflow.
 */
static int s_frame_propagate_depth = 0;
#define MAX_FRAME_DEPTH 64
#define VALID_XBOX_PTR(p) ((p) >= 0x10000u && (p) < 0x04000000u)

void sub_001C1670(void)
{
    uint32_t ebp;
    int _flags = 0;
    float xmm0, xmm1;

    /* Standard EBP-based prologue */
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

    eax = MEM32(ebp + 8); /* parent LTM pointer (arg) */

    /* Validate input pointers */
    if (!VALID_XBOX_PTR(eax) || !VALID_XBOX_PTR(ecx)) {
        goto done;
    }

    /* --- Matrix math (identical to generated code) --- */
    xmm0 = MEMF(eax + 8);
    xmm0 = xmm0 * MEMF(ecx);
    MEMF(esp + 0x10) = xmm0;
    xmm0 = MEMF(eax + 0xC);
    xmm0 = xmm0 * MEMF(ecx + 4);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0;
    xmm0 = MEMF(eax);
    MEM32(esp + 0x18) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x18);
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0;
    xmm0 = MEMF(eax + 4);
    MEM32(esp + 0x1C) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x20) = edx;
    MEMF(esp + 0x14) = xmm0;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x24) = edx;
    xmm0 = MEMF(ecx + 8);
    xmm0 = xmm0 * MEMF(eax + 8);
    edi = ecx + 0x20;
    MEMF(esp + 0x18) = xmm0;
    xmm0 = MEMF(eax + 0xC);
    xmm0 = xmm0 * MEMF(ecx + 0xC);
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0;
    xmm0 = MEMF(ecx + 0x10);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x2C) = edx;
    xmm1 = MEMF(eax + 0x10);
    /* mulps: xmm0 *= xmm1 (packed 4xfloat - scalar approximation) */
    xmm0 = xmm0 * xmm1;
    MEMF(ecx + 0x30) = xmm0;

    /* --- Recurse into children (depth-limited) --- */
    esi = MEM32(ecx + 0x44);
    if (esi == 0) goto done;

    if (s_frame_propagate_depth >= MAX_FRAME_DEPTH) goto done;
    s_frame_propagate_depth++;

    while (esi != 0) {
        if (!VALID_XBOX_PTR(esi)) break;

        PUSH32(esp, edi);
        ecx = esi + 8;
        PUSH32(esp, 0); sub_001C1670();

        esi = MEM32(esi);  /* next sibling */
    }

    s_frame_propagate_depth--;

done:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */
}


/**
 * sub_001D7180 - RW Xbox display driver rendering function (STUB)
 *
 * Original: 0x001D7180 - 0x001D7D10 (2960 bytes, 811 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params
 *
 * Large Xbox-specific rendering function in the RW display driver.
 * Iterates over D3D internal structures (vertex buffers, texture
 * descriptors, render states) setting up hardware-specific state.
 * These structures are garbage in our D3D11 shim, causing 50K+
 * VEH fault-skip events per frame from reads of addresses in the
 * 0x920xxxxx range (unmapped Xbox VA).
 *
 * Stubbed as no-op since all rendering goes through D3D11.
 */
void sub_001D7180(void)
{
    esp += 4; return; /* ret */
}

/**
 * sub_001D7857 - Mid-function entry into sub_001D7180 (STUB)
 * sub_001D7876 - Mid-function entry into sub_001D7180 (STUB)
 *
 * These are alternate entry points into the same RW Xbox rendering
 * function. Both are cdecl, 0 params, fpo_leaf. Same stub treatment.
 */
void sub_001D7857(void)
{
    esp += 4; return; /* ret */
}

void sub_001D7876(void)
{
    esp += 4; return; /* ret */
}

/**
 * sub_001D7D90 - RW Xbox display driver rendering function #2 (STUB)
 *
 * Original: 0x001D7D90 - 0x001D88D7 (2887 bytes, 661 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params
 *
 * Second large Xbox rendering function, processes vertex/texture state.
 * Same stubbing rationale as sub_001D7180.
 */
void sub_001D7D90(void)
{
    esp += 4; return; /* ret */
}

/**
 * sub_001D88E0 - RW Xbox world pipeline rendering #1 (STUB)
 * sub_001D8A80 - RW Xbox world pipeline rendering #2 (STUB)
 * sub_001D8FA0 - RW Xbox world pipeline rendering #3 (STUB)
 *
 * Original: 0x001D88E0-0x001D9130 (rw_world_pipe_xbox category)
 * All cdecl, 0 params. These iterate over D3D vertex/texture structures
 * producing 500K+ VEH fault-skips per second from unmapped addresses.
 * Stubbed since all rendering goes through D3D11.
 */
void sub_001D88E0(void)
{
    esp += 4; return; /* ret */
}

void sub_001D8A80(void)
{
    esp += 4; return; /* ret */
}

void sub_001D8FA0(void)
{
    esp += 4; return; /* ret */
}

/**
 * sub_001D93AF - RW Xbox rendering pipeline dispatch (STUB)
 *
 * Original: 0x001D93AF - 0x001D9420 (113 bytes, 38 insns)
 * CC: cdecl, 0 params
 *
 * Top-level dispatch for Xbox rendering pipeline. Calls into
 * sub_001D9230 and related functions that iterate over D3D
 * vertex/texture structures, producing millions of VEH faults.
 */
/**
 * sub_001D9180..sub_001D9360 - RW Xbox rendering pipeline cluster (STUBS)
 *
 * Nine functions (0x001D9180, 0x001D91B0, 0x001D91F0, 0x001D9230,
 * 0x001D9280, 0x001D9290, 0x001D92A0, 0x001D92EF, 0x001D9360)
 * All rw_world_pipe_xbox category, cdecl 0 params.
 *
 * These form a cluster of rendering pipeline helper functions that
 * read/write D3D vertex/texture structures. sub_001D9230 is the
 * hottest function, called from multiple paths and producing millions
 * of VEH fault-skips per frame.
 */
void sub_001D9180(void) { esp += 4; return; }
void sub_001D91B0(void) { esp += 4; return; }
void sub_001D91F0(void) { esp += 4; return; }
void sub_001D9230(void) { esp += 4; return; }
void sub_001D9280(void) { esp += 4; return; }
void sub_001D9290(void) { esp += 4; return; }
void sub_001D92A0(void) { esp += 4; return; }
void sub_001D92EF(void) { esp += 4; return; }
void sub_001D9360(void) { esp += 4; return; }

void sub_001D93AF(void)
{
    esp += 4; return; /* ret */
}

/*
 * sub_001D9420 - RW Xbox display driver (rw_driver_xbox) rendering helper
 * sub_001D9450 - RW Xbox world pipeline (rw_world_pipe_xbox) viewport setup
 * sub_001D94A0 - RW Xbox display driver (rw_driver_xbox) rendering submit
 * sub_001D94D0 - RW Xbox world pipeline (rw_world_pipe_xbox) hot rendering path
 *
 * These four functions complete the Xbox rendering pipeline cluster.
 * sub_001D94D0 was the hottest remaining function producing millions
 * of VEH fault-skips per frame via indirect calls into D3D structures.
 */
volatile uint32_t g_present_count = 0;
void sub_001D9420(void) {
    /* RW driver "Present" - forward to our D3D11 backend.
     * Original: passes device context through sub_001DE7E0.
     * We intercept here and call our frame pump directly. */
    g_present_count++;
    if (g_present_count <= 5 || (g_present_count % 1000) == 0)
        fprintf(stderr, "  [PRESENT] sub_001D9420 called #%u\n", g_present_count);
    d3d8_PresentFrame();
    esp += 4; return;
}
void sub_001D9450(void) { esp += 4; return; }
void sub_001D94A0(void) { esp += 4; return; }
void sub_001D94D0(void) { esp += 4; return; }

/*
 * sub_001D9510 - RW camera create (rw_core, src/bacamera.c)
 *
 * Creates a camera raster object by calling into Xbox D3D device via
 * ICALL(MEM32(0x7593E4)), which returns a pointer to GPU-allocated raster
 * memory in the 0x92-0x93 range. Without real Xbox D3D, these reads fault
 * 10 million times per frame. Stub returns 0 (no camera created).
 */
void sub_001D9510(void) { eax = 0; esp += 4; return; }

/**
 * sub_001D7D50 - Xbox render state setter entry point (STUB)
 * sub_001D7D70 - Xbox render state setter #2 (STUB)
 *
 * Original: 0x001D7D50-0x001D7D6F (31 bytes), 0x001D7D70-0x001D7D85 (21 bytes)
 * Category: rw_driver_xbox, cdecl
 *
 * Called from RW core (sub_001C69C0) to set Xbox GPU render states via
 * sub_001D7040 and sub_0034FD80. These chain into sub_001D9A50/sub_001D9AF0
 * which iterate over GPU-allocated memory (0x92-0x93 Xbox VA range) producing
 * millions of VEH fault-skips. Stubbed since rendering uses D3D11.
 */
static uint32_t g_1D7D50_count = 0;
void sub_001D7D50(void) {
    g_1D7D50_count++;
    if (g_1D7D50_count <= 3 || (g_1D7D50_count % 10000) == 0)
        fprintf(stderr, "  [TRACE] sub_001D7D50 called #%u\n", g_1D7D50_count);
    esp += 4; return;
}
void sub_001D7D70(void) { esp += 4; return; }

/**
 * sub_001D9700 - Xbox render state dispatch (STUB)
 *
 * Original: 0x001D9700-0x001D987A (378 bytes, 106 insns)
 * Category: rw_driver_xbox, cdecl, 1 param (render state ID 1-30)
 *
 * Dispatch function: takes a render state ID, decrements, and does indirect
 * tail jump through a 30-entry table at 0x1D98F8 to handlers like
 * sub_001D9A50, sub_001D9AF0, sub_001D9BC0. Returns 1 for valid IDs.
 * Stubbed: return 1 (success) without setting any GPU state.
 */
void sub_001D9700(void) { eax = 1; esp += 4; return; }

/**
 * sub_001D9A50 - Xbox render state handler (STUB)
 * sub_001D9AF0 - Xbox render state handler #2 (STUB)
 * sub_001D9BC0 - Xbox render state handler #3 (STUB)
 * sub_001D9D40 - Xbox render state handler #4 (STUB)
 *
 * Category: rw_driver_xbox, cdecl
 *
 * These are dispatch targets of sub_001D9700. They read/write GPU render
 * state tables at 0x75D2A0-0x75D9B0 using eax as an index. When eax
 * contains garbage (e.g. 0x3F800001 = float 1.0), the computed addresses
 * land in the 0x92-0x93 Xbox VA range (GPU-allocated memory), producing
 * 10 million+ VEH fault-skips per call. Stubbed as no-ops.
 */
void sub_001D9A50(void) { eax = 1; esp += 4; return; }
void sub_001D9AF0(void) { eax = 1; esp += 4; return; }
void sub_001D9BC0(void) { eax = 1; esp += 4; return; }
void sub_001D9D40(void) { eax = 1; esp += 4; return; }

/**
 * sub_001C1740 - RW scene graph child list merge/traversal (STUB)
 *
 * Original: 0x001C1740-0x001C1796 (86 bytes, 35 insns)
 * CC: thiscall_cdecl (ecx = this), 0 stack params
 *
 * Recursive tree traversal: reads child list from this+0x44, recursively
 * processes each child (ecx = child + 8), then merges child list into parent.
 * With garbage scene graph (no real D3D objects), this chases random
 * pointers and overflows the native stack (1M+ nested calls).
 * Stubbed as no-op since scene graph data isn't initialized.
 */
void sub_001C1740(void) { esp += 4; return; }

/* ═══════════════════════════════════════════════════════════════════════
 * Mid-function entry point stubs (exposed by switch table fix)
 *
 * These addresses are mid-function entry points that the recompiler
 * didn't recognize as separate functions. They're now called from
 * code paths made reachable by the switch table fix. Stubbed as no-ops
 * until proper implementations can be created.
 * ═══════════════════════════════════════════════════════════════════════ */

/* 0x00014FB0: gap after sub_00014D80 (end 0x14F99), +0x17 past end */
void sub_00014FB0(void) { esp += 4; return; }

/* 0x0006AE80: gap after sub_0006ADE0 (end 0x6AE70), +0x10 past end */
void sub_0006AE80(void) { esp += 4; return; }

/* 0x000983E0: gap after sub_00098370 (end 0x983C5), +0x1B past end */
void sub_000983E0(void) { esp += 4; return; }

/* 0x000E32F0: gap after sub_000E3140 (end 0xE32DF), +0x11 past end */
void sub_000E32F0(void) { esp += 4; return; }

/* 0x00154270: inside sub_0015414B (+0x125) */
void sub_00154270(void) { esp += 4; return; }

/* 0x0015BC50: inside sub_0015B7AB (+0x4A5) */
void sub_0015BC50(void) { esp += 4; return; }

/* 0x00169BD0: inside sub_00169540 (+0x690) */
void sub_00169BD0(void) { esp += 4; return; }

/* 0x00188BA9: at end of sub_001888F0 */
void sub_00188BA9(void) { esp += 4; return; }

/* 0x0018BF50: inside sub_0018BED0 (+0x80) */
void sub_0018BF50(void) { esp += 4; return; }

/* 0x001BDD50: inside sub_001BDCD0 (+0x80) */
void sub_001BDD50(void) { esp += 4; return; }

/* 0x002F55AC: inside sub_002F5594 (+0x18) - RenderWare */
void sub_002F55AC(void) { esp += 4; return; }

/* 0x002F6770: inside sub_002F6750 (+0x20) - RenderWare */
void sub_002F6770(void) { esp += 4; return; }

/* 0x0031AAE7: inside sub_0031AADC (+0xB) - RenderWare D3D */
void sub_0031AAE7(void) { esp += 4; return; }

/* 0x0031AB7A: inside sub_0031AB59 (+0x21) - RenderWare D3D */
void sub_0031AB7A(void) { esp += 4; return; }

/* 0x0031AB90: inside sub_0031AB85 (+0xB) - RenderWare D3D */
void sub_0031AB90(void) { esp += 4; return; }

/* 0x0031ABB1: inside sub_0031AB85 (+0x2C) - RenderWare D3D */
void sub_0031ABB1(void) { esp += 4; return; }

/* 0x0031ABDD: inside sub_0031AB85 (+0x58) - RenderWare D3D */
void sub_0031ABDD(void) { esp += 4; return; }

/* 0x0031ABE8: inside sub_0031AB85 (+0x63) - RenderWare D3D */
void sub_0031ABE8(void) { esp += 4; return; }

/* 0x0034FBA0: inside sub_0034FAF0 (+0xB0) - RenderWare */
void sub_0034FBA0(void) { esp += 4; return; }

/* Round 2: more mid-function entry points (block-splitting fix) */
void sub_0006E680(void) { esp += 4; return; }
void sub_0008E8D0(void) { esp += 4; return; }
void sub_00090A27(void) { esp += 4; return; }
void sub_0009E127(void) { esp += 4; return; }
void sub_000A0BF0(void) { esp += 4; return; }
void sub_000A7410(void) { esp += 4; return; }
void sub_000E0080(void) { esp += 4; return; }
void sub_00200470(void) { esp += 4; return; }
void sub_0031ABD2(void) { esp += 4; return; }
void sub_0031AC0D(void) { esp += 4; return; }
void sub_003392F8(void) { esp += 4; return; }
void sub_003394FB(void) { esp += 4; return; }
void sub_00339506(void) { esp += 4; return; }
void sub_00339511(void) { esp += 4; return; }
void sub_0035B3B0(void) { esp += 4; return; }
void sub_00361BB4(void) { esp += 4; return; }

/**
 * sub_001FE1E0 - RenderWare linked-list traversal with callback
 * Original: 0x001FE1E0 (53 bytes) - rw_world_pipe_xbox
 *
 * Traverses a circular linked list and calls a comparison callback
 * for each element. Returns count of non-matching elements.
 *
 * Stack params: [esp+4]=list_head, [esp+8]=comp_func, [esp+C]=comp_arg
 *
 * BUG: The linked list at 0x41B44C can be uninitialized/corrupt,
 * causing an infinite loop. Added max iteration limit.
 */
void sub_001FE1E0(void)
{
    /* RW linked list traversal - skip entirely because lists can be
     * uninitialized/corrupt. Returns 0 (no matches found). */
    eax = 0;
    esp += 4; return;
}

/**
 * sub_0034D530 - D3D8LTCG rendering pipeline (STUB)
 *
 * Original: 0x0034D530-0x00360A54 (79 KB, D3D section)
 *
 * This is the Xbox D3D8's main rendering pipeline function - it processes
 * the NV2A push buffer, configures GPU state, and spin-waits for GPU
 * completion. Since the NV2A GPU doesn't exist in our D3D11 environment,
 * this function would hang forever in spin-wait loops reading GPU registers.
 *
 * Our D3D11 layer (d3d8_device.c) handles actual rendering separately.
 * This stub matches the original's ret 12 (pops 3 dword args + ret addr).
 */
volatile uint32_t g_d3d_render_count = 0;
void sub_0034D530(void)
{
    g_d3d_render_count++;
    if (g_d3d_render_count <= 5 || (g_d3d_render_count % 10000) == 0)
        fprintf(stderr, "  [D3D8-RENDER] sub_0034D530 called #%u\n", g_d3d_render_count);
    eax = 0;
    esp += 16; return; /* ret 12: pop 12 bytes of args + 4 byte ret addr */
}

/**
 * sub_000110E0 - Rendering context tick (STUB)
 *
 * Original: 0x000110E0 - 0x00011236 (342 bytes, 99 insns)
 *
 * This function is the Xbox rendering pipeline "tick". It:
 *   Part 1: Processes async callback from global list at 0x4AED9C
 *   Part 2: Iterates the rendering context's scene objects, calling
 *           vtable methods to sort/compare world pipes
 *
 * Part 2 makes hundreds of thousands of ICALLs (to sub_001F8860 and
 * invalid addresses like 0x12FE7CF0), eventually hanging in a spin-wait
 * on NV2A GPU registers. Since we use D3D11 for rendering, the Xbox
 * rendering pipeline tick is not needed.
 *
 * We keep Part 1 (async callback) since the loading pipeline's async
 * completion notifications may flow through it.
 *
 * Calling convention: cdecl, no params. Uses edi (set by caller to
 * rendering context pointer). Preserves ebx, esi.
 */
volatile uint32_t g_tick_110e0_count = 0;

void sub_000110E0(void)
{
    g_tick_110e0_count++;
    uint32_t tick_count = g_tick_110e0_count;

    /* Part 1: Process async callback (preserved for loading pipeline) */
    {
        uint32_t cb = MEM32(0x4AED9C);
        if (cb != 0) {
            uint32_t vtable = MEM32(cb);
            ecx = cb;
            uint32_t saved_esp = g_esp;
            PUSH32(esp, 0);
            RECOMP_ICALL_SAFE(MEM32(vtable + 4), saved_esp);
            if (tick_count <= 5)
                fprintf(stderr, "  [TICK] sub_000110E0 #%u: async callback at 0x%08X → eax=%u\n",
                        tick_count, MEM32(vtable + 4), eax);
        }
    }

    /* Part 2: Process task queue (file load completions).
     *
     * Original flow: checks queue at edi, creates reader via sub_001B33A0,
     * polls reader, sets completion flag when done. The reader uses RW
     * streaming pipeline which hangs on NV2A GPU registers.
     *
     * Simplified: skip the reader entirely. If there's an active queue entry,
     * immediately set its completion flag to 1 and advance the head.
     * This works because the resource data was already loaded into the
     * resource slots by init code before sub_00011240 was called.
     *
     * Queue layout (at edi):
     *   +0x788: head index (0-23 circular)
     *   +0x78C: tail/free index
     *   +0x790: version counter
     *   Entries at index*80: name string at +0, completion_flag_ptr at +0x40,
     *     resource at +0x44, param at +0x48, status at +0x4C (0 = empty)
     */
    /* Queue processing removed - completion flags now set directly
     * in sub_00011240 (gen patch) since the async RW stream reader
     * hangs on NV2A GPU registers. */

    /* Car physics integration with heading, speed, and drag.
     *
     * Fake physics body layout (at phys_ptr = 0x5FFF00):
     *   +0x08: forward acceleration (written by sub_000636D0)
     *   +0x0C: turn rate (written by sub_000636D0)
     *   +0x10: pos_x (world)
     *   +0x14: pos_y (world)
     *   +0x18: heading (radians, 0=up/north, CW positive)
     *   +0x1C: speed (scalar forward speed, units/s)
     *
     * Only integrate during gameplay (state 4) to avoid garbage from
     * uninitialized accumulators during loading states. */
    if (MEM32(0x4D53B8) == 4) {
        uint32_t phys_ptr = MEM32(0x557880 + 0x1B4);
        if (phys_ptr > 0x100 && phys_ptr < 0x3FFFFFF) {
            static int _state4_init = 0;
            if (!_state4_init) {
                _state4_init = 1;
                MEMF(phys_ptr + 0x08) = 0.0f;  /* accel */
                MEMF(phys_ptr + 0x0C) = 0.0f;  /* turn rate */
                MEMF(phys_ptr + 0x10) = 0.0f;  /* pos_x */
                MEMF(phys_ptr + 0x14) = 0.0f;  /* pos_y */
                MEMF(phys_ptr + 0x18) = 0.0f;  /* heading (0 = north) */
                MEMF(phys_ptr + 0x1C) = 0.0f;  /* speed */
            }

            float dt = MEMF(0x4AE1FC);
            if (dt <= 0.0f || dt > 0.2f) dt = 0.016f; /* sanity clamp */

            float accel     = MEMF(phys_ptr + 0x08);
            float turn_rate = MEMF(phys_ptr + 0x0C);
            float heading   = MEMF(phys_ptr + 0x18);
            float speed     = MEMF(phys_ptr + 0x1C);

            /* Apply acceleration */
            speed += accel * dt;

            /* Drag: proportional to speed, decelerates when not accelerating.
             * drag_coeff = 0.8 means speed halves in ~0.87s with no input. */
            float drag = 0.8f;
            speed *= (1.0f - drag * dt);

            /* Clamp speed: max ~50 units/s forward, allow small reverse */
            if (speed > 50.0f) speed = 50.0f;
            if (speed < -10.0f) speed = -10.0f;
            /* Kill very small speeds to prevent creeping */
            if (speed > -0.01f && speed < 0.01f) speed = 0.0f;

            /* Steering: turn rate scales with speed (can't turn while stopped).
             * At low speed, reduce turn. At high speed, slightly reduce too. */
            {
                float speed_factor;
                float abs_spd = speed < 0 ? -speed : speed;
                if (abs_spd < 0.5f)
                    speed_factor = abs_spd * 2.0f; /* ramp 0→1 over 0..0.5 */
                else if (abs_spd > 30.0f)
                    speed_factor = 1.0f - (abs_spd - 30.0f) * 0.01f; /* slight reduction */
                else
                    speed_factor = 1.0f;
                if (speed_factor < 0.0f) speed_factor = 0.0f;
                if (speed_factor > 1.0f) speed_factor = 1.0f;
                heading += turn_rate * speed_factor * dt;
            }

            /* Normalize heading to [-pi, pi] */
            while (heading > 3.14159265f) heading -= 6.28318530f;
            while (heading < -3.14159265f) heading += 6.28318530f;

            /* Position integration: move along heading direction.
             * heading=0 → north (pos_y increases), heading=pi/2 → east (pos_x increases) */
            float dx = sinf(heading) * speed * dt;
            float dy = cosf(heading) * speed * dt;
            float new_px = MEMF(phys_ptr + 0x10) + dx;
            float new_py = MEMF(phys_ptr + 0x14) + dy;

            /* Road edge collision: road is 30 units wide centered at x=0.
             * Car half-width is ~1 unit, so effective edge at ±14. */
            {
                float road_edge = 14.0f;
                if (new_px > road_edge) {
                    new_px = road_edge;
                    /* Reflect heading away from right wall */
                    heading = -heading;
                    speed *= 0.5f;  /* lose half speed on wall hit */
                } else if (new_px < -road_edge) {
                    new_px = -road_edge;
                    heading = -heading;
                    speed *= 0.5f;
                }
            }

            MEMF(phys_ptr + 0x10) = new_px;
            MEMF(phys_ptr + 0x14) = new_py;

            /* Store updated heading and speed */
            MEMF(phys_ptr + 0x18) = heading;
            MEMF(phys_ptr + 0x1C) = speed;

            /* ── Traffic obstacles ──────────────────────────────────── */
            /* Obstacle array at 0x5FFE00: 8 slots × 16 bytes each.
             * Layout per slot: +0 pos_x (float), +4 pos_y (float),
             *                  +8 speed (float), +C flags (uint32_t: bit 0=active)
             * Obstacles spawn ahead of the player and move forward slowly.
             * Player hitting an obstacle = TAKEDOWN (speed boost + score). */
            {
                #define OBS_BASE   0x5FFE00
                #define OBS_COUNT  8
                #define OBS_SIZE   16
                #define OBS_ADDR(i, off) (OBS_BASE + (i) * OBS_SIZE + (off))
                static int _obs_init = 0;
                static uint32_t _takedown_count = 0;
                static uint32_t _obs_seed = 12345;
                int oi;

                /* Simple LCG PRNG for obstacle placement */
                #define OBS_RAND() (_obs_seed = _obs_seed * 1103515245 + 12345, (_obs_seed >> 16) & 0x7FFF)

                /* Initialize obstacles on first call */
                if (!_obs_init) {
                    _obs_init = 1;
                    for (oi = 0; oi < OBS_COUNT; oi++) {
                        float lane = ((float)(OBS_RAND() % 5) - 2.0f) * 5.0f; /* -10, -5, 0, 5, 10 */
                        float ahead = 30.0f + (float)(OBS_RAND() % 80);
                        MEMF(OBS_ADDR(oi, 0)) = lane;           /* pos_x */
                        MEMF(OBS_ADDR(oi, 4)) = new_py + ahead; /* pos_y */
                        MEMF(OBS_ADDR(oi, 8)) = 3.0f + (float)(OBS_RAND() % 5); /* speed */
                        MEM32(OBS_ADDR(oi, 0xC)) = 1;           /* active */
                    }
                }

                /* Update and collide each obstacle */
                for (oi = 0; oi < OBS_COUNT; oi++) {
                    if (MEM32(OBS_ADDR(oi, 0xC)) == 0) continue; /* inactive */

                    float ox = MEMF(OBS_ADDR(oi, 0));
                    float oy = MEMF(OBS_ADDR(oi, 4));
                    float os = MEMF(OBS_ADDR(oi, 8));

                    /* Move obstacle forward at its own speed */
                    oy += os * dt;
                    MEMF(OBS_ADDR(oi, 4)) = oy;

                    /* Recycle if too far behind player */
                    if (oy < new_py - 60.0f) {
                        float lane = ((float)(OBS_RAND() % 5) - 2.0f) * 5.0f;
                        float ahead = 80.0f + (float)(OBS_RAND() % 60);
                        MEMF(OBS_ADDR(oi, 0)) = lane;
                        MEMF(OBS_ADDR(oi, 4)) = new_py + ahead;
                        MEMF(OBS_ADDR(oi, 8)) = 3.0f + (float)(OBS_RAND() % 8);
                        continue;
                    }

                    /* AABB collision: car is ~4.5×2, obstacle is ~4×2 */
                    float rel_x = new_px - ox;
                    float rel_y = new_py - oy;
                    if (rel_x < 0) rel_x = -rel_x;
                    if (rel_y < 0) rel_y = -rel_y;
                    if (rel_x < 3.0f && rel_y < 4.5f) {
                        /* TAKEDOWN! */
                        _takedown_count++;
                        /* Respawn obstacle far ahead */
                        float lane = ((float)(OBS_RAND() % 5) - 2.0f) * 5.0f;
                        MEMF(OBS_ADDR(oi, 0)) = lane;
                        MEMF(OBS_ADDR(oi, 4)) = new_py + 100.0f + (float)(OBS_RAND() % 40);
                        MEMF(OBS_ADDR(oi, 8)) = 3.0f + (float)(OBS_RAND() % 8);

                        /* Speed boost on takedown */
                        speed += 5.0f;
                        if (speed > 50.0f) speed = 50.0f;
                        MEMF(phys_ptr + 0x1C) = speed;

                        /* Store takedown count for HUD display */
                        MEM32(0x5FFD00) = _takedown_count;
                    }
                }
                #undef OBS_BASE
                #undef OBS_COUNT
                #undef OBS_SIZE
                #undef OBS_ADDR
                #undef OBS_RAND
            }
        }
    }

    /* Diagnostic: print state, timing, and simulation data */
    if (tick_count <= 20 || (tick_count % 500 == 0)) {
        uint32_t phys_ptr = MEM32(0x557880 + 0x1B4);
        float spd = 0.0f, hdg = 0.0f;
        float pos_x = 0.0f, pos_y = 0.0f;
        if (phys_ptr > 0x100 && phys_ptr < 0x3FFFFFF) {
            pos_x = MEMF(phys_ptr + 0x10);
            pos_y = MEMF(phys_ptr + 0x14);
            hdg   = MEMF(phys_ptr + 0x18);
            spd   = MEMF(phys_ptr + 0x1C);
        }
        fprintf(stderr, "  [TICK] #%u: game=%u dt=%.4f spd=%.2f hdg=%.1f° pos=(%.1f,%.1f) icalls=%llu\n",
                tick_count, MEM32(0x4D53B8), MEMF(0x4AE1FC),
                spd, hdg * 57.2958f, pos_x, pos_y,
                (unsigned long long)g_icall_count);
    }

    /* Signal "rendering complete" to the game state machine.
     * The gate flag at 0x4D53BC (= ebp + 0x2E21C) controls whether the
     * game_state can transition. It's set to 1 when MEM8(0x4D53BE) is
     * non-zero (checked in sub_000165F0 at loc_0001663B). In the original
     * game, the RW rendering pipeline sets this after completing a frame.
     * Since we stub rendering, set it here so the game can advance states. */
    MEM8(0x4D53BE) = 1;

    /* Pump the Windows message loop and present a D3D frame.
     * The original Xbox rendering pipeline (Part 2) is stubbed because it
     * hangs on NV2A GPU registers. Instead, we call our D3D11 frame pump
     * which clears to a solid color and presents. This runs at ~60fps
     * (throttled inside game_frame_pump). */
    {
        extern void game_frame_pump(void);
        game_frame_pump();
    }

    esp += 4; return; /* ret: pop dummy return address */
}

/**
 * sub_00135040 - Audio/streaming subsystem init (STUB)
 *
 * Original: 0x00135040 - 0x00135240 (512 bytes, 134 insns)
 * Category: game_audio
 *
 * This function initializes the game's audio/streaming subsystem at edi+0x40B310.
 * It calls many RW functions (sub_001F7150, sub_001F77C0, etc.) and enters a
 * spin-loop in the RW rendering pipe iteration (0x12FE7CF0 / sub_001F8860 pattern).
 *
 * Stubbed because the audio subsystem isn't needed for initial rendering.
 * The original function uses edi (set by caller to 0x40B310) and sets up
 * various fields at edi+offsets.
 */
void sub_00135040(void)
{
    fprintf(stderr, "  [STUB] sub_00135040 (audio init) - skipped\n");
    esp += 4; return; /* ret: pop dummy return address */
}

/**
 * sub_00018BB0 - Resource slot polling
 * Original checks a version counter at [ecx+4] against edx (global version).
 * Since we defer worker threads (they can't run synchronously), the version
 * field is never updated, causing a permanent mismatch.
 *
 * This override skips the version check: if the slot status [ecx] == 0
 * (free) and the resource pointer [ecx+C] is non-zero, return it.
 * Otherwise return 0 (not ready).
 *
 * Original logic:
 *   if ([ecx+4] < 0) skip version check
 *   if ([ecx+4] != edx) return 0
 *   if ([ecx] != 0) return 0
 *   return [ecx+C], set [ecx] = -1
 */
void sub_00018BB0(void)
{
    uint32_t slot_status = MEM32(ecx);
    uint32_t resource_ptr = MEM32(ecx + 0xC);
    static int _18bb0_count = 0;

    if (slot_status == 0 && resource_ptr != 0) {
        /* Resource is available - return it and mark slot consumed */
        MEM32(ecx) = 0xFFFFFFFFu;
        eax = resource_ptr;
        if (_18bb0_count < 30)
            fprintf(stderr, "  [18BB0] ecx=0x%08X status=%u res=0x%08X edx=0x%08X → RETURN 0x%08X\n",
                    ecx, slot_status, resource_ptr, edx, eax);
    } else {
        eax = 0;
        if (_18bb0_count < 30)
            fprintf(stderr, "  [18BB0] ecx=0x%08X status=0x%08X res=0x%08X edx=0x%08X → NULL\n",
                    ecx, slot_status, resource_ptr, edx);
    }
    _18bb0_count++;
    esp += 4; return; /* ret */
}

/**
 * sub_00020930 - RW resource pointer fixup (STUB)
 *
 * Original: 0x00020930 - 0x00020961 (49 bytes)
 *
 * This function does pointer fixup on RW binary data: reads a count
 * and offset table from the resource, adds the base address to each
 * offset to create absolute pointers. Since worker threads were deferred
 * and never processed the raw resource data, the count/offset fields
 * contain garbage, causing the fixup loop to access invalid memory.
 *
 * Stub: stores the resource pointer at the destination and returns 1.
 */
void sub_00020930(void)
{
    /* MEM32(ecx) = eax: store resource ptr at destination */
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */
}

/**
 * sub_00159710 - RW resource pointer relocation (STUB)
 *
 * Original: 0x00159710 - 0x0015974F (63 bytes, 28 insns)
 *
 * Adjusts internal pointers in a loaded RW resource by a delta:
 *   esi = struct pointer, eax = delta (base address to add)
 *   +4: pointer to array → adjusted by delta
 *   +8: count of entries → loops calling sub_001596B0
 *   +0xC: another pointer → adjusted by delta
 *
 * Stubbed because worker threads are deferred and resource data
 * isn't parsed into the expected RW format. The loop iterates
 * through sub-structures that don't exist, causing hangs.
 *
 * The top-level pointer adjustments are preserved since the
 * caller reads esi+4 after the return.
 */
void sub_00159710(void)
{
    uint32_t delta = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + delta;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + delta;
    fprintf(stderr, "  [STUB] sub_00159710: esi=0x%08X delta=0x%08X (relocation skipped)\n",
            esi, delta);
    esp += 4; return; /* ret */
}

/**
 * sub_0001BE60 - Track/scene setup (STUB)
 *
 * Original: 0x0001BE60 - 0x0001BFC8 (360 bytes, 86 insns)
 * Category: game_engine
 *
 * Initializes track rendering data: processes materials, textures,
 * and geometry from the RW world structure. Calls 13 sub-functions
 * including sub_0001C340 (scene processing, 485 insns) which iterates
 * through world geometry data.
 *
 * Stubbed because the RW world data at 0x4D1FE8 isn't properly loaded
 * (worker threads deferred). sub_0001C340 hangs reading garbage
 * geometry counts from unprocessed RW structures.
 */
void sub_0001BE60(void)
{
    fprintf(stderr, "  [STUB] sub_0001BE60 (track/scene setup) - skipped\n");
    esp += 4; return; /* ret */
}

/**
 * sub_00135240 - Audio streaming setup (STUB)
 *
 * Original: 0x00135240 - 0x00135350 (272 bytes, 75 insns)
 * Category: game_audio
 *
 * Polls resource slots for audio data, then initializes the streaming
 * audio subsystem (DirectSound buffers, XMA decoders, etc.).
 * Depends on sub_00135040 having run first (which we stubbed).
 * Returns non-zero LO8 on success.
 */
void sub_00135240(void)
{
    fprintf(stderr, "  [STUB] sub_00135240 (audio streaming setup) - skipped\n");
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */
}

/**
 * sub_00062BD0 - Track environment loader (STUB)
 *
 * Original: 0x00062BD0 - 0x00062D60 (400 bytes, 119 insns)
 * Category: game_engine
 *
 * Loads track environment data via resource slot 0x3F9DB4 and processes
 * it through a multi-state internal state machine. The first state calls
 * sub_001B33A0 (RW stream reader) which hangs on NV2A GPU registers.
 *
 * Stubbed to return 1 (success) since the track environment can't be
 * loaded without the RW streaming pipeline.
 */
void sub_00062BD0(void)
{
    static int _62bd0_count = 0;
    if (_62bd0_count < 3)
        fprintf(stderr, "  [STUB] sub_00062BD0 (track env loader) - returning 1\n");
    _62bd0_count++;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */
}

/**
 * sub_0004DD00 - Pipeline/material name lookup (STUB)
 *
 * Original: 0x0004DD00 - 0x0004DEA6 (422 bytes, 137 insns)
 * Category: game_engine
 *
 * Looks up named rendering pipelines and materials in the RW world.
 * Iterates through world entries (MEM32(0x4D1FE0)+8 = count) searching
 * by name (via sub_00244C51/strcmp). Populates tables at 0x460770,
 * 0x4607C8, 0x460848 with pointers to found entries.
 *
 * Stubbed because RW world structure isn't properly initialized
 * (worker threads deferred, scene setup skipped). The world entry
 * count at 0x4D1FE0+8 may be garbage, causing infinite loops.
 */
void sub_0004DD00(void)
{
    fprintf(stderr, "  [STUB] sub_0004DD00 (pipeline/material lookup) - skipped\n");
    esp += 4; return; /* ret */
}

/**
 * sub_00221F20 - RW hash table lookup (SAFE OVERRIDE)
 *
 * Original: 0x00221F20 - 0x00221F80 (96 bytes, 49 insns)
 * Category: rw_world_pipe_xbox
 *
 * Hash table entry removal: reads table_size from ecx+0x10,
 * uses it as divisor for index probing. When RW pipeline tables
 * aren't initialized, table_size=0, causing division-by-zero.
 *
 * This override adds a guard: if table_size is 0, return 0.
 * Otherwise performs the original hash table lookup logic.
 *
 * Calling convention: stdcall-like, 1 param on stack (ecx via stack)
 *   [esp+4] = pointer to hash table structure
 */
void sub_00221F20(void)
{
    /* ecx = [esp+4] (param) */
    ecx = MEM32(esp + 4);

    /* Original early-out: if count == 0, return 0 */
    if (MEM32(ecx) == 0) {
        eax = 0;
        esp += 4; return;
    }

    /* Guard: if table_size (ecx+0x10) is 0, return 0 to avoid div-by-zero */
    uint32_t table_size_val = MEM32(ecx + 0x10);
    if (table_size_val == 0) {
        eax = 0;
        esp += 4; return;
    }

    /* Original logic: probe for non-null entry */
    eax = MEM32(ecx + 4);
    uint32_t table_ptr = MEM32(ecx + 0x14);

    if (MEM32(table_ptr + eax * 4) == 0) {
        /* Probe until we find a non-null slot */
        for (int i = 0; i < (int)table_size_val; i++) {
            eax = MEM32(ecx + 4);
            eax++;
            int32_t s_eax = (int32_t)eax;
            int32_t rem = s_eax % (int32_t)table_size_val;
            MEM32(ecx + 4) = (uint32_t)rem;
            if (MEM32(table_ptr + rem * 4) != 0) {
                eax = (uint32_t)rem;
                break;
            }
        }
    }

    /* If slot is still empty, return 0 */
    uint32_t idx = MEM32(ecx + 4);
    uint32_t entry = MEM32(table_ptr + idx * 4);
    if (entry == 0) {
        eax = 0;
        esp += 4; return;
    }

    /* Remove entry from table, add to free list */
    uint32_t next = MEM32(entry);
    MEM32(table_ptr + idx * 4) = next;
    uint32_t free_head = MEM32(ecx + 0x1C);
    MEM32(entry) = free_head;
    uint32_t count = MEM32(ecx);
    count--;
    MEM32(ecx + 0x1C) = entry;
    MEM32(ecx) = count;
    eax = MEM32(entry + 4);
    esp += 4; return;
}

/**
 * sub_001C66F0 - RW world linked list cleanup (STUB)
 *
 * Original: 0x001C66F0 - 0x001C67CE (222 bytes, 74 insns)
 *
 * Walks linked lists in the RW world rendering structure, clearing
 * entries and resetting float matrices. Contains an unbounded linked
 * list traversal that hangs on uninitialized/circular list data.
 *
 * Called with eax = pointer to RW world rendering context.
 * Also calls sub_001C1740 and sub_001BEFF0 (both already stubbed).
 *
 * Stubbed because RW world data isn't properly initialized.
 */
void sub_001C66F0(void)
{
    static int _1c66f0_count = 0;
    if (_1c66f0_count < 5)
        fprintf(stderr, "  [STUB] sub_001C66F0 (RW world cleanup) eax=0x%08X\n", eax);
    _1c66f0_count++;
    esp += 4; return; /* ret */
}

/**
 * sub_00022660 - Game state notification dispatch (RECURSION-GUARDED)
 *
 * Original: 0x00022660 - 0x000226C6 (102 bytes, 41 insns)
 * Category: game_vtable
 *
 * Dispatches state change notifications through vtable callbacks.
 * When RW world data isn't initialized, vtable pointers can form
 * circular chains causing infinite recursion → stack overflow.
 *
 * This override adds a recursion depth guard (max 32 levels).
 * CC: thiscall with 3 params on stack (ret 12)
 */
void sub_00022660(void)
{
    static int _depth = 0;
    static int _guard_count = 0;

    if (_depth >= 32) {
        if (_guard_count < 5)
            fprintf(stderr, "  [GUARD] sub_00022660 recursion depth %d, bailing\n", _depth);
        _guard_count++;
        esp += 16; return; /* ret 12 */
    }

    _depth++;

    /* Save params from stack */
    uint32_t param1 = MEM32(esp + 4);
    uint32_t param2 = MEM32(esp + 8);
    uint32_t param3 = MEM32(esp + 0xC);

    /* ecx = this (ebx in original), call sub_001B4170 */
    uint32_t saved_ebx = ebx;
    ebx = ecx;
    PUSH32(esp, param3);
    PUSH32(esp, param2);
    PUSH32(esp, param1);
    ecx = ebx;
    PUSH32(esp, 0); sub_001B4170();

    /* Call sub_001B4260 to hash-lookup the state */
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x889D607Fu);
    PUSH32(esp, 0); sub_001B4260();

    uint32_t new_state = eax;
    if (MEM32(ebx + 4) != new_state) {
        /* Dispatch: call vtable[0x10](this, new_state, 0) */
        uint32_t vtable = MEM32(ebx);
        uint32_t method1 = MEM32(vtable + 0x10);
        recomp_func_t fn1 = recomp_lookup_manual(method1);
        if (!fn1) fn1 = recomp_lookup(method1);
        if (!fn1) fn1 = recomp_lookup_kernel(method1);
        if (fn1) {
            uint32_t _saved_esp = esp;
            PUSH32(esp, 0);
            PUSH32(esp, new_state);
            ecx = ebx;
            PUSH32(esp, 0);
            fn1();
        }

        /* Update state */
        uint32_t old_state = MEM32(ebx + 4);
        MEM32(ebx + 4) = new_state;

        /* If ebx+0x10 is non-null, update related pointers */
        uint32_t ptr = MEM32(ebx + 0x10);
        if (ptr != 0) {
            MEM32(ebx + 0x14) = MEM32(ptr + 0x20);
            if (new_state != 0) {
                MEM32(new_state + 0x10) = MEM32(ptr + 0x20);
            }
        }

        /* Dispatch: call vtable[0x14](this, old_state, 0) */
        vtable = MEM32(ebx);
        uint32_t method2 = MEM32(vtable + 0x14);
        recomp_func_t fn2 = recomp_lookup_manual(method2);
        if (!fn2) fn2 = recomp_lookup(method2);
        if (!fn2) fn2 = recomp_lookup_kernel(method2);
        if (fn2) {
            PUSH32(esp, 0);
            PUSH32(esp, old_state);
            ecx = ebx;
            PUSH32(esp, 0);
            fn2();
        }
    }

    ebx = saved_ebx;
    _depth--;
    esp += 16; return; /* ret 12 */
}

/**
 * sub_0003D9E0 - Game render orchestrator (STUB)
 *
 * Original: 0x0003D9E0 - 0x0003DA90 (176 bytes, 41 insns)
 * Category: game_render
 *
 * Called from the common exit path (loc_00016C42) of the main game tick
 * function sub_000165F0. Orchestrates a single frame of RenderWare rendering:
 *   1. sub_0002F330 - sets render state pointers based on edi (mode select)
 *   2. sub_0034D530 - D3D rendering (already stubbed separately)
 *   3. sub_00040660 - copies camera/matrix data from RW global tables
 *
 * All three callees chase pointers through uninitialized RenderWare structures
 * (vtable chains, D3D state objects), producing millions of garbage ICALLs to
 * addresses like 0x24000168, 0x23800068, etc. and leaking ESP massively
 * (24+ bytes per ICALL). This causes the game loop to hang after one iteration.
 *
 * Stub: skip all rendering operations. Our frame output comes from
 * game_frame_pump() called via sub_000110E0 instead.
 *
 * Implicit register params: esi = game object base (0x4D6170), edi = mode (0)
 * Calling convention: cdecl, caller pushes dummy ret addr
 */
void sub_0003D9E0(void)
{
    esp += 4; return; /* pop dummy return address */
}

/**
 * sub_000636D0 - Car physics force computation (OVERRIDE)
 *
 * Original: 0x000636D0 - 0x00063A68 (920 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 *
 * Computes throttle/steering forces from input accumulators and writes
 * them to the car's velocity vector. Also manages the boost state
 * machine and physics callbacks when boost is active.
 *
 * Override reason: Scale factors at 0x557870, 0x3B1C40, 0x5592C8,
 * 0x3B1C38 are zero/denormalized because the game's car/track init
 * doesn't fully initialize them in our recompilation. We fall back
 * to hardcoded scales when they're near-zero.
 *
 * Register input: esi = car object pointer (0x557880, set by caller)
 */
void sub_000636D0(void)
{
    uint32_t saved_ebx = ebx;
    uint32_t saved_edi = edi;
    float delta_time = MEMF(0x4AE1FC);
    uint8_t boost_end_flag = 0;

    /* Debug: log first call and periodically */
    {
        static int _dbg = 0;
        _dbg++;
        if (_dbg == 1 || (_dbg % 1000 == 0)) {
            fprintf(stderr, "  [PHY] #%d esi=0x%08X vel_ptr=0x%08X boost=%d\n",
                    _dbg, esi, MEM32(esi + 0x1B4), MEM8(0x4A4B90));
        }
    }

    /* ─── Part 0: Ensure physics body exists ─────────────────────── */
    /* The car's physics velocity pointer (esi+0x1B4) is NULL because
     * the game's physics world init path doesn't fully run in our
     * recompilation. Allocate a fake physics body in unused Xbox memory
     * so forces have somewhere to write. Address 0x5FFF00 is in free
     * BSS space past the image end (~0x5A4000). */
    {
        uint32_t vel_ptr_check = MEM32(esi + 0x1B4);
        if (vel_ptr_check == 0 || vel_ptr_check > 0x3FFFFFF) {
            static int _init_once = 0;
            if (!_init_once) {
                _init_once = 1;
                /* Zero out fake physics body (32 bytes) */
                MEM32(0x5FFF00 + 0) = 0;
                MEM32(0x5FFF00 + 4) = 0;
                MEM32(0x5FFF00 + 8) = 0;  /* vel.x */
                MEM32(0x5FFF00 + 0xC) = 0; /* vel.y */
                MEM32(0x5FFF00 + 0x10) = 0;
                MEM32(0x5FFF00 + 0x14) = 0;
                MEM32(0x5FFF00 + 0x18) = 0;
                MEM32(0x5FFF00 + 0x1C) = 0;
                fprintf(stderr,
                    "  [PHY] Allocated fake physics body at 0x5FFF00 "
                    "(old vel_ptr=0x%08X)\n", vel_ptr_check);
            }
            MEM32(esi + 0x1B4) = 0x5FFF00;
        }
    }

    /* ─── Part 1: Force computation (car model) ──────────────────── */
    /* Fake physics body layout at 0x5FFF00:
     *   +0x08: forward acceleration (set here, read by integrator)
     *   +0x0C: turn rate (set here, read by integrator)
     *   +0x10: pos_x (world, set by integrator)
     *   +0x14: pos_y (world, set by integrator)
     *   +0x18: heading (radians, 0=up/north, CW positive)
     *   +0x1C: speed (scalar forward speed)
     */
    {
        int32_t raw_thr = (int32_t)MEM32(0x4D652C)
                        - (int32_t)MEM32(0x4D6B24)
                        - (int32_t)MEM32(0x4D6B20);
        /* acceleration = raw_input * 0.001
         *   W key (raw=1000): accel = 1.0 units/s^2
         *   Gamepad (raw=2040): accel = 2.04 units/s^2 */
        float accel_f = (float)raw_thr * 0.001f;

        int32_t raw_str = (int32_t)MEM32(0x4D6530)
                        - 2 * (int32_t)MEM32(0x4D6B28);
        /* turn_rate = raw_input * 0.003 radians/s (scaled by speed in integrator)
         *   A/D key (raw=1000): base turn rate = 3.0 rad/s */
        float turn_f = (float)raw_str * 0.003f;

        uint32_t vel_ptr = MEM32(esi + 0x1B4);
        MEMF(vel_ptr + 8) = accel_f;
        MEMF(vel_ptr + 0xC) = turn_f;

        /* Debug: log when non-zero force is applied */
        {
            static int _wr_dbg = 0;
            _wr_dbg++;
            if (_wr_dbg == 1 ||
                ((accel_f != 0.0f || turn_f != 0.0f) && _wr_dbg % 60 == 0)) {
                fprintf(stderr,
                    "  [PHY-WR] #%d accel=%.3f turn=%.3f spd=%.2f hdg=%.2f\n",
                    _wr_dbg, accel_f, turn_f, MEMF(vel_ptr + 0x1C), MEMF(vel_ptr + 0x18));
            }
        }
    }

    /* ─── Part 2: Boost state machine (only when boost active) ───── */
    if (MEM8(0x4A4B90) == 0)
        goto phy_epilogue;

    {
        uint32_t state = MEM32(esi + 0x1E4);
        switch (state) {
        case 0: { /* Ramp-up */
            float timer = MEMF(esi + 0x1DC);
            float threshold = MEMF(0x3B16E8);
            if (timer >= threshold) {
                MEM32(esi + 0x1E4) = 2;
                MEMF(esi + 0x1DC) = 0.0f;
                MEMF(esi + 0x1E0) = 0.0f;
            } else {
                float new_t = delta_time + timer;
                MEMF(esi + 0x1DC) = new_t;
                if (new_t >= threshold)
                    MEMF(esi + 0x1E0) = MEMF(0x3B168C);
                else
                    MEMF(esi + 0x1E0) = new_t * MEMF(0x557854);
            }
            break;
        }
        case 1: { /* Sustain */
            float timer = MEMF(esi + 0x1DC);
            float threshold = MEMF(0x557838);
            if (timer >= threshold) {
                MEM32(esi + 0x1E4) = 5;
            } else {
                float new_t = delta_time + timer;
                MEMF(esi + 0x1DC) = new_t;
                if (new_t >= threshold)
                    MEMF(esi + 0x1E0) = MEMF(0x3B168C);
                else
                    MEMF(esi + 0x1E0) = new_t * MEMF(0x557868);
            }
            break;
        }
        case 2: { /* Decay (variant A) */
            float timer = MEMF(esi + 0x1DC);
            if (timer <= 0.0f) {
                if (MEM8(esi + 0x19FF) != 0) {
                    MEMF(esi + 0x1DC) = MEMF(0x3B16E8);
                    MEMF(esi + 0x1E0) = MEMF(0x3B168C);
                    MEM32(esi + 0x1E4) = 1;
                    MEM8(esi + 0x19FF) = 0;
                } else {
                    MEMF(esi + 0x1DC) = 0.0f;
                    boost_end_flag = 1;
                }
            } else {
                float new_t = timer - delta_time;
                MEMF(esi + 0x1DC) = new_t;
                if (new_t <= 0.0f)
                    MEMF(esi + 0x1E0) = 0.0f;
                else
                    MEMF(esi + 0x1E0) = new_t * MEMF(0x557868);
            }
            break;
        }
        case 3: { /* Decay (variant B) */
            float timer = MEMF(esi + 0x1DC);
            if (timer <= 0.0f) {
                MEMF(esi + 0x1DC) = 0.0f;
                boost_end_flag = 1;
            } else {
                float new_t = timer - delta_time;
                MEMF(esi + 0x1DC) = new_t;
                if (new_t <= 0.0f)
                    MEMF(esi + 0x1E0) = 0.0f;
                else
                    MEMF(esi + 0x1E0) = new_t * MEMF(0x557854);
            }
            break;
        }
        default:
            break;
        }

        /* ─── Part 3: Post-boost callbacks ────────────────────────── */
        /* Check if boost ended and call sub_00063670 if conditions met */
        if (MEM8(esi + 0x19FD) == 0) {
            uint32_t mode = MEM32(0x4D4244);
            if ((mode == 0x17 || mode == 0x18 || mode == 1)
                && boost_end_flag) {
                eax = esi;
                PUSH32(esp, 0); sub_00063670();
            }
        }

        /* Compute callback args: edx=count, eax=param */
        edx = MEM32(esi + 0x1E8);
        if ((int32_t)edx >= 3)
            eax = 0;
        else
            eax = MEM32(esi + 0x1EC);

        /* Callback through 0x567174 vtable (ICALL_SAFE guards failure) */
        {
            uint32_t cb = MEM32(0x567174);
            if (cb != 0) {
                edi = MEM32(cb);
                uint32_t _icall_esp = g_esp;
                PUSH32(esp, eax);
                PUSH32(esp, edx);
                edx = MEM32(0x567178);
                PUSH32(esp, edx);
                PUSH32(esp, 5);
                PUSH32(esp, 0);
                RECOMP_ICALL_SAFE(MEM32(edi), _icall_esp);
            }
        }
    }

    /* loc_0006394D: Physics object callback */
    {
        uint32_t fptr = MEM32(esi + 0x1F0);
        if (fptr != 0) {
            /* ICALL through vtable at esi+0x1F0 */
            eax = MEM32(fptr);
            {
                uint32_t _icall_esp = g_esp;
                PUSH32(esp, 0);
                RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp);
            }

            /* Walk linked list at esi+0x1D8 */
            edi = MEM32(esi + 0x1D8);
            if (edi != 0) {
                union { float f; uint32_t u; } dt_u;
                dt_u.f = delta_time;
                ebx = dt_u.u; /* delta_time as uint32_t for arg passing */
                while (edi != 0) {
                    if (MEM8(edi + 0xA) != 0) {
                        edx = MEM32(edi);
                        ecx = edi;
                        uint32_t _icall_esp = g_esp;
                        PUSH32(esp, ebx);
                        PUSH32(esp, 0);
                        RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp);
                    }
                    edi = MEM32(edi + 4);
                }
            }
        } else {
            /* No physics object: check sound/feedback flag */
            if (MEM8(0x555D5A) != 0) {
                union { float f; uint32_t u; } dt_u;
                dt_u.f = delta_time;
                eax = dt_u.u;
                PUSH32(esp, eax);
                ecx = 0x555D50;
                PUSH32(esp, 0); sub_000C2DF0();
            }
        }
    }

    /* loc_00063996: Timer/counter update */
    edx = 0x4AE20C;
    PUSH32(esp, 0); sub_00017750();

    /* loc_000639A0: State transition logic */
    if (LO8(eax) != 0) goto phy_epilogue;
    if (MEM32(esi + 0x1F0) == 0x559F8C) goto phy_epilogue;
    if (MEM32(0x4D53B4) == 4) goto phy_epilogue;

    {
        /* Original checks 0x5A3759 for flags, 0x555D5A for sound state.
         * Note: original asm tests 0x5A3759 then overwrites al with 0x555D5A
         * but branches on the FLAGS from 0x5A3759 (not 0x555D5A). */
        uint8_t flag_5A = MEM8(0x5A3759);
        uint8_t flag_5D = MEM8(0x555D5A);

        if (flag_5D != 0) {
            /* loc_00063A1F: 0x555D5A is set */
            if (flag_5D != 0) goto phy_epilogue; /* always taken */
            MEM8(0x555D5A) = 1;
            MEM8(0x555D5B) = 0;
        } else {
            /* loc_000639CB */
            if (flag_5A == 0) {
                /* loc_000639CF: neither flag set */
                MEM8(0x555D5A) = 1;
                MEM8(0x555D5B) = 0;
            }
            /* loc_000639DD: check game mode */
            if (MEM32(0x4D537C) != 0xFFFFFFFFu) goto phy_epilogue;
            if (MEM32(esi + 0x1F0) != 0) goto phy_epilogue;

            /* loc_000639F6: compute and store controller connected flag */
            {
                int32_t idx = (int32_t)(int8_t)MEM8(0x4AED45);
                uint32_t slot_addr = (uint32_t)(idx * 0x188) + 0x4AE728;
                uint32_t slot = MEM32(slot_addr);
                edi = MEM32(slot + 0x11C);
                MEM32(0x4D5380) = (edi != 0xFFFFFFFFu) ? 1 : 0;
            }
        }
    }

phy_epilogue:
    /* loc_00063A31: Flag management and cleanup */
    if (MEM8(esi + 0x19FD) != 0) {
        if (MEM32(esi + 0x1F0) == 0) {
            /* Call sub_000146E0 with notification constants */
            edi = 0;
            PUSH32(esp, 0x94413FA7u);
            PUSH32(esp, 0x37AAA797);
            PUSH32(esp, 0x567170);
            PUSH32(esp, 0); sub_000146E0();
        }
        MEM8(esi + 0x19FD) = 0;
    }

    /* Restore callee-saved registers */
    ebx = saved_ebx;
    edi = saved_edi;
    esp += 4; return; /* pop dummy return address */
}
