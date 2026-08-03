#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002271F0
 * Original: 0x002271F0 - 0x00227598 (936 bytes, 350 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002271F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002271F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x604;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    eax = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    edx = esp + 0x214;
    PUSH32(esp, 0); sub_00227160(); /* call 0x00227160 */

loc_00227216:
    ecx = MEM32(ebp + 0xC);
    esi = eax;
    PUSH32(esp, ecx);
    eax = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    edx = esp + 0x418;
    PUSH32(esp, 0); sub_00227160(); /* call 0x00227160 */

loc_0022722D:
    esp = esp + 8;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00227505; /* jle: less or equal (signed <=) */

loc_0022723C:
    /* nop */

loc_00227240:
    edx = MEM32(ebp + 0x14);
    ecx = ZX8(MEM8(eax + edx));
    ebx = ebx << 8;
    ebx = ebx | ecx;
    eax++;
    if (CMP_L(eax, edi)) goto loc_00227240; /* jl: less (signed <) */

loc_00227251:
    if (CMP_NE(ebx, 3)) goto loc_0022729A; /* jne: not equal / not zero */

loc_00227256:
    edx = esp + 0x210;
    PUSH32(esp, edx);
    eax = esp + 0x414;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227274:
    eax = esp + 0x224;
    PUSH32(esp, eax);
    ecx = esp + 0x428;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227292:
    esp = esp + 0x28;
    goto loc_0022756B;

loc_0022729A:
    if (CMP_NE(ebx, 0x11)) goto loc_00227335; /* jne: not equal / not zero */

loc_002272A3:
    ecx = esp + 0x210;
    PUSH32(esp, ecx);
    edx = esp + 0x414;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002272C1:
    edx = esp + 0x224;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002272DA:
    eax = esp + 0x238;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002272F3:
    ecx = esp + 0x24C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_0022730C:
    esp = esp + 0x50;
    edx = esp + 0x210;
    PUSH32(esp, edx);
    eax = esp + 0x414;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_0022732D:
    esp = esp + 0x14;
    goto loc_0022756B;

loc_00227335:
    if (CMP_NE(ebx, 0x10001)) goto loc_00227505; /* jne: not equal / not zero */

loc_00227341:
    eax = esp + 0x210;
    PUSH32(esp, eax);
    ecx = esp + 0x414;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_0022735F:
    ecx = esp + 0x224;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227378:
    edx = esp + 0x238;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227391:
    eax = esp + 0x24C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002273AA:
    esp = esp + 0x50;
    ecx = esp + 0x210;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002273C6:
    edx = esp + 0x224;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002273DF:
    eax = esp + 0x238;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002273F8:
    ecx = esp + 0x24C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227411:
    esp = esp + 0x50;
    edx = esp + 0x210;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_0022742D:
    eax = esp + 0x224;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227446:
    ecx = esp + 0x238;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_0022745F:
    edx = esp + 0x24C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227478:
    esp = esp + 0x50;
    eax = esp + 0x210;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227494:
    ecx = esp + 0x224;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002274AD:
    edx = esp + 0x238;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002274C6:
    eax = esp + 0x24C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_002274DF:
    esp = esp + 0x50;
    ecx = esp + 0x210;
    PUSH32(esp, ecx);
    edx = esp + 0x414;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227500:
    esp = esp + 0x14;
    goto loc_0022756B;

loc_00227505:
    eax = 0; /* xor self */
    /* test ebx, ebx - flags set for next jcc */
    ecx = 0x80;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(esp + esi * 2 + 0xE) = 1;
    if (TEST_Z(ebx, ebx)) goto loc_0022756B; /* je: equal / zero */

loc_0022751D:
    /* nop */

loc_00227520:
    if (TEST_Z(LO8(ebx), 1)) goto loc_00227546; /* je: equal / zero */

loc_00227525:
    edx = esp + 0x210;
    PUSH32(esp, edx);
    eax = esp + 0x414;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227543:
    esp = esp + 0x14;

loc_00227546:
    eax = esp + 0x210;
    PUSH32(esp, eax);
    ecx = esp + 0x414;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226FE0(); /* call 0x00226FE0 */

loc_00227562:
    ebx = ebx >> 1;
    esp = esp + 0x14;
    if (TEST_NZ(ebx, ebx)) goto loc_00227520; /* jne: not equal / not zero */

loc_0022756B:
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi - eax;
    /* test eax, eax - flags set for next jcc */
    esi = esp + esi * 2 + 0x10;
    if (CMP_LE(eax & eax, 0)) goto loc_00227591; /* jle: less or equal (signed <=) */

loc_00227580:
    SET_LO8(edx, MEM8(esi + 1));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(esi));
    ecx++;
    MEM8(ecx) = LO8(edx);
    ecx++;
    esi = esi + 2;
    eax--;
    if ((eax != 0)) goto loc_00227580; /* jne: not equal / not zero */

loc_00227591:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
