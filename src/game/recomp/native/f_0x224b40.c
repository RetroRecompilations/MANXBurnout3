#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00224B40
 * Original: 0x00224B40 - 0x00224C4F (271 bytes, 89 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224B40:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x118);
    ebp = MEM32(esi + 0x120);
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_NE(eax, 0x10)) goto loc_00224C0B; /* jne: not equal / not zero */

loc_00224B5F:
    eax = MEM32(ebp + 0x801C);
    ebx = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_00224BA0; /* jne: not equal / not zero */

loc_00224B6B:
    eax = MEM32(ebp + 0x4010);
    if (CMP_NE(MEM32(ebp + 0x400C), eax)) goto loc_00224BA0; /* jne: not equal / not zero */

loc_00224B79:
    if (CMP_LE(eax, 4)) goto loc_00224B93; /* jle: less or equal (signed <=) */

loc_00224B7E:
    eax = esi;
    MEM32(ebp + 0x4014) = ebx;
    PUSH32(esp, 0); sub_00223240(); /* call 0x00223240 */

loc_00224B8B:
    MEM32(ebp + 0x801C) = eax;
    goto loc_00224BA0;

loc_00224B93:
    eax = MEM32(esi + 0x11C);
    if (TEST_Z(eax, eax)) goto loc_00224BA0; /* je: equal / zero */

loc_00224B9D:
    ebx = ebx | 0xFFFFFFFFu;

loc_00224BA0:
    eax = MEM32(ebp + 0x801C);
    if (TEST_Z(eax, eax)) goto loc_00224C0B; /* je: equal / zero */

loc_00224BAA:
    esi = MEM32(ebp + 0x4014);
    ebx = MEM32(ebp + 0x4010);
    ecx = MEM32(esp + 0x18);
    ebx = ebx - esi;
    /* cmp ecx, ebx - flags set for next jcc */
    if (CMP_L(ecx, ebx)) ebx = ecx; /* cmovl */
    esi = esi + eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx = MEM32(ebp + 0x4014);
    ecx = MEM32(ebp + 0x4010);
    esi = MEM32(esp + 0x14);
    edx = edx + ebx;
    eax = edx;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 0x4014) = edx;
    POP32(esp, edi);
    if (CMP_L(eax, ecx)) goto loc_00224C0B; /* jl: less (signed <) */

loc_00224BF7:
    eax = 0; /* xor self */
    MEM32(ebp + 0x4010) = eax;
    MEM32(ebp + 0x400C) = eax;
    MEM32(ebp + 0x801C) = eax;

loc_00224C0B:
    if (CMP_NE(MEM32(esi + 0x118), 0x14)) goto loc_00224C31; /* jne: not equal / not zero */

loc_00224C14:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00220C70(); /* call 0x00220C70 */

loc_00224C2C:
    esp = esp + 0x18;
    ebx = eax;

loc_00224C31:
    if (CMP_LE(ebx & ebx, 0)) goto loc_00224C49; /* jle: less or equal (signed <=) */

loc_00224C35:
    /* cmp ebx, MEM32(esp + 0x18) - flags set for next jcc */
    eax = ebx;
    if (CMP_GE(ebx, MEM32(esp + 0x18))) goto loc_00224C4B; /* jge: greater or equal (signed >=) */

loc_00224C3D:
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + ecx) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00224C49:
    eax = ebx;

loc_00224C4B:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
