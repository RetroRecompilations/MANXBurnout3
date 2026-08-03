#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B6900
 * Original: 0x001B6900 - 0x001B6A15 (277 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6900:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    eax = 0; /* xor self */
    MEM32(esi + 0x524) = eax;
    MEM32(esi + 0x528) = eax;
    MEM32(esi + 0x480) = 4;
    PUSH32(esp, ebx);
    ebx = ebx | 0xFFFFFFFFu;
    MEM32(esi + 0x484) = ebx;
    MEM32(esi + 0x488) = ebx;
    MEM32(esi + 0x48C) = ebx;
    MEM32(esi + 0x490) = ebx;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esi + 0x574) = eax;
    MEM32(esi + 0x578) = eax;
    MEM32(esi + 0x58C) = eax;
    MEM32(esi + 0x53C) = ebx;
    MEM32(esi + 0x540) = ebx;
    MEM32(esi + 0x554) = ebx;
    MEM32(esi + 0x558) = ebx;
    MEM32(esi + 0x56C) = ebx;
    MEM32(esi + 0x570) = ebx;
    MEM32(esi + 0x57C) = ebx;
    MEMF(esi + 0x580) = xmm0.f[0]; /* movss */
    eax = esi + 0x68;
    edi = 8;
    SET_LO8(edx, 0xFF);
    ecx = 0xFFFF;

loc_001B6991:
    MEM8(eax + -8) = 0;
    MEM32(eax + -4) = ebx;
    MEM32(eax) = ebx;
    MEM8(eax + -7) = LO8(edx);
    MEM16(eax + 4) = LO16(ecx);
    MEM8(eax + -5) = LO8(ebx);
    MEM8(eax + -6) = 0;
    MEM8(eax + 8) = 0;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM8(eax + 9) = LO8(edx);
    MEM16(eax + 0x14) = LO16(ecx);
    MEM8(eax + 0xB) = LO8(ebx);
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 0x18) = 0;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x19) = LO8(edx);
    MEM16(eax + 0x24) = LO16(ecx);
    MEM8(eax + 0x1B) = LO8(ebx);
    MEM8(eax + 0x1A) = 0;
    eax = eax + 0x90;
    edi--;
    if ((edi != 0)) goto loc_001B6991; /* jne: not equal / not zero */

loc_001B69E0:
    edi = esi;
    ebp = 8;

loc_001B69E7:
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_001B6840(); /* call 0x001B6840 */

loc_001B69F0:
    edi = edi + 0x90;
    ebp--;
    if ((ebp != 0)) goto loc_001B69E7; /* jne: not equal / not zero */

loc_001B69F9:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    MEM32(esi + 0x584) = eax;
    MEM32(esi + 0x588) = 2;
    MEM32(esi + 0xAC8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
