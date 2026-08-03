#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C99D0
 * Original: 0x001C99D0 - 0x001C9B2C (348 bytes, 126 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C99D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C99D0:
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x640);
    ebx = eax;
    PUSH32(esp, ebx);
    edi = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_00244A20(); /* call 0x00244A20 */

loc_001C99F6:
    edi = edi - eax;
    eax = MEM32(esp + 0x14);
    ebx = ebx - edx - _cf; /* sbb */
    esi = esi | eax;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebx;
    if ((esi == 0)) goto loc_001C9A26; /* je: equal / zero */

loc_001C9A0A:
    SET_LO8(eax, MEM8(ebp + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9A26; /* je: equal / zero */

loc_001C9A14:
    eax = SX8(LO8(eax));
    eax--;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x10) = 0;
    if (((int32_t)eax >= 0)) goto loc_001C9A36; /* jns: not sign (positive) */

loc_001C9A26:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_001C9A32:
    eax = MEM32(esp + 0x2C);

loc_001C9A36:
    ecx = MEM32(esp + 0x10);
    ebx = ecx + eax;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    edx = ebx;
    edx = edx << 4;
    esi = MEM32(edx + ebp);
    edi = MEM32(edx + ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x640);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00244A20(); /* call 0x00244A20 */

loc_001C9A59:
    esi = esi - eax;
    eax = MEM32(esp + 0x1C);
    edi = edi - edx - _cf; /* sbb */
    if (CMP_A(eax, edi)) goto loc_001C9A80; /* ja: above (unsigned >) */

loc_001C9A65:
    if (CMP_B(eax, edi)) goto loc_001C9A6D; /* jb: below (unsigned <) */

loc_001C9A67:
    if (CMP_AE(MEM32(esp + 0x18), esi)) goto loc_001C9A74; /* jae: above or equal (unsigned >=) */

loc_001C9A6D:
    ebx--;
    MEM32(esp + 0x2C) = ebx;
    goto loc_001C9A85;

loc_001C9A74:
    if (CMP_B(eax, edi)) goto loc_001C9A9B; /* jb: below (unsigned <) */

loc_001C9A78:
    if (CMP_A(eax, edi)) goto loc_001C9A80; /* ja: above (unsigned >) */

loc_001C9A7A:
    if (CMP_BE(MEM32(esp + 0x18), esi)) goto loc_001C9A9B; /* jbe: below or equal (unsigned <=) */

loc_001C9A80:
    ebx++;
    MEM32(esp + 0x10) = ebx;

loc_001C9A85:
    eax = MEM32(esp + 0x2C);
    if (CMP_LE(MEM32(esp + 0x10), eax)) goto loc_001C9A32; /* jle: less or equal (signed <=) */

loc_001C9A8F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_001C9A9B:
    SET_LO8(eax, MEM8(esp + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9B1B; /* je: equal / zero */

loc_001C9AA3:
    ecx = ebx;
    ecx = ecx << 4;
    edx = MEM32(ecx + ebp + 4);
    eax = MEM32(ecx + ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_001AED30(); /* call 0x001AED30 */

loc_001C9ABA:
    SET_LO8(eax, MEM8(esp + 0x2B));
    esp = esp + 8;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_001CC230(); /* call 0x001CC230 */

loc_001C9ACA:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9B1B; /* je: equal / zero */

loc_001C9ACE:
    SET_LO8(eax, MEM8(esp + 0x22));
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_001CC230(); /* call 0x001CC230 */

loc_001C9ADB:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9B1B; /* je: equal / zero */

loc_001C9ADF:
    ecx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x4A1BE4);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x4A1BE4) = ecx;
    ecx = ZX8(MEM8(esp + 0x30));
    MEM32(0x4A1BE0) = eax;
    eax = eax + ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = ZX8(MEM8(esp + 0x2C));
    edx = edx - eax;
    ebx = ebx + edx + 1;

loc_001C9B1B:
    eax = ebx;
    POP32(esp, edi);
    eax = eax << 4;
    POP32(esp, esi);
    eax = eax + ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}
