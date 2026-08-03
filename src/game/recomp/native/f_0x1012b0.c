#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001012B0
 * Original: 0x001012B0 - 0x001014CB (539 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001012B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001012B0:
    eax = MEM32(esi + 0x6F0);
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    MEM8(eax + 0x1A94) = 1;
    ecx = MEM32(esi + 0x6F0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    ebx = 0; /* xor self */
    MEM8(ecx + 0x1A23) = LO8(ebx);
    edx = MEM32(esi + 0x6F0);
    MEM8(edx + 0x1A95) = 1;
    eax = MEM32(esi + 0x6F0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax + 0x1A20;
    PUSH32(esp, ecx);
    edx = eax + 0x1A10;
    ecx = eax + 0x1A00;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = eax + 0x19C0;
    PUSH32(esp, 0); sub_00103FB0(); /* call 0x00103FB0 */

loc_00101310:
    /* cmp LO16(ebp), 0x5555 - flags set for next jcc */
    edx = MEM32(esi + 0x6F0);
    SET_LO8(eax, MEM8(esp + 0x1C));
    MEM8(edx + 0x1A24) = LO8(eax);
    ecx = MEM32(esi + 0x6F0);
    SET_LO8(edx, MEM8(esp + 0x1D));
    MEM8(ecx + 0x1A25) = LO8(edx);
    eax = MEM32(esi + 0x6F0);
    SET_LO8(ecx, MEM8(esp + 0x1E));
    MEM8(eax + 0x1A26) = LO8(ecx);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x6F0);
    MEM32(edx + 0x1A28) = eax;
    eax = MEM32(esp + 0x3C);
    if (CMP_AE(LO16(ebp), 0x5555)) goto loc_00101361; /* jae: above or equal (unsigned >=) */

loc_0010135B:
    if (CMP_A(LO16(eax), 0xAAAA)) goto loc_00101373; /* ja: above (unsigned >) */

loc_00101361:
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_0010136E; /* jae: above or equal (unsigned >=) */

loc_00101367:
    if (CMP_A(LO16(ebp), 0xAAAA)) goto loc_001013A3; /* ja: above (unsigned >) */

loc_0010136E:
    if (CMP_BE(LO16(ebp), LO16(eax))) goto loc_001013A3; /* jbe: below or equal (unsigned <=) */

loc_00101373:
    if (CMP_AE(LO16(ebp), 0x5555)) goto loc_00101392; /* jae: above or equal (unsigned >=) */

loc_0010137A:
    if (CMP_BE(LO16(eax), 0xAAAA)) goto loc_00101392; /* jbe: below or equal (unsigned <=) */

loc_00101380:
    ecx = MEM32(esi + 0x6F0);
    ebp = ebp - eax;
    ebp--;
    MEM16(ecx + 0x1A96) = LO16(ebp);
    goto loc_001013D4;

loc_00101392:
    ecx = MEM32(esi + 0x6F0);
    ebp = ebp - eax;
    MEM16(ecx + 0x1A96) = LO16(ebp);
    goto loc_001013D4;

loc_001013A3:
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_001013B5; /* jae: above or equal (unsigned >=) */

loc_001013A9:
    if (CMP_BE(LO16(ebp), 0xAAAA)) goto loc_001013B5; /* jbe: below or equal (unsigned <=) */

loc_001013B0:
    eax = eax - ebp;
    eax--;
    goto loc_001013B7;

loc_001013B5:
    eax = eax - ebp;

loc_001013B7:
    if (CMP_BE(LO16(eax), 4)) goto loc_001013C7; /* jbe: below or equal (unsigned <=) */

loc_001013BD:
    MEM32(0x4D5368) = 1;

loc_001013C7:
    edx = MEM32(esi + 0x6F0);
    MEM16(edx + 0x1A96) = LO16(ebx);

loc_001013D4:
    eax = MEM32(esi + 0x6F0);
    MEM8(eax + 0x11EE) = LO8(ebx);
    eax = MEM32(esi + 0x6F0);
    if (TEST_Z(MEM8(eax + 0x1A22), 8)) goto loc_001013F6; /* je: equal / zero */

loc_001013EF:
    MEM8(eax + 0x11EE) = 1;

loc_001013F6:
    if (CMP_EQ(MEM32(esi + 0x6F4), ebx)) goto loc_00101409; /* je: equal / zero */

loc_001013FE:
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00102810(); /* call 0x00102810 */

loc_00101409:
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0010141D:
    if (CMP_A(eax, 5)) goto loc_001014B7; /* ja: above (unsigned >) */

loc_00101426:
    { uint32_t _jt = MEM32(eax * 4 + 0x1014CC); /* switch: 6 entries, 3 targets */
    if (_jt == 0x0010142Du) goto loc_0010142D;
    if (_jt == 0x0010145Du) goto loc_0010145D;
    if (_jt == 0x001014B7u) goto loc_001014B7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010142D:
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    ecx = MEM32(esi + 0x6F0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    MEMF(ecx + 0x16C4) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    MEM32(esi + 0x4D70) = ebx;
    MEM32(esi + 0x4D74) = ebx;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

loc_0010145D:
    edx = MEM32(esi + 0x6F0);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    MEMF(edx + 0x16C4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x6F0);
    MEM8(eax + 0x1172) = LO8(ebx);
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), 1)) goto loc_0010149A; /* je: equal / zero */

loc_0010148D:
    ecx = MEM32(esi + 0x6F0);
    MEM8(ecx + 0x1172) = 1;

loc_0010149A:
    /* test LO8(eax), 2 - flags set for next jcc */
    edx = MEM32(esi + 0x6F0);
    MEM8(edx + 0x1171) = LO8(ebx);
    if (TEST_Z(LO8(eax), 2)) goto loc_001014B7; /* je: equal / zero */

loc_001014AA:
    eax = MEM32(esi + 0x6F0);
    MEM8(eax + 0x1171) = 1;

loc_001014B7:
    POP32(esp, ebp);
    MEM32(esi + 0x4D70) = ebx;
    MEM32(esi + 0x4D74) = ebx;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

}
