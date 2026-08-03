#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C68C0
 * Original: 0x001C68C0 - 0x001C6916 (86 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C68C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C68C0:
    edx = MEM32(esp + 4);
    edx = MEM32(edx + 0x2C);
    ecx = ecx << 4;
    eax = eax + 0xFFFFFFF8u;
    edx = ecx + edx + 4;
    ecx = MEM32(eax);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_001C68DE; /* je: equal / zero */

loc_001C68D8:
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;

loc_001C68DE:
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_001C68F2; /* je: equal / zero */

loc_001C68E5:
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    MEM32(eax + 4) = 0;
    goto loc_001C68F7;

loc_001C68F2:
    ecx = MEM32(eax);
    MEM32(edx + 4) = ecx;

loc_001C68F7:
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = ecx;
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_001C690E; /* je: equal / zero */

loc_001C6903:
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

loc_001C690E:
    ecx = MEM32(edx);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}
