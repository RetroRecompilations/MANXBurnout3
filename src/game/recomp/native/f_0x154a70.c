#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00154A70
 * Original: 0x00154A70 - 0x0015501E (1454 bytes, 359 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154A70:
    /* cmp MEM32(0x73A1C0), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(ebx, 1);
    MEM8(esp + 0xC) = 0;
    if (CMP_G(MEM32(0x73A1C0), 1)) goto loc_00155012; /* jg: greater (signed >) */

loc_00154A8A:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00154A94:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00155012; /* jne: not equal / not zero */

loc_00154A9C:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00154AA6:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154AC6; /* jne: not equal / not zero */

loc_00154AAA:
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154AC6; /* jne: not equal / not zero */

loc_00154AB3:
    SET_LO8(eax, MEM8(ebp + 0x62C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154AC6; /* jne: not equal / not zero */

loc_00154ABD:
    eax = MEM32(0x463AF4);
    if (TEST_Z(eax, eax)) goto loc_00154AE5; /* je: equal / zero */

loc_00154AC6:
    SET_LO8(eax, MEM8(ebp + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154AD9; /* je: equal / zero */

loc_00154AD0:
    MEM8(ebp + 0x564) = MEM8(ebp + 0x564) | 2;
    goto loc_00154AE0;

loc_00154AD9:
    MEM32(ebp + 0xCC) = MEM32(ebp + 0xCC) | 8;

loc_00154AE0:
    MEM8(esp + 0xC) = 1;

loc_00154AE5:
    ecx = MEM32(0x4CFB24);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00154B1D; /* je: equal / zero */

loc_00154AF1:
    eax = MEM32(ecx + 8);
    /* cmp eax, 0x9CC11F7Fu - flags set for next jcc */
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(eax, 0x9CC11F7Fu)) goto loc_00154B0A; /* jne: not equal / not zero */

loc_00154AFE:
    if (CMP_EQ(ecx, 0xBA38E82Bu)) goto loc_00154B9D; /* je: equal / zero */

loc_00154B0A:
    if (CMP_NE(eax, 0x878337FFu)) goto loc_00154B1D; /* jne: not equal / not zero */

loc_00154B11:
    if (CMP_EQ(ecx, 0xBA38E7C8u)) goto loc_00154B9D; /* je: equal / zero */

loc_00154B1D:
    ecx = MEM32(0x73A1C0);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00154B4B; /* jle: less or equal (signed <=) */

loc_00154B27:
    eax = 0x73BACA;
    /* nop */

loc_00154B30:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00154B3D; /* je: equal / zero */

loc_00154B34:
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00154B3D; /* je: equal / zero */

loc_00154B39:
    SET_LO8(ebx, 1);
    goto loc_00154B3F;

loc_00154B3D:
    SET_LO8(ebx, 0); /* xor self */

loc_00154B3F:
    eax = eax + 0x27E0;
    ecx--;
    if ((ecx != 0)) goto loc_00154B30; /* jne: not equal / not zero */

loc_00154B47:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00154BBC; /* je: equal / zero */

loc_00154B4B:
    edi = ebp;
    PUSH32(esp, 0); sub_00154370(); /* call 0x00154370 */

loc_00154B52:
    SET_LO8(eax, MEM8(ebp + 0x618));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_00154B6D; /* js: sign (negative) */

loc_00154B5C:
    esi = ebp;
    PUSH32(esp, 0); sub_00153390(); /* call 0x00153390 */

loc_00154B63:
    MEM32(ebp + 0x618) = MEM32(ebp + 0x618) | 0x80;

loc_00154B6D:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_00154B73:
    eax = MEM32(ebp + 0x618);
    eax = eax & 0xFFFFFFFCu;
    MEM32(ebp + 0x5F4) = 9;
    MEM32(ebp + 0x618) = eax;
    MEM32(ebp + 0x604) = 0xFFFFFFFFu;

loc_00154B96:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00154B9D:
    SET_LO8(eax, MEM8(ebp + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154BB0; /* je: equal / zero */

loc_00154BA7:
    MEM8(ebp + 0x564) = MEM8(ebp + 0x564) | 2;
    goto loc_00154BB7;

loc_00154BB0:
    MEM32(ebp + 0xCC) = MEM32(ebp + 0xCC) | 8;

loc_00154BB7:
    MEM8(esp + 0x14) = 1;

loc_00154BBC:
    eax = MEM32(ebp + 0x5F4);
    if (CMP_A(eax, 0xC)) goto loc_00154B96; /* ja: above (unsigned >) */

loc_00154BC7:
    { uint32_t _jt = MEM32(eax * 4 + 0x155020); /* switch: 13 entries, 13 targets */
    if (_jt == 0x00154B96u) goto loc_00154B96;
    if (_jt == 0x00154BCEu) goto loc_00154BCE;
    if (_jt == 0x00154C03u) goto loc_00154C03;
    if (_jt == 0x00154CADu) goto loc_00154CAD;
    if (_jt == 0x00154CBEu) goto loc_00154CBE;
    if (_jt == 0x00154CF8u) goto loc_00154CF8;
    if (_jt == 0x00154DCAu) goto loc_00154DCA;
    if (_jt == 0x00154DF7u) goto loc_00154DF7;
    if (_jt == 0x00154E90u) goto loc_00154E90;
    if (_jt == 0x00154EDAu) goto loc_00154EDA;
    if (_jt == 0x00154F58u) goto loc_00154F58;
    if (_jt == 0x00154F71u) goto loc_00154F71;
    if (_jt == 0x00154FDFu) goto loc_00154FDF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00154BCE:
    ecx = ebp;
    PUSH32(esp, 0); sub_00153890(); /* call 0x00153890 */

loc_00154BD5:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154BE7; /* jne: not equal / not zero */

loc_00154BD9:
    SET_LO8(eax, MEM8(ebp + 0x62F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154C7B; /* je: equal / zero */

loc_00154BE7:
    SET_LO8(eax, MEM8(ebp + 0x62F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154C03; /* je: equal / zero */

loc_00154BF1:
    ecx = ebp;
    PUSH32(esp, 0); sub_00153890(); /* call 0x00153890 */

loc_00154BF8:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154C03; /* jne: not equal / not zero */

loc_00154BFC:
    eax = ebp;
    PUSH32(esp, 0); sub_001532D0(); /* call 0x001532D0 */

loc_00154C03:
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154B96; /* jne: not equal / not zero */

loc_00154C0B:
    xmm0.f[0] = MEMF(ebp + 0x610); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x60EA1C); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    MEMF(ebp + 0x610) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] > MEMF(0x3B16E0))) goto loc_00154B96; /* ja: above (unsigned >) */

loc_00154C30:
    if (CMP_EQ(MEM32(ebp + 0x5F4), 0xB)) goto loc_00154C7B; /* je: equal / zero */

loc_00154C39:
    eax = ebp;
    PUSH32(esp, 0); sub_00153580(); /* call 0x00153580 */

loc_00154C40:
    if (CMP_GE(eax, 0x4E20)) goto loc_00154C6A; /* jge: greater or equal (signed >=) */

loc_00154C47:
    eax = 0x4A1BE0;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00154C51:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x610) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00154C6A:
    esi = ebp;
    PUSH32(esp, 0); sub_00153390(); /* call 0x00153390 */

loc_00154C71:
    MEM32(ebp + 0x618) = MEM32(ebp + 0x618) | 0x80;

loc_00154C7B:
    ecx = MEM32(ebp + 0x618);
    SET_LO8(eax, MEM8(esp + 0x14));
    ecx = ecx & 0xFFFFFFFEu;
    /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM32(ebp + 0x618) = ecx;
    if (CMP_NE(LO8(eax), 1)) goto loc_00154CA3; /* jne: not equal / not zero */

loc_00154C92:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x5F4) = 9;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00154CA3:
    MEM32(ebp + 0x5F4) = 3;

loc_00154CAD:
    esi = ebp;
    PUSH32(esp, 0); sub_00154270(); /* call 0x00154270 */

loc_00154CB4:
    MEM32(ebp + 0x5F4) = 4;

loc_00154CBE:
    esi = 0x40B318;
    PUSH32(esp, 0); sub_001CE140(); /* call 0x001CE140 */

loc_00154CC8:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x5E0) = eax;
    if (TEST_Z(eax, eax)) goto loc_00154B96; /* je: equal / zero */

loc_00154CD6:
    eax = ebp + 0x60C;
    edx = ebp + 0x608;
    ecx = ebp + 0x56C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001554A0(); /* call 0x001554A0 */

loc_00154CEE:
    MEM32(ebp + 0x5F4) = 5;

loc_00154CF8:
    edi = MEM32(ebp + 0x5E0);
    eax = edi;
    PUSH32(esp, 0); sub_001CED70(); /* call 0x001CED70 */

loc_00154D05:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154D1B; /* jne: not equal / not zero */

loc_00154D09:
    ecx = 0x40E0D4;
    PUSH32(esp, 0); sub_001CC110(); /* call 0x001CC110 */

loc_00154D13:
    if (CMP_A(eax & eax, 0)) goto loc_00154B96; /* ja: above (unsigned >) */

loc_00154D1B:
    eax = ebp + 0x56C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CE500(); /* call 0x001CE500 */

loc_00154D27:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154B96; /* je: equal / zero */

loc_00154D2F:
    ecx = MEM32(ebp + 0x5E0);
    edx = MEM32(ecx + 0x24C);
    ecx = MEM32(ebp + 0x60C);
    /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(edx + 4);
    MEM32(ebp + 0x604) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00154D54; /* jne: not equal / not zero */

loc_00154D4E:
    MEM32(ebp + 0x60C) = eax;

loc_00154D54:
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x615);
    esi = MEM32(ebp + 0x608);
    ecx = MEM32(ebp + 0x60C);
    ecx = ecx - esi;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x26;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ebx = MEM32(ebp + 0x600);
    edi = SX8(LO8(edx));
    MEM8(ebp + 0x615) = LO8(edx);
    eax = ZX8(MEM8(edi + ebp + 0x5AC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx + esi;
    /* cmp ebx, eax - flags set for next jcc */
    MEM32(ebp + 0x600) = eax;
    if (CMP_NE(ebx, eax)) goto loc_00154DC0; /* jne: not equal / not zero */

loc_00154D99:
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x26;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = SX8(LO8(edx));
    MEM8(ebp + 0x615) = LO8(edx);
    eax = ZX8(MEM8(eax + ebp + 0x5AC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + esi;
    MEM32(ebp + 0x600) = edx;

loc_00154DC0:
    MEM32(ebp + 0x5F4) = 6;

loc_00154DCA:
    ecx = MEM32(ebp + 0x600);
    eax = MEM32(ebp + 0x5E0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = ebp + 0x56C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001CE6A0(); /* call 0x001CE6A0 */

loc_00154DE5:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154B96; /* je: equal / zero */

loc_00154DED:
    MEM32(ebp + 0x5F4) = 7;

loc_00154DF7:
    eax = ebp;
    PUSH32(esp, 0); sub_00154350(); /* call 0x00154350 */

loc_00154DFE:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154B96; /* jne: not equal / not zero */

loc_00154E06:
    edi = ebp;
    PUSH32(esp, 0); sub_00154370(); /* call 0x00154370 */

loc_00154E0D:
    esi = ebp;
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_00154E14:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_00154E19:
    esi = MEM32(ebp + 0x5E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_001CEDB0(); /* call 0x001CEDB0 */

loc_00154E32:
    esi = MEM32(ebp + 0x5E0);
    PUSH32(esp, 0); sub_001CE9F0(); /* call 0x001CE9F0 */

loc_00154E3D:
    SET_LO8(eax, MEM8(0x40B314));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(ebp + 0x620); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154E66; /* je: equal / zero */

loc_00154E4E:
    eax = MEM32(ebp + 0x5E0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC960); /* mulss */
    MEMF(eax + 0x21C) = xmm0.f[0]; /* movss */
    goto loc_00154E7C;

loc_00154E66:
    ecx = MEM32(ebp + 0x5E0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC958); /* mulss */
    MEMF(ecx + 0x21C) = xmm0.f[0]; /* movss */

loc_00154E7C:
    edx = MEM32(ebp + 0x5E0);
    MEM8(edx + 0x2E) = 0xE;
    MEM32(ebp + 0x5F4) = 8;

loc_00154E90:
    ecx = MEM32(ebp + 0x5E0);
    eax = ecx;
    PUSH32(esp, 0); sub_001CED90(); /* call 0x001CED90 */

loc_00154E9D:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154B96; /* je: equal / zero */

loc_00154EA5:
    eax = ecx;
    PUSH32(esp, 0); sub_001CE920(); /* call 0x001CE920 */

loc_00154EAC:
    edi = MEM32(ebp + 0x5E0);
    esi = 0x40B318;
    MEM32(ebp + 0x604) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001CE180(); /* call 0x001CE180 */

loc_00154EC6:
    MEM32(ebp + 0x5E0) = 0;
    MEM32(ebp + 0x5F4) = 9;

loc_00154EDA:
    esi = ebp;
    PUSH32(esp, 0); sub_00154270(); /* call 0x00154270 */

loc_00154EE1:
    eax = 0x4A1BE0;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00154EEB:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = ebp;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x610) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001538D0(); /* call 0x001538D0 */

loc_00154F04:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154F4E; /* jne: not equal / not zero */

loc_00154F08:
    SET_LO8(eax, MEM8(ebp + 0x618));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_00154F2C; /* js: sign (negative) */

loc_00154F12:
    eax = ebp;
    PUSH32(esp, 0); sub_00153A20(); /* call 0x00153A20 */

loc_00154F19:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154F26; /* jne: not equal / not zero */

loc_00154F1D:
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_00154F22:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154F2C; /* jne: not equal / not zero */

loc_00154F26:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_00154F2C:
    SET_LO8(eax, MEM8(ebp + 0xD0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154F47; /* je: equal / zero */

loc_00154F36:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x5F4) = 0xC;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00154F47:
    eax = ebp;
    PUSH32(esp, 0); sub_00153230(); /* call 0x00153230 */

loc_00154F4E:
    MEM32(ebp + 0x5F4) = 0;

loc_00154F58:
    eax = ebp;
    PUSH32(esp, 0); sub_001538D0(); /* call 0x001538D0 */

loc_00154F5F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154B96; /* je: equal / zero */

loc_00154F67:
    MEM32(ebp + 0x5F4) = 1;

loc_00154F71:
    eax = ebp;
    PUSH32(esp, 0); sub_00154350(); /* call 0x00154350 */

loc_00154F78:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154B96; /* jne: not equal / not zero */

loc_00154F80:
    edi = ebp;
    PUSH32(esp, 0); sub_00154370(); /* call 0x00154370 */

loc_00154F87:
    esi = ebp;
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_00154F8E:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_00154F93:
    SET_LO8(eax, MEM8(ebp + 0x618));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ebp;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00154FB1; /* jns: not sign (positive) */

loc_00154F9F:
    PUSH32(esp, 0); sub_00153500(); /* call 0x00153500 */

loc_00154FA4:
    eax = MEM32(ebp + 0x618);
    eax = eax & 0xFFFFFF7Fu;
    goto loc_00154FBF;

loc_00154FB1:
    PUSH32(esp, 0); sub_001532D0(); /* call 0x001532D0 */

loc_00154FB6:
    eax = MEM32(ebp + 0x618);
    eax = eax & 0xFFFFFFBFu;

loc_00154FBF:
    MEM32(ebp + 0x618) = eax;
    POP32(esp, edi);
    eax = eax | 1;
    POP32(esp, esi);
    MEM32(ebp + 0x618) = eax;
    MEM32(ebp + 0x5F4) = 2;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00154FDF:
    eax = ebp;
    PUSH32(esp, 0); sub_00154350(); /* call 0x00154350 */

loc_00154FE6:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154B96; /* jne: not equal / not zero */

loc_00154FEE:
    edi = ebp;
    PUSH32(esp, 0); sub_00154370(); /* call 0x00154370 */

loc_00154FF5:
    esi = ebp;
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_00154FFC:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_00155001:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x5F4) = 0xB;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00155012:
    ebx = ebp;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00155019:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
