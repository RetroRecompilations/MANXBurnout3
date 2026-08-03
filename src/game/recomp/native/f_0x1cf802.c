#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF802
 * Original: 0x001CF802 - 0x001CF843 (65 bytes, 22 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF802(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CF802:
    eax = MEM32(esp + 4);
    if (CMP_BE(eax, 1)) goto loc_001CF82A; /* jbe: below or equal (unsigned <=) */

loc_001CF80B:
    if (CMP_EQ(eax, 2)) goto loc_001CF823; /* je: equal / zero */

loc_001CF810:
    if (CMP_EQ(eax, 4)) goto loc_001CF823; /* je: equal / zero */

loc_001CF815:
    if (CMP_NE(eax, 8)) goto loc_001CF836; /* jne: not equal / not zero */

loc_001CF81A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41A7C0), _icall_esp); /* indirect call */
    }

loc_001CF821:
    goto loc_001CF840;

loc_001CF823:
    PUSH32(esp, 0); sub_001CF767(); /* call 0x001CF767 */

loc_001CF828:
    goto loc_001CF840;

loc_001CF82A:
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CF685(); /* call 0x001CF685 */

loc_001CF834:
    goto loc_001CF840;

loc_001CF836:
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001CF83D:
    eax = eax | 0xFFFFFFFFu;

loc_001CF840:
    esp += 12; return; /* ret 8 */

}
