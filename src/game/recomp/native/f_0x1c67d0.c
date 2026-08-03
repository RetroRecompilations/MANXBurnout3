#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001C67D0
 * Original: 0x001C67D0 - 0x001C684F (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C67D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C67D0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    PUSH32(esp, 0); sub_001C17A0(); /* call 0x001C17A0 */

loc_001C67DD:
    ebx = 0x40;
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_001C72F0(); /* call 0x001C72F0 */

loc_001C67E9:
    edx = MEM32(edi + 0x2C);
    eax = MEM32(esp + 0x14);
    esi = esi << 4;
    esi = esi + edx;
    if (TEST_Z(eax, eax)) goto loc_001C6835; /* je: equal / zero */

loc_001C67F9:
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_001C6800:
    if (TEST_NZ(MEM8(esi), 1)) goto loc_001C6827; /* jne: not equal / not zero */

loc_001C6805:
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_001C6827; /* je: equal / zero */

loc_001C680C:
    if (getenv("B3_VERTEX_TRACE")) {
        static unsigned list_trace_count;
        if (list_trace_count++ < 32)
            fprintf(stderr,
                    "[UI-LIST] slot=%08X flags=%08X head=%08X "
                    "remaining=%u\n",
                    esi, MEM32(esi), MEM32(esi + 8),
                    MEM32(esp + 0x14));
    }
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0); sub_001C6320(); /* call 0x001C6320 */

loc_001C6815:
    ebx = eax;
    eax = ebp;
    PUSH32(esp, 0); sub_001C63A0(); /* call 0x001C63A0 */

loc_001C681E:
    ebp = eax;
    eax = esi;
    PUSH32(esp, 0); sub_001C6500(); /* call 0x001C6500 */

loc_001C6827:
    eax = MEM32(esp + 0x14);
    esi = esi + 0x10;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001C6800; /* jne: not equal / not zero */

loc_001C6835:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C6843; /* jbe: below or equal (unsigned <=) */

loc_001C683E:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C6843:
    PUSH32(esp, 0); sub_001C6F30(); /* call 0x001C6F30 */

loc_001C6848:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
