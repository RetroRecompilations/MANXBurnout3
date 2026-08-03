#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000B52A0
 * Original: 0x000B52A0 - 0x000B53E4 (324 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B52A0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B52A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    fp_push(MEMF(ebx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B52BA:
    MEM8(esi + 0x20) = LO8(eax);
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B52CB:
    MEM8(esi + 0x21) = LO8(eax);
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B52DC:
    MEM8(esi + 0x22) = LO8(eax);
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B52ED:
    MEM8(esi + 0x23) = LO8(eax);
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B52FD:
    MEM8(esi + 0x24) = LO8(eax);
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B530E:
    MEM8(esi + 0x25) = LO8(eax);
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B531F:
    MEM8(esi + 0x26) = LO8(eax);
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_000B5330:
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    ecx = MEM32(ebp + 0xC);
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEM8(esi + 0x27) = LO8(eax);
    eax = MEM32(ebp + 0x10);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xC) = edx;
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    MEM32(esi + 0x3C) = 0xB53F0;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
