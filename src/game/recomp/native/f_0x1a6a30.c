#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A6A30
 * Original: 0x001A6A30 - 0x001A6B39 (265 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6A30:
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + eax * 4 + 0x30);
    ebx = 0; /* xor self */
    if (CMP_EQ(ebp, ebx)) goto loc_001A6B31; /* je: equal / zero */

loc_001A6A4B:
    edx = MEM32(ecx + 0x40);
    edx = MEM32(edx);
    edx = MEM32(edx + eax * 4);
    if (CMP_NE(edx, 0xFF)) goto loc_001A6A61; /* jne: not equal / not zero */

loc_001A6A5B:
    MEM32(esp + 8) = ebx;
    goto loc_001A6A6E;

loc_001A6A61:
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    edx = edx + 0x60EC2C;
    MEM32(esp + 8) = edx;

loc_001A6A6E:
    edx = MEM32(ecx + eax * 4);
    xmm0.f[0] = MEMF(edx); /* movss */
    /* cmp MEM8(ebp + 9), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_BE(MEM8(ebp + 9), LO8(ebx))) goto loc_001A6B27; /* jbe: below or equal (unsigned <=) */

loc_001A6A84:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    /* nop */

loc_001A6A90:
    edx = MEM32(esp + 0x14);
    esi = MEM32(ebp);
    esi = esi + edx;
    edx = 0; /* xor self */
    /* cmp MEM8(esi + 0x18), 4 - flags set for next jcc */
    edi = ZX8(MEM8(esi + 0x18));
    SET_LO8(edx, (CMP_NE(MEM8(esi + 0x18), 4)) ? 1 : 0); /* setne */
    eax = MEM32(ecx + eax * 4 + 0x10);
    ecx = MEM32(eax + edi * 4);
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(esi + 0x10); /* movss */
    edx--;
    edx = edx & 0xB;
    MEM32(esp + 0x1C) = edx;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x1B));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x1A));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x19));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019E160(); /* call 0x0019E160 */

loc_001A6ADB:
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6137E0);
    PUSH32(esp, 0); sub_001A2B20(); /* call 0x001A2B20 */

loc_001A6B05:
    eax = ZX8(MEM8(ebp + 9));
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    ebx++;
    edx = edx + 0x20;
    /* cmp ebx, eax - flags set for next jcc */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = edx;
    if (CMP_L(ebx, eax)) goto loc_001A6A90; /* jl: less (signed <) */

loc_001A6B25:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A6B27:
    SET_LO8(edx, MEM8(ebp + 9));
    MEM8(eax + ecx + 0x110) = LO8(edx);

loc_001A6B31:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}
