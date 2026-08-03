#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00101FA0
 * Original: 0x00101FA0 - 0x00102094 (244 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101FA0:
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(eax) = 0xFFFFFFFFu;
    edi = MEM32(esi + 8);
    ecx = 0x572980;
    PUSH32(esp, 0); sub_001B8650(); /* call 0x001B8650 */

loc_00101FBA:
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + 0x28);
    ebx = eax;
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00101FDD; /* jle: less or equal (signed <=) */

loc_00101FC8:
    edx = edx + 8;
    goto loc_00101FD0;

    /* nop */

loc_00101FD0:
    if (CMP_EQ(MEM32(edx), 0)) goto loc_00102035; /* je: equal / zero */

loc_00101FD5:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_00101FD0; /* jl: less (signed <) */

loc_00101FDD:
    ebp = ebp | 0xFFFFFFFFu;

loc_00101FE0:
    eax = MEM32(0x4A1D84);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00101FED; /* jne: not equal / not zero */

loc_00101FEB:
    eax = 0; /* xor self */

loc_00101FED:
    eax = eax - MEM32(0x5A3760);
    ecx = 0; /* xor self */
    /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO16(eax), 0xFFFF)) ? 1 : 0); /* sete */
    ecx--;
    eax = eax & ecx;
    ecx = ZX16(LO16(eax));
    if (TEST_NZ(MEM8(esi + 0x6F8), 1)) goto loc_0010208F; /* jne: not equal / not zero */

loc_0010200F:
    SET_LO8(eax, MEM8(esi + 0x4D79));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00102039; /* jle: less or equal (signed <=) */

loc_00102019:
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esi + 0x4D79) = LO8(eax);
    POP32(esp, ebp);
    MEM32(esi + 0x6EC) = ecx;
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00102035:
    ebp = eax;
    goto loc_00101FE0;

loc_00102039:
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x6EA);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    /* cmp ebx, 5 - flags set for next jcc */
    eax = ebx;
    if (CMP_EQ(ebx, 5)) eax = ebp; /* cmove */
    if (CMP_NE(edx, eax)) goto loc_00102065; /* jne: not equal / not zero */

loc_00102051:
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi + 0x6EC) = ecx;
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00102065:
    eax = eax - edx;
    eax = eax + ecx;
    if (CMP_LE(eax, ecx)) goto loc_0010206F; /* jle: less or equal (signed <=) */

loc_0010206D:
    eax = eax - edi;

loc_0010206F:
    if (TEST_S(eax, eax)) goto loc_0010208F; /* jl: less (signed <) */

loc_00102073:
    if (CMP_LE(eax, MEM32(esi + 0x6EC))) goto loc_0010208F; /* jle: less or equal (signed <=) */

loc_0010207B:
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi + 0x6EC) = eax;
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010208F:
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);

}
