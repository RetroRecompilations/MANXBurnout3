#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00100B00
 * Original: 0x00100B00 - 0x00100BA9 (169 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100B00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00100B00:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_AE(LO16(edx), 0x5555)) goto loc_00100B11; /* jae: above or equal (unsigned >=) */

loc_00100B0B:
    if (CMP_A(LO16(eax), 0xAAAA)) goto loc_00100B23; /* ja: above (unsigned >) */

loc_00100B11:
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_00100B1E; /* jae: above or equal (unsigned >=) */

loc_00100B17:
    if (CMP_A(LO16(edx), 0xAAAA)) goto loc_00100B27; /* ja: above (unsigned >) */

loc_00100B1E:
    if (CMP_BE(LO16(edx), LO16(eax))) goto loc_00100B27; /* jbe: below or equal (unsigned <=) */

loc_00100B23:
    eax = 0; /* xor self */
    goto loc_00100B3B;

loc_00100B27:
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_00100B39; /* jae: above or equal (unsigned >=) */

loc_00100B2D:
    if (CMP_BE(LO16(edx), 0xAAAA)) goto loc_00100B39; /* jbe: below or equal (unsigned <=) */

loc_00100B34:
    eax = eax - edx;
    eax--;
    goto loc_00100B3B;

loc_00100B39:
    eax = eax - edx;

loc_00100B3B:
    edx = MEM32(ecx + 0x5E4);
    eax = ZX16(LO16(eax));
    MEM32(ecx + edx * 4 + 0x5E8) = eax;
    esi = MEM32(ecx + 0x5E4);
    esi++;
    eax = esi;
    MEM32(ecx + 0x5E4) = esi;
    esi = MEM32(0x3EBDB4);
    if (CMP_L(eax, esi)) goto loc_00100B6A; /* jl: less (signed <) */

loc_00100B64:
    MEM32(ecx + 0x5E4) = edi;

loc_00100B6A:
    /* cmp esi, edi - flags set for next jcc */
    MEM32(ecx + 0x5E0) = edi;
    if (CMP_LE(esi, edi)) goto loc_00100B97; /* jle: less or equal (signed <=) */

loc_00100B74:
    eax = ecx + 0x5E8;
    edx = esi;
    PUSH32(esp, ebx);
    /* nop */

loc_00100B80:
    edi = MEM32(eax);
    ebx = MEM32(ecx + 0x5E0);
    ebx = ebx + edi;
    eax = eax + 4;
    edx--;
    MEM32(ecx + 0x5E0) = ebx;
    if ((edx != 0)) goto loc_00100B80; /* jne: not equal / not zero */

loc_00100B96:
    POP32(esp, ebx);

loc_00100B97:
    eax = MEM32(ecx + 0x5E0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x5E0) = eax;
    esp += 4; return; /* ret */

}
