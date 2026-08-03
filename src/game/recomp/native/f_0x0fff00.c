#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FFF00
 * Original: 0x000FFF00 - 0x001002EC (1004 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFF00(void)
{
    recomp_xmm_t xmm0;

loc_000FFF00:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM8(esi + 0x5D4) = 0;
    PUSH32(esp, 0); sub_001B6DB0(); /* call 0x001B6DB0 */

loc_000FFF11:
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x1654) = eax;
    ebx = ebx | 0xFFFFFFFFu;
    edi = 0xFFFF;
    eax = esi + 0x6F8;
    MEM8(esi + 0x1740) = 0;
    MEM32(esi + 0x1744) = ebx;
    MEM32(esi + 0x1748) = ebx;
    MEM8(esi + 0x1741) = 0xFF;
    MEM16(esi + 0x174C) = LO16(edi);
    MEM8(esi + 0x1743) = LO8(ebx);
    MEM8(esi + 0x1742) = 0;
    MEM32(esi + 0x1750) = 0;
    PUSH32(esp, 0); sub_00103860(); /* call 0x00103860 */

loc_000FFF66:
    eax = esi + 0x938;
    PUSH32(esp, 0); sub_00103860(); /* call 0x00103860 */

loc_000FFF71:
    MEM8(esi + 0xB78) = 0;
    MEM32(esi + 0xB7C) = ebx;
    MEM32(esi + 0xB80) = ebx;
    MEM8(esi + 0xB79) = 0xFF;
    MEM16(esi + 0xB84) = LO16(edi);
    MEM8(esi + 0xB7B) = LO8(ebx);
    MEM8(esi + 0xB7A) = 0;
    MEM8(esi + 0xBC0) = 0;
    MEM32(esi + 0xBC4) = ebx;
    MEM32(esi + 0xBC8) = ebx;
    MEM8(esi + 0xBC1) = 0xFF;
    MEM16(esi + 0xBCC) = LO16(edi);
    MEM8(esi + 0xBC3) = LO8(ebx);
    MEM8(esi + 0xBC2) = 0;
    MEM8(esi + 0xBD0) = 0;
    MEM32(esi + 0xBD4) = ebx;
    MEM32(esi + 0xBD8) = ebx;
    MEM8(esi + 0xBD1) = 0xFF;
    MEM16(esi + 0xBDC) = LO16(edi);
    MEM8(esi + 0xBD3) = LO8(ebx);
    MEM8(esi + 0xBD2) = 0;
    MEM8(esi + 0xC08) = 0;
    MEM32(esi + 0xC0C) = ebx;
    MEM32(esi + 0xC10) = ebx;
    MEM8(esi + 0xC09) = 0xFF;
    MEM16(esi + 0xC14) = LO16(edi);
    MEM8(esi + 0xC0B) = LO8(ebx);
    MEM8(esi + 0xC0A) = 0;
    MEM8(esi + 0xC1C) = 0;
    MEM32(esi + 0xC20) = ebx;
    MEM32(esi + 0xC24) = ebx;
    MEM8(esi + 0xC1D) = 0xFF;
    MEM16(esi + 0xC28) = LO16(edi);
    MEM8(esi + 0xC1F) = LO8(ebx);
    MEM8(esi + 0xC1E) = 0;
    MEM8(esi + 0xC30) = 0;
    MEM32(esi + 0xC34) = ebx;
    MEM32(esi + 0xC38) = ebx;
    MEM8(esi + 0xC31) = 0xFF;
    MEM16(esi + 0xC3C) = LO16(edi);
    MEM8(esi + 0xC33) = LO8(ebx);
    MEM8(esi + 0xC32) = 0;
    MEM8(esi + 0xC44) = 0;
    MEM32(esi + 0xC48) = ebx;
    MEM32(esi + 0xC4C) = ebx;
    MEM8(esi + 0xC45) = 0xFF;
    MEM16(esi + 0xC50) = LO16(edi);
    MEM8(esi + 0xC47) = LO8(ebx);
    MEM8(esi + 0xC46) = 0;
    MEM8(esi + 0xC58) = 0;
    MEM32(esi + 0xC5C) = ebx;
    MEM32(esi + 0xC60) = ebx;
    MEM8(esi + 0xC59) = 0xFF;
    MEM16(esi + 0xC64) = LO16(edi);
    MEM8(esi + 0xC5B) = LO8(ebx);
    MEM8(esi + 0xC5A) = 0;
    MEM8(esi + 0xC6C) = 0;
    MEM32(esi + 0xC70) = ebx;
    MEM32(esi + 0xC74) = ebx;
    MEM16(esi + 0xC78) = LO16(edi);
    MEM8(esi + 0xC6F) = LO8(ebx);
    MEM8(esi + 0xC6D) = 0xFF;
    MEM8(esi + 0xC6E) = 0;
    MEM32(esi + 0xC84) = ebx;
    MEM32(esi + 0xC88) = ebx;
    MEM16(esi + 0xC8C) = LO16(edi);
    MEM8(esi + 0xC83) = LO8(ebx);
    MEM8(esi + 0xC80) = 0;
    MEM8(esi + 0xC81) = 0xFF;
    MEM8(esi + 0xC82) = 0;
    MEM32(esi + 0xCD4) = ebx;
    MEM32(esi + 0xCD8) = ebx;
    MEM16(esi + 0xCDC) = LO16(edi);
    MEM8(esi + 0xCD3) = LO8(ebx);
    MEM8(esi + 0xCD0) = 0;
    MEM8(esi + 0xCD1) = 0xFF;
    MEM8(esi + 0xCD2) = 0;
    MEM32(esi + 0xCE8) = ebx;
    MEM32(esi + 0xCEC) = ebx;
    MEM16(esi + 0xCF0) = LO16(edi);
    MEM8(esi + 0xCE7) = LO8(ebx);
    MEM8(esi + 0xCE4) = 0;
    MEM8(esi + 0xCE5) = 0xFF;
    MEM8(esi + 0xCE6) = 0;
    MEM32(esi + 0xCFC) = ebx;
    MEM32(esi + 0xD00) = ebx;
    MEM16(esi + 0xD04) = LO16(edi);
    MEM8(esi + 0xCFB) = LO8(ebx);
    MEM8(esi + 0xCF8) = 0;
    MEM8(esi + 0xCF9) = 0xFF;
    MEM8(esi + 0xCFA) = 0;
    MEM32(esi + 0xD30) = ebx;
    MEM32(esi + 0xD34) = ebx;
    MEM16(esi + 0xD38) = LO16(edi);
    MEM8(esi + 0xD2F) = LO8(ebx);
    MEM8(esi + 0xD2C) = 0;
    MEM8(esi + 0xD2D) = 0xFF;
    MEM8(esi + 0xD2E) = 0;
    MEM32(esi + 0xD64) = ebx;
    MEM32(esi + 0xD68) = ebx;
    MEM16(esi + 0xD6C) = LO16(edi);
    MEM8(esi + 0xD63) = LO8(ebx);
    MEM8(esi + 0xD60) = 0;
    MEM8(esi + 0xD61) = 0xFF;
    MEM8(esi + 0xD62) = 0;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xDD4) = ebx;
    MEM32(esi + 0xDD8) = ebx;
    MEM16(esi + 0xDDC) = LO16(edi);
    MEM8(esi + 0xDD3) = LO8(ebx);
    MEM8(esi + 0xDD0) = 0;
    MEM8(esi + 0xDD1) = 0xFF;
    MEM8(esi + 0xDD2) = 0;
    MEM32(esi + 0xE44) = ebx;
    MEM32(esi + 0xE48) = ebx;
    MEM16(esi + 0xE4C) = LO16(edi);
    MEM8(esi + 0xE43) = LO8(ebx);
    MEM8(esi + 0xE40) = 0;
    MEM8(esi + 0xE41) = 0xFF;
    MEM8(esi + 0xE42) = 0;
    MEM32(esi + 0x1244) = ebx;
    MEM32(esi + 0x1248) = ebx;
    MEM16(esi + 0x124C) = LO16(edi);
    MEM8(esi + 0x1243) = LO8(ebx);
    MEM8(esi + 0x1240) = 0;
    MEM8(esi + 0x1241) = 0xFF;
    MEM8(esi + 0x1242) = 0;
    MEM16(esi + 0x164C) = LO16(edi);
    MEM32(esi + 0x1644) = ebx;
    MEM32(esi + 0x1648) = ebx;
    MEM8(esi + 0x1643) = LO8(ebx);
    MEM8(esi + 0x1640) = 0;
    MEM8(esi + 0x1641) = 0xFF;
    MEM8(esi + 0x1642) = 0;
    POP32(esp, edi);
    MEMF(esi + 0x4D7C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
