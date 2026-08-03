#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00142550
 * Original: 0x00142550 - 0x00142690 (320 bytes, 97 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00142550:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 8;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 8);
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = 0;
    MEM32(edi) = 0;
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_001425B2; /* jne: not equal / not zero */

loc_00142590:
    eax = MEM32(0x3EC270);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_001425A7:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00142688; /* je: equal / zero */

loc_001425B2:
    eax = MEM32(edi + 0x44);
    if (TEST_NZ(eax, eax)) goto loc_001425D2; /* jne: not equal / not zero */

loc_001425B9:
    PUSH32(esp, 0x2000);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3AD1E8);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_001425CF:
    MEM32(edi + 0x44) = eax;

loc_001425D2:
    esi = MEM32(edi + 0x44);
    if (TEST_Z(esi, esi)) goto loc_00142688; /* je: equal / zero */

loc_001425DD:
    eax = 0x3AD240;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_001425E7:
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_001425FB:
    esi = MEM32(edi + 8);
    /* test esi, esi - flags set for next jcc */
    MEM32(edi + 0x48) = eax;
    if (TEST_Z(esi, esi)) goto loc_0014266E; /* je: equal / zero */

loc_00142605:
    eax = 0x3AE388;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014260F:
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00142623:
    MEM32(edi + 0xC) = eax;
    eax = 0x3AE378;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00142630:
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00142647:
    MEM32(edi + 0x10) = eax;
    eax = 0x3AE36C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00142654:
    MEM32(esp + 0xC) = edx;
    edx = MEM32(edi + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014266B:
    MEM32(edi + 0x14) = eax;

loc_0014266E:
    PUSH32(esp, 0); sub_00142C80(); /* call 0x00142C80 */

loc_00142673:
    PUSH32(esp, 0); sub_00142910(); /* call 0x00142910 */

loc_00142678:
    ecx = MEM32(edi + 8);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00142688:
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
