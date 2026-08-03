#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220B90
 * Original: 0x00220B90 - 0x00220C61 (209 bytes, 86 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00220B90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x654;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0xC);
    /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 2)) goto loc_00220BF4; /* jne: not equal / not zero */

loc_00220BAA:
    if (CMP_NE(MEM32(ecx + 0x10), 0xFE)) goto loc_00220BF4; /* jne: not equal / not zero */

loc_00220BB3:
    ebx = MEM32(ebp + 0x10);
    if (CMP_BE(ebx, 0x63E)) goto loc_00220BC7; /* jbe: below or equal (unsigned <=) */

loc_00220BBE:
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00220BC7:
    esi = MEM32(ebp + 0xC);
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    MEM8(esp + 0x20) = 0;
    MEM8(esp + 0x21) = 0;
    edi = esp + 0x22;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 8);
    edi = esp + 0x20;
    ebx = ebx + 2;
    goto loc_00220BFA;

loc_00220BF4:
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);

loc_00220BFA:
    if (CMP_NE(eax, 3)) goto loc_00220C08; /* jne: not equal / not zero */

loc_00220BFF:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00220C08:
    eax = MEM32(ebp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00220C20; /* jne: not equal / not zero */

loc_00220C0F:
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003393FD(); /* call 0x003393FD */

loc_00220C1B:
    esi = MEM32(ebp + 8);
    goto loc_00220C3E;

loc_00220C20:
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_00220760(); /* call 0x00220760 */

loc_00220C2D:
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00339417(); /* call 0x00339417 */

loc_00220C3E:
    if (CMP_NE(MEM32(esi + 0xC), 2)) goto loc_00220C55; /* jne: not equal / not zero */

loc_00220C44:
    if (CMP_NE(MEM32(esi + 0x10), 0xFE)) goto loc_00220C55; /* jne: not equal / not zero */

loc_00220C4D:
    if (CMP_LE(eax, 2)) goto loc_00220C55; /* jle: less or equal (signed <=) */

loc_00220C52:
    eax = eax - 2;

loc_00220C55:
    PUSH32(esp, 0); sub_002207E0(); /* call 0x002207E0 */

loc_00220C5A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
