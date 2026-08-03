#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DB200
 * Original: 0x001DB200 - 0x001DB2C0 (192 bytes, 56 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB200(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB200:
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_001DB222; /* je: equal / zero */

loc_001DB20B:
    MEM32(0x7593E4) = 0x1DAC00;
    MEM32(0x7593E8) = 0x1DAC10;
    PUSH32(esp, esi);
    goto loc_001DB238;

loc_001DB222:
    MEM32(0x7593E4) = 0x1E0A10;
    MEM32(0x7593E8) = 0x1E0B40;
    PUSH32(esp, 1);

loc_001DB238:
    PUSH32(esp, 0); sub_001E0970(); /* call 0x001E0970 */

loc_001DB23D:
    eax = MEM32(esp + 0x14);
    MEM32(0x7593F4) = eax;
    eax = MEM32(0x7593F0);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001DB2BC; /* jne: not equal / not zero */

loc_001DB252:
    PUSH32(esp, 0); sub_001E3A90(); /* call 0x001E3A90 */

loc_001DB257:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001DB2BC; /* je: equal / zero */

loc_001DB25D:
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001E1070(); /* call 0x001E1070 */

loc_001DB267:
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_001DB2B7; /* je: equal / zero */

loc_001DB270:
    PUSH32(esp, 0); sub_001DEEF0(); /* call 0x001DEEF0 */

loc_001DB275:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001DB2B2; /* je: equal / zero */

loc_001DB27B:
    PUSH32(esp, 0); sub_001E1770(); /* call 0x001E1770 */

loc_001DB280:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001DB2AD; /* je: equal / zero */

loc_001DB286:
    PUSH32(esp, 0); sub_001DAE60(); /* call 0x001DAE60 */

loc_001DB28B:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001DB2A8; /* je: equal / zero */

loc_001DB291:
    PUSH32(esp, 0); sub_001DD760(); /* call 0x001DD760 */

loc_001DB296:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001DB2A8; /* je: equal / zero */

loc_001DB29C:
    MEM32(0x7593F0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DB2A8:
    PUSH32(esp, 0); sub_001E17F0(); /* call 0x001E17F0 */

loc_001DB2AD:
    PUSH32(esp, 0); sub_00020CD0(); /* call 0x00020CD0 */

loc_001DB2B2:
    PUSH32(esp, 0); sub_001E1000(); /* call 0x001E1000 */

loc_001DB2B7:
    PUSH32(esp, 0); sub_00020CD0(); /* call 0x00020CD0 */

loc_001DB2BC:
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
