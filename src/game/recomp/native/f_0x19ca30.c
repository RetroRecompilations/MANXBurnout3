#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019CA30
 * Original: 0x0019CA30 - 0x0019CB3A (266 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CA30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019CA30:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 8);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0019CA79; /* jle: less or equal (signed <=) */

loc_0019CA47:
    ebx = ebp + 0x154;
    /* nop */

loc_0019CA50:
    edi = MEM32(ebx);
    if (TEST_Z(edi, edi)) goto loc_0019CA66; /* je: equal / zero */

loc_0019CA56:
    esi = 0x739B60;
    PUSH32(esp, 0); sub_0019DAD0(); /* call 0x0019DAD0 */

loc_0019CA60:
    MEM32(ebx) = 0;

loc_0019CA66:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 8);
    eax++;
    ebx = ebx + 4;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_0019CA50; /* jl: less (signed <) */

loc_0019CA79:
    eax = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0019CAEE; /* jle: less or equal (signed <=) */

loc_0019CA82:
    esi = ebp + 0x17C;
    ebx = 2;
    /* nop */

loc_0019CA90:
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0019CAE3; /* je: equal / zero */

loc_0019CA96:
    edx = MEM32(0x739C4C);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0019CADD; /* jle: less or equal (signed <=) */

loc_0019CAA2:
    if (CMP_EQ(ecx, MEM32(eax * 4 + 0x739BBC))) goto loc_0019CAB2; /* je: equal / zero */

loc_0019CAAB:
    eax++;
    if (CMP_L(eax, edx)) goto loc_0019CAA2; /* jl: less (signed <) */

loc_0019CAB0:
    goto loc_0019CADD;

loc_0019CAB2:
    if (CMP_NE(MEM32(0x3FA644), ebx)) goto loc_0019CAC7; /* jne: not equal / not zero */

loc_0019CABA:
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + 0x3FA294) = ebx;
    goto loc_0019CAD2;

loc_0019CAC7:
    edx = eax;
    edx = edx << 4;
    MEM32(edx + 0x3F9EE4) = ebx;

loc_0019CAD2:
    MEM32(eax * 4 + 0x739BBC) = 0;

loc_0019CADD:
    MEM32(esi) = 0;

loc_0019CAE3:
    eax = MEM32(ebp + 0xC);
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, eax)) goto loc_0019CA90; /* jl: less (signed <) */

loc_0019CAEE:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x44) = 0;
    MEM8(ebp + 0x45) = 0;
    MEM8(ebp + 0x46) = 0;
    MEM32(ebp + 0x34) = eax;
    MEM32(ebp + 0x30) = eax;
    MEM32(ebp + 0x54) = eax;
    MEM32(ebp + 0x50) = eax;
    MEM32(ebp + 4) = eax;
    MEM32(ebp) = eax;
    MEM32(ebp + 0x24) = eax;
    MEM32(ebp + 0x20) = eax;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0x2C) = eax;
    MEM32(ebp + 0x28) = eax;
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x48) = eax;
    MEM32(ebp + 0x10) = 0x18;
    POP32(esp, ebp);
    MEM32(0x494EF8) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
