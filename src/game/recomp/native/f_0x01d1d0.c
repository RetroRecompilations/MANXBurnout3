#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001D1D0
 * Original: 0x0001D1D0 - 0x0001D275 (165 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D1D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001D1D0:
    PUSH32(esp, esi);
    esi = MEM32(edi * 4 + 0x39FBB0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0; /* xor self */
    if (CMP_A(esi, 0xE)) goto loc_0001D268; /* ja: above (unsigned >) */

loc_0001D1E5:
    { uint32_t _jt = MEM32(esi * 4 + 0x1D278); /* switch: 15 entries, 15 targets */
    if (_jt == 0x0001D1ECu) goto loc_0001D1EC;
    if (_jt == 0x0001D1F4u) goto loc_0001D1F4;
    if (_jt == 0x0001D1FCu) goto loc_0001D1FC;
    if (_jt == 0x0001D204u) goto loc_0001D204;
    if (_jt == 0x0001D20Cu) goto loc_0001D20C;
    if (_jt == 0x0001D214u) goto loc_0001D214;
    if (_jt == 0x0001D21Cu) goto loc_0001D21C;
    if (_jt == 0x0001D224u) goto loc_0001D224;
    if (_jt == 0x0001D22Cu) goto loc_0001D22C;
    if (_jt == 0x0001D234u) goto loc_0001D234;
    if (_jt == 0x0001D23Cu) goto loc_0001D23C;
    if (_jt == 0x0001D244u) goto loc_0001D244;
    if (_jt == 0x0001D24Cu) goto loc_0001D24C;
    if (_jt == 0x0001D254u) goto loc_0001D254;
    if (_jt == 0x0001D25Cu) goto loc_0001D25C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001D1EC:
    ecx = MEM32(edx + 0x358);
    goto loc_0001D268;

loc_0001D1F4:
    ecx = MEM32(edx + 0x344);
    goto loc_0001D268;

loc_0001D1FC:
    ecx = MEM32(edx + 0x350);
    goto loc_0001D268;

loc_0001D204:
    ecx = MEM32(edx + 0x348);
    goto loc_0001D268;

loc_0001D20C:
    ecx = MEM32(edx + 0x34C);
    goto loc_0001D268;

loc_0001D214:
    ecx = MEM32(edx + 0x354);
    goto loc_0001D268;

loc_0001D21C:
    ecx = MEM32(edx + 0x368);
    goto loc_0001D268;

loc_0001D224:
    ecx = MEM32(edx + 0x36C);
    goto loc_0001D268;

loc_0001D22C:
    ecx = MEM32(edx + 0x370);
    goto loc_0001D268;

loc_0001D234:
    ecx = MEM32(edx + 0x374);
    goto loc_0001D268;

loc_0001D23C:
    ecx = MEM32(edx + 0x35C);
    goto loc_0001D268;

loc_0001D244:
    ecx = MEM32(edx + 0x378);
    goto loc_0001D268;

loc_0001D24C:
    ecx = MEM32(edx + 0x37C);
    goto loc_0001D268;

loc_0001D254:
    ecx = MEM32(edx + 0x360);
    goto loc_0001D268;

loc_0001D25C:
    ecx = MEM32(edx + 0x200);
    ecx = ecx + MEM32(0x44D14C);

loc_0001D268:
    /* cmp ecx, MEM32(edi * 4 + 0x39FC00) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_L(ecx, MEM32(edi * 4 + 0x39FC00))) goto loc_0001D274; /* jl: less (signed <) */

loc_0001D272:
    SET_LO8(eax, 1);

loc_0001D274:
    esp += 4; return; /* ret */

}
