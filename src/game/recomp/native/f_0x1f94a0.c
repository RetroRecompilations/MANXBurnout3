#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F94A0
 * Original: 0x001F94A0 - 0x001F95CE (302 bytes, 108 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F94A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001F94A0:
    eax = MEM32(0x76411C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001F94B2:
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    eax--;
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(ecx + 0x100);
    if ((eax == 0)) goto loc_001F94DE; /* je: equal / zero */

loc_001F94C6:
    eax--;
    if ((eax == 0)) goto loc_001F94D0; /* je: equal / zero */

loc_001F94C9:
    eax--;
    if ((eax != 0)) goto loc_001F94EF; /* jne: not equal / not zero */

loc_001F94CC:
    edi = MEM32(esi);
    goto loc_001F94EF;

loc_001F94D0:
    edx = MEM32(esi);
    PUSH32(esp, edx);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002025B0(); /* call 0x002025B0 */

loc_001F94DC:
    goto loc_001F94EA;

loc_001F94DE:
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    edx = ebx + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00202610(); /* call 0x00202610 */

loc_001F94EA:
    esp = esp + 8;
    edi = eax;

loc_001F94EF:
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00202270(); /* call 0x00202270 */

loc_001F94FB:
    ecx = eax;
    edx = MEM32(ecx + 0x10);
    eax = edi;
    eax = eax << 5;
    esp = esp + 0xC;
    eax = eax + edx;
    if ((eax == 0)) goto loc_001F95A5; /* je: equal / zero */

loc_001F9510:
    edx = MEM32(ecx + 0x14);
    if (TEST_Z(edx, edx)) goto loc_001F95A5; /* je: equal / zero */

loc_001F951B:
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx);
    MEM32(esi + 8) = eax;
    edx = MEM32(ecx + 0x14);
    MEM32(esi) = edi;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 4) = 3;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x14);
    /* test MEM8(eax + 0x18), 4 - flags set for next jcc */
    edi = 1;
    if (TEST_NZ(MEM8(eax + 0x18), 4)) goto loc_001F9547; /* jne: not equal / not zero */

loc_001F9543:
    edi = ZX8(MEM8(eax + 0xD));

loc_001F9547:
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 8));
    ebx = ZX16(MEM16(edx + 0x1A));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(esi + 0xC);
    edx--;
    MEM32(esi + 8) = eax;
    if ((edx != 0)) goto loc_001F9591; /* jne: not equal / not zero */

loc_001F9566:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001F9578; /* jge: greater or equal (signed >=) */

loc_001F9572:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F9578:
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    fp_push((double)SMEM32(edx)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001F958C; /* jge: greater or equal (signed >=) */

loc_001F9586:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F958C:
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_001F9591:
    ecx = MEM32(0x76411C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F95A1:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F95A5:
    PUSH32(esp, 0);
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;
    edx = MEM32(0x76411C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F95CA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
