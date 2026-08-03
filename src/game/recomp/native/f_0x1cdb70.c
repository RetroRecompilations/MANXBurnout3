#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CDB70
 * Original: 0x001CDB70 - 0x001CDBB5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDB70:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 4;
    edi = 0x8C;
    /* nop */

loc_001CDB80:
    SET_LO8(ecx, LO8(ebx));
    eax = esi;
    PUSH32(esp, 0); sub_001CCE50(); /* call 0x001CCE50 */

loc_001CDB89:
    esi = esi + 0x40;
    edi--;
    if ((edi != 0)) goto loc_001CDB80; /* jne: not equal / not zero */

loc_001CDB8F:
    esi = ebp + 0x2304;
    edi = 0x10;
    /* nop */

loc_001CDBA0:
    SET_LO8(ecx, LO8(ebx));
    eax = esi;
    PUSH32(esp, 0); sub_001CB250(); /* call 0x001CB250 */

loc_001CDBA9:
    esi = esi + 0x34;
    edi--;
    if ((edi != 0)) goto loc_001CDBA0; /* jne: not equal / not zero */

loc_001CDBAF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
