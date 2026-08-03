#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111750
 * Original: 0x00111750 - 0x00111850 (256 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111750:
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebx + 0x218));
    ecx = 0; /* xor self */
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM32(esp) = ecx;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_00111766; /* jne: not equal / not zero */

loc_00111760:
    MEM8(ebx + 0x218) = LO8(ecx);

loc_00111766:
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x16C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CB70);
    if (CMP_LE(edi, ecx)) goto loc_001117AF; /* jle: less or equal (signed <=) */

loc_0011177C:
    edx = esi + 0x70;
    /* nop */

loc_00111780:
    SET_LO8(eax, MEM8(edx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00111792; /* je: equal / zero */

loc_00111786:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111792; /* je: equal / zero */

loc_0011178A:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00111792; /* je: equal / zero */

loc_0011178E:
    if (CMP_NE(LO8(eax), 4)) goto loc_00111797; /* jne: not equal / not zero */

loc_00111792:
    if (CMP_EQ(MEM32(edx + 0xC), ebx)) goto loc_001117A1; /* je: equal / zero */

loc_00111797:
    ecx++;
    edx = edx + 0x30;
    if (CMP_L(ecx, edi)) goto loc_00111780; /* jl: less (signed <) */

loc_0011179F:
    goto loc_001117AF;

loc_001117A1:
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    edx = ecx + esi + 0x70;
    MEM32(esp + 8) = edx;

loc_001117AF:
    ecx = ebp;
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_001117B6:
    ecx = MEM32(esp + 8);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)7);
    PUSH32(esp, 0); sub_0010FBC0(); /* call 0x0010FBC0 */

loc_001117C4:
    SET_LO8(ecx, MEM8(edi + eax + 0x39AE50));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001117D7; /* jne: not equal / not zero */

loc_001117CF:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001117D7:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x218);
    ecx = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_00114910(); /* call 0x00114910 */

loc_001117F5:
    SET_LO8(eax, MEM8(esp + 0x14));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebp = MEM32(ebp + 0xC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111848; /* je: equal / zero */

loc_00111800:
    eax = MEM32(ebp + 0x2424);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi + 0xE6C8C);
    if (TEST_Z(eax, eax)) goto loc_00111815; /* je: equal / zero */

loc_00111810:
    ecx = ecx - 2;
    goto loc_00111816;

loc_00111815:
    ecx--;

loc_00111816:
    edx = ecx + ecx * 2;
    edx = edx << 2;
    MEM8(edx + 0x64AF6A) = 0;
    ecx = MEM32(ecx * 4 + 0x731E90);
    SET_LO8(eax, MEM8(ecx + 0x2428));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00111848; /* jne: not equal / not zero */

loc_00111834:
    MEM8(ecx + 0x116B) = 1;
    MEM8(edx + 0x64AF69) = 0;
    MEM32(edx + 0x64AF64) = ebx;

loc_00111848:
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
