#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020BDF0
 * Original: 0x0020BDF0 - 0x0020BE8B (155 bytes, 47 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BDF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BDF0:
    if (TEST_Z(edx, edx)) goto loc_0020BE3F; /* je: equal / zero */

loc_0020BDF4:
    edx = MEM32(esp + 8);
    if (TEST_Z(edx, edx)) goto loc_0020BE25; /* je: equal / zero */

loc_0020BDFC:
    if (CMP_NE(ecx, 5)) goto loc_0020BE13; /* jne: not equal / not zero */

loc_0020BE01:
    ecx = MEM32(0x3C3690);
    MEM32(eax) = ecx;
    edx = MEM32(0x3C3694);
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

loc_0020BE13:
    ecx = MEM32(0x3C3688);
    MEM32(eax) = ecx;
    edx = MEM32(0x3C368C);
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

loc_0020BE25:
    ecx = MEM32(esp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0020BE79; /* je: equal / zero */

loc_0020BE2D:
    ecx = MEM32(0x3C36A8);
    MEM32(eax) = ecx;
    edx = MEM32(0x3C36AC);
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

loc_0020BE3F:
    if (CMP_EQ(ecx, 4)) goto loc_0020BE79; /* je: equal / zero */

loc_0020BE44:
    ecx = MEM32(esp + 4);
    ecx--;
    if (CMP_A(ecx, 5)) goto loc_0020BE8A; /* ja: above (unsigned >) */

loc_0020BE4E:
    { uint32_t _jt = MEM32(ecx * 4 + 0x20BE8C); /* switch: 6 entries, 4 targets */
    if (_jt == 0x0020BE55u) goto loc_0020BE55;
    if (_jt == 0x0020BE67u) goto loc_0020BE67;
    if (_jt == 0x0020BE79u) goto loc_0020BE79;
    if (_jt == 0x0020BE8Au) goto loc_0020BE8A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020BE55:
    ecx = MEM32(0x3C3678);
    MEM32(eax) = ecx;
    edx = MEM32(0x3C367C);
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

loc_0020BE67:
    ecx = MEM32(0x3C3698);
    MEM32(eax) = ecx;
    edx = MEM32(0x3C369C);
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

loc_0020BE79:
    ecx = MEM32(0x3C36A0);
    MEM32(eax) = ecx;
    edx = MEM32(0x3C36A4);
    MEM32(eax + 4) = edx;

loc_0020BE8A:
    esp += 4; return; /* ret */

}
