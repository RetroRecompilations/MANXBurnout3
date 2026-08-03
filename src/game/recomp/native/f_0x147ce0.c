#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00147CE0
 * Original: 0x00147CE0 - 0x00147DE8 (264 bytes, 86 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147CE0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00147CE0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xC0);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_00147D1E; /* je: equal / zero */

loc_00147CEE:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00147CF8:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00147D02:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0xC0) = ebx;

loc_00147D1E:
    esi = MEM32(edi + 0xC4);
    if (CMP_EQ(esi, ebx)) goto loc_00147D58; /* je: equal / zero */

loc_00147D28:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00147D32:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00147D3C:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0xC4) = ebx;

loc_00147D58:
    esi = MEM32(edi + 0xC8);
    if (CMP_EQ(esi, ebx)) goto loc_00147D92; /* je: equal / zero */

loc_00147D62:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00147D6C:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00147D76:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0xC8) = ebx;

loc_00147D92:
    if (CMP_NE(MEM32(edi + 0x120), 7)) goto loc_00147DA1; /* jne: not equal / not zero */

loc_00147D9B:
    MEM32(0x4A1DC8) = MEM32(0x4A1DC8) - 1;

loc_00147DA1:
    eax = eax | 0xFFFFFFFFu;
    MEM8(edi + 0x12C) = LO8(eax);
    MEM32(edi + 0x110) = eax;
    MEM8(edi + 0x124) = LO8(ebx);
    MEM32(edi) = ebx;
    eax = MEM32(edi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_00147DDB; /* je: equal / zero */

loc_00147DBF:
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_00147DC4:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00147DD8; /* je: equal / zero */

loc_00147DC8:
    esi = MEM32(edi + 0x10);
    eax = MEM32(esi + 0x14);
    if (CMP_NE(eax, MEM32(edi + 0x44))) goto loc_00147DD8; /* jne: not equal / not zero */

loc_00147DD3:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_00147DD8:
    MEM32(edi + 0x10) = ebx;

loc_00147DDB:
    POP32(esp, esi);
    MEM8(edi + 0x14) = LO8(ebx);
    MEM32(edi + 0x44) = ebx;
    MEM8(edi + 0x16) = 0x3C;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
