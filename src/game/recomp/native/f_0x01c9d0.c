#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001C9D0
 * Original: 0x0001C9D0 - 0x0001CBBE (494 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C9D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001C9D0:
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(0x44D0CC) = eax;
    MEM32(0x44D0D0) = eax;
    MEM32(0x44D0D4) = eax;
    MEM32(0x44D0D8) = eax;
    MEM32(0x44D0DC) = eax;
    PUSH32(esp, ebx);
    MEM32(0x44D0E0) = eax;
    PUSH32(esp, ebp);
    MEM32(0x44D0E4) = eax;
    MEM32(0x44D0E8) = eax;
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(0x44D0EC) = eax;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    /* nop */

loc_0001CA10:
    SET_LO8(eax, MEM8(edx + 0x44D01F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001CB30; /* je: equal / zero */

loc_0001CA1E:
    SET_LO8(eax, MEM8(edx + 0x39E2A8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001CB30; /* je: equal / zero */

loc_0001CA2C:
    ecx = MEM32(esp + 0x2C);
    SET_LO8(eax, MEM8(edx + ecx + 0x386));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0001CB30; /* jle: less or equal (signed <=) */

loc_0001CA3F:
    eax = MEM32(edx * 8 + 0x39DF3C);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(edx * 8 + 0x39DF38);
    if (CMP_A(eax & eax, 0)) goto loc_0001CA65; /* ja: above (unsigned >) */

loc_0001CA51:
    if (CMP_B(eax & eax, 0)) goto loc_0001CA58; /* jb: below (unsigned <) */

loc_0001CA53:
    if (CMP_AE(ecx, 7)) goto loc_0001CA65; /* jae: above or equal (unsigned >=) */

loc_0001CA58:
    esi = MEM32(ecx * 4 + 0x39E778);
    MEM32(esp + 0x10) = esi;
    goto loc_0001CA6D;

loc_0001CA65:
    MEM32(esp + 0x10) = 1;

loc_0001CA6D:
    esi = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0001CB30; /* jle: less or equal (signed <=) */

loc_0001CA7B:
    esi = ecx;
    ebx = eax;
    /* nop */

loc_0001CA80:
    if (CMP_A(ebx & ebx, 0)) goto loc_0001CA9B; /* ja: above (unsigned >) */

loc_0001CA84:
    if (CMP_B(ebx & ebx, 0)) goto loc_0001CA8B; /* jb: below (unsigned <) */

loc_0001CA86:
    if (CMP_AE(esi, 7)) goto loc_0001CA9B; /* jae: above or equal (unsigned >=) */

loc_0001CA8B:
    edx = MEM32(esi * 4 + 0x3ED0F8);
    eax = MEM32(edx + ebp * 8);
    ecx = MEM32(edx + ebp * 8 + 4);
    goto loc_0001CA9F;

loc_0001CA9B:
    eax = esi;
    ecx = ebx;

loc_0001CA9F:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_0001CAAA:
    SET_LO8(eax, MEM8(esp + 0x26));
    SET_LO8(ecx, MEM8(esp + 0x27));
    SET_LO8(edx, MEM8(esp + 0x28));
    MEM8(esp + 0x20) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x29));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2A));
    MEM8(esp + 0x23) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2B));
    MEM8(esp + 0x24) = LO8(eax);
    esp = esp + 8;
    eax = edi;
    MEM8(esp + 0x1A) = 0x5F;
    MEM8(esp + 0x1D) = 0x5F;
    MEM8(esp + 0x1E) = LO8(ecx);
    MEM8(esp + 0x1F) = LO8(edx);
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0001CAF3:
    ecx = 0; /* xor self */

loc_0001CAF5:
    edi = MEM32(ecx * 8 + 0x39EBC0);
    if (CMP_NE(edi, eax)) goto loc_0001CB0B; /* jne: not equal / not zero */

loc_0001CB00:
    edi = MEM32(ecx * 8 + 0x39EBC4);
    if (CMP_EQ(edi, edx)) goto loc_0001CB13; /* je: equal / zero */

loc_0001CB0B:
    ecx++;
    if (CMP_L(ecx, 0x24)) goto loc_0001CAF5; /* jl: less (signed <) */

loc_0001CB11:
    goto loc_0001CB1F;

loc_0001CB13:
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0001CB1F; /* je: equal / zero */

loc_0001CB18:
    MEM8(ecx + 0x44D0CC) = 1;

loc_0001CB1F:
    eax = MEM32(esp + 0x10);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_0001CA80; /* jl: less (signed <) */

loc_0001CB2C:
    edx = MEM32(esp + 0x14);

loc_0001CB30:
    edx++;
    /* cmp edx, 0x49 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(edx, 0x49)) goto loc_0001CA10; /* jl: less (signed <) */

loc_0001CB3E:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    MEM8(0x44D0D0) = 1;
    MEM32(0x44D164) = eax;
    POP32(esp, ebx);

loc_0001CB50:
    SET_LO8(ecx, MEM8(eax + 0x44D0CC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CB60; /* je: equal / zero */

loc_0001CB5A:
    MEM32(0x44D164) = MEM32(0x44D164) + 1;

loc_0001CB60:
    SET_LO8(ecx, MEM8(eax + 0x44D0CD));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CB70; /* je: equal / zero */

loc_0001CB6A:
    MEM32(0x44D164) = MEM32(0x44D164) + 1;

loc_0001CB70:
    SET_LO8(ecx, MEM8(eax + 0x44D0CE));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CB80; /* je: equal / zero */

loc_0001CB7A:
    MEM32(0x44D164) = MEM32(0x44D164) + 1;

loc_0001CB80:
    SET_LO8(ecx, MEM8(eax + 0x44D0CF));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CB90; /* je: equal / zero */

loc_0001CB8A:
    MEM32(0x44D164) = MEM32(0x44D164) + 1;

loc_0001CB90:
    SET_LO8(ecx, MEM8(eax + 0x44D0D0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CBA0; /* je: equal / zero */

loc_0001CB9A:
    MEM32(0x44D164) = MEM32(0x44D164) + 1;

loc_0001CBA0:
    SET_LO8(ecx, MEM8(eax + 0x44D0D1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CBB0; /* je: equal / zero */

loc_0001CBAA:
    MEM32(0x44D164) = MEM32(0x44D164) + 1;

loc_0001CBB0:
    eax = eax + 6;
    if (CMP_L(eax, 0x24)) goto loc_0001CB50; /* jl: less (signed <) */

loc_0001CBB8:
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}
