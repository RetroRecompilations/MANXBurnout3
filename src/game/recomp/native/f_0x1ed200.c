#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001ED200
 * Original: 0x001ED200 - 0x001ED2EB (235 bytes, 66 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED200(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001ED200:
    PUSH32(esp, esi);
    PUSH32(esp, 0x1F1150);
    PUSH32(esp, 0x1F1100);
    PUSH32(esp, 0x501);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED217:
    PUSH32(esp, 0x1EDC20);
    PUSH32(esp, 0x1EDC50);
    PUSH32(esp, 0x502);
    PUSH32(esp, 0x30);
    esi = eax;
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED22F:
    PUSH32(esp, 0x1F0F40);
    PUSH32(esp, 0x1F0F20);
    PUSH32(esp, 0x503);
    PUSH32(esp, 4);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED247:
    PUSH32(esp, 0x1EDB00);
    PUSH32(esp, 0x1ED6C0);
    PUSH32(esp, 0x504);
    PUSH32(esp, 8);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED25F:
    esp = esp + 0x40;
    PUSH32(esp, 0x1F0ED0);
    PUSH32(esp, 0x1F0E50);
    PUSH32(esp, 0x505);
    PUSH32(esp, 4);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED27A:
    PUSH32(esp, 0x1EDB90);
    PUSH32(esp, 0x1EDB80);
    PUSH32(esp, 0x50A);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED292:
    PUSH32(esp, 0x1ED0A0);
    PUSH32(esp, 0x1ED0E0);
    PUSH32(esp, 0x507);
    PUSH32(esp, 0xC);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED2AA:
    PUSH32(esp, 0x1F0A90);
    PUSH32(esp, 0x1F0AA0);
    PUSH32(esp, 0x50B);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001ED2C2:
    esp = esp + 0x40;
    eax = eax | esi;
    POP32(esp, esi);
    if (((int32_t)eax >= 0)) goto loc_001ED2CD; /* jge: greater or equal (signed >=) */

loc_001ED2CA:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001ED2CD:
    PUSH32(esp, 0); sub_001F04A0(); /* call 0x001F04A0 */

loc_001ED2D2:
    if (TEST_Z(eax, eax)) goto loc_001ED2CA; /* je: equal / zero */

loc_001ED2D6:
    PUSH32(esp, 0); sub_001ED770(); /* call 0x001ED770 */

loc_001ED2DB:
    if (TEST_Z(eax, eax)) goto loc_001ED2CA; /* je: equal / zero */

loc_001ED2DF:
    PUSH32(esp, 0); sub_001F0800(); /* call 0x001F0800 */

loc_001ED2E4:
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}
