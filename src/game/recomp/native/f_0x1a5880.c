#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5880
 * Original: 0x001A5880 - 0x001A5910 (144 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5880:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A58CD; /* je: equal / zero */

loc_001A588A:
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A590B; /* jle: less or equal (signed <=) */

loc_001A5896:
    goto loc_001A58A0;

    /* nop */
    /* nop */

loc_001A58A0:
    SET_LO8(eax, MEM8(0x752D80));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B1770); /* movss */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A58B8; /* jne: not equal / not zero */

loc_001A58B2:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */

loc_001A58B8:
    PUSH32(esp, 0); sub_001A5C70(); /* call 0x001A5C70 */

loc_001A58BD:
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx + 8);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_001A58A0; /* jl: less (signed <) */

loc_001A58C8:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001A58CD:
    SET_LO8(eax, MEM8(esi + 0x114));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A58DF; /* jne: not equal / not zero */

loc_001A58D7:
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A590B; /* jne: not equal / not zero */

loc_001A58DF:
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001A590A; /* jle: less or equal (signed <=) */

loc_001A58EC:
    ebx = MEM32(esp + 0x18);

loc_001A58F0:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001A5910(); /* call 0x001A5910 */

loc_001A58FF:
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx + 8);
    edi++;
    if (CMP_L(edi, eax)) goto loc_001A58F0; /* jl: less (signed <) */

loc_001A590A:
    POP32(esp, edi);

loc_001A590B:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
