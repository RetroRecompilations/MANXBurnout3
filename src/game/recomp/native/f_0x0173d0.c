#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000173D0
 * Original: 0x000173D0 - 0x00017433 (99 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000173D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000173D0:
    eax = MEM32(0x45B9BC);
    eax = eax + 0xFFFFFFFCu;
    if (CMP_A(eax, 6)) goto loc_0001741B; /* ja: above (unsigned >) */

loc_000173DD:
    eax = ZX8(MEM8(eax + 0x17440));
    { uint32_t _jt = MEM32(eax * 4 + 0x17434); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000173EBu) goto loc_000173EB;
    if (_jt == 0x00017403u) goto loc_00017403;
    if (_jt == 0x0001741Bu) goto loc_0001741B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000173EB:
    eax = 0x20;
    ecx = 0x2E;
    MEM16(0x3F7B00) = LO16(eax);
    MEM16(0x3F7B04) = LO16(ecx);
    esp += 4; return; /* ret */

loc_00017403:
    eax = 0x2E;
    ecx = 0x2C;
    MEM16(0x3F7B00) = LO16(eax);
    MEM16(0x3F7B04) = LO16(ecx);
    esp += 4; return; /* ret */

loc_0001741B:
    eax = 0x2C;
    ecx = 0x2E;
    MEM16(0x3F7B00) = LO16(eax);
    MEM16(0x3F7B04) = LO16(ecx);
    esp += 4; return; /* ret */

}
