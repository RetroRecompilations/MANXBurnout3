#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4CF0
 * Original: 0x001B4CF0 - 0x001B4ECB (475 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4CF0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = eax - edi;
    esi = ecx;
    if ((eax == 0)) goto loc_001B4D21; /* je: equal / zero */

loc_001B4CFA:
    eax--;
    if ((eax == 0)) goto loc_001B4D1D; /* je: equal / zero */

loc_001B4CFD:
    eax = MEM32(esi + 0xBFC);

loc_001B4D03:
    MEM32(eax + 0x134) = 0xD;

loc_001B4D0D:
    POP32(esp, edi);
    MEM32(esi) = 0xD;
    eax = 0xD;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4D1D:
    ecx = 0; /* xor self */
    goto loc_001B4D26;

loc_001B4D21:
    ecx = 1;

loc_001B4D26:
    eax = MEM32(esi + 0xBFC);
    edx = MEM32(eax + 0x130);
    if (CMP_A(edx, 0xB)) goto loc_001B4D03; /* ja: above (unsigned >) */

loc_001B4D37:
    { uint32_t _jt = MEM32(edx * 4 + 0x1B4ECC); /* switch: 12 entries, 7 targets */
    if (_jt == 0x001B4D03u) goto loc_001B4D03;
    if (_jt == 0x001B4D3Eu) goto loc_001B4D3E;
    if (_jt == 0x001B4D8Cu) goto loc_001B4D8C;
    if (_jt == 0x001B4D99u) goto loc_001B4D99;
    if (_jt == 0x001B4DC8u) goto loc_001B4DC8;
    if (_jt == 0x001B4E40u) goto loc_001B4E40;
    if (_jt == 0x001B4E83u) goto loc_001B4E83;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B4D3E:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4D43:
    if (CMP_NE(eax, 0x3E4)) goto loc_001B4D6D; /* jne: not equal / not zero */

loc_001B4D4A:
    ecx = MEM32(esi + 0xBFC);
    MEM32(ecx + 0x130) = 4;
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x130);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4D6D:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x130) = edi;
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x130);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4D8C:
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001B4F00(); /* call 0x001B4F00 */

loc_001B4D92:
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4D99:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4D9E:
    if (CMP_NE(eax, 0x3E4)) goto loc_001B4D6D; /* jne: not equal / not zero */

loc_001B4DA5:
    ecx = MEM32(esi + 0xBFC);
    MEM32(ecx + 0x130) = 5;
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x130);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4DC8:
    PUSH32(esp, 0x3AADC4);
    PUSH32(esp, 0); sub_001CFDD0(); /* call 0x001CFDD0 */

loc_001B4DD2:
    edx = MEM32(esi + 0xBFC);
    ecx = eax;
    MEM32(edx + 0x130) = edi;
    if (CMP_A(MEM32(esi + 0xC0C), edi)) goto loc_001B4E0F; /* ja: above (unsigned >) */

loc_001B4DE8:
    eax = MEM32(esi + 0xC08);
    if (CMP_A(eax, 0x7FFFFFFF)) goto loc_001B4E0F; /* ja: above (unsigned >) */

loc_001B4DF5:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x150) = eax;
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x150);
    goto loc_001B4E24;

loc_001B4E0F:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x150) = 0x7FFFFFFF;
    eax = 0x7FFFFFFF;

loc_001B4E24:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    MEM32(esi + 0xC10) = eax;
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x130);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4E40:
    MEM32(eax + 0x130) = edi;
    eax = MEM32(esi + 0xBFC);
    ecx = MEM32(eax + 0x134);
    if (CMP_EQ(ecx, 9)) goto loc_001B4D0D; /* je: equal / zero */

loc_001B4E5B:
    if (CMP_EQ(ecx, 0xC)) goto loc_001B4D0D; /* je: equal / zero */

loc_001B4E64:
    ecx = MEM32(eax + 0x14C);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x130);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4E83:
    MEM32(eax + 0x130) = 1;
    eax = esi;
    PUSH32(esp, 0); sub_001B4FC0(); /* call 0x001B4FC0 */

loc_001B4E94:
    if (TEST_NZ(eax, eax)) goto loc_001B4EB8; /* jne: not equal / not zero */

loc_001B4E98:
    ecx = MEM32(esi + 0xBFC);
    MEM32(ecx + 0x134) = 0xD;
    POP32(esp, edi);
    MEM32(esi) = 0xD;
    eax = 0xD;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B4EB8:
    edx = MEM32(esi + 0xBFC);
    eax = MEM32(edx + 0x130);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
