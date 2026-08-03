#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF537
 * Original: 0x001CF537 - 0x001CF599 (98 bytes, 38 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF537(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF537:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    if (CMP_BE(MEM32(ebp + 0xC), 0x40)) goto loc_001CF54A; /* jbe: below or equal (unsigned <=) */

loc_001CF543:
    MEM32(ebp + 0xC) = 0x40;

loc_001CF54A:
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -64;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp + -64;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);

loc_001CF571:
    MEM32(ebp + eax * 4 + -64) = MEM32(ebp + eax * 4 + -64) ^ 0x36363636;
    eax++;
    if (CMP_B(eax, 0x10)) goto loc_001CF571; /* jb: below (unsigned <) */

loc_001CF57F:
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_001D7018(); /* call 0x001D7018 */

loc_001CF587:
    PUSH32(esp, 0x40);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_001D7012(); /* call 0x001D7012 */

loc_001CF595:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
