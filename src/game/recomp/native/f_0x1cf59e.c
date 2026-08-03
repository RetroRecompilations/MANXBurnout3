#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF59E
 * Original: 0x001CF59E - 0x001CF610 (114 bytes, 48 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF59E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF59E:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x54;
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    if (CMP_BE(MEM32(ebp + 0x10), eax)) goto loc_001CF5AF; /* jbe: below or equal (unsigned <=) */

loc_001CF5AC:
    MEM32(ebp + 0x10) = eax;

loc_001CF5AF:
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -84;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0x10);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp + -84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = 0; /* xor self */

loc_001CF5D4:
    MEM32(ebp + eax * 4 + -84) = MEM32(ebp + eax * 4 + -84) ^ 0x5C5C5C5C;
    eax++;
    if (CMP_B(eax, 0x10)) goto loc_001CF5D4; /* jb: below (unsigned <) */

loc_001CF5E2:
    esi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D701E(); /* call 0x001D701E */

loc_001CF5EF:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D7018(); /* call 0x001D7018 */

loc_001CF5F5:
    PUSH32(esp, 0x54);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D7012(); /* call 0x001D7012 */

loc_001CF601:
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D701E(); /* call 0x001D701E */

loc_001CF60A:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}
