#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A3110
 * Original: 0x001A3110 - 0x001A33AD (669 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3110:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ebx + ebp + 0x363A7));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    esi = ebp;
    MEM8(esp + 0x20) = LO8(eax);
    PUSH32(esp, 0); sub_001A33B0(); /* call 0x001A33B0 */

loc_001A3131:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A31EB; /* je: equal / zero */

loc_001A3139:
    ecx = MEM32(ebp);
    SET_LO8(eax, MEM8(esp + 0x18));
    edx = MEM32(ecx + 0xA8);
    esi = ZX8(LO8(eax));
    edx--;
    if (CMP_EQ(esi, edx)) goto loc_001A3164; /* je: equal / zero */

loc_001A314E:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A3164; /* je: equal / zero */

loc_001A3152:
    /* cmp LO8(eax), MEM8(ebx + ebp + 0x363A7) - flags set for next jcc */
    SET_LO8(eax, (CMP_B(LO8(eax), MEM8(ebx + ebp + 0x363A7))) ? 1 : 0); /* setb */
    MEM8(ebp + 0x363BC) = LO8(eax);
    goto loc_001A3183;

loc_001A3164:
    SET_LO8(eax, MEM8(ebx + ebp + 0x363A7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A317C; /* je: equal / zero */

loc_001A316F:
    if (CMP_EQ(LO8(eax), 1)) goto loc_001A317C; /* je: equal / zero */

loc_001A3173:
    MEM8(ebp + 0x363BC) = 0;
    goto loc_001A3183;

loc_001A317C:
    MEM8(ebp + 0x363BC) = 1;

loc_001A3183:
    eax = ZX8(MEM8(ebx + ebp + 0x363A7));
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0xA4);
    SET_LO8(ecx, MEM8(eax + edx * 8 + 0x14));
    esi = eax + edx * 8;
    MEM8(ebx + ebp + 0x363A9) = LO8(ecx);
    SET_LO8(eax, MEM8(esi + 0x15));
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A33A5; /* jbe: below or equal (unsigned <=) */

loc_001A31AF:
    /* nop */

loc_001A31B0:
    eax = MEM32(esi + 0x10);
    edx = ZX8(LO8(ebx));
    ecx = ZX8(MEM8(edx + eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x118);
    edx = MEM32(ecx + ebp + 0x44);
    /* test MEM8(edx + 0xC), 2 - flags set for next jcc */
    edi = ecx + ebp + 4;
    if (TEST_NZ(MEM8(edx + 0xC), 2)) goto loc_001A31DA; /* jne: not equal / not zero */

loc_001A31CE:
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001A5790(); /* call 0x001A5790 */

loc_001A31DA:
    SET_LO8(eax, MEM8(esi + 0x15));
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), LO8(eax))) goto loc_001A31B0; /* jb: below (unsigned <) */

loc_001A31E3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001A31EB:
    eax = ZX8(MEM8(ebx + ebp + 0x363A7));
    edx = MEM32(ebp);
    ecx = eax + eax * 2;
    eax = MEM32(edx + 0xA4);
    esi = ebx + ebp + 0x363A9;
    edi = eax + ecx * 8;
    SET_LO8(eax, MEM8(esi));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A3234; /* jbe: below or equal (unsigned <=) */

loc_001A320F:
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax + eax * 2;
    eax = edx + ecx * 2 + -6;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001A3470(); /* call 0x001A3470 */

loc_001A3226:
    SET_LO8(eax, MEM8(esi));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001A3234:
    SET_LO8(eax, MEM8(edi + 0x15));
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A3285; /* jbe: below or equal (unsigned <=) */

loc_001A323D:
    /* nop */

loc_001A3240:
    edx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x363B7));
    eax = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + eax * 2));
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x10);
    eax = ZX8(MEM8(edx + eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x118);
    esi = eax + ebp + 4;
    SET_LO8(eax, MEM8(ebp + 0x363B8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A5880(); /* call 0x001A5880 */

loc_001A327C:
    SET_LO8(eax, MEM8(edi + 0x15));
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), LO8(eax))) goto loc_001A3240; /* jb: below (unsigned <) */

loc_001A3285:
    SET_LO8(ecx, MEM8(edi + 0x14));
    eax = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_001A33A5; /* jbe: below or equal (unsigned <=) */

loc_001A3296:
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_001A32A0:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edi);
    SET_LO16(esi, MEM16(eax + edx));
    eax = eax + edx;
    SET_LO16(edx, MEM16(eax + 2));
    if (CMP_L(LO16(edx), LO16(esi))) goto loc_001A3385; /* jl: less (signed <) */

loc_001A32B9:
    ecx = ZX8(MEM8(eax + 4));
    SET_LO8(ebx, MEM8(eax + 5));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = ecx + 0x60EC2C;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001A32D6; /* jne: not equal / not zero */

loc_001A32CD:
    edx = SX16(LO16(edx));
    MEM32(esp + 0x1C) = edx;
    goto loc_001A32DD;

loc_001A32D6:
    eax = SX16(LO16(esi));
    MEM32(esp + 0x1C) = eax;

loc_001A32DD:
    SET_LO16(esi, MEM16(ecx + 4));
    edx = MEM32(ebp + 0x3639C);
    ecx = ZX16(LO16(esi));
    ecx = ecx + edx;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(ecx + edx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001A3385; /* je: equal / zero */

loc_001A32FB:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    ebx = eax + ebp + 0x2A4D0;
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001A3313:
    SET_LO8(ecx, MEM8(ebp + 0x363B9));
    eax = eax + esi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A3354; /* je: equal / zero */

loc_001A331F:
    ecx = ZX16(LO16(eax));
    edx = ecx;
    edx = edx >> 2;
    SET_LO8(eax, MEM8(edx + 0x498D80));
    edx = MEM32(esp + 0x20);
    /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    ecx = ecx & 0x80000003u;
    if (((int32_t)ecx >= 0)) goto loc_001A3343; /* jns: not sign (positive) */

loc_001A333E:
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001A3343:
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    /* test LO8(eax), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A3385; /* jne: not equal / not zero */

loc_001A3354:
    eax = MEM32(esp + 0x1C);
    ecx = (int32_t)MEMF(ebx + 0x30); /* cvttss2si */
    eax = eax + 4;
    if (CMP_GE(ecx, eax)) goto loc_001A3385; /* jge: greater or equal (signed >=) */

loc_001A3364:
    eax = ZX8(MEM8(ebx + 0x4A));
    edx = eax + eax * 2;
    edx = edx << 7;
    SET_LO8(eax, MEM8(edx + ebp + 0x12944));
    /* test LO8(eax), 4 - flags set for next jcc */
    ecx = edx + ebp + 0x127D0;
    if (TEST_NZ(LO8(eax), 4)) goto loc_001A3385; /* jne: not equal / not zero */

loc_001A3380:
    PUSH32(esp, 0); sub_001A75A0(); /* call 0x001A75A0 */

loc_001A3385:
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(edi + 0x14));
    eax++;
    esi = esi + 6;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(eax, ecx)) goto loc_001A32A0; /* jl: less (signed <) */

loc_001A33A5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
