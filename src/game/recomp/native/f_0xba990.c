#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000BA990
 * Original: 0x000BA990 - 0x000BAAF1 (353 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA990:
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    eax = ecx + 1;
    MEM32(esp + 0x10) = eax;
    eax = ecx + 5;
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, 1);
    ebx = 0; /* xor self */
    MEM8(esi + 0x67) = LO8(eax);
    MEM8(esi + 0x66) = LO8(eax);
    eax = MEM32(esi + 0x20);
    /* cmp eax, ebx - flags set for next jcc */
    edx = ecx + 2;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    ebp = ecx + 4;
    edi = ecx + 3;
    MEM8(esi + 0x65) = LO8(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_000BA9D9; /* je: equal / zero */

loc_000BA9CC:
    PUSH32(esp, 0x557A20);
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000BA9D6:
    MEM32(esi + 0x20) = ebx;

loc_000BA9D9:
    eax = MEM32(esi + 0x4C);
    if (CMP_EQ(eax, ebx)) goto loc_000BA9EF; /* je: equal / zero */

loc_000BA9E0:
    PUSH32(esp, 0x557A20);
    ecx = edi;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000BA9EC:
    MEM32(esi + 0x4C) = ebx;

loc_000BA9EF:
    eax = MEM32(esi + 0x58);
    if (CMP_EQ(eax, ebx)) goto loc_000BAA05; /* je: equal / zero */

loc_000BA9F6:
    PUSH32(esp, 0x557A20);
    ecx = ebp;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000BAA02:
    MEM32(esi + 0x58) = ebx;

loc_000BAA05:
    eax = MEM32(esi + 0x50);
    if (CMP_EQ(eax, ebx)) goto loc_000BAA1D; /* je: equal / zero */

loc_000BAA0C:
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x557A20);
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000BAA1A:
    MEM32(esi + 0x50) = ebx;

loc_000BAA1D:
    eax = MEM32(esi + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_000BAA33; /* je: equal / zero */

loc_000BAA24:
    PUSH32(esp, 0x557A20);
    ecx = ebp;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000BAA30:
    MEM32(esi + 0x54) = ebx;

loc_000BAA33:
    esi = esi + 0x38;
    edi = 5;
    goto loc_000BAA40;

    /* nop */

loc_000BAA40:
    eax = MEM32(esi + -20);
    if (CMP_EQ(eax, ebx)) goto loc_000BAA92; /* je: equal / zero */

loc_000BAA47:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x557A4C);
    ecx = ecx << 4;
    eax = eax + 0xFFFFFFF8u;
    edx = ecx + edx + 4;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_000BAA67; /* je: equal / zero */

loc_000BAA61:
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;

loc_000BAA67:
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_000BAA77; /* je: equal / zero */

loc_000BAA6E:
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    MEM32(eax + 4) = ebx;
    goto loc_000BAA7C;

loc_000BAA77:
    ecx = MEM32(eax);
    MEM32(edx + 4) = ecx;

loc_000BAA7C:
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x10);
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_000BAA8A; /* je: equal / zero */

loc_000BAA87:
    MEM32(ecx + 4) = eax;

loc_000BAA8A:
    edx = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    MEM32(esi + -20) = ebx;

loc_000BAA92:
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_000BAAE2; /* je: equal / zero */

loc_000BAA98:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(0x557A4C);
    ecx = ecx << 4;
    eax = eax + 0xFFFFFFF8u;
    edx = ecx + edx + 4;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_000BAAB8; /* je: equal / zero */

loc_000BAAB2:
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;

loc_000BAAB8:
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_000BAAC8; /* je: equal / zero */

loc_000BAABF:
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    MEM32(eax + 4) = ebx;
    goto loc_000BAACD;

loc_000BAAC8:
    ecx = MEM32(eax);
    MEM32(edx + 4) = ecx;

loc_000BAACD:
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x10);
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_000BAADB; /* je: equal / zero */

loc_000BAAD8:
    MEM32(ecx + 4) = eax;

loc_000BAADB:
    edx = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    MEM32(esi) = ebx;

loc_000BAAE2:
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_000BAA40; /* jne: not equal / not zero */

loc_000BAAEC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

}
