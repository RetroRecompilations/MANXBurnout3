#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FC420
 * Original: 0x000FC420 - 0x000FC5C8 (424 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC420:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    esi = edi + 0x92A8;
    MEM8(edi + 0x30DCB) = LO8(ebx);
    PUSH32(esp, 0); sub_001B5E70(); /* call 0x001B5E70 */

loc_000FC43A:
    MEM32(esi + 4) = 0x470928;
    MEM32(esi + 8) = 0x8000;
    MEM32(esi + 0xC) = 0x400;
    ebp = edi + 0x307E0;
    esi = edi + 0x9A60;
    MEM32(esp + 0x10) = 8;

loc_000FC463:
    eax = edi + 0xFAC;
    PUSH32(esp, eax);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_000FFF00(); /* call 0x000FFF00 */

loc_000FC473:
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = esi;
    ebp = ebp + 4;
    esi = esi + 0x4DB0;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_000FC463; /* jne: not equal / not zero */

loc_000FC48A:
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x468928);
    eax = 8;
    ecx = edi + 0x307E0;
    PUSH32(esp, 0); sub_001B7460(); /* call 0x001B7460 */

loc_000FC4A9:
    eax = MEM32(edi + 0x937C);
    ebp = edi + 0x937C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000FC4BB:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x30D50) = edi;
    MEM8(edi + 0x30D10) = LO8(ebx);
    MEM8(edi + 0x30D13) = 0xFF;
    MEM8(edi + 0x30D12) = LO8(ebx);
    MEMF(edi + 0x30D20) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x30D24) = xmm0.f[0]; /* movss */
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi + 0x30D14) = eax;
    MEM32(edi + 0x30D18) = eax;
    SET_LO8(edx, 0xFF);
    MEM8(edi + 0x30D11) = LO8(edx);
    ecx = 0xFFFF;
    MEM16(edi + 0x30D1C) = LO16(ecx);
    MEM16(edi + 0x30D3C) = LO16(ecx);
    PUSH32(esp, 8);
    ecx = edi + 0x30A90;
    esi = edi + 0x30D90;
    MEM8(edi + 0x30D30) = LO8(ebx);
    MEM32(edi + 0x30D34) = eax;
    MEM32(edi + 0x30D38) = eax;
    MEM8(edi + 0x30D31) = LO8(edx);
    MEM8(edi + 0x30D33) = 0xFF;
    MEM8(edi + 0x30D32) = LO8(ebx);
    MEMF(edi + 0x30D40) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x30D44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B8AB0(); /* call 0x001B8AB0 */

loc_000FC559:
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFE5F0);
    ecx = ebp;
    MEM8(edi + 0x30DC9) = LO8(ebx);
    MEM8(edi + 0x30DCA) = LO8(ebx);
    MEM32(edi + 0x30A84) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x88), _icall_esp); /* indirect call */
    }

loc_000FC580:
    MEM8(edi + 0x30DCC) = LO8(ebx);
    MEM32(edi + 0x30E08) = ebx;
    MEM8(edi + 0x30E02) = LO8(ebx);
    MEM8(edi + 0x30E03) = LO8(ebx);
    MEM32(edi + 0x30E1C) = ebx;
    MEM8(edi + 0x9A55) = LO8(ebx);
    MEM32(edi + 0x30E18) = 0x3C;
    MEM32(edi + 0x30E20) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x4A1EC0) = 0xFED70;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
