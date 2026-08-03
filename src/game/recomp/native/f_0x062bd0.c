#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00062BD0
 * Original: 0x00062BD0 - 0x00062D29 (345 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062BD0:
    ecx = MEM32(edi + 0x704);
    if (TEST_Z(ecx, ecx)) goto loc_00062BE9; /* je: equal / zero */

loc_00062BDA:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_00062BDF:
    eax = eax - 0;
    if ((eax == 0)) goto loc_00062C0D; /* je: equal / zero */

loc_00062BE4:
    eax = eax - 2;
    if ((eax == 0)) goto loc_00062C0D; /* je: equal / zero */

loc_00062BE9:
    eax = MEM32(edi + 0x6FC);
    if (TEST_NZ(eax, eax)) goto loc_00062C10; /* jne: not equal / not zero */

loc_00062BF3:
    edx = MEM32(0x3FA644);
    ecx = 0x3F9DB4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00062C03:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x6FC) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00062C10; /* jne: not equal / not zero */

loc_00062C0D:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00062C10:
    eax = MEM32(edi + 0x6B4);
    eax--;
    /* cmp eax, 0x16 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(eax, 0x16)) goto loc_00062C51; /* ja: above (unsigned >) */

loc_00062C1D:
    ecx = ZX8(MEM8(eax + 0x62D44));
    { uint32_t _jt = MEM32(ecx * 4 + 0x62D2C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00062C2Bu) goto loc_00062C2B;
    if (_jt == 0x00062C51u) goto loc_00062C51;
    if (_jt == 0x00062C55u) goto loc_00062C55;
    if (_jt == 0x00062C7Au) goto loc_00062C7A;
    if (_jt == 0x00062CECu) goto loc_00062CEC;
    if (_jt == 0x00062D25u) goto loc_00062D25;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00062C2B:
    esi = MEM32(0x4AED9C);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x38A26C);
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_00062C3D:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x704) = eax;
    if (TEST_Z(eax, eax)) {
        /* The portable file queue has already placed this resource in the
         * XBE-owned buffer. The missing Xbox RW provider would normally
         * wrap that buffer in a stream object before state 4 consumes it.
         * When no wrapper exists, advance to the same consume state rather
         * than retrying a NULL factory forever. */
        MEM32(edi + 0x6B4) = 4;
        goto loc_00062C51;
    }

loc_00062C47:
    MEM32(edi + 0x6B4) = 3;

loc_00062C51:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00062C55:
    ecx = MEM32(edi + 0x704);
    eax = MEM32(edi + 0x6FC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00062C6C:
    MEM32(edi + 0x6B4) = 4;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00062C7A:
    eax = MEM32(edi + 0x6FC);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    ecx = 0; /* xor self */
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(edi + 0x708) = LO8(ebx);
    edx = eax + 8;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_00062CC2; /* jle: less or equal (signed <=) */

loc_00062C92:
    eax = edi;
    edx = edx - edi;
    PUSH32(esp, ebp);

loc_00062C97:
    esi = edx + eax;
    ebp = MEM32(esi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(esi + 8);
    MEM32(ebx + 8) = ebp;
    esi = MEM32(esi + 0xC);
    MEM32(ebx + 0xC) = esi;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x708);
    ecx++;
    eax = eax + 0x10;
    if (CMP_L(ecx, esi)) goto loc_00062C97; /* jl: less (signed <) */

loc_00062CC1:
    POP32(esp, ebp);

loc_00062CC2:
    ecx = MEM32(edi + 0x704);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00062CCD:
    MEM32(edi + 0x704) = 0;
    MEM32(0x3F9DB4) = 2;
    MEM32(edi + 0x6B4) = 5;
    POP32(esp, ebx);

loc_00062CEC:
    ecx = 0x3F9D34;
    esi = edi + 0x6BC;

loc_00062CF7:
    if (CMP_NE(MEM32(esi), 0)) goto loc_00062D0D; /* jne: not equal / not zero */

loc_00062CFC:
    edx = MEM32(0x3FA644);
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00062D07:
    /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_00062D1B; /* je: equal / zero */

loc_00062D0D:
    ecx = ecx + 0x10;
    esi = esi + 4;
    if (CMP_L(ecx, 0x3F9DB4)) goto loc_00062CF7; /* jl: less (signed <) */

loc_00062D1B:
    MEM32(edi + 0x6B4) = 0x17;

loc_00062D25:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
