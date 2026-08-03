#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AD350
 * Original: 0x001AD350 - 0x001AD4A0 (336 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD350:
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00038D10(); /* call 0x00038D10 */

loc_001AD359:
    eax = MEM32(esp + 0x20);
    ebp = 0; /* xor self */
    eax = eax - ebp;
    if ((eax == 0)) goto loc_001AD390; /* je: equal / zero */

loc_001AD363:
    eax--;
    if ((eax == 0)) goto loc_001AD37B; /* je: equal / zero */

loc_001AD366:
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 4);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x15);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1C);
    MEM32(esp + 0x20) = ecx;
    goto loc_001AD3A1;

loc_001AD37B:
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 4);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x15);
    MEM32(esp + 0x20) = ecx;
    goto loc_001AD3A1;

loc_001AD390:
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x14);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = edx;

loc_001AD3A1:
    /* cmp eax, MEM32(esp + 0x20) - flags set for next jcc */
    ecx = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(eax, MEM32(esp + 0x20))) goto loc_001AD494; /* jge: greater or equal (signed >=) */

loc_001AD3B1:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_001AD3B4:
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax + 4);
    eax = MEM32(edx + 0x24);
    /* cmp MEM16(eax + ecx * 8), LO16(ebp) - flags set for next jcc */
    esi = eax + ecx * 8;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(MEM16(eax + ecx * 8), LO16(ebp))) goto loc_001AD480; /* jle: less or equal (signed <=) */

loc_001AD3D3:
    MEM32(esp + 0x14) = ebp;

loc_001AD3D7:
    ebx = MEM32(esi + 4);
    ebx = ebx + MEM32(esp + 0x14);
    PUSH32(esp, 0x1C);
    ecx = ebx + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0034EDB0(); /* call 0x0034EDB0 */

loc_001AD3EA:
    if (CMP_LE(MEM16(ebx + 0x50), LO16(ebp))) goto loc_001AD45D; /* jle: less or equal (signed <=) */

loc_001AD3F0:
    MEM32(esp + 0x10) = ebp;

loc_001AD3F4:
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ebx + 0x4C);
    edx = MEM32(ebx + 0x54);
    eax = (uint32_t)(int32_t)SMEM16(edx + ebp * 2);
    edi = edi + ecx;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 8);
    eax = eax + eax * 4;
    esi = ecx + eax * 8;
    if (CMP_EQ(MEM32(esi), 2)) goto loc_001AD440; /* je: equal / zero */

loc_001AD419:
    eax = 0x549E50;
    PUSH32(esp, 0); sub_0003A3C0(); /* call 0x0003A3C0 */

loc_001AD423:
    edx = MEM32(edi + 0x88);
    eax = MEM32(edi + 0x84);
    ecx = MEM32(edi + 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D7D10(); /* call 0x001D7D10 */

loc_001AD43D:
    esp = esp + 0xC;

loc_001AD440:
    ecx = MEM32(esp + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x50);
    ebp++;
    ecx = ecx + 0x90;
    /* cmp ebp, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ebp, edx)) goto loc_001AD3F4; /* jl: less (signed <) */

loc_001AD457:
    esi = MEM32(esp + 0x20);
    ebp = 0; /* xor self */

loc_001AD45D:
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    eax++;
    edi = edi + 0x60;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edi;
    if (CMP_L(eax, ecx)) goto loc_001AD3D7; /* jl: less (signed <) */

loc_001AD47C:
    ecx = MEM32(esp + 0x1C);

loc_001AD480:
    eax = MEM32(esp + 0x2C);
    ecx++;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(ecx, eax)) goto loc_001AD3B4; /* jl: less (signed <) */

loc_001AD491:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001AD494:
    PUSH32(esp, 0); sub_00039140(); /* call 0x00039140 */

loc_001AD499:
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}
