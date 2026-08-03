#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019CF20
 * Original: 0x0019CF20 - 0x0019D0F6 (470 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019CF20:
    PUSH32(esp, ecx);
    ecx = MEM32(0x73A194);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x73A190);
    eax = eax | ecx;
    if ((eax != 0)) goto loc_0019CF38; /* jne: not equal / not zero */

loc_0019CF33:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0019CF38:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0019CD10(); /* call 0x0019CD10 */

loc_0019CF40:
    ebx = MEM32(esi + 0x1C);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27E0);
    eax = eax + 0x73A1D0;
    PUSH32(esp, 0); sub_0018CAF0(); /* call 0x0018CAF0 */

loc_0019CF55:
    edi = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_0019CF5F; /* jne: not equal / not zero */

loc_0019CF5C:
    edi = MEM32(esi + 4);

loc_0019CF5F:
    eax = MEM32(esi + 4);
    if (CMP_LE(edi, eax)) goto loc_0019CF6D; /* jle: less or equal (signed <=) */

loc_0019CF66:
    eax = eax + 8;
    /* cmp edi, eax - flags set for next jcc */
    goto loc_0019CF79;

loc_0019CF6D:
    if (CMP_GE(edi, eax)) goto loc_0019CFA6; /* jge: greater or equal (signed >=) */

loc_0019CF6F:
    ecx = MEM32(esi + 0xC);
    ecx = ecx + edi;
    eax = eax + 8;
    /* cmp ecx, eax - flags set for next jcc */

loc_0019CF79:
    if (CMP_G(ecx, eax)) goto loc_0019CFA6; /* jg: greater (signed >) */

loc_0019CF7B:
    SET_LO8(eax, MEM8(esi + 0x47));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019CFB8; /* jne: not equal / not zero */

loc_0019CF82:
    eax = MEM32(0x494EF8);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0019CF93; /* jne: not equal / not zero */

loc_0019CF8C:
    eax = ebx;
    MEM32(0x494EF8) = eax;

loc_0019CF93:
    if (CMP_NE(eax, ebx)) goto loc_0019CFB8; /* jne: not equal / not zero */

loc_0019CF97:
    PUSH32(esp, 0); sub_0019CB40(); /* call 0x0019CB40 */

loc_0019CF9C:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019CFB8; /* je: equal / zero */

loc_0019CFA0:
    MEM8(esi + 0x47) = 1;
    goto loc_0019CFB8;

loc_0019CFA6:
    if (CMP_NE(MEM32(0x494EF8), ebx)) goto loc_0019CFB8; /* jne: not equal / not zero */

loc_0019CFAE:
    MEM32(0x494EF8) = 0xFFFFFFFFu;

loc_0019CFB8:
    SET_LO8(eax, MEM8(esi + 0x47));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019D017; /* je: equal / zero */

loc_0019CFC0:
    eax = MEM32(esi + 4);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_LE(edi, eax)) goto loc_0019CFD6; /* jle: less or equal (signed <=) */

loc_0019CFC9:
    ecx = eax + 8;
    if (CMP_G(edi, ecx)) goto loc_0019CFF0; /* jg: greater (signed >) */

loc_0019CFD0:
    ecx = edi;
    ecx = ecx - eax;
    goto loc_0019CFE9;

loc_0019CFD6:
    if (CMP_GE((uint32_t)ecx + (uint32_t)eax, (uint32_t)eax)) goto loc_0019CFF0; /* jge: greater or equal (signed >=) */

loc_0019CFD8:
    ecx = MEM32(esi + 0xC);
    ebx = ecx + edi;
    ebp = eax + 8;
    if (CMP_G(ebx, ebp)) goto loc_0019CFF0; /* jg: greater (signed >) */

loc_0019CFE5:
    ecx = ecx - eax;
    ecx = ecx + edi;

loc_0019CFE9:
    if (CMP_LE(ecx, 4)) goto loc_0019CFF0; /* jle: less or equal (signed <=) */

loc_0019CFEE:
    SET_LO8(edx, 1);

loc_0019CFF0:
    ecx = MEM32(esi + 0x24);
    if (CMP_NE(ecx, MEM32(esi + 0x2C))) goto loc_0019D025; /* jne: not equal / not zero */

loc_0019CFF8:
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0xC))); }
    eax = MEM32(esi);
    eax++;
    MEM8(esi + 0x47) = 0;
    MEM32(0x494EF8) = 0xFFFFFFFFu;
    MEM32(esi + 4) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    MEM32(esi) = edx;

loc_0019D017:
    eax = MEM32(esi + 4);
    if (CMP_L(edi, eax)) goto loc_0019D031; /* jl: less (signed <) */

loc_0019D01E:
    eax = eax + 4;
    /* cmp edi, eax - flags set for next jcc */
    goto loc_0019D03B;

loc_0019D025:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019D017; /* je: equal / zero */

loc_0019D029:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0019D031:
    edx = MEM32(esi + 0xC);
    edx = edx + edi;
    eax = eax + 4;
    /* cmp edx, eax - flags set for next jcc */

loc_0019D03B:
    if (CMP_G(edx, eax)) goto loc_0019D040; /* jg: greater (signed >) */

loc_0019D03D:
    MEM32(esi + 0x4C) = edi;

loc_0019D040:
    ecx = MEM32(esi + 0x4C);
    MEM32(esi + 0x48) = 0xFFFFFFFFu;
    eax = MEM32(esi + 0x24);
    if (CMP_EQ(eax, MEM32(esi + 0x2C))) goto loc_0019D05A; /* je: equal / zero */

loc_0019D052:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0xC))); }
    if (CMP_EQ(ecx, edx)) goto loc_0019D079; /* je: equal / zero */

loc_0019D05A:
    if (TEST_S(ecx, ecx)) goto loc_0019D079; /* jl: less (signed <) */

loc_0019D05E:
    if (CMP_GE(ecx, MEM32(esi + 0xC))) goto loc_0019D079; /* jge: greater or equal (signed >=) */

loc_0019D063:
    ecx = MEM32(esi + ecx * 4 + 0x17C);
    ebx = MEM32(ecx);
    eax = 0; /* xor self */
    /* cmp ebx, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ebx, 2)) ? 1 : 0); /* setne */
    eax--;
    eax = eax & ecx;
    goto loc_0019D07B;

loc_0019D079:
    eax = 0; /* xor self */

loc_0019D07B:
    ecx = MEM32(esi);
    edi = ecx + -4;
    ecx = ecx + 4;
    if (CMP_G(edi, ecx)) goto loc_0019D0EE; /* jg: greater (signed >) */

loc_0019D087:
    eax = MEM32(eax + 4);
    ebp = MEM32(esi + 8);
    ebx = MEM32(esi + 0x20);
    MEM32(esp + 0x10) = eax;

loc_0019D094:
    /* test edi, edi - flags set for next jcc */
    eax = edi;
    if (CMP_GE(edi & edi, 0)) goto loc_0019D09D; /* jge: greater or equal (signed >=) */

loc_0019D09A:
    eax = edi + ebp;

loc_0019D09D:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    /* cmp ebx, MEM32(esi + 0x28) - flags set for next jcc */
    ecx = edx;
    if (CMP_EQ(ebx, MEM32(esi + 0x28))) goto loc_0019D0B1; /* je: equal / zero */

loc_0019D0A7:
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    if (CMP_EQ(ecx, edx)) goto loc_0019D0CE; /* je: equal / zero */

loc_0019D0B1:
    if (TEST_S(ecx, ecx)) goto loc_0019D0CE; /* jl: less (signed <) */

loc_0019D0B5:
    if (CMP_GE(ecx, MEM32(esi + 8))) goto loc_0019D0CE; /* jge: greater or equal (signed >=) */

loc_0019D0BA:
    eax = MEM32(esi + ecx * 4 + 0x154);
    edx = 0; /* xor self */
    /* cmp MEM32(eax), 2 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(eax), 2)) ? 1 : 0); /* setne */
    edx--;
    eax = eax & edx;
    goto loc_0019D0D0;

loc_0019D0CE:
    eax = 0; /* xor self */

loc_0019D0D0:
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_0019D0EB; /* je: equal / zero */

loc_0019D0D9:
    eax = MEM32(esi);
    edi++;
    eax = eax + 4;
    if (CMP_LE(edi, eax)) goto loc_0019D094; /* jle: less or equal (signed <=) */

loc_0019D0E3:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0019D0EB:
    MEM32(esi + 0x48) = ecx;

loc_0019D0EE:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
