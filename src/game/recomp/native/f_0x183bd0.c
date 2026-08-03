#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00183BD0
 * Original: 0x00183BD0 - 0x00183EA6 (726 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00183BD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x28);
    SET_LO8(edx, MEM8(ecx));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    SET_LO8(eax, MEM8(edi));
    if (CMP_GE(LO8(eax), LO8(edx))) goto loc_00183BF3; /* jge: greater or equal (signed >=) */

loc_00183BED:
    eax = edi;
    edi = ecx;
    goto loc_00183BF5;

loc_00183BF3:
    eax = ecx;

loc_00183BF5:
    SET_LO8(edx, MEM8(eax));
    ecx = SX8(LO8(edx));
    if (CMP_A(ecx, 7)) goto loc_00183E91; /* ja: above (unsigned >) */

loc_00183C03:
    { uint32_t _jt = MEM32(ecx * 4 + 0x183EA8); /* switch: 16 entries, 11 targets */
    if (_jt == 0x00183C0Au) goto loc_00183C0A;
    if (_jt == 0x00183C1Bu) goto loc_00183C1B;
    if (_jt == 0x00183C37u) goto loc_00183C37;
    if (_jt == 0x00183C63u) goto loc_00183C63;
    if (_jt == 0x00183C74u) goto loc_00183C74;
    if (_jt == 0x00183C90u) goto loc_00183C90;
    if (_jt == 0x00183CB8u) goto loc_00183CB8;
    if (_jt == 0x00183CCBu) goto loc_00183CCB;
    if (_jt == 0x00183CF4u) goto loc_00183CF4;
    if (_jt == 0x00183E26u) goto loc_00183E26;
    if (_jt == 0x00183E91u) goto loc_00183E91;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00183C0A:
    ecx = MEM32(eax + 0xC);
    SET_LO8(ebx, MEM8(ecx + 0x1550));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00183E9D; /* je: equal / zero */

loc_00183C1B:
    if (CMP_NE(LO8(edx), 1)) goto loc_00183C37; /* jne: not equal / not zero */

loc_00183C20:
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 0x1550);
    SET_LO8(edx, MEM8(ecx + 0x1AA0));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00183E9D; /* je: equal / zero */

loc_00183C37:
    ebx = MEM32(eax + 0xC);
    eax = MEM32(ebx + 0x13F4);
    SET_LO8(ecx, MEM8(eax + 0x18FB));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00183E9D; /* jne: not equal / not zero */

loc_00183C4E:
    SET_LO8(edx, MEM8(edi));
    ecx = SX8(LO8(edx));
    if (CMP_A(ecx, 7)) goto loc_00183E91; /* ja: above (unsigned >) */

loc_00183C5C:
    { uint32_t _jt = MEM32(ecx * 4 + 0x183EC8); /* switch: 8 entries, 7 targets */
    if (_jt == 0x00183C63u) goto loc_00183C63;
    if (_jt == 0x00183C74u) goto loc_00183C74;
    if (_jt == 0x00183C90u) goto loc_00183C90;
    if (_jt == 0x00183CB8u) goto loc_00183CB8;
    if (_jt == 0x00183CCBu) goto loc_00183CCB;
    if (_jt == 0x00183CF4u) goto loc_00183CF4;
    if (_jt == 0x00183E91u) goto loc_00183E91;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00183C63:
    eax = MEM32(edi + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x1550));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00183E9D; /* je: equal / zero */

loc_00183C74:
    if (CMP_NE(LO8(edx), 1)) goto loc_00183C90; /* jne: not equal / not zero */

loc_00183C79:
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx + 0x1550);
    SET_LO8(eax, MEM8(edx + 0x1AA0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00183E9D; /* je: equal / zero */

loc_00183C90:
    edi = MEM32(edi + 0xC);
    eax = MEM32(edi + 0x13F4);
    SET_LO8(ecx, MEM8(eax + 0x18FB));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00183E9D; /* jne: not equal / not zero */

loc_00183CA7:
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00183EF0(); /* call 0x00183EF0 */

loc_00183CB3:
    goto loc_00183E91;

loc_00183CB8:
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00184590(); /* call 0x00184590 */

loc_00183CC6:
    goto loc_00183E91;

loc_00183CCB:
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x220);
    edx = ZX8(MEM8(ecx + 2));
    ecx = MEM32(0x73767C);
    edi = ZX8(MEM8(edx + ecx));
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_00184AD0(); /* call 0x00184AD0 */

loc_00183CEF:
    goto loc_00183E91;

loc_00183CF4:
    ecx = MEM32(edi + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x1920);
    /* test ecx, ecx - flags set for next jcc */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    ecx = ebx;
    MEM8(esp + 0x1B) = (TEST_Z(ecx, ecx)) ? 1 : 0; /* sete */
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00183D20:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(esp + 0x18);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00183D3A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(ebx + 0xCC0);
    edx = MEM32(ebx + 0xCC4);
    SET_LO8(eax, MEM8(esp + 0x17));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x49C); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1870); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183D7F; /* jne: not equal / not zero */

loc_00183D77:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */

loc_00183D7F:
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = 0x60DFD0;
    ecx = esp + 0x54;
    PUSH32(esp, 0); sub_00188600(); /* call 0x00188600 */

loc_00183DAC:
    edi = MEM32(edi + 0xC);
    SET_LO8(eax, MEM8(edi + 0x2BA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183DDE; /* jne: not equal / not zero */

loc_00183DB9:
    edx = MEM32(edi + 0x204);
    xmm0.f[0] = MEMF(edi + 0x194); /* movss */
    edx = edx + 0x30;
    PUSH32(esp, 0);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_00150480(); /* call 0x00150480 */

loc_00183DD6:
    esi = MEM32(ebp + 0xC);
    goto loc_00183E91;

loc_00183DDE:
    if (CMP_NE(LO8(eax), 2)) goto loc_00183DFD; /* jne: not equal / not zero */

loc_00183DE2:
    xmm0.f[0] = MEMF(edi + 0x194); /* movss */
    PUSH32(esp, edi);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014DDF0(); /* call 0x0014DDF0 */

loc_00183DF5:
    esi = MEM32(ebp + 0xC);
    goto loc_00183E91;

loc_00183DFD:
    ecx = MEM32(edi + 0x194);
    edx = MEM32(edi + 0x204);
    PUSH32(esp, ecx);
    edx = edx + 0x30;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x2B8);
    PUSH32(esp, 0x40F270);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_0014E780(); /* call 0x0014E780 */

loc_00183E21:
    esi = MEM32(ebp + 0xC);
    goto loc_00183E91;

loc_00183E26:
    eax = (uint32_t)(int32_t)SMEM8(edi);
    eax = eax - 6;
    if ((eax == 0)) goto loc_00183E91; /* je: equal / zero */

loc_00183E2E:
    eax--;
    if ((eax != 0)) goto loc_00183E91; /* jne: not equal / not zero */

loc_00183E31:
    edi = MEM32(edi + 0xC);
    SET_LO8(eax, MEM8(edi + 0x2BA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183E5A; /* jne: not equal / not zero */

loc_00183E3E:
    edx = MEM32(edi + 0x204);
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    edx = edx + 0x30;
    PUSH32(esp, 0);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_00150480(); /* call 0x00150480 */

loc_00183E58:
    goto loc_00183E91;

loc_00183E5A:
    if (CMP_NE(LO8(eax), 2)) goto loc_00183E70; /* jne: not equal / not zero */

loc_00183E5E:
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    PUSH32(esp, edi);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014DDF0(); /* call 0x0014DDF0 */

loc_00183E6E:
    goto loc_00183E91;

loc_00183E70:
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x204);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x2B8);
    PUSH32(esp, eax);
    ecx = ecx + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40F270);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_0014E780(); /* call 0x0014E780 */

loc_00183E91:
    ecx = esi;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014E960(); /* call 0x0014E960 */

loc_00183E9D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
