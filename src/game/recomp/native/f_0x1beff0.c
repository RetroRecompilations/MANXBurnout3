#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BEFF0
 * Original: 0x001BEFF0 - 0x001BF03A (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t scan_guard = 0;

loc_001BEFF0:
    if (CMP_EQ(MEM32(esi), 0)) goto loc_001BF039; /* je: equal / zero */

loc_001BEFF5:
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001BF039; /* je: equal / zero */

    /* The second Xbox D3D cache descriptor built during frontend startup can
     * contain the hardware driver's sentinel head (1) with a zero stride.
     * The retail Xbox replaces those fields before this pass; our portable
     * D3D bridge has no corresponding hardware cache, so there is nothing to
     * reorder.  Do not turn the sentinel into an address and scan forever.
     * Real RenderWare pools still take the original path below, including
     * native pointers into the mirrored guest-memory allocation. */
    if (MEM32(esi + 4) < 8u || !is_valid_game_ptr(eax))
        goto loc_001BF039;

loc_001BEFFC:
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    ebx = 1;

loc_001BF004:
    /* A translated constructor can leave the free list cyclic. The retail
     * loop assumes a null-terminated list; marker 1 means this node was
     * already visited during this pass, so it is the exact cycle boundary. */
    if (MEM32(eax + 4) == ebx || edx >= 0x10000u)
        goto loc_001BF00E;
    MEM32(eax + 4) = ebx;
    eax = MEM32(eax);
    edx++;
    if (TEST_NZ(eax, eax)) goto loc_001BF004; /* jne: not equal / not zero */

loc_001BF00E:
    eax = MEM32(esi);
    ecx = 0; /* xor self */

loc_001BF012:
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_001BF02D; /* jne: not equal / not zero */

loc_001BF017:
    if (TEST_NZ(ecx, ecx)) goto loc_001BF023; /* jne: not equal / not zero */

loc_001BF01B:
    MEM32(esi + 0x10) = eax;
    MEM32(eax + 4) = ecx;
    goto loc_001BF028;

loc_001BF023:
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;

loc_001BF028:
    edx--;
    ecx = eax;
    if ((edx == 0)) goto loc_001BF032; /* je: equal / zero */

loc_001BF02D:
    eax = eax + MEM32(esi + 4);
    if (++scan_guard >= 0x100000u) {
        /* Corrupt/non-pool link: expose an empty free list instead of
         * walking guest memory forever during frontend construction. */
        MEM32(esi + 0x10) = 0;
        POP32(esp, ebx);
        goto loc_001BF039;
    }
    goto loc_001BF012;

loc_001BF032:
    MEM32(eax) = 0;
    POP32(esp, ebx);

loc_001BF039:
    esp += 4; return; /* ret */

}
