#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00197A20
 * Original: 0x00197A20 - 0x00197AC2 (162 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197A20(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00197A20:
    if (CMP_EQ(MEM32(edi + 0x27C), 3)) goto loc_00197AC1; /* je: equal / zero */

loc_00197A2D:
    eax = MEM32(edi + 0xC8);
    SET_LO8(ecx, MEM8(eax + 0x18FA));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00197AC1; /* jne: not equal / not zero */

loc_00197A41:
    edx = MEM32(edi + 0x590);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x588);
    esi++;
    edx++;
    MEM32(edi + 0x58C) = ecx;
    ecx = MEM32(edi + 0x594);
    eax = edx;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(edi + 0x588) = esi;
    MEM32(edi + 0x590) = edx;
    if (CMP_LE(eax, ecx)) goto loc_00197A77; /* jle: less or equal (signed <=) */

loc_00197A71:
    MEM32(edi + 0x594) = eax;

loc_00197A77:
    edx = MEM32(0x3F7420);
    PUSH32(esp, edx);
    esi = edi + 0xCC;
    PUSH32(esp, 0); sub_0017A530(); /* call 0x0017A530 */

loc_00197A89:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    esi = MEM32(edi + 0x590);
    edx = MEM32(ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(0x3F7430));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_00197AA6:
    if (TEST_Z(LO8(eax), 1)) goto loc_00197AC0; /* je: equal / zero */

loc_00197AAA:
    edx = MEM32(edi + 0x4C);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = edx + eax;
    MEM32(edi + 0x4C) = edx;
    MEM32(edi + 0xB8) = MEM32(edi + 0xB8) + eax;

loc_00197AC0:
    POP32(esp, esi);

loc_00197AC1:
    esp += 4; return; /* ret */

}
