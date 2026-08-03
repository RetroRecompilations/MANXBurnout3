#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019CD10
 * Original: 0x0019CD10 - 0x0019CECB (443 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CD10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019CD10:
    ecx = MEM32(0x739B60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0019CD20:
    eax--;
    if ((eax != 0)) goto loc_0019CEC7; /* jne: not equal / not zero */

loc_0019CD27:
    eax = MEM32(ebp + 0x38);
    /* cmp eax, 3 - flags set for next jcc */
    ecx = MEM32(0x7397B4);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x54);
    if (CMP_A(eax, 3)) goto loc_0019CEC6; /* ja: above (unsigned >) */

loc_0019CD3E:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x19CECC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0019CD47u) goto loc_0019CD47;
    if (_jt == 0x0019CD93u) goto loc_0019CD93;
    if (_jt == 0x0019CDF1u) goto loc_0019CDF1;
    if (_jt == 0x0019CE41u) goto loc_0019CE41;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019CD47:
    edx = MEM32(ebp + 0x20);
    if (CMP_GE(edx, MEM32(ebp + 0x28))) goto loc_0019CD58; /* jge: greater or equal (signed >=) */

loc_0019CD4F:
    MEM32(ebp + 0x38) = 1;
    goto loc_0019CD67;

loc_0019CD58:
    eax = MEM32(ebp + 0x24);
    if (CMP_GE(eax, MEM32(ebp + 0x2C))) goto loc_0019CD67; /* jge: greater or equal (signed >=) */

loc_0019CD60:
    MEM32(ebp + 0x38) = 2;

loc_0019CD67:
    SET_LO8(eax, MEM8(ebp + 0x45));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019CEC4; /* je: equal / zero */

loc_0019CD72:
    SET_LO8(eax, MEM8(ebp + 0x46));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019CEC4; /* je: equal / zero */

loc_0019CD7D:
    SET_LO8(eax, MEM8(ebp + 0x44));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019CEC4; /* jne: not equal / not zero */

loc_0019CD88:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM8(ebp + 0x44) = 1;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0019CD93:
    eax = MEM32(ebp + 0x3C);
    if (TEST_NZ(eax, eax)) goto loc_0019CDA1; /* jne: not equal / not zero */

loc_0019CD9A:
    MEM32(ebp + 0x3C) = 1;

loc_0019CDA1:
    esi = ebp;
    PUSH32(esp, 0); sub_0019CC60(); /* call 0x0019CC60 */

loc_0019CDA8:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019CEC4; /* je: equal / zero */

loc_0019CDB0:
    SET_LO8(eax, MEM8(ebp + 0x44));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019CDE3; /* jne: not equal / not zero */

loc_0019CDB7:
    esi = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x50);
    esi++;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ebp + 0x28);
    ecx = esi;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + 0x20) = esi;
    MEM32(ebp + 0x50) = edx;
    if (CMP_L(ecx, eax)) goto loc_0019CDD5; /* jl: less (signed <) */

loc_0019CDD1:
    MEM8(ebp + 0x45) = 1;

loc_0019CDD5:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ebp + 0x38) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0019CDE3:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ebp + 0x38) = 2;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0019CDF1:
    eax = MEM32(ebp + 0x40);
    if (TEST_NZ(eax, eax)) goto loc_0019CDFF; /* jne: not equal / not zero */

loc_0019CDF8:
    MEM32(ebp + 0x40) = 1;

loc_0019CDFF:
    ebx = ebp;
    PUSH32(esp, 0); sub_0019CBB0(); /* call 0x0019CBB0 */

loc_0019CE06:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019CEC4; /* je: equal / zero */

loc_0019CE0E:
    SET_LO8(eax, MEM8(ebp + 0x44));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019CE33; /* jne: not equal / not zero */

loc_0019CE15:
    esi = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x54);
    esi++;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ebp + 0x2C);
    ecx = esi;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + 0x24) = esi;
    MEM32(ebp + 0x54) = edx;
    if (CMP_L(ecx, eax)) goto loc_0019CE33; /* jl: less (signed <) */

loc_0019CE2F:
    MEM8(ebp + 0x46) = 1;

loc_0019CE33:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ebp + 0x38) = 3;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0019CE41:
    SET_LO8(eax, MEM8(ebp + 0x44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019CEBF; /* je: equal / zero */

loc_0019CE48:
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x24);
    ecx++;
    eax++;
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(ebp + 0x50);
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ebp + 0x54);
    eax++;
    MEM32(ebp + 0x20) = ecx;
    esi = 0x739B60;
    MEM32(ebp + 0x50) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ebp + 0x30);
    eax++;
    MEM32(ebp + 0x54) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 8))); }
    eax = MEM32(ebp + 0x34);
    eax++;
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 0xC))); }
    edi = MEM32(ebp + ebx * 4 + 0x154);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_0019DAD0(); /* call 0x0019DAD0 */

loc_0019CE91:
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ebp + ecx * 4 + 0x17C);
    PUSH32(esp, 0); sub_0019DB90(); /* call 0x0019DB90 */

loc_0019CEA1:
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    MEM32(ebp + ebx * 4 + 0x154) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ebp + edx * 4 + 0x17C) = eax;
    POP32(esp, edi);
    MEM32(ebp + 0x38) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0019CEBF:
    eax = 0; /* xor self */
    MEM32(ebp + 0x38) = eax;

loc_0019CEC4:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0019CEC6:
    POP32(esp, edi);

loc_0019CEC7:
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
