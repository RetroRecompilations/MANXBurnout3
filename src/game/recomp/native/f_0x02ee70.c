#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002EE70
 * Original: 0x0002EE70 - 0x0002EF8C (284 bytes, 69 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EE70(void)
{

loc_0002EE70:
    eax = MEM32(esi + 0xF0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DE710(); /* call 0x001DE710 */

loc_0002EE7D:
    ecx = MEM32(esi + 0xF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DE710(); /* call 0x001DE710 */

loc_0002EE89:
    edx = MEM32(esi + 0xEC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DD3A0(); /* call 0x001DD3A0 */

loc_0002EE95:
    eax = MEM32(esi + 0xE8);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E0900(); /* call 0x001E0900 */

loc_0002EEA4:
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D94D0(); /* call 0x001D94D0 */

loc_0002EEB0:
    MEM32(esi + 0xF0) = edi;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xE8) = edi;
    MEM32(esi + 0xEC) = edi;
    MEM32(esi + 0xF8) = edi;
    edx = MEM32(esi + 0x190);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DE710(); /* call 0x001DE710 */

loc_0002EEDA:
    eax = MEM32(esi + 0x194);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DE710(); /* call 0x001DE710 */

loc_0002EEE6:
    ecx = MEM32(esi + 0x18C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DD3A0(); /* call 0x001DD3A0 */

loc_0002EEF2:
    edx = MEM32(esi + 0x188);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001E0900(); /* call 0x001E0900 */

loc_0002EEFF:
    eax = MEM32(esi + 0x188);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D94D0(); /* call 0x001D94D0 */

loc_0002EF0B:
    MEM32(esi + 0x190) = edi;
    MEM32(esi + 0x194) = edi;
    MEM32(esi + 0x188) = edi;
    MEM32(esi + 0x18C) = edi;
    MEM32(esi + 0x198) = edi;
    ecx = MEM32(esi + 0x370);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DE710(); /* call 0x001DE710 */

loc_0002EF35:
    edx = MEM32(esi + 0x374);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DE710(); /* call 0x001DE710 */

loc_0002EF41:
    eax = MEM32(esi + 0x36C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD3A0(); /* call 0x001DD3A0 */

loc_0002EF4D:
    ecx = MEM32(esi + 0x368);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001E0900(); /* call 0x001E0900 */

loc_0002EF5A:
    edx = MEM32(esi + 0x368);
    esp = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D94D0(); /* call 0x001D94D0 */

loc_0002EF69:
    esp = esp + 4;
    MEM32(esi + 0x370) = edi;
    MEM32(esi + 0x374) = edi;
    MEM32(esi + 0x368) = edi;
    MEM32(esi + 0x36C) = edi;
    MEM32(esi + 0x378) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
