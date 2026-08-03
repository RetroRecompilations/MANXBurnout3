#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153660
 * Original: 0x00153660 - 0x0015379F (319 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153660:
    ecx = MEM32(0x73A194);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x73A190);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    eax = eax | ecx;
    if ((eax != 0)) goto loc_00153681; /* jne: not equal / not zero */

loc_00153679:
    SET_LO8(ecx, 4);
    MEM8(esp + 0xB) = LO8(ecx);
    goto loc_00153698;

loc_00153681:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0015368B:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esp + 0xB) = LO8(eax);
    SET_LO8(ecx, LO8(eax));

loc_00153698:
    eax = MEM32(ebx + 0x548);
    eax--;
    /* cmp eax, 4 - flags set for next jcc */
    MEM8(ebx + 0xD0) = 0;
    if (CMP_A(eax, 4)) goto loc_0015379A; /* ja: above (unsigned >) */

loc_001536AF:
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x1537A4); /* switch: 5 entries, 3 targets */
    if (_jt == 0x001536B7u) goto loc_001536B7;
    if (_jt == 0x00153710u) goto loc_00153710;
    if (_jt == 0x0015371Fu) goto loc_0015371F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001536B7:
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x4E8);
    /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(ebp & ebp, 0)) goto loc_00153706; /* jbe: below or equal (unsigned <=) */

loc_001536CA:
    edi = MEM32(ebx + 0x554);
    edi++;

loc_001536D1:
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    SET_LO8(eax, MEM8(ebx + 0x538));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153706; /* je: equal / zero */

loc_001536E3:
    eax = MEM32(ebx + 0x530);
    edx = esi + esi * 2;
    if (TEST_NZ(MEM8(eax + edx * 8 + 0x14), LO8(ecx))) goto loc_00153706; /* jne: not equal / not zero */

loc_001536F2:
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebx + 0x4E8);
    eax++;
    edi++;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(eax, edx)) goto loc_001536D1; /* jb: below (unsigned <) */

loc_00153706:
    /* cmp MEM32(esp + 0x14), ebp - flags set for next jcc */
    POP32(esp, ebp);
    goto loc_0015378D;

loc_00153710:
    esi = MEM32(ebx + 0x554);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0015371F:
    eax = MEM32(ebx + 0x4E8);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00153787; /* jbe: below or equal (unsigned <=) */

loc_0015372B:
    goto loc_00153730;

    /* nop */

loc_00153730:
    eax = MEM32(ebx + 0x4E8);
    if (CMP_EQ(MEM32(ebx + 0x4C0), eax)) goto loc_00153747; /* je: equal / zero */

loc_0015373E:
    PUSH32(esp, 0); sub_00153950(); /* call 0x00153950 */

loc_00153743:
    SET_LO8(ecx, MEM8(esp + 0xF));

loc_00153747:
    eax = MEM32(ebx + 0x4BC);
    esi = ZX16(MEM16(ebx + eax * 2 + 0xD2));
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebx + 0x4C0)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebx + 0x4C0))); }
    SET_LO8(eax, MEM8(ebx + 0x538));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebx + 0x4BC) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153787; /* je: equal / zero */

loc_0015376D:
    eax = MEM32(ebx + 0x530);
    edx = esi + esi * 2;
    if (TEST_NZ(MEM8(eax + edx * 8 + 0x14), LO8(ecx))) goto loc_00153787; /* jne: not equal / not zero */

loc_0015377C:
    eax = MEM32(ebx + 0x4E8);
    edi++;
    if (CMP_B(edi, eax)) goto loc_00153730; /* jb: below (unsigned <) */

loc_00153787:
    /* cmp edi, MEM32(ebx + 0x4E8) - flags set for next jcc */

loc_0015378D:
    if (CMP_NE(edi, MEM32(ebx + 0x4E8))) goto loc_00153799; /* jne: not equal / not zero */

loc_0015378F:
    MEM8(ebx + 0xD0) = 1;
    esi = esi | 0xFFFFFFFFu;

loc_00153799:
    POP32(esp, edi);

loc_0015379A:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

}
