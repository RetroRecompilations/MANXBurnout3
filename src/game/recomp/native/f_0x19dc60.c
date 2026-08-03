#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DC60
 * Original: 0x0019DC60 - 0x0019DDEF (399 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0019DC60:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x2E));
    SET_LO8(edx, 0xFF);
    /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_0019DCF2; /* je: equal / zero */

loc_0019DC75:
    edi = ZX8(LO8(eax));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x4C);
    edi = edi + 0x60EC2C;
    if (CMP_L(MEM16(esi + 0x2C), 0)) goto loc_0019DCFB; /* jl: less (signed <) */

loc_0019DC88:
    PUSH32(esp, 0); sub_0019DDF0(); /* call 0x0019DDF0 */

loc_0019DC8D:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019DDE6; /* jne: not equal / not zero */

loc_0019DC95:
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x2C));
    ecx = SX16(LO16(eax));
    edx = edx - 2;
    if (CMP_GE(ecx, edx)) goto loc_0019DCEC; /* jge: greater or equal (signed >=) */

loc_0019DCAA:
    SET_LO16(edx, MEM16(esi + 0x24));
    SET_LO16(ecx, MEM16(esi + 0x26));
    eax++;
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x20) = LO16(edx);
    MEM16(esi + 0x22) = LO16(ecx);
    edx = MEM32(edi);
    ecx = MEM32(edx);
    eax = SX16(LO16(eax));
    eax = eax << 2;
    SET_LO16(edx, MEM16(ecx + eax + 4));
    MEM16(esi + 0x24) = LO16(edx);
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    SET_LO16(eax, MEM16(edx + eax + 6));
    MEM16(esi + 0x26) = LO16(eax);
    PUSH32(esp, 0); sub_0019DDF0(); /* call 0x0019DDF0 */

loc_0019DCE4:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019DDE6; /* jne: not equal / not zero */

loc_0019DCEC:
    MEM16(esi + 0x2C) = 0xFFFF;

loc_0019DCF2:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0019DCFB:
    SET_LO8(eax, MEM8(esi + 0x2F));
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_0019DD06; /* jne: not equal / not zero */

loc_0019DD02:
    eax = 0; /* xor self */
    goto loc_0019DD14;

loc_0019DD06:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    eax = eax << 7;
    eax = eax + 0x625FB0;

loc_0019DD14:
    edi = MEM32(eax + 0x10C);
    if (TEST_Z(edi, edi)) goto loc_0019DD33; /* je: equal / zero */

loc_0019DD1E:
    ecx = edi;
    /* cmp MEM8(ecx + 0x5E), LO8(edx) - flags set for next jcc */
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0x5C);
    if (CMP_NE(MEM8(ecx + 0x5E), LO8(edx))) goto loc_0019DD2D; /* jne: not equal / not zero */

loc_0019DD29:
    edi = 0; /* xor self */
    goto loc_0019DD5A;

loc_0019DD2D:
    edi = ZX8(MEM8(edi + 0x5E));
    goto loc_0019DD51;

loc_0019DD33:
    ecx = MEM32(eax + 0x114);
    /* cmp MEM8(ecx + 0x41), LO8(edx) - flags set for next jcc */
    ebx = (int32_t)MEMF(ecx + 0x30); /* cvttss2si */
    if (CMP_NE(MEM8(ecx + 0x41), LO8(edx))) goto loc_0019DD47; /* jne: not equal / not zero */

loc_0019DD43:
    edi = 0; /* xor self */
    goto loc_0019DD5A;

loc_0019DD47:
    ecx = MEM32(eax + 0x114);
    edi = ZX8(MEM8(ecx + 0x41));

loc_0019DD51:
    edi = (uint32_t)((int32_t)edi * (int32_t)0x4C);
    edi = edi + 0x60EC2C;

loc_0019DD5A:
    /* test ebx, ebx - flags set for next jcc */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    eax = MEM32(edi);
    ecx = MEM32(eax);
    edx = ebx + -10;
    MEM32(esp + 0xC) = edx;
    SET_LO16(edx, MEM16(ecx + ebx * 4 + 4));
    MEM16(esi + 0x20) = LO16(edx);
    eax = MEM32(edi);
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(ecx + ebx * 4 + 6));
    MEM16(esi + 0x22) = LO16(edx);
    if (TEST_S(ebx, ebx)) goto loc_0019DCEC; /* jl: less (signed <) */

loc_0019DD8E:
    edi = edi;

loc_0019DD90:
    if (CMP_L(ebx, MEM32(esp + 0xC))) goto loc_0019DCEC; /* jl: less (signed <) */

loc_0019DD9A:
    SET_LO16(eax, MEM16(esi + 0x20));
    SET_LO16(ecx, MEM16(esi + 0x22));
    MEM16(esi + 0x24) = LO16(eax);
    MEM16(esi + 0x26) = LO16(ecx);
    edx = MEM32(edi);
    eax = MEM32(edx);
    SET_LO16(ecx, MEM16(eax + ebx * 4));
    MEM16(esi + 0x20) = LO16(ecx);
    edx = MEM32(edi);
    eax = MEM32(edx);
    SET_LO16(ecx, MEM16(eax + ebx * 4 + 2));
    MEM16(esi + 0x22) = LO16(ecx);
    PUSH32(esp, 0); sub_0019DDF0(); /* call 0x0019DDF0 */

loc_0019DDC8:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019DDDC; /* jne: not equal / not zero */

loc_0019DDCC:
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_0019DD90; /* jns: not sign (positive) */

loc_0019DDCF:
    MEM16(esi + 0x2C) = 0xFFFF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0019DDDC:
    SET_LO8(edx, MEM8(edi + 0x47));
    MEM8(esi + 0x2E) = LO8(edx);
    MEM16(esi + 0x2C) = LO16(ebx);

loc_0019DDE6:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
