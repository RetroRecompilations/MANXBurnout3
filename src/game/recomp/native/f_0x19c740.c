#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019C740
 * Original: 0x0019C740 - 0x0019CA00 (704 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019C740:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x10);
    eax--;
    /* cmp eax, 0x17 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x17)) goto loc_0019C9F7; /* ja: above (unsigned >) */

loc_0019C755:
    eax = ZX8(MEM8(eax + 0x19CA14));
    ebx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;
    { uint32_t _jt = MEM32(eax * 4 + 0x19CA00); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0019C768u) goto loc_0019C768;
    if (_jt == 0x0019C7C5u) goto loc_0019C7C5;
    if (_jt == 0x0019C8D5u) goto loc_0019C8D5;
    if (_jt == 0x0019C9C8u) goto loc_0019C9C8;
    if (_jt == 0x0019C9F7u) goto loc_0019C9F7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019C768:
    SET_LO8(ecx, MEM8(esp + 0x18));
    eax = MEM32(esp + 0x1C);
    MEM32(0x494EF8) = edx;
    MEM8(ebp + 0x18) = LO8(ecx);
    MEM32(ebp + 0x1C) = eax;
    MEM8(ebp + 0x47) = LO8(ebx);
    MEM8(ebp + 0x44) = LO8(ebx);
    MEM8(ebp + 0x45) = LO8(ebx);
    MEM8(ebp + 0x46) = LO8(ebx);
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x3C) = ebx;
    MEM32(ebp + 0x40) = ebx;
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x34) = edx;
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x24) = edx;
    MEM32(ebp + 0x20) = edx;
    MEM32(ebp + 0x2C) = edx;
    MEM32(ebp + 0x28) = edx;
    MEM32(ebp + 0x4C) = edx;
    MEM32(ebp + 0x48) = edx;
    MEM32(ebp + 8) = 0xA;
    MEM32(ebp + 0xC) = 0x12;
    MEM8(ebp + 0x19) = 1;
    MEM32(ebp + 0x10) = 2;

loc_0019C7C5:
    ecx = 0; /* xor self */
    eax = ebp + 0x58;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    eax = 0; /* xor self */
    ecx = 0x12;
    edi = ebp + 0x7C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x12;
    edi = ebp + 0xC4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x12;
    edi = ebp + 0x10C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    /* cmp MEM8(ebp + 0x19), LO8(ebx) - flags set for next jcc */
    MEM32(ebp + 0x1C4) = ebx;
    MEM32(ebp + 0x1C8) = ebx;
    if (CMP_NE(MEM8(ebp + 0x19), LO8(ebx))) goto loc_0019C827; /* jne: not equal / not zero */

loc_0019C81B:
    if (CMP_EQ(MEM8(0x739B64), LO8(ebx))) goto loc_0019C9C1; /* je: equal / zero */

loc_0019C827:
    /* cmp MEM32(ebp + 8), ebx - flags set for next jcc */
    MEM32(0x494EF8) = edx;
    MEM8(ebp + 0x47) = LO8(ebx);
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(MEM32(ebp + 8), ebx)) goto loc_0019C878; /* jle: less or equal (signed <=) */

loc_0019C839:
    ecx = ebp + 0x154;
    MEM32(esp + 0x14) = ecx;

loc_0019C843:
    edx = MEM32(esp + 0x14);
    edi = MEM32(edx);
    if (CMP_EQ(edi, ebx)) goto loc_0019C85D; /* je: equal / zero */

loc_0019C84D:
    esi = 0x739B60;
    PUSH32(esp, 0); sub_0019DAD0(); /* call 0x0019DAD0 */

loc_0019C857:
    eax = MEM32(esp + 0x14);
    MEM32(eax) = ebx;

loc_0019C85D:
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 8);
    eax++;
    edx = edx + 4;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(eax, ecx)) goto loc_0019C843; /* jl: less (signed <) */

loc_0019C878:
    /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(MEM32(ebp + 0xC), ebx)) goto loc_0019C8C5; /* jle: less or equal (signed <=) */

loc_0019C881:
    ecx = ebp + 0x17C;
    MEM32(esp + 0x14) = ecx;
    goto loc_0019C890;

    /* nop */

loc_0019C890:
    edx = MEM32(esp + 0x14);
    edi = MEM32(edx);
    if (CMP_EQ(edi, ebx)) goto loc_0019C8AA; /* je: equal / zero */

loc_0019C89A:
    esi = 0x739B60;
    PUSH32(esp, 0); sub_0019DB90(); /* call 0x0019DB90 */

loc_0019C8A4:
    eax = MEM32(esp + 0x14);
    MEM32(eax) = ebx;

loc_0019C8AA:
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0xC);
    eax++;
    edx = edx + 4;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(eax, ecx)) goto loc_0019C890; /* jl: less (signed <) */

loc_0019C8C5:
    MEM32(ebp + 0x10) = 4;

loc_0019C8CC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0019C8D5:
    ecx = MEM32(0x7397B4);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x54);
    ecx = MEM32(0x739B60);
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0019C8EE:
    if (CMP_NE(eax, 1)) goto loc_0019C8CC; /* jne: not equal / not zero */

loc_0019C8F3:
    eax = MEM32(ebp + 8);
    eax--;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(eax & eax, 0)) goto loc_0019C931; /* jle: less or equal (signed <=) */

loc_0019C8FF:
    esi = ebp + 0x154;

loc_0019C905:
    if (CMP_NE(MEM32(esi), ebx)) goto loc_0019C919; /* jne: not equal / not zero */

loc_0019C909:
    edi = 0x739B60;
    PUSH32(esp, 0); sub_0019DA70(); /* call 0x0019DA70 */

loc_0019C913:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0019C8CC; /* je: equal / zero */

loc_0019C919:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 8);
    eax++;
    esi = esi + 4;
    ecx--;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_0019C905; /* jl: less (signed <) */

loc_0019C92D:
    esi = MEM32(esp + 0x14);

loc_0019C931:
    edx = MEM32(ebp + 0xC);
    edx--;
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(edx & edx, 0)) goto loc_0019C973; /* jle: less or equal (signed <=) */

loc_0019C93D:
    esi = ebp + 0x17C;

loc_0019C943:
    if (CMP_NE(MEM32(esi), ebx)) goto loc_0019C95B; /* jne: not equal / not zero */

loc_0019C947:
    edi = 0x739B60;
    PUSH32(esp, 0); sub_0019DB30(); /* call 0x0019DB30 */

loc_0019C951:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0019C8CC; /* je: equal / zero */

loc_0019C95B:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    eax++;
    esi = esi + 4;
    ecx--;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_0019C943; /* jl: less (signed <) */

loc_0019C96F:
    esi = MEM32(esp + 0x14);

loc_0019C973:
    MEM8(ebp + 0x44) = LO8(ebx);
    MEM8(ebp + 0x45) = LO8(ebx);
    MEM8(ebp + 0x46) = LO8(ebx);
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x3C) = ebx;
    MEM32(ebp + 0x40) = ebx;
    MEM32(ebp + 0x20) = ebx;
    MEM32(ebp + 0x24) = ebx;
    MEM32(ebp + 0x4C) = ebx;
    MEM32(ebp + 0x48) = ebx;
    edx = MEM32(0x739C58);
    eax = edx + esi + -8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ebp + 0x54) = edx;
    eax = MEM32(0x739C58);
    eax = eax + esi + -4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ebp + 0x2C) = 0x11;
    MEM32(ebp + 0x28) = 9;
    MEM8(ebp + 0x19) = LO8(ebx);
    MEM32(ebp + 0x50) = edx;

loc_0019C9C1:
    MEM32(ebp + 0x10) = 5;

loc_0019C9C8:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0019CD10(); /* call 0x0019CD10 */

loc_0019C9CE:
    if (CMP_EQ(MEM8(ebp + 0x44), LO8(ebx))) goto loc_0019C8CC; /* je: equal / zero */

loc_0019C9D7:
    eax = 8;
    MEM32(ebp + 4) = eax;
    MEM32(ebp) = 4;
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x48) = 4;
    MEM32(ebp + 0x10) = 2;

loc_0019C9F7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
