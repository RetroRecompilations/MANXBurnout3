#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003A3C0
 * Original: 0x0003A3C0 - 0x0003A71A (858 bytes, 208 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0003A3C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(eax + 0xC4) = esi;
    eax = MEM32(0x75DC8C);
    edi = 0; /* xor self */
    /* cmp eax, edi - flags set for next jcc */
    ebx = 1;
    if (CMP_NE(eax, edi)) goto loc_0003A3FD; /* jne: not equal / not zero */

loc_0003A3E1:
    eax = MEM32(0x75DB60);
    MEM32(eax * 4 + 0x75DE20) = 0x43;
    eax++;
    MEM32(0x75DC8C) = ebx;
    MEM32(0x75DB60) = eax;

loc_0003A3FD:
    MEM32(0x75D5AC) = 0x10101;
    eax = MEM32(esi);
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 7)) goto loc_0003A534; /* ja: above (unsigned >) */

loc_0003A415:
    { uint32_t _jt = MEM32(eax * 4 + 0x3A71C); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0003A41Cu) goto loc_0003A41C;
    if (_jt == 0x0003A45Bu) goto loc_0003A45B;
    if (_jt == 0x0003A4E4u) goto loc_0003A4E4;
    if (_jt == 0x0003A501u) goto loc_0003A501;
    if (_jt == 0x0003A534u) goto loc_0003A534;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003A41C:
    ecx = MEM32(0x4D6588);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_0003A428:
    edx = MEM32(0x4D658C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_0003A434:
    esp = esp + 8;
    edx = ebx;
    eax = 0x97;
    PUSH32(esp, 0); sub_00015750(); /* call 0x00015750 */

loc_0003A443:
    edx = ebx;
    eax = 0x3B;
    PUSH32(esp, 0); sub_00015750(); /* call 0x00015750 */

loc_0003A44F:
    MEM32(0x75DB70) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0003A45B:
    eax = MEM32(0x60E0A0);
    ecx = MEM32(0x60E0A4);
    edx = MEM32(0x60E0A8);
    MEM32(esp + 0x10) = eax;
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    eax = MEM32(0x60E0AC);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(0x4D6560);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_0003A4BC:
    edx = MEM32(0x4D6580);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_0003A4C8:
    esp = esp + 8;
    edx = 0x1010101;
    eax = 0x43;
    PUSH32(esp, 0); sub_00015750(); /* call 0x00015750 */

loc_0003A4DA:
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_0003A573;

loc_0003A4E4:
    ecx = MEM32(0x4D6560);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_0003A4F0:
    edx = MEM32(0x4D6570);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_0003A4FC:
    esp = esp + 8;
    goto loc_0003A57C;

loc_0003A501:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(0x4D6560);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_0003A52C:
    ecx = MEM32(0x4D6574);
    goto loc_0003A565;

loc_0003A534:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(0x4D6560);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_0003A55F:
    ecx = MEM32(0x4D6570);

loc_0003A565:
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_0003A56B:
    edx = esp + 0x28;
    esp = esp + 8;
    PUSH32(esp, edx);

loc_0003A573:
    ecx = 0; /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_0034E9A0(); /* call 0x0034E9A0 */

loc_0003A57C:
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, edi)) goto loc_0003A592; /* je: equal / zero */

loc_0003A583:
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    edx = MEM32(eax + ecx * 4);
    MEM32(0x75DB70) = edx;
    goto loc_0003A598;

loc_0003A592:
    MEM32(0x75DB70) = edi;

loc_0003A598:
    /* cmp MEM32(0x75DC80), edi - flags set for next jcc */
    eax = MEM32(0x75DB60);
    if (CMP_NE(MEM32(0x75DC80), edi)) goto loc_0003A5BC; /* jne: not equal / not zero */

loc_0003A5A5:
    MEM32(eax * 4 + 0x75DE20) = 0x40;
    eax++;
    MEM32(0x75DC80) = ebx;
    MEM32(0x75DB60) = eax;

loc_0003A5BC:
    /* cmp MEM32(0x75DDDC), edi - flags set for next jcc */
    MEM32(0x75D5A0) = ebx;
    if (CMP_NE(MEM32(0x75DDDC), edi)) goto loc_0003A5E1; /* jne: not equal / not zero */

loc_0003A5CA:
    MEM32(eax * 4 + 0x75DE20) = 0x97;
    eax++;
    MEM32(0x75DDDC) = ebx;
    MEM32(0x75DB60) = eax;

loc_0003A5E1:
    MEM32(0x75D6FC) = edi;
    /* test MEM8(esi + 0x24), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(0x75DC6C);
    if (TEST_Z(MEM8(esi + 0x24), LO8(ebx))) goto loc_0003A615; /* je: equal / zero */

loc_0003A5F2:
    if (CMP_NE(ecx, edi)) goto loc_0003A60D; /* jne: not equal / not zero */

loc_0003A5F6:
    MEM32(eax * 4 + 0x75DE20) = 0x3B;
    eax++;
    MEM32(0x75DC6C) = ebx;
    MEM32(0x75DB60) = eax;

loc_0003A60D:
    MEM32(0x75D58C) = ebx;
    goto loc_0003A636;

loc_0003A615:
    if (CMP_NE(ecx, edi)) goto loc_0003A630; /* jne: not equal / not zero */

loc_0003A619:
    MEM32(eax * 4 + 0x75DE20) = 0x3B;
    eax++;
    MEM32(0x75DC6C) = ebx;
    MEM32(0x75DB60) = eax;

loc_0003A630:
    MEM32(0x75D58C) = edi;

loc_0003A636:
    ecx = MEM32(0x75DA10);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x24));
    edx = edx & 2;
    edx = edx << 1;
    if (CMP_NE(ecx, edi)) goto loc_0003A66E; /* jne: not equal / not zero */

loc_0003A64A:
    ecx = MEM32(0x75D940);
    edi = ecx;
    edi = edi << 4;
    ecx++;
    MEM32(edi + 0x75D2A0) = 0xB;
    MEM32(0x75DA10) = ebx;
    MEM32(0x75D940) = ecx;
    edi = 0; /* xor self */

loc_0003A66E:
    MEM32(0x75D7F0) = edx;
    /* test MEM8(esi + 0x24), 0x20 - flags set for next jcc */
    ecx = MEM32(0x75DDCC);
    if (TEST_Z(MEM8(esi + 0x24), 0x20)) goto loc_0003A6A3; /* je: equal / zero */

loc_0003A680:
    if (CMP_NE(ecx, edi)) goto loc_0003A69B; /* jne: not equal / not zero */

loc_0003A684:
    MEM32(eax * 4 + 0x75DE20) = 0x93;
    eax++;
    MEM32(0x75DDCC) = ebx;
    MEM32(0x75DB60) = eax;

loc_0003A69B:
    MEM32(0x75D6EC) = edi;
    goto loc_0003A6C8;

loc_0003A6A3:
    if (CMP_NE(ecx, edi)) goto loc_0003A6BE; /* jne: not equal / not zero */

loc_0003A6A7:
    MEM32(eax * 4 + 0x75DE20) = 0x93;
    eax++;
    MEM32(0x75DDCC) = ebx;
    MEM32(0x75DB60) = eax;

loc_0003A6BE:
    eax = MEM32(0x4D6B34);
    MEM32(0x75D6EC) = eax;

loc_0003A6C8:
    if (TEST_Z(MEM8(esi + 0x25), 2)) goto loc_0003A6F1; /* je: equal / zero */

loc_0003A6CE:
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00243743(); /* call 0x00243743 */

loc_0003A6DC:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* FPU: fsubr dword ptr [esi + 0x1c] */
    esp = esp + 8;
    /* FPU: fsubr dword ptr [0x3b168c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0003A6FA;

loc_0003A6F1:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0003A6FA:
    ecx = 0x63;
    edx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0034F840(); /* call 0x0034F840 */

loc_0003A714:
    POP32(esp, edi);
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
