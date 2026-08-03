#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00164FB0
 * Original: 0x00164FB0 - 0x001650C3 (275 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164FB0:
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x1049));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001650BE; /* je: equal / zero */

loc_00164FC2:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(edi + 0x1048) = 0;
    PUSH32(esp, 0); sub_001643B0(); /* call 0x001643B0 */

loc_00164FD0:
    eax = edi;
    PUSH32(esp, 0); sub_001645A0(); /* call 0x001645A0 */

loc_00164FD7:
    eax = MEM32(edi + 0x1030);
    esi = 0; /* xor self */
    /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_LE(eax, esi)) goto loc_001650AE; /* jle: less or equal (signed <=) */

loc_00164FEB:
    PUSH32(esp, ebp);
    ebp = edi + 0x2F8;

loc_00164FF2:
    SET_LO8(eax, MEM8(ebp + 0x51));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(ebp + 0x28);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00165093; /* jne: not equal / not zero */

loc_00165000:
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_00165007:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00165059; /* je: equal / zero */

loc_0016500B:
    if (CMP_EQ(MEM32(ebp + -8), esi)) goto loc_0016501D; /* je: equal / zero */

loc_00165010:
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); sub_001BF590(); /* call 0x001BF590 */

loc_0016501B:
    goto loc_0016502E;

loc_0016501D:
    edx = MEM32(ebp);
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp);
    MEM32(ecx + 4) = edx;

loc_0016502E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(ebp) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM8(ebp + 0x51) = 1;
    MEMF(ebp + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x50) = 0;
    goto loc_00165093;

loc_00165059:
    esi = ebp + -24;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00164200(); /* call 0x00164200 */

loc_00165064:
    MEMF(ebp + 0x48) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x20E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00165081; /* jne: not equal / not zero */

loc_00165073:
    eax = MEM32(ebx + 0x204);
    eax = eax + 0x30;
    PUSH32(esp, 0); sub_00163DF0(); /* call 0x00163DF0 */

loc_00165081:
    xmm0.f[0] = MEMF(ebp + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */

loc_00165093:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x1030);
    eax++;
    ebp = ebp + 0x70;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_00164FF2; /* jl: less (signed <) */

loc_001650AD:
    POP32(esp, ebp);

loc_001650AE:
    ebx = edi;
    PUSH32(esp, 0); sub_001BF0B0(); /* call 0x001BF0B0 */

loc_001650B5:
    edx = edi;
    PUSH32(esp, 0); sub_001649E0(); /* call 0x001649E0 */

loc_001650BC:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001650BE:
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
