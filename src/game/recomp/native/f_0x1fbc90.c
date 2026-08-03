#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBC90
 * Original: 0x001FBC90 - 0x001FBD91 (257 bytes, 91 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBC90:
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebp = 0; /* xor self */
    if (CMP_NE(edi, ebp)) goto loc_001FBCC0; /* jne: not equal / not zero */

loc_001FBCA0:
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = 2;
    MEM32(esp + 0x20) = ebp;
    edi = esp + 0xC;

loc_001FBCC0:
    esi = MEM32(edi + 0x14);
    if (CMP_EQ(esi, ebp)) goto loc_001FBCD0; /* je: equal / zero */

loc_001FBCC7:
    MEM32(esi + 0x10) = 1;
    goto loc_001FBCE7;

loc_001FBCD0:
    PUSH32(esp, 0x3080C);
    PUSH32(esp, 0x41B828);
    PUSH32(esp, 0); sub_001FE900(); /* call 0x001FE900 */

loc_001FBCDF:
    esi = eax;
    esp = esp + 8;
    MEM32(esi + 0x10) = ebp;

loc_001FBCE7:
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x28);
    eax = eax | 2;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x2C);
    /* cmp eax, ebp - flags set for next jcc */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 0x14) = ebp;
    if (CMP_NE(eax, ebp)) goto loc_001FBD0F; /* jne: not equal / not zero */

loc_001FBD04:
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x4C);
    eax = MEM32(edx);
    if (CMP_EQ(eax, ebp)) goto loc_001FBD47; /* je: equal / zero */

loc_001FBD0F:
    edx = MEM32(edi + 0x10);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FD770(); /* call 0x001FD770 */

loc_001FBD20:
    esp = esp + 0x10;
    /* cmp eax, ebp - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (CMP_NE(eax, ebp)) goto loc_001FBD47; /* jne: not equal / not zero */

loc_001FBD2A:
    if (TEST_NZ(MEM8(esi + 0x10), 1)) goto loc_001FBD3E; /* jne: not equal / not zero */

loc_001FBD30:
    PUSH32(esp, esi);
    PUSH32(esp, 0x41B828);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001FBD3B:
    esp = esp + 8;

loc_001FBD3E:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001FBD47:
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x20);
    if (CMP_EQ(ecx, ebp)) goto loc_001FBD5E; /* je: equal / zero */

loc_001FBD50:
    edx = MEM32(eax);
    eax = MEM32(edx + 0x40);
    eax = eax & 0xFFFFFFF;
    eax = eax + ecx;
    goto loc_001FBD61;

loc_001FBD5E:
    eax = eax + 0x28;

loc_001FBD61:
    MEM32(eax) = MEM32(eax) + 1;
    eax = esi + 8;
    MEM32(esi + 0xC) = ebp;
    MEM32(eax) = ebp;
    ecx = MEM32(0x41B820);
    MEM32(eax) = ecx;
    MEM32(esi + 0xC) = 0x41B820;
    edx = MEM32(0x41B820);
    MEM32(edx + 4) = eax;
    POP32(esp, edi);
    MEM32(0x41B820) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
