#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DAE60
 * Original: 0x001DAE60 - 0x001DB090 (560 bytes, 153 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAE60:
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E1700);
    PUSH32(esp, 0x1E16D0);
    PUSH32(esp, 0x40F);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3C0830);
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAE84:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DBC70);
    PUSH32(esp, 0x1DBC80);
    PUSH32(esp, 0x401);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3C0830);
    edi = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAEA3:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E3990);
    PUSH32(esp, 0x1E3980);
    PUSH32(esp, 0x40D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C0830);
    ebx = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAEC2:
    esp = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E04A0);
    PUSH32(esp, 0x1E0860);
    PUSH32(esp, 0x402);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3C0830);
    ebp = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAEE4:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DCFE0);
    PUSH32(esp, 0x1DCF80);
    PUSH32(esp, 0x403);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3C0830);
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAF05:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DEA60);
    PUSH32(esp, 0x1DEA10);
    PUSH32(esp, 0x404);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3C0830);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAF26:
    esp = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D91F0);
    PUSH32(esp, 0x1D9230);
    PUSH32(esp, 0x405);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3C0830);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAF4A:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DF030);
    PUSH32(esp, 0x1DFAD0);
    PUSH32(esp, 0x406);
    PUSH32(esp, 0x220);
    PUSH32(esp, 0x3C0830);
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAF6E:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DE930);
    PUSH32(esp, 0x1DE970);
    PUSH32(esp, 0x407);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x3C0830);
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAF8F:
    esp = esp + 0x48;
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x1E3760);
    PUSH32(esp, 0x1E3830);
    PUSH32(esp, 0x408);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3C0830);
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAFB3:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E1440);
    PUSH32(esp, 0x1E1420);
    PUSH32(esp, 0x409);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x3C0830);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAFD4:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E2300);
    PUSH32(esp, 0x1E22B0);
    PUSH32(esp, 0x412);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3C0830);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DAFF5:
    esp = esp + 0x48;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001E8760(); /* call 0x001E8760 */

loc_001DB001:
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    esi = eax;
    esi = esi | MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    esi = esi | edx;
    edx = MEM32(esp + 0x20);
    esi = esi | ecx;
    ecx = MEM32(esp + 0x24);
    esi = esi | eax;
    eax = MEM32(esp + 0x28);
    esi = esi | edx;
    edx = MEM32(esp + 0x2C);
    esi = esi | ecx;
    ecx = MEM32(esp + 0x30);
    esi = esi | eax;
    PUSH32(esp, 0);
    esi = esi | edx;
    PUSH32(esp, 0x1E21D0);
    esi = esi | ecx;
    PUSH32(esp, 0x1E2210);
    PUSH32(esp, 0x40A);
    esi = esi | ebp;
    PUSH32(esp, 0x74);
    esi = esi | ebx;
    PUSH32(esp, 0x3C0830);
    esi = esi | edi;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DB05A:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E1F60);
    PUSH32(esp, 0x1E1C40);
    PUSH32(esp, 0x40B);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3C0830);
    edi = eax;
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001DB079:
    esp = esp + 0x30;
    eax = eax | edi;
    POP32(esp, edi);
    eax = eax | esi;
    POP32(esp, esi);
    eax = 0;
    POP32(esp, ebp);
    SET_LO8(eax, (((int32_t)eax >= 0)) ? 1 : 0); /* setge */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}
