#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A8EE0
 * Original: 0x001A8EE0 - 0x001A9036 (342 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8EE0:
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x118);
    if (TEST_Z(edi, edi)) goto loc_001A8FBB; /* je: equal / zero */

loc_001A8EF2:
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x114);
    xmm0.f[0] = MEMF(ebx + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x160) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esi + 0x160))) goto loc_001A8F30; /* jb: below (unsigned <) */

loc_001A8F07:
    eax = MEM32(esi + 0x11C);
    PUSH32(esp, eax);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001A9040(); /* call 0x001A9040 */

loc_001A8F17:
    esi = MEM32(esi + 0x114);
    SET_LO8(eax, MEM8(esi + 0x46));
    if (CMP_EQ(LO8(eax), 6)) goto loc_001A8F28; /* je: equal / zero */

loc_001A8F24:
    if (CMP_NE(LO8(eax), 7)) goto loc_001A8F2C; /* jne: not equal / not zero */

loc_001A8F28:
    MEM8(esi + 0x46) = 1;

loc_001A8F2C:
    POP32(esp, ebx);

loc_001A8F2D:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A8F30:
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(edi + 4));
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001A8F40:
    edx = MEM32(0x649B7C);
    ecx = ZX16(LO16(eax));
    ebp = ebp + edx;
    SET_LO8(eax, MEM8(ecx + ebp));
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001A8F66; /* je: equal / zero */

loc_001A8F53:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    SET_LO8(eax, MEM8(eax + 0x45));
    goto loc_001A8F69;

loc_001A8F66:
    SET_LO8(eax, MEM8(edi + 0x46));

loc_001A8F69:
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001A8F2C; /* je: equal / zero */

loc_001A8F6D:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (TEST_Z(eax, eax)) goto loc_001A8F2C; /* je: equal / zero */

loc_001A8F7F:
    xmm0.f[0] = MEMF(esi + 0x11C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = MEMF(0x3B1698); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A8F2C; /* jbe: below or equal (unsigned <=) */

loc_001A8F99:
    xmm1.f[0] = MEMF(esi + 0x160); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x30); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A8FB3; /* jbe: below or equal (unsigned <=) */

loc_001A8FAB:
    MEM8(ebx + 0x46) = 6;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A8FB3:
    MEM8(ebx + 0x46) = 7;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A8FBB:
    edx = MEM32(esi + 0x114);
    SET_LO8(eax, MEM8(edx + 0x48));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A8F2D; /* jbe: below or equal (unsigned <=) */

loc_001A8FCC:
    eax = esi;
    PUSH32(esp, 0); sub_001A8E80(); /* call 0x001A8E80 */

loc_001A8FD3:
    eax = MEM32(esi + 0x118);
    if (TEST_Z(eax, eax)) goto loc_001A8FEF; /* je: equal / zero */

loc_001A8FDD:
    eax = MEM32(esi + 0x114);
    SET_LO8(ecx, MEM8(eax + 0x48));
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_001A8FEF; /* jbe: below or equal (unsigned <=) */

loc_001A8FEA:
    SET_LO8(ecx, LO8(ecx) - 1);
    MEM8(eax + 0x48) = LO8(ecx);

loc_001A8FEF:
    SET_LO8(eax, MEM8(0x649B98));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A8F2D; /* jne: not equal / not zero */

loc_001A8FFC:
    eax = MEM32(esi + 0x114);
    SET_LO8(ecx, MEM8(eax + 0x4C));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x175));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A9013; /* je: equal / zero */

loc_001A900F:
    SET_LO8(eax, LO8(eax) | 1);
    goto loc_001A9015;

loc_001A9013:
    SET_LO8(eax, LO8(eax) | 4);

loc_001A9015:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(esi + 0x140) - sets EFLAGS */
    MEM8(esi + 0x175) = LO8(eax);
    if ((xmm0.f[0] <= MEMF(esi + 0x140))) goto loc_001A8F2D; /* jbe: below or equal (unsigned <=) */

loc_001A902B:
    POP32(esp, edi);
    MEMF(esi + 0x140) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
