#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000C2ED0
 * Original: 0x000C2ED0 - 0x000C2FC0 (240 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2ED0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebp + 0xA) = LO8(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_000C2EF6; /* je: equal / zero */

loc_000C2EE5:
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    PUSH32(esp, 0x557A20);
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000C2EF3:
    MEM32(ebp + 0xC) = ebx;

loc_000C2EF6:
    edi = ebp + 0x18;
    MEM32(esp + 0x10) = 2;

loc_000C2F01:
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(edi);
    ecx++;
    if (CMP_EQ(eax, ebx)) goto loc_000C2FA6; /* je: equal / zero */

loc_000C2F10:
    esi = MEM32(eax + -8);
    edx = MEM32(0x557A4C);
    eax = eax + 0xFFFFFFF8u;
    ecx = ecx << 4;
    /* cmp esi, ebx - flags set for next jcc */
    edx = ecx + edx + 4;
    if (CMP_EQ(esi, ebx)) goto loc_000C2F31; /* je: equal / zero */

loc_000C2F27:
    ebp = MEM32(eax + 4);
    MEM32(esi + 4) = ebp;
    ebp = MEM32(esp + 0x18);

loc_000C2F31:
    esi = MEM32(eax + 4);
    if (CMP_EQ(esi, ebx)) goto loc_000C2F45; /* je: equal / zero */

loc_000C2F38:
    ebp = MEM32(eax);
    MEM32(esi) = ebp;
    ebp = MEM32(esp + 0x18);
    MEM32(eax + 4) = ebx;
    goto loc_000C2F4A;

loc_000C2F45:
    esi = MEM32(eax);
    MEM32(edx + 4) = esi;

loc_000C2F4A:
    esi = MEM32(edx);
    esi = MEM32(esi + 0x10);
    /* cmp esi, ebx - flags set for next jcc */
    MEM32(eax) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_000C2F58; /* je: equal / zero */

loc_000C2F55:
    MEM32(esi + 4) = eax;

loc_000C2F58:
    edx = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    eax = MEM32(edi + -8);
    MEM32(edi) = ebx;
    edx = MEM32(0x557A4C);
    eax = eax - 8;
    edx = ecx + edx + 4;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_000C2F7B; /* je: equal / zero */

loc_000C2F75:
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;

loc_000C2F7B:
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_000C2F8B; /* je: equal / zero */

loc_000C2F82:
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    MEM32(eax + 4) = ebx;
    goto loc_000C2F90;

loc_000C2F8B:
    ecx = MEM32(eax);
    MEM32(edx + 4) = ecx;

loc_000C2F90:
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x10);
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_000C2F9E; /* je: equal / zero */

loc_000C2F9B:
    MEM32(ecx + 4) = eax;

loc_000C2F9E:
    edx = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    MEM32(edi + -8) = ebx;

loc_000C2FA6:
    eax = MEM32(esp + 0x10);
    edi = edi + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_000C2F01; /* jne: not equal / not zero */

loc_000C2FB8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
