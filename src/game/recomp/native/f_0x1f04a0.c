#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F04A0
 * Original: 0x001F04A0 - 0x001F06C5 (549 bytes, 158 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F04A0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001F04A0:
    PUSH32(esp, esi);
    PUSH32(esp, 0x1EF7F0);
    PUSH32(esp, 0x1EF730);
    PUSH32(esp, 0x509);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_001DAC40(); /* call 0x001DAC40 */

loc_001F04B7:
    PUSH32(esp, 0x1F02A0);
    PUSH32(esp, 0x1EF8A0);
    PUSH32(esp, 0x1F0250);
    PUSH32(esp, 0x509);
    PUSH32(esp, 0x1C);
    esi = eax;
    PUSH32(esp, 0); sub_001D94A0(); /* call 0x001D94A0 */

loc_001F04D4:
    PUSH32(esp, 0x2087B0);
    PUSH32(esp, 0x1EFB10);
    PUSH32(esp, 0x1EFAE0);
    PUSH32(esp, 0x509);
    PUSH32(esp, 8);
    MEM32(0x41B2FC) = eax;
    esi = esi | eax;
    PUSH32(esp, 0); sub_001ED920(); /* call 0x001ED920 */

loc_001F04F6:
    PUSH32(esp, 0x1F0470);
    PUSH32(esp, 0x2087B0);
    PUSH32(esp, 0x1EFB30);
    PUSH32(esp, 0x509);
    PUSH32(esp, 8);
    MEM32(0x41B300) = eax;
    esi = esi | eax;
    PUSH32(esp, 0); sub_001ED950(); /* call 0x001ED950 */

loc_001F0518:
    esp = esp + 0x4C;
    PUSH32(esp, 0x1F02E0);
    PUSH32(esp, 0x1EFDB0);
    PUSH32(esp, 0x1EFD90);
    PUSH32(esp, 0x509);
    PUSH32(esp, 8);
    MEM32(0x41B304) = eax;
    esi = esi | eax;
    PUSH32(esp, 0); sub_001F0DE0(); /* call 0x001F0DE0 */

loc_001F053D:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50E);
    PUSH32(esp, 0);
    MEM32(0x41B308) = eax;
    esi = esi | eax;
    PUSH32(esp, 0); sub_001F0F50(); /* call 0x001F0F50 */

loc_001F0556:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50E);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001EDBA0(); /* call 0x001EDBA0 */

loc_001F056A:
    PUSH32(esp, 0x1F0060);
    PUSH32(esp, 0x1F0010);
    PUSH32(esp, 0x1F0030);
    PUSH32(esp, 0x50E);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001F0F80(); /* call 0x001F0F80 */

loc_001F0585:
    esp = esp + 0x4C;
    PUSH32(esp, 0x1F0180);
    PUSH32(esp, 0x1F0120);
    PUSH32(esp, 0x1F0150);
    PUSH32(esp, 0x50E);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001EDBD0(); /* call 0x001EDBD0 */

loc_001F05A3:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x510);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001F0F50(); /* call 0x001F0F50 */

loc_001F05B7:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x510);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001EDBA0(); /* call 0x001EDBA0 */

loc_001F05CB:
    esi = esi | eax;
    PUSH32(esp, 0x1F00C0);
    PUSH32(esp, 0x1F0080);
    PUSH32(esp, 0x1F00A0);
    PUSH32(esp, 0x510);
    PUSH32(esp, 0); sub_001F0F80(); /* call 0x001F0F80 */

loc_001F05E6:
    esp = esp + 0x48;
    PUSH32(esp, 0x1F0110);
    PUSH32(esp, 0x1F00D0);
    PUSH32(esp, 0x1F00F0);
    PUSH32(esp, 0x510);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001EDBD0(); /* call 0x001EDBD0 */

loc_001F0604:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001ED920(); /* call 0x001ED920 */

loc_001F0615:
    PUSH32(esp, 0x1ED3B0);
    PUSH32(esp, 0x1F09B0);
    PUSH32(esp, 0x1ED370);
    PUSH32(esp, 0x1F);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001ED980(); /* call 0x001ED980 */

loc_001F062D:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001ED1A0(); /* call 0x001ED1A0 */

loc_001F063E:
    esp = esp + 0x48;
    PUSH32(esp, 0x1ED3B0);
    PUSH32(esp, 0x1F09B0);
    PUSH32(esp, 0x1F0970);
    PUSH32(esp, 0x1F);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001ED1D0(); /* call 0x001ED1D0 */

loc_001F0659:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001EDBA0(); /* call 0x001EDBA0 */

loc_001F066A:
    PUSH32(esp, 0x1F0A70);
    PUSH32(esp, 0x1F0A30);
    PUSH32(esp, 0x1F09F0);
    PUSH32(esp, 0x1F);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001EDBD0(); /* call 0x001EDBD0 */

loc_001F0682:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001F1190(); /* call 0x001F1190 */

loc_001F0693:
    esp = esp + 0x48;
    PUSH32(esp, 0x1F10E0);
    PUSH32(esp, 0x1F10A0);
    PUSH32(esp, 0x1F1060);
    PUSH32(esp, 0x1F);
    esi = esi | eax;
    PUSH32(esp, 0); sub_001F11C0(); /* call 0x001F11C0 */

loc_001F06AE:
    esp = esp + 0x10;
    eax = eax | esi;
    POP32(esp, esi);
    if (((int32_t)eax >= 0)) goto loc_001F06B9; /* jge: greater or equal (signed >=) */

loc_001F06B6:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001F06B9:
    PUSH32(esp, 0); sub_001E8760(); /* call 0x001E8760 */

loc_001F06BE:
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}
