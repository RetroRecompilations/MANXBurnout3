#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B2C60
 * Original: 0x001B2C60 - 0x001B2CCA (106 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2C60:
    SET_LO8(ecx, MEM8(edx));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001B2CC2; /* je: equal / zero */

loc_001B2C6E:
    PUSH32(esp, esi);
    /* nop */

loc_001B2C70:
    if (CMP_LE(ebx, 1)) goto loc_001B2CC1; /* jle: less or equal (signed <=) */

loc_001B2C75:
    esi = ZX8(LO8(ecx));
    ecx = ZX8(MEM8(esi + 0x3A6868));
    eax = 0; /* xor self */
    if (CMP_A(ecx, 3)) goto loc_001B2CAB; /* ja: above (unsigned >) */

loc_001B2C86:
    { uint32_t _jt = MEM32(ecx * 4 + 0x1B2CCC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001B2C8Du) goto loc_001B2C8D;
    if (_jt == 0x001B2C93u) goto loc_001B2C93;
    if (_jt == 0x001B2C9Cu) goto loc_001B2C9C;
    if (_jt == 0x001B2CA5u) goto loc_001B2CA5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B2C8D:
    eax = esi;
    edx++;
    eax = eax << 6;

loc_001B2C93:
    esi = ZX8(MEM8(edx));
    eax = eax + esi;
    edx++;
    eax = eax << 6;

loc_001B2C9C:
    esi = ZX8(MEM8(edx));
    eax = eax + esi;
    edx++;
    eax = eax << 6;

loc_001B2CA5:
    esi = ZX8(MEM8(edx));
    eax = eax + esi;
    edx++;

loc_001B2CAB:
    SET_LO16(eax, LO16(eax) - MEM16(ecx * 4 + 0x3A6968));
    edi = edi + 2;
    MEM16(edi + -2) = LO16(eax);
    SET_LO8(ecx, MEM8(edx));
    ebx--;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B2C70; /* jne: not equal / not zero */

loc_001B2CC1:
    POP32(esp, esi);

loc_001B2CC2:
    MEM16(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
