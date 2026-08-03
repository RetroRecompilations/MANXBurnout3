#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221B40
 * Original: 0x00221B40 - 0x00221C60 (288 bytes, 110 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221B40:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00221630(); /* call 0x00221630 */

loc_00221B4D:
    esi = MEM32(esp + 0x24);
    esp = esp + 4;
    if (CMP_GE(esi & esi, 0)) goto loc_00221B6C; /* jge: greater or equal (signed >=) */

loc_00221B58:
    eax = MEM32(esp + 0x1C);
    edx = eax + 1;
    /* nop */

loc_00221B60:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00221B60; /* jne: not equal / not zero */

loc_00221B67:
    eax = eax - edx;
    esi = eax + 1;

loc_00221B6C:
    ecx = esi + 0xC;
    eax = edi + 0xE4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226460(); /* call 0x00226460 */

loc_00221B7C:
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    ebx = edi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_00221320(); /* call 0x00221320 */

loc_00221B8D:
    ebx = MEM32(esp + 0x30);
    esp = esp + 0x10;
    if (CMP_GE(eax, ebx)) goto loc_00221B9F; /* jge: greater or equal (signed >=) */

loc_00221B98:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00221B9F:
    ecx = MEM32(edi + 0x64);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x70);
    ebp = ebp + ecx;
    if (CMP_LE(esi & esi, 0)) goto loc_00221BC7; /* jle: less or equal (signed <=) */

loc_00221BAC:
    ecx = esi;
    esi = MEM32(esp + 0x20);
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(esp + 0x14);

loc_00221BC7:
    MEM32(edi + 0x64) = MEM32(edi + 0x64) + ebx;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 0x18);
    MEM8(ebp + 8) = LO8(eax);
    eax = MEM32(esp + 0x18);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    MEM8(ebp + 9) = LO8(ecx);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ebp + 0xA) = LO8(edx);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 0x18);
    MEM8(ebp) = LO8(ecx);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    MEM8(ebp + 1) = LO8(edx);
    ecx = eax;
    MEM8(ebp + 3) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x18);
    MEM8(ebp + 2) = LO8(ecx);
    MEM8(ebp + 4) = LO8(edx);
    PUSH32(esp, ebx);
    ecx = eax;
    edx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    edx = (uint32_t)((int32_t)edx >> 8);
    PUSH32(esp, ebp);
    esi = edi + 0xE4;
    PUSH32(esp, esi);
    MEM8(ebp + 0xB) = LO8(ebx);
    MEM8(ebp + 5) = LO8(ecx);
    MEM8(ebp + 6) = LO8(edx);
    MEM8(ebp + 7) = LO8(eax);
    PUSH32(esp, 0); sub_00226480(); /* call 0x00226480 */

loc_00221C31:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002264E0(); /* call 0x002264E0 */

loc_00221C39:
    eax = MEM32(esp + 0x30);
    esp = esp + 0x18;
    /* cmp eax, 0x40746963 - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(eax, 0x40746963)) goto loc_00221C51; /* jne: not equal / not zero */

loc_00221C48:
    MEM16(edi + 0x8E) = 0;

loc_00221C51:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00221630(); /* call 0x00221630 */

loc_00221C57:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
