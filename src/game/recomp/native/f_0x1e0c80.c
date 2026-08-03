#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E0C80
 * Original: 0x001E0C80 - 0x001E0D7A (250 bytes, 99 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0C80:
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(ebp + 8);
    eax = ebp + 0x10;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    /* cmp esi, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    if (CMP_NE(esi, eax)) goto loc_001E0CB0; /* jne: not equal / not zero */

loc_001E0C9B:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_001E0CA5:
    esi = MEM32(esp + 0x20);
    /* nop */

loc_001E0CB0:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001E0CBC:
    esp = esp + 8;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(eax, eax)) goto loc_001E0D70; /* je: equal / zero */

loc_001E0CCB:
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    esi = esi + 8;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x20);
    esi = MEM32(ecx);
    edi = 0; /* xor self */
    /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_BE(ebx & ebx, 0)) goto loc_001E0D4D; /* jbe: below or equal (unsigned <=) */

loc_001E0CF0:
    edx = ZX8(MEM8(edi + eax));
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(edx, edx)) goto loc_001E0D44; /* je: equal / zero */

loc_001E0CFC:
    esi = 0; /* xor self */
    edi = edi;

loc_001E0D00:
    eax = 0x80;
    ecx = esi;
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_001E0D3A; /* je: equal / zero */

loc_001E0D0D:
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax + edx;
    eax--;
    eax = ~eax;
    edx = ecx + ebx + 7;
    edx = edx & eax;
    eax = esi + edi * 8;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp));
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x2C), _icall_esp); /* indirect call */
    }

loc_001E0D33:
    edx = MEM32(esp + 0x18);
    esp = esp + 8;

loc_001E0D3A:
    esi++;
    if (CMP_B(esi, 8)) goto loc_001E0D00; /* jb: below (unsigned <) */

loc_001E0D40:
    eax = MEM32(esp + 0x14);

loc_001E0D44:
    edi++;
    if (CMP_B(edi, ebx)) goto loc_001E0CF0; /* jb: below (unsigned <) */

loc_001E0D49:
    esi = MEM32(esp + 0x18);

loc_001E0D4D:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001E0D54:
    eax = ebp + 0x10;
    esp = esp + 4;
    /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x20) = esi;
    if (CMP_NE(esi, eax)) goto loc_001E0CA5; /* jne: not equal / not zero */

loc_001E0D66:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_001E0D70:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
