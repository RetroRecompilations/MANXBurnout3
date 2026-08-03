#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00102810
 * Original: 0x00102810 - 0x00102B36 (806 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102810:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x4DA4);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_00102832; /* jle: less or equal (signed <=) */

loc_00102826:
    eax--;
    MEM32(ebx + 0x4DA4) = eax;
    goto loc_00102997;

loc_00102832:
    SET_LO8(eax, MEM8(ebp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00102850; /* je: equal / zero */

loc_00102839:
    ecx = MEM32(ebx + 0x6F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_00102846:
    MEM32(ebx + 0x4DA4) = 5;

loc_00102850:
    SET_LO8(eax, MEM8(ebp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001028BE; /* je: equal / zero */

loc_00102857:
    edi = MEM32(0x731F90);
    eax = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    ecx = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(edi & edi, 0)) ? 1 : 0); /* setle */
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    MEM32(esp + 0x18) = eax;
    ecx--;
    ecx = ecx & 0x667E90;
    ebp = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64ACE8);
    PUSH32(esp, 0); sub_0010DCA0(); /* call 0x0010DCA0 */

loc_00102888:
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00102896:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x20), _icall_esp); /* indirect call */
    }

loc_001028A0:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(ebp + 0x3A74) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x18);
    MEM32(ebx + 0x4DA4) = 5;

loc_001028BE:
    SET_LO8(eax, MEM8(ebp + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00102997; /* je: equal / zero */

loc_001028C9:
    ecx = MEM32(0x731F90);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(ecx & ecx, 0)) ? 1 : 0); /* setle */
    eax--;
    eax = eax & 0x667E90;
    esi = MEM32(eax + 0x13F4);
    eax = 0x4A71A0;
    esi = esi + 0x11F4;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001028F2:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = 0xD0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010292D; /* jne: not equal / not zero */

loc_001028FB:
    if (CMP_LE(MEM32(esi + 0x130), edi)) goto loc_0010292D; /* jle: less or equal (signed <=) */

loc_00102903:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_00102913:
    if (TEST_Z(eax, eax)) goto loc_00102975; /* je: equal / zero */

loc_00102917:
    eax = MEM32(esi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_00102925:
    MEM32(esi + 0x134) = eax;
    goto loc_00102972;

loc_0010292D:
    MEM8(esi + 0x11) = 1;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_00102942:
    eax = MEM32(esi + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esi + 0x130) = edi;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_00102956:
    ecx = MEM32(esi + 0x148);
    MEM32(esi + 0x134) = eax;
    edx = MEM32(ecx + 0x10DC);
    MEM32(esi + 0x138) = edx;
    MEM8(esi + 0x10) = 1;

loc_00102972:
    esp = esp + 8;

loc_00102975:
    eax = MEM32(0x4115D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xB929D77Bu);
    PUSH32(esp, 0x9C000000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00102997:
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(ebx + 0x4D9D) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x1A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001029C9; /* je: equal / zero */

loc_001029A7:
    ecx = MEM32(ebx + 0x6F0);
    SET_LO8(eax, MEM8(ecx + 0x19A8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001029C9; /* je: equal / zero */

loc_001029B7:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001029C9; /* je: equal / zero */

loc_001029BB:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(ecx + 0x19A8) = 0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x20), _icall_esp); /* indirect call */
    }

loc_001029C9:
    eax = MEM32(ebp + 0x2C);
    if (CMP_A(eax, 4)) goto loc_00102B2F; /* ja: above (unsigned >) */

loc_001029D5:
    { uint32_t _jt = MEM32(eax * 4 + 0x102B38); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001029DCu) goto loc_001029DC;
    if (_jt == 0x00102A1Du) goto loc_00102A1D;
    if (_jt == 0x00102A65u) goto loc_00102A65;
    if (_jt == 0x00102AADu) goto loc_00102AAD;
    if (_jt == 0x00102AF5u) goto loc_00102AF5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001029DC:
    SET_LO8(ecx, MEM8(ebp + 0x24));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(ebp + 0x28);
    eax = MEM32(eax * 4 + 0x73A1A8);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00102A05; /* je: equal / zero */

loc_001029ED:
    ecx = MEM32(ebx + 0x6F0);
    ecx = ecx + 0x10D0;
    PUSH32(esp, 0); sub_00197720(); /* call 0x00197720 */

loc_001029FE:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102A05:
    ecx = eax + 0x10D0;
    eax = MEM32(ebx + 0x6F0);
    PUSH32(esp, 0); sub_00197720(); /* call 0x00197720 */

loc_00102A16:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102A1D:
    SET_LO8(eax, MEM8(ebp + 0x24));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 0x28);
    edx = MEM32(ecx * 4 + 0x73A1A8);
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00102A4A; /* je: equal / zero */

loc_00102A30:
    eax = MEM32(ebx + 0x6F0);
    eax = eax + 0x10D0;
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_001976D0(); /* call 0x001976D0 */

loc_00102A43:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102A4A:
    edx = edx + 0x10D0;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x6F0);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_001976D0(); /* call 0x001976D0 */

loc_00102A5E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102A65:
    SET_LO8(eax, MEM8(ebp + 0x24));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 0x28);
    edx = MEM32(ecx * 4 + 0x73A1A8);
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00102A92; /* je: equal / zero */

loc_00102A78:
    eax = MEM32(ebx + 0x6F0);
    eax = eax + 0x10D0;
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00197680(); /* call 0x00197680 */

loc_00102A8B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102A92:
    edx = edx + 0x10D0;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x6F0);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00197680(); /* call 0x00197680 */

loc_00102AA6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102AAD:
    SET_LO8(eax, MEM8(ebp + 0x24));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 0x28);
    edx = MEM32(ecx * 4 + 0x73A1A8);
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00102ADA; /* je: equal / zero */

loc_00102AC0:
    eax = MEM32(ebx + 0x6F0);
    eax = eax + 0x10D0;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00197680(); /* call 0x00197680 */

loc_00102AD3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102ADA:
    edx = edx + 0x10D0;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x6F0);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00197680(); /* call 0x00197680 */

loc_00102AEE:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102AF5:
    SET_LO8(eax, MEM8(ebp + 0x24));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 0x28);
    edi = MEM32(ecx * 4 + 0x73A1A8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00102B1E; /* je: equal / zero */

loc_00102B06:
    esi = MEM32(ebx + 0x6F0);
    esi = esi + 0x10D0;
    PUSH32(esp, 0); sub_00198E60(); /* call 0x00198E60 */

loc_00102B17:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00102B1E:
    esi = edi + 0x10D0;
    edi = MEM32(ebx + 0x6F0);
    PUSH32(esp, 0); sub_00198E60(); /* call 0x00198E60 */

loc_00102B2F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
