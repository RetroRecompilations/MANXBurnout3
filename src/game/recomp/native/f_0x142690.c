#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00142690
 * Original: 0x00142690 - 0x00142886 (502 bytes, 161 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142690(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00142690:
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    SET_LO8(edx, 0); /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00142840; /* je: equal / zero */

loc_001426A7:
    eax--;
    MEM32(edi + 4) = eax;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x8D3));
    esi = 0; /* xor self */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_001426BE; /* je: equal / zero */

loc_001426B9:
    esi = 1;

loc_001426BE:
    if (CMP_EQ(MEM8(eax + 0x993), LO8(ebx))) goto loc_001426C7; /* je: equal / zero */

loc_001426C6:
    esi++;

loc_001426C7:
    if (CMP_EQ(MEM8(eax + 0xA53), LO8(ebx))) goto loc_001426D0; /* je: equal / zero */

loc_001426CF:
    esi++;

loc_001426D0:
    if (CMP_EQ(MEM8(eax + 0xB13), LO8(ebx))) goto loc_001426D9; /* je: equal / zero */

loc_001426D8:
    esi++;

loc_001426D9:
    /* cmp esi, 2 - flags set for next jcc */
    xmm0.f[0] = MEMF(edi + 0x20); /* movss */
    if (CMP_LE(esi, 2)) goto loc_001426ED; /* jle: less or equal (signed <=) */

loc_001426E3:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A69BC); /* addss */
    goto loc_001426F5;

loc_001426ED:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A69B4); /* subss */

loc_001426F5:
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x20); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x73A1C0);
    if (CMP_LE(ecx, ebx)) goto loc_00142766; /* jle: less or equal (signed <=) */

loc_00142749:
    eax = 0x73BACA;
    edi = edi;

loc_00142750:
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_0014275C; /* jne: not equal / not zero */

loc_00142754:
    if (CMP_NE(MEM8(eax), LO8(ebx))) goto loc_0014275C; /* jne: not equal / not zero */

loc_00142758:
    SET_LO8(edx, 0); /* xor self */
    goto loc_0014275E;

loc_0014275C:
    SET_LO8(edx, 1);

loc_0014275E:
    eax = eax + 0x27E0;
    ecx--;
    if ((ecx != 0)) goto loc_00142750; /* jne: not equal / not zero */

loc_00142766:
    if (CMP_NE(esi, ebx)) goto loc_0014278D; /* jne: not equal / not zero */

loc_0014276A:
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0014278D; /* je: equal / zero */

loc_0014276E:
    ecx = MEM32(edi + 0x38);
    eax = MEM32(edi + 0x4C);
    ecx++;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x38) = ecx;
    if (CMP_NE(eax, ebx)) goto loc_00142784; /* jne: not equal / not zero */

loc_0014277C:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00142990(); /* call 0x00142990 */

loc_00142782:
    goto loc_00142795;

loc_00142784:
    esi = edi;
    PUSH32(esp, 0); sub_00142B00(); /* call 0x00142B00 */

loc_0014278B:
    goto loc_00142795;

loc_0014278D:
    MEM32(edi + 0x38) = ebx;
    PUSH32(esp, 0); sub_00142910(); /* call 0x00142910 */

loc_00142795:
    if (CMP_NE(MEM32(edi + 0x18), ebx)) goto loc_001427A2; /* jne: not equal / not zero */

loc_0014279A:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00142CD0(); /* call 0x00142CD0 */

loc_001427A0:
    goto loc_001427A9;

loc_001427A2:
    eax = edi;
    PUSH32(esp, 0); sub_00142E70(); /* call 0x00142E70 */

loc_001427A9:
    eax = MEM32(edi + 0x28);
    if (CMP_EQ(eax, ebx)) goto loc_001427EC; /* je: equal / zero */

loc_001427B0:
    eax--;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x28) = eax;
    if (CMP_NE(eax, ebx)) goto loc_001427EC; /* jne: not equal / not zero */

loc_001427B8:
    ecx = (uint32_t)(int32_t)SMEM16(0x40FBBA);
    eax = MEM32(0x40FBB8);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x40FBBC);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x40FBBC) = ecx;
    edx = 0; /* xor self */
    ecx = 0x1E;
    MEM32(0x40FBB8) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx + ecx;
    MEM32(edi + 0x2C) = edx;

loc_001427EC:
    eax = MEM32(edi + 0x2C);
    if (CMP_EQ(eax, ebx)) goto loc_0014287F; /* je: equal / zero */

loc_001427F7:
    eax--;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x2C) = eax;
    if (CMP_NE(eax, ebx)) goto loc_0014287F; /* jne: not equal / not zero */

loc_00142803:
    eax = MEM32(0x40FBB8);
    edx = MEM32(0x40FBB8);
    ecx = MEM32(0x40FBBC);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x40FBBC) = ecx;
    edx = 0; /* xor self */
    ecx = 0x1E;
    MEM32(0x40FBB8) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx + ecx;
    MEM32(edi + 0x28) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00142840:
    esi = MEM32(edi + 0x18);
    if (CMP_EQ(esi, ebx)) goto loc_00142877; /* je: equal / zero */

loc_00142847:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00142851:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014285B:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;

loc_00142877:
    MEM32(edi + 4) = ebx;
    PUSH32(esp, 0); sub_00142910(); /* call 0x00142910 */

loc_0014287F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
