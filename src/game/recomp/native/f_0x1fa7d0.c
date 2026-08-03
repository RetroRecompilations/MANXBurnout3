#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FA7D0
 * Original: 0x001FA7D0 - 0x001FA86C (156 bytes, 54 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA7D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001FA7D0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FA210(); /* call 0x001FA210 */

loc_001FA7DD:
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0); sub_001F9DE0(); /* call 0x001F9DE0 */

loc_001FA7E5:
    edi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x36DC18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA7F5:
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001FA811; /* je: equal / zero */

loc_001FA7FC:
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x36DC78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA80A:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FA84A; /* jne: not equal / not zero */

loc_001FA811:
    if (CMP_NE(MEM8(esi + 0xD), 2)) goto loc_001FA84A; /* jne: not equal / not zero */

loc_001FA817:
    edx = MEM32(esp + 0x14);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001FA829; /* jge: greater or equal (signed >=) */

loc_001FA823:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FA829:
    /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(edi & edi, 0)) goto loc_001FA83B; /* jge: greater or equal (signed >=) */

loc_001FA835:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FA83B:
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001FA848:
    goto loc_001FA855;

loc_001FA84A:
    eax = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);

loc_001FA855:
    /* test MEM8(esi + 0x18), 4 - flags set for next jcc */
    ecx = 1;
    if (TEST_NZ(MEM8(esi + 0x18), 4)) goto loc_001FA864; /* jne: not equal / not zero */

loc_001FA860:
    ecx = ZX8(MEM8(esi + 0xD));

loc_001FA864:
    POP32(esp, edi);
    edx = 0; /* xor self */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
