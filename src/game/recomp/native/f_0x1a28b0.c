#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A28B0
 * Original: 0x001A28B0 - 0x001A2B05 (597 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A28B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A28B0:
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(ebp + 0x363BB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A2AF3; /* je: equal / zero */

loc_001A28C6:
    SET_LO8(eax, MEM8(ebp + 0x363B8));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A2935; /* je: equal / zero */

loc_001A28D3:
    SET_LO8(eax, MEM8(ebp + 0x363AD));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x30) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A2AF0; /* jbe: below or equal (unsigned <=) */

loc_001A28E9:
    edi = ebp + 0x44;
    /* nop */

loc_001A28F0:
    eax = MEM32(edi);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    ebx = edi + -64;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A2911; /* jle: less or equal (signed <=) */

loc_001A28FE:
    edi = edi;

loc_001A2900:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001A6A30(); /* call 0x001A6A30 */

loc_001A2907:
    ecx = MEM32(edi);
    eax = MEM32(ecx + 8);
    esi++;
    if (CMP_L(esi, eax)) goto loc_001A2900; /* jl: less (signed <) */

loc_001A2911:
    eax = MEM32(esp + 0x30);
    edx = ZX8(MEM8(ebp + 0x363AD));
    eax++;
    edi = edi + 0x118;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(eax, edx)) goto loc_001A28F0; /* jl: less (signed <) */

loc_001A292B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

loc_001A2935:
    SET_LO8(eax, MEM8(ebp + 0x363B7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A297E; /* je: equal / zero */

loc_001A293F:
    SET_LO8(eax, MEM8(ebp + 0x363AD));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A2AF0; /* jbe: below or equal (unsigned <=) */

loc_001A294F:
    edi = ebp + 4;

loc_001A2952:
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001A5FE0(); /* call 0x001A5FE0 */

loc_001A2962:
    edx = ZX8(MEM8(ebp + 0x363AD));
    esi++;
    edi = edi + 0x118;
    if (CMP_L(esi, edx)) goto loc_001A2952; /* jl: less (signed <) */

loc_001A2974:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

loc_001A297E:
    eax = MEM32(0x73A1C0);
    if (CMP_LE(eax & eax, 0)) goto loc_001A2AF0; /* jle: less or equal (signed <=) */

loc_001A298B:
    eax = 0xFFFC9C59u;
    ecx = 0x73A1D0;
    eax = eax - ebp;
    esi = ebp + 0x363A7;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x14) = eax;
    goto loc_001A29B0;

loc_001A29A7:
    ecx = MEM32(esp + 0x28);
    goto loc_001A29B0;

    /* nop */

loc_001A29B0:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_001A29B5:
    ecx = MEM32(ebp);
    edi = MEM32(ecx + 0xA8);
    edx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_001A29EA; /* jle: less or equal (signed <=) */

loc_001A29C4:
    ecx = MEM32(ecx + 0xA4);
    /* nop */

loc_001A29D0:
    /* cmp eax, MEM32(ecx + 8) - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_G(eax, MEM32(ecx + 8))) goto loc_001A29DE; /* jg: greater (signed >) */

loc_001A29D9:
    if (CMP_GE(eax, MEM32(ecx + 4))) goto loc_001A29E8; /* jge: greater or equal (signed >=) */

loc_001A29DE:
    edx++;
    ecx = ecx + 0x18;
    if (CMP_L(edx, edi)) goto loc_001A29D0; /* jl: less (signed <) */

loc_001A29E6:
    goto loc_001A29EA;

loc_001A29E8:
    MEM8(esi) = LO8(edx);

loc_001A29EA:
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ecx + 0x15));
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A2A2E; /* jbe: below or equal (unsigned <=) */

loc_001A29F7:
    goto loc_001A2A00;

    /* nop */

loc_001A2A00:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x10);
    edx = ZX8(LO8(ebx));
    edx = ZX8(MEM8(edx + ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x118);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edx + ebp + 4;
    PUSH32(esp, 0); sub_001A5790(); /* call 0x001A5790 */

loc_001A2A21:
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(eax + 0x15));
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), LO8(ecx))) goto loc_001A2A00; /* jb: below (unsigned <) */

loc_001A2A2E:
    SET_LO8(ecx, MEM8(esi));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A2AFA; /* jne: not equal / not zero */

loc_001A2A38:
    ecx = MEM32(ebp);
    SET_LO8(ecx, MEM8(ecx + 0xA8));

loc_001A2A41:
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 1);
    SET_LO8(ecx, LO8(ecx) - 2);
    edx = MEM32(ebp);
    edx = MEM32(edx + 0xA4);
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    eax = edx + eax * 8;
    MEM32(esp + 0x1C) = eax;
    eax = ZX8(LO8(ecx));
    ecx = eax + eax * 2;
    edx = edx + ecx * 8;
    ecx = 0; /* xor self */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x10) = ecx;

loc_001A2A71:
    ebx = MEM32(esp + ecx * 4 + 0x18);
    SET_LO8(eax, MEM8(ebx + 0x14));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 2) = LO8(eax);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A2AC4; /* jbe: below or equal (unsigned <=) */

loc_001A2A7F:
    eax = MEM32(esp + 0x14);
    edi = eax + esi;
    goto loc_001A2A90;

    /* nop */
    /* nop */

loc_001A2A90:
    ecx = MEM32(esp + 0x30);
    eax = ZX8(MEM8(edi + ebp + 0x363A9));
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    eax = eax + eax * 2;
    eax = ecx + eax * 2 + -6;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001A3470(); /* call 0x001A3470 */

loc_001A2AB2:
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO8(ecx, LO8(ecx) - 1);
    SET_LO8(eax, LO8(ecx));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 2) = LO8(ecx);
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_001A2A90; /* ja: above (unsigned >) */

loc_001A2AC0:
    ecx = MEM32(esp + 0x10);

loc_001A2AC4:
    ecx++;
    /* cmp ecx, 3 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, 3)) goto loc_001A2A71; /* jl: less (signed <) */

loc_001A2ACE:
    edx = MEM32(esp + 0x28);
    eax = MEM32(0x73A1C0);
    edx = edx + 0x27E0;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x14);
    esi++;
    edx = edx + esi;
    if (CMP_L(edx, eax)) goto loc_001A29A7; /* jl: less (signed <) */

loc_001A2AF0:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001A2AF3:
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

loc_001A2AFA:
    if (CMP_NE(LO8(ecx), 1)) goto loc_001A2A41; /* jne: not equal / not zero */

}
