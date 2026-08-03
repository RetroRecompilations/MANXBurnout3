#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226DB0
 * Original: 0x00226DB0 - 0x00226E62 (178 bytes, 71 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226DB0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx + 4);
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    if (TEST_Z(edx, edx)) goto loc_00226E1A; /* je: equal / zero */

loc_00226DC7:
    eax = 0x40;
    eax = eax - edx;
    /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_A(eax, ebp)) eax = ebp; /* cmova */
    ecx = eax;
    edi = edx + ebx + 0x1C;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    esi = esi + eax;
    ebp = ebp - eax;
    if (CMP_NE(eax, ecx)) goto loc_00226E17; /* jne: not equal / not zero */

loc_00226DFB:
    eax = ebx + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00226B90(); /* call 0x00226B90 */

loc_00226E04:
    eax = MEM32(ebx);
    esp = esp + 4;
    eax = eax + 0x40;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = 0;
    goto loc_00226E1A;

loc_00226E17:
    MEM32(ebx + 4) = MEM32(ebx + 4) + eax;

loc_00226E1A:
    if (CMP_B(ebp, 0x40)) goto loc_00226E3F; /* jb: below (unsigned <) */

loc_00226E1F:
    edi = ebp;
    edi = edi >> 6;

loc_00226E24:
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00226B90(); /* call 0x00226B90 */

loc_00226E2C:
    eax = MEM32(ebx);
    eax = eax + 0x40;
    esp = esp + 4;
    ebp = ebp - 0x40;
    esi = esi + 0x40;
    edi--;
    MEM32(ebx) = eax;
    if ((edi != 0)) goto loc_00226E24; /* jne: not equal / not zero */

loc_00226E3F:
    if (TEST_Z(ebp, ebp)) goto loc_00226E5D; /* je: equal / zero */

loc_00226E43:
    eax = MEM32(ebx + 4);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx + eax + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 4) = MEM32(ebx + 4) + ebp;

loc_00226E5D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
