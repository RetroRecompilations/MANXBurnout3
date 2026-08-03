#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00023870
 * Original: 0x00023870 - 0x00023999 (297 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023870:
    edx = MEM32(esp + 4);
    eax = edx + -4;
    if (CMP_A(eax, 0x1C)) goto loc_00023990; /* ja: above (unsigned >) */

loc_00023880:
    eax = ZX8(MEM8(eax + 0x239B4));
    { uint32_t _jt = MEM32(eax * 4 + 0x2399C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0002388Eu) goto loc_0002388E;
    if (_jt == 0x000238C5u) goto loc_000238C5;
    if (_jt == 0x000238F4u) goto loc_000238F4;
    if (_jt == 0x00023923u) goto loc_00023923;
    if (_jt == 0x00023957u) goto loc_00023957;
    if (_jt == 0x00023990u) goto loc_00023990;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002388E:
    eax = MEM32(ecx + 0x990);
    if (TEST_S(eax, eax)) goto loc_000238A4; /* jl: less (signed <) */

loc_00023898:
    if (CMP_NE(eax, MEM32(ecx + 0x984))) goto loc_00023935; /* jne: not equal / not zero */

loc_000238A4:
    eax = MEM32(ecx + 0x98C);
    if (TEST_NZ(eax, eax)) goto loc_00023935; /* jne: not equal / not zero */

loc_000238B2:
    MEM32(ecx + 0x98C) = 0xFFFFFFFFu;
    eax = MEM32(ecx + 0x998);
    esp += 12; return; /* ret 8 */

loc_000238C5:
    eax = MEM32(ecx + 0x9C0);
    if (TEST_S(eax, eax)) goto loc_000238D7; /* jl: less (signed <) */

loc_000238CF:
    if (CMP_NE(eax, MEM32(ecx + 0x984))) goto loc_00023935; /* jne: not equal / not zero */

loc_000238D7:
    eax = MEM32(ecx + 0x9BC);
    if (TEST_NZ(eax, eax)) goto loc_00023935; /* jne: not equal / not zero */

loc_000238E1:
    MEM32(ecx + 0x9BC) = 0xFFFFFFFFu;
    eax = MEM32(ecx + 0x9C8);
    esp += 12; return; /* ret 8 */

loc_000238F4:
    eax = MEM32(ecx + 0x9D0);
    if (TEST_S(eax, eax)) goto loc_00023906; /* jl: less (signed <) */

loc_000238FE:
    if (CMP_NE(eax, MEM32(ecx + 0x984))) goto loc_00023935; /* jne: not equal / not zero */

loc_00023906:
    eax = MEM32(ecx + 0x9CC);
    if (TEST_NZ(eax, eax)) goto loc_00023935; /* jne: not equal / not zero */

loc_00023910:
    MEM32(ecx + 0x9CC) = 0xFFFFFFFFu;
    eax = MEM32(ecx + 0x9D8);
    esp += 12; return; /* ret 8 */

loc_00023923:
    eax = MEM32(ecx + 0x9E0);
    if (TEST_S(eax, eax)) goto loc_0002393A; /* jl: less (signed <) */

loc_0002392D:
    if (CMP_EQ(eax, MEM32(ecx + 0x984))) goto loc_0002393A; /* je: equal / zero */

loc_00023935:
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

loc_0002393A:
    eax = MEM32(ecx + 0x9DC);
    if (TEST_NZ(eax, eax)) goto loc_00023935; /* jne: not equal / not zero */

loc_00023944:
    MEM32(ecx + 0x9DC) = 0xFFFFFFFFu;
    eax = MEM32(ecx + 0x9E8);
    esp += 12; return; /* ret 8 */

loc_00023957:
    edx = MEM32(ecx + 0x984);
    if (TEST_NZ(edx, edx)) goto loc_0002396F; /* jne: not equal / not zero */

loc_00023961:
    ecx = ecx + 0x924;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0002396C:
    esp += 12; return; /* ret 8 */

loc_0002396F:
    if (CMP_NE(edx, 2)) goto loc_00023982; /* jne: not equal / not zero */

loc_00023974:
    ecx = ecx + 0x9AC;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0002397F:
    esp += 12; return; /* ret 8 */

loc_00023982:
    ecx = ecx + 0x99C;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0002398D:
    esp += 12; return; /* ret 8 */

loc_00023990:
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00019110(); return; /* tail jmp 0x00019110 */

}
