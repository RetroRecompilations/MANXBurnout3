#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00038D10
 * Original: 0x00038D10 - 0x00039134 (1060 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038D10(void)
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

loc_00038D10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    eax = MEM32(0x60E170);
    eax = eax << 6;
    eax = eax + 0x60E0F0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = 0x80000000u;
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    esi = MEM32(0x60E170);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    xmm0.f[0] = MEMF(0x3B17F8); /* movss */
    eax = MEM32(esp + 0x68);
    esi = esi << 6;
    esi = esi + 0x60E100;
    xmm1.f[0] = MEMF(esi + 0x10); /* movss */
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(0x4D67D0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x549E08); /* movss */
    MEM32(esp + 0x58) = eax;
    eax = MEM32(0x4D67D4);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(0x4D67D8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x4D67DC);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ebx = 1;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00038F4F; /* jbe: below or equal (unsigned <=) */

loc_00038E09:
    xmm0.f[0] = MEMF(esi + 0x10); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69BC); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1.f[0] = MEMF(esi + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0x14); /* divss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00038E41:
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = eax;
    edi = edi | 0xFFFFFF00u;
    edi = edi << 8;
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00038E5A:
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 0xFF;
    edi = edi | eax;
    edi = edi << 8;
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00038E72:
    esi = MEM32(0x75DB60);
    eax = eax & 0xFF;
    edi = edi | eax;
    eax = MEM32(0x75DDA8);
    if (TEST_NZ(eax, eax)) goto loc_00038EA0; /* jne: not equal / not zero */

loc_00038E88:
    MEM32(esi * 4 + 0x75DE20) = 0x8A;
    esi++;
    MEM32(0x75DDA8) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038EA0:
    eax = MEM32(0x75DCF8);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D6C8) = edi;
    if (TEST_NZ(eax, eax)) goto loc_00038EC7; /* jne: not equal / not zero */

loc_00038EAF:
    MEM32(esi * 4 + 0x75DE20) = 0x5E;
    esi++;
    MEM32(0x75DCF8) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038EC7:
    eax = MEM32(esp + 0x18);
    MEM32(0x75D618) = eax;
    eax = MEM32(0x75DCFC);
    if (TEST_NZ(eax, eax)) goto loc_00038EF1; /* jne: not equal / not zero */

loc_00038ED9:
    MEM32(esi * 4 + 0x75DE20) = 0x5F;
    esi++;
    MEM32(0x75DCFC) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038EF1:
    eax = MEM32(0x75DCF4);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x14);
    MEM32(0x75D61C) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00038F1C; /* jne: not equal / not zero */

loc_00038F04:
    MEM32(esi * 4 + 0x75DE20) = 0x5D;
    esi++;
    MEM32(0x75DCF4) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038F1C:
    eax = MEM32(0x75DCF0);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D614) = 3;
    if (TEST_NZ(eax, eax)) goto loc_00038F47; /* jne: not equal / not zero */

loc_00038F2F:
    MEM32(esi * 4 + 0x75DE20) = 0x5C;
    esi++;
    MEM32(0x75DCF0) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038F47:
    MEM32(0x75D610) = ebx;
    goto loc_00038F55;

loc_00038F4F:
    esi = MEM32(0x75DB60);

loc_00038F55:
    edx = esp + 0x40;
    ecx = 0x78;
    PUSH32(esp, 0); sub_0034F840(); /* call 0x0034F840 */

loc_00038F63:
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    ecx = MEM32(0x75DC80);
    /* test ecx, ecx - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1694); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = 0x40;
    if (TEST_NZ(ecx, ecx)) goto loc_00038F9A; /* jne: not equal / not zero */

loc_00038F86:
    MEM32(esi * 4 + 0x75DE20) = eax;
    esi++;
    MEM32(0x75DC80) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038F9A:
    ecx = MEM32(0x75DC70);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D5A0) = ebx;
    if (TEST_NZ(ecx, ecx)) goto loc_00038FC2; /* jne: not equal / not zero */

loc_00038FAA:
    MEM32(esi * 4 + 0x75DE20) = 0x3C;
    esi++;
    MEM32(0x75DC70) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038FC2:
    ecx = MEM32(0x75DC74);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D590) = 0;
    if (TEST_NZ(ecx, ecx)) goto loc_00038FEE; /* jne: not equal / not zero */

loc_00038FD6:
    MEM32(esi * 4 + 0x75DE20) = 0x3D;
    esi++;
    MEM32(0x75DC74) = ebx;
    MEM32(0x75DB60) = esi;

loc_00038FEE:
    MEM32(0x75D594) = eax;
    eax = MEM32(0x75DC68);
    if (TEST_NZ(eax, eax)) goto loc_00039014; /* jne: not equal / not zero */

loc_00038FFC:
    MEM32(esi * 4 + 0x75DE20) = 0x3A;
    esi++;
    MEM32(0x75DC68) = ebx;
    MEM32(0x75DB60) = esi;

loc_00039014:
    eax = MEM32(0x75DDF4);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D588) = 0x204;
    if (TEST_NZ(eax, eax)) goto loc_0003903F; /* jne: not equal / not zero */

loc_00039027:
    MEM32(esi * 4 + 0x75DE20) = 0x9D;
    esi++;
    MEM32(0x75DDF4) = ebx;
    MEM32(0x75DB60) = esi;

loc_0003903F:
    eax = MEM32(0x75D9C0);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x75D940);
    MEM32(0x75D714) = 0x3F666666;
    if (TEST_NZ(eax, eax)) goto loc_00039072; /* jne: not equal / not zero */

loc_00039057:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D9C0) = ebx;
    MEM32(edx + 0x75D2A0) = 6;
    MEM32(0x75D940) = eax;

loc_00039072:
    ecx = MEM32(esp + 0x1C);
    MEM32(0x75D7A0) = ecx;
    ecx = MEM32(0x75D990);
    if (TEST_NZ(ecx, ecx)) goto loc_000390A1; /* jne: not equal / not zero */

loc_00039086:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D990) = ebx;
    MEM32(edx + 0x75D2A0) = 3;
    MEM32(0x75D940) = eax;

loc_000390A1:
    edx = MEM32(0x75D9A0);
    /* test edx, edx - flags set for next jcc */
    ecx = 2;
    MEM32(0x75D770) = ecx;
    if (TEST_NZ(edx, edx)) goto loc_000390D1; /* jne: not equal / not zero */

loc_000390B6:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D9A0) = ebx;
    MEM32(edx + 0x75D2A0) = 4;
    MEM32(0x75D940) = eax;

loc_000390D1:
    edx = MEM32(0x75D9B0);
    /* test edx, edx - flags set for next jcc */
    MEM32(0x75D780) = ecx;
    if (TEST_NZ(edx, edx)) goto loc_000390FC; /* jne: not equal / not zero */

loc_000390E1:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D9B0) = ebx;
    MEM32(edx + 0x75D2A0) = 5;
    MEM32(0x75D940) = eax;

loc_000390FC:
    MEM32(0x75D790) = ecx;
    edx = 0x4D6730;
    ecx = 0x70;
    PUSH32(esp, 0); sub_0034F8F0(); /* call 0x0034F8F0 */

loc_00039111:
    edx = esp + 0x50;
    ecx = 0x61;
    PUSH32(esp, 0); sub_0034F840(); /* call 0x0034F840 */

loc_0003911F:
    edx = esp + 0x20;
    ecx = 0x60;
    PUSH32(esp, 0); sub_0034F840(); /* call 0x0034F840 */

loc_0003912D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
