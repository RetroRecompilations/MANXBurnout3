#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001CBC0
 * Original: 0x0001CBC0 - 0x0001CE0E (590 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001CBC0:
    PUSH32(esp, esi);
    esi = eax;
    /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0001CC0F; /* je: equal / zero */

loc_0001CBCB:
    if (CMP_GE(esi, 0x43)) goto loc_0001CC0F; /* jge: greater or equal (signed >=) */

loc_0001CBD0:
    eax = MEM32(esi * 4 + 0x3A01D8);
    if (CMP_EQ(eax, 2)) goto loc_0001CBEC; /* je: equal / zero */

loc_0001CBDC:
    if (CMP_EQ(eax, 1)) goto loc_0001CBEC; /* je: equal / zero */

loc_0001CBE1:
    eax = MEM32(esi * 4 + 0x3A02E8);
    ecx = eax;
    goto loc_0001CC11;

loc_0001CBEC:
    eax = MEM32(esi * 4 + 0x3A02E8);
    ecx = MEM32(eax * 8 + 0x3A0624);
    edx = MEM32(eax * 8 + 0x3A0620);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001CC08:
    esp = esp + 8;
    ecx = eax;
    goto loc_0001CC11;

loc_0001CC0F:
    ecx = 0; /* xor self */

loc_0001CC11:
    SET_LO8(eax, 0); /* xor self */
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0001CC35; /* je: equal / zero */

loc_0001CC18:
    if (CMP_GE(esi, 0x43)) goto loc_0001CC35; /* jge: greater or equal (signed >=) */

loc_0001CC1D:
    esi = MEM32(esi * 4 + 0x3A01D8);
    if (CMP_A(esi, 0xE)) goto loc_0001CE18; /* ja: above (unsigned >) */

loc_0001CC2D:
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(esi * 4 + 0x1CE1C); /* switch: 20 entries, 20 targets */
    if (_jt == 0x0001CC39u) goto loc_0001CC39;
    if (_jt == 0x0001CC3Fu) goto loc_0001CC3F;
    if (_jt == 0x0001CC4Du) goto loc_0001CC4D;
    if (_jt == 0x0001CC61u) goto loc_0001CC61;
    if (_jt == 0x0001CC6Du) goto loc_0001CC6D;
    if (_jt == 0x0001CC79u) goto loc_0001CC79;
    if (_jt == 0x0001CC85u) goto loc_0001CC85;
    if (_jt == 0x0001CC91u) goto loc_0001CC91;
    if (_jt == 0x0001CC9Du) goto loc_0001CC9D;
    if (_jt == 0x0001CCC6u) goto loc_0001CCC6;
    if (_jt == 0x0001CCD5u) goto loc_0001CCD5;
    if (_jt == 0x0001CCEFu) goto loc_0001CCEF;
    if (_jt == 0x0001CD13u) goto loc_0001CD13;
    if (_jt == 0x0001CD37u) goto loc_0001CD37;
    if (_jt == 0x0001CD57u) goto loc_0001CD57;
    if (_jt == 0x0001CD6Du) goto loc_0001CD6D;
    if (_jt == 0x0001CD7Cu) goto loc_0001CD7C;
    if (_jt == 0x0001CD99u) goto loc_0001CD99;
    if (_jt == 0x0001CDC4u) goto loc_0001CDC4;
    if (_jt == 0x0001CDF4u) goto loc_0001CDF4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001CC35:
    esi = 0; /* xor self */
    goto loc_0001CC2D;

loc_0001CC39:
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CC3F:
    if (CMP_NE(MEM8(ecx + edi + 0x386), 3)) goto loc_0001CE17; /* jne: not equal / not zero */

loc_0001CC4D:
    SET_LO8(edx, MEM8(ecx + 0x44D01F));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001CE17; /* je: equal / zero */

loc_0001CC5B:
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CC61:
    if (CMP_A(ecx, 4)) goto loc_0001CC9D; /* ja: above (unsigned >) */

loc_0001CC66:
    { uint32_t _jt = MEM32(ecx * 4 + 0x1CE58); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0001CC6Du) goto loc_0001CC6D;
    if (_jt == 0x0001CC79u) goto loc_0001CC79;
    if (_jt == 0x0001CC85u) goto loc_0001CC85;
    if (_jt == 0x0001CC91u) goto loc_0001CC91;
    if (_jt == 0x0001CC9Du) goto loc_0001CC9D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001CC6D:
    ecx = 0xB;
    edx = 0x17;
    goto loc_0001CCA4;

loc_0001CC79:
    ecx = 0x18;
    edx = 0x25;
    goto loc_0001CCA4;

loc_0001CC85:
    ecx = 0x26;
    edx = 0x36;
    goto loc_0001CCA4;

loc_0001CC91:
    ecx = 0x37;
    edx = 0x48;
    goto loc_0001CCA4;

loc_0001CC9D:
    ecx = 0; /* xor self */
    edx = 0xA;

loc_0001CCA4:
    /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_G(ecx, edx)) goto loc_0001CE17; /* jg: greater (signed >) */

loc_0001CCAE:
    SET_LO8(ebx, 3);

loc_0001CCB0:
    if (CMP_NE(MEM8(edi + ecx + 0x386), LO8(ebx))) goto loc_0001CE15; /* jne: not equal / not zero */

loc_0001CCBD:
    ecx++;
    if (CMP_LE(ecx, edx)) goto loc_0001CCB0; /* jle: less or equal (signed <=) */

loc_0001CCC2:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CCC6:
    if (CMP_B(MEM32(edi + 0x40), ecx)) goto loc_0001CE17; /* jb: below (unsigned <) */

loc_0001CCCF:
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CCD5:
    edx = MEM32(edi + 0x200);
    edx = edx + MEM32(0x44D14C);
    if (CMP_B(edx, ecx)) goto loc_0001CE17; /* jb: below (unsigned <) */

loc_0001CCE9:
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CCEF:
    edx = MEM32(0x44D1F8);
    esi = MEM32(0x44D220);
    edi = MEM32(0x44D1D0);
    esi = esi + edx;
    esi = esi + edi;
    if (CMP_L(esi, ecx)) goto loc_0001CE17; /* jl: less (signed <) */

loc_0001CD0D:
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CD13:
    SET_LO8(eax, 1);
    ecx = 0; /* xor self */
    SET_LO8(ebx, 3);
    /* nop */

loc_0001CD20:
    if (CMP_NE(MEM8(edi + ecx + 0x386), LO8(ebx))) goto loc_0001CE15; /* jne: not equal / not zero */

loc_0001CD2D:
    ecx++;
    if (CMP_L(ecx, 0x49)) goto loc_0001CD20; /* jl: less (signed <) */

loc_0001CD33:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CD37:
    SET_LO8(eax, 1);
    ecx = 0; /* xor self */
    SET_LO8(ebx, 3);
    /* nop */

loc_0001CD40:
    if (CMP_NE(MEM8(edi + ecx + 0x3CF), LO8(ebx))) goto loc_0001CE15; /* jne: not equal / not zero */

loc_0001CD4D:
    ecx++;
    if (CMP_L(ecx, 0x64)) goto loc_0001CD40; /* jl: less (signed <) */

loc_0001CD53:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CD57:
    if (CMP_L(MEM32(0x44D1BC), 0xAD)) goto loc_0001CE17; /* jl: less (signed <) */

loc_0001CD67:
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CD6D:
    if (CMP_B(MEM32(edi + 0x44), ecx)) goto loc_0001CE17; /* jb: below (unsigned <) */

loc_0001CD76:
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CD7C:
    SET_LO8(eax, 1);
    ecx = 0; /* xor self */

loc_0001CD80:
    SET_LO8(edx, MEM8(edi + ecx + 0x433));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001CE15; /* je: equal / zero */

loc_0001CD8F:
    ecx++;
    if (CMP_L(ecx, 0x14)) goto loc_0001CD80; /* jl: less (signed <) */

loc_0001CD95:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CD99:
    ecx = MEM32(0x44D158);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_GE(ecx, 0x14)) goto loc_0001CC39; /* jge: greater or equal (signed >=) */

loc_0001CDAA:
    ecx = 0; /* xor self */
    /* nop */

loc_0001CDB0:
    SET_LO8(edx, MEM8(ecx + 0x44D00B));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001CE17; /* je: equal / zero */

loc_0001CDBA:
    ecx++;
    if (CMP_L(ecx, 0x14)) goto loc_0001CDB0; /* jl: less (signed <) */

loc_0001CDC0:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CDC4:
    ecx = MEM32(0x44D168);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_GE(ecx, 0xA)) goto loc_0001CC39; /* jge: greater or equal (signed >=) */

loc_0001CDD5:
    ecx = 0; /* xor self */
    goto loc_0001CDE0;

    /* nop */

loc_0001CDE0:
    SET_LO8(edx, MEM8(ecx + 0x44D0FA));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001CE17; /* je: equal / zero */

loc_0001CDEA:
    ecx++;
    if (CMP_L(ecx, 0xA)) goto loc_0001CDE0; /* jl: less (signed <) */

loc_0001CDF0:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CDF4:
    SET_LO8(eax, 1);
    ecx = 0; /* xor self */
    goto loc_0001CE00;

    /* nop */

loc_0001CE00:
    SET_LO8(edx, MEM8(edi + ecx + 0x447));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001CE15; /* je: equal / zero */

loc_0001CE0B:
    ecx++;
    if (CMP_L(ecx, 0xA)) goto loc_0001CE00; /* jl: less (signed <) */

loc_0001CE11:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001CE15:
    SET_LO8(eax, 0); /* xor al, al */

loc_0001CE17:
    POP32(esp, ebx);

loc_0001CE18:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
