#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155900
 * Original: 0x00155900 - 0x00155B8E (654 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155900:
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    eax--;
    /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, 4)) goto loc_00155B6E; /* ja: above (unsigned >) */

loc_00155918:
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    { uint32_t _jt = MEM32(eax * 4 + 0x155B90); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00155922u) goto loc_00155922;
    if (_jt == 0x001559DCu) goto loc_001559DC;
    if (_jt == 0x00155A11u) goto loc_00155A11;
    if (_jt == 0x00155B23u) goto loc_00155B23;
    if (_jt == 0x00155B6Du) goto loc_00155B6D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00155922:
    ecx = MEM32(esi + 0x9C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0015592D:
    if (CMP_EQ(eax, 2)) goto loc_00155B6D; /* je: equal / zero */

loc_00155936:
    ecx = MEM32(esi + 0xC4);
    if (((int32_t)(LO8(ecx) & LO8(ecx)) >= 0)) goto loc_00155988; /* jns: not sign (positive) */

loc_00155940:
    if (CMP_NE(eax, 1)) goto loc_00155950; /* jne: not equal / not zero */

loc_00155945:
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00155950:
    MEM32(esi + 0xC4) = MEM32(esi + 0xC4) & 0xFFFFFF3Fu;
    eax = MEM32(esi + 0xB4);
    MEM32(esi + 0x9C) = 0;
    MEM32(esi + 0x98) = 0xFFFFFFFFu;
    MEM32(esi + 0xC0) = 6;
    PUSH32(esp, 0); sub_00155D60(); /* call 0x00155D60 */

loc_00155983:
    goto loc_00155B6D;

loc_00155988:
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_001559B5; /* je: equal / zero */

loc_0015598D:
    if (CMP_NE(eax, 1)) goto loc_0015599D; /* jne: not equal / not zero */

loc_00155992:
    ecx = MEM32(esi + 0x9C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0015599D:
    eax = MEM32(esi + 0xC4);
    MEM32(esi + 0x9C) = 0;
    eax = eax & 0xFFFFFFBFu;
    goto loc_00155B53;

loc_001559B5:
    /* test LO8(ecx), 0x20 - flags set for next jcc */
    edx = MEM32(esi + 0x9C);
    eax = MEM32(edx + 0x30);
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0xC0) = 6;
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_00155B6D; /* je: equal / zero */

loc_001559D7:
    PUSH32(esp, 0); sub_00155DB0(); /* call 0x00155DB0 */

loc_001559DC:
    if (CMP_EQ(MEM32(esi + 0x94), ebp)) goto loc_00155B6D; /* je: equal / zero */

loc_001559E8:
    if (TEST_Z(MEM8(esi + 0xC4), 1)) goto loc_00155A07; /* je: equal / zero */

loc_001559F1:
    ecx = esi;
    MEM32(esi + 0xC0) = 5;
    PUSH32(esp, 0); sub_00155900(); /* call 0x00155900 */

loc_00155A02:
    goto loc_00155B6D;

loc_00155A07:
    MEM32(esi + 0xC0) = 4;

loc_00155A11:
    eax = MEM32(esi + 0x94);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x24), _icall_esp); /* indirect call */
    }

loc_00155A1D:
    eax = MEM32(esi + 0x94);
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00155A2E:
    if (TEST_Z(MEM8(esp + 0x14), 2)) goto loc_00155B6D; /* je: equal / zero */

loc_00155A39:
    MEM32(esp + 0x10) = ebp;
    /* nop */

loc_00155A40:
    edi = 0; /* xor self */
    eax = esi + 0x50;

loc_00155A45:
    if (CMP_NE(MEM32(eax), 0x8000000Au)) goto loc_00155A5B; /* jne: not equal / not zero */

loc_00155A4D:
    edi++;
    eax = eax + 4;
    if (CMP_L(edi, 0x10)) goto loc_00155A45; /* jl: less (signed <) */

loc_00155A56:
    goto loc_00155B6D;

loc_00155A5B:
    if (CMP_GE(MEM32(esp + 0x10), 4)) goto loc_00155B6D; /* jge: greater or equal (signed >=) */

loc_00155A66:
    ebx = MEM32(esi + 0xA0);
    edx = 0; /* xor self */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    eax = edi;
    eax = eax << 0xD;
    eax = eax + ebx;
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x94);
    ebx = esi + 0xA4;
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = 0x2000;
    MEM32(esp + 0x28) = ebx;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_00155AB5:
    if (TEST_S(eax, eax)) goto loc_00155B6D; /* jl: less (signed <) */

loc_00155ABD:
    if (CMP_EQ(MEM32(ebx), ebp)) goto loc_00155AF4; /* je: equal / zero */

loc_00155AC1:
    eax = esi + edi * 4 + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x90);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x30) = ebp;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_00155AE3:
    if (TEST_NZ(eax, eax)) goto loc_00155B6D; /* jne: not equal / not zero */

loc_00155AEB:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    goto loc_00155A40;

loc_00155AF4:
    PUSH32(esp, 0); sub_00155C00(); /* call 0x00155C00 */

loc_00155AF9:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153660(); /* call 0x00153660 */

loc_00155B03:
    PUSH32(esp, 0); sub_00155D60(); /* call 0x00155D60 */

loc_00155B08:
    if (CMP_EQ(MEM32(esi + 0xA8), 3)) goto loc_00155B1A; /* je: equal / zero */

loc_00155B11:
    if (TEST_Z(MEM8(esi + 0xC4), 8)) goto loc_00155B6D; /* je: equal / zero */

loc_00155B1A:
    eax = esi;
    PUSH32(esp, 0); sub_00155BB0(); /* call 0x00155BB0 */

loc_00155B21:
    goto loc_00155B6D;

loc_00155B23:
    eax = MEM32(esi + 0x94);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_00155B2F:
    ecx = MEM32(esi + 0x9C);
    ebp = 0; /* xor self */
    MEM32(esi + 0x94) = ebp;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00155B42:
    eax = MEM32(esi + 0xC4);
    MEM32(esi + 0x9C) = ebp;
    MEM32(esi) = ebp;
    eax = eax & 0xFFFFFFEEu;

loc_00155B53:
    MEM32(esi + 0x98) = 0xFFFFFFFFu;
    MEM32(esi + 0xC0) = 6;
    MEM32(esi + 0xC4) = eax;

loc_00155B6D:
    POP32(esp, ebp);

loc_00155B6E:
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4A1C54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00155F70(); /* call 0x00155F70 */

loc_00155B87:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}
