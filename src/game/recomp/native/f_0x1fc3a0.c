#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FC3A0
 * Original: 0x001FC3A0 - 0x001FC63D (669 bytes, 231 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC3A0(void)
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

loc_001FC3A0:
    eax = MEM32(0x41B86C);
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_001FC638; /* je: equal / zero */

loc_001FC3B3:
    PUSH32(esp, esi);
    esi = MEM32(0x41B850);
    /* cmp esi, 0x41B850 - flags set for next jcc */
    MEM32(esp + 8) = ebp;
    if (CMP_EQ(esi, 0x41B850)) goto loc_001FC637; /* je: equal / zero */

loc_001FC3CA:
    PUSH32(esp, edi);
    goto loc_001FC3D0;

    /* nop */

loc_001FC3D0:
    eax = MEM32(esi);
    ecx = MEM32(0x41B87C);
    edx = MEM32(0x41B874);
    edi = MEM32(esi + 0x38);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0xC);
    ecx = ecx - edx;
    if (CMP_GE(eax, ecx)) goto loc_001FC4ED; /* jge: greater or equal (signed >=) */

loc_001FC3F3:
    SET_LO8(eax, MEM8(esi + 0x62));
    if (TEST_Z(LO8(eax), 0x10)) goto loc_001FC401; /* je: equal / zero */

loc_001FC3FA:
    PUSH32(esp, 0); sub_001FC070(); /* call 0x001FC070 */

loc_001FC3FF:
    goto loc_001FC455;

loc_001FC401:
    if (CMP_EQ(edi, ebp)) goto loc_001FC455; /* je: equal / zero */

loc_001FC405:
    if (TEST_Z(LO8(eax), 8)) goto loc_001FC411; /* je: equal / zero */

loc_001FC409:
    edx = MEM32(esi + 0x48);
    MEM32(esi + 0x44) = edx;
    goto loc_001FC422;

loc_001FC411:
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBBB0(); /* call 0x001FBBB0 */

loc_001FC41C:
    esp = esp + 0x10;
    MEM32(esi + 0x44) = eax;

loc_001FC422:
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC42D:
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FC438:
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FC446:
    ecx = MEM32(0x41B880);
    esp = esp + 0x30;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x38) = ebp;

loc_001FC455:
    SET_LO8(eax, MEM8(esi + 0x62));
    if (TEST_Z(LO8(eax), 1)) goto loc_001FC618; /* je: equal / zero */

loc_001FC460:
    if (TEST_NZ(LO8(eax), 8)) goto loc_001FC618; /* jne: not equal / not zero */

loc_001FC468:
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FA7D0(); /* call 0x001FA7D0 */

loc_001FC478:
    edx = MEM32(esi + 0x4C);
    edi = eax;
    eax = MEM32(0x41B880);
    eax = eax - edx;
    esp = esp + 8;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001FC499; /* jge: greater or equal (signed >=) */

loc_001FC493:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FC499:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001FC4A7:
    ecx = MEM32(esi + 0x44);
    ecx = ecx + eax;
    eax = ecx;
    /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x44) = ecx;
    if (CMP_B(eax, edi)) goto loc_001FC4DF; /* jb: below (unsigned <) */

loc_001FC4B5:
    if (TEST_Z(MEM8(esi + 0x62), 4)) goto loc_001FC4D7; /* je: equal / zero */

loc_001FC4BB:
    eax = ecx;
    /* nop */

loc_001FC4C0:
    eax = eax - edi;
    if (CMP_AE(eax, edi)) goto loc_001FC4C0; /* jae: above or equal (unsigned >=) */

loc_001FC4C6:
    MEM32(esi + 0x44) = eax;
    ecx = MEM32(0x41B880);
    MEM32(esi + 0x4C) = ecx;
    goto loc_001FC618;

loc_001FC4D7:
    PUSH32(esp, 0); sub_001FC070(); /* call 0x001FC070 */

loc_001FC4DC:
    MEM32(esi + 0x38) = ebp;

loc_001FC4DF:
    ecx = MEM32(0x41B880);
    MEM32(esi + 0x4C) = ecx;
    goto loc_001FC618;

loc_001FC4ED:
    if (CMP_NE(edi, ebp)) goto loc_001FC618; /* jne: not equal / not zero */

loc_001FC4F5:
    edx = MEM32(0x41B86C);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FBBF0(); /* call 0x001FBBF0 */

loc_001FC506:
    edi = eax;
    esp = esp + 0x10;
    /* cmp edi, ebp - flags set for next jcc */
    MEM32(esi + 0x38) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_001FC618; /* je: equal / zero */

loc_001FC516:
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FC524:
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC532:
    edx = ZX8(MEM8(esi + 0x5D));
    MEM32(esp + 0x30) = edx;
    esp = esp + 0x1C;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC554:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x62));
    eax = eax >> 2;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC56A:
    SET_LO8(eax, MEM8(esi + 0x62));
    esp = esp + 0x20;
    if (TEST_NZ(LO8(eax), 8)) goto loc_001FC585; /* jne: not equal / not zero */

loc_001FC574:
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC582:
    esp = esp + 0x10;

loc_001FC585:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x63);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC59F:
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBAE0(); /* call 0x001FBAE0 */

loc_001FC5AC:
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBAE0(); /* call 0x001FBAE0 */

loc_001FC5BA:
    edx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC5C8:
    eax = MEM32(esi + 0x58);
    esp = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC5D9:
    ecx = ZX8(MEM8(esi + 0x5E));
    MEM32(esp + 0x20) = ecx;
    esp = esp + 0xC;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC5FB:
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001FC607:
    edx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FC615:
    esp = esp + 0x30;

loc_001FC618:
    eax = ZX8(MEM8(esi + 0x61));
    ecx = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x14);
    ecx = ecx + eax;
    /* cmp esi, 0x41B850 - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(esi, 0x41B850)) goto loc_001FC3D0; /* jne: not equal / not zero */

loc_001FC636:
    POP32(esp, edi);

loc_001FC637:
    POP32(esp, esi);

loc_001FC638:
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
