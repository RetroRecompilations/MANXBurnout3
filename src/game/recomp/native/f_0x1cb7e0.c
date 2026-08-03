#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB7E0
 * Original: 0x001CB7E0 - 0x001CB8D4 (244 bytes, 63 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB7E0:
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x194));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CB8CF; /* je: equal / zero */

loc_001CB7F4:
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F9400(); /* call 0x001F9400 */

loc_001CB801:
    edi = eax;
    esp = esp + 4;
    if (CMP_EQ(edi, 9)) goto loc_001CB8CE; /* je: equal / zero */

loc_001CB80F:
    if (CMP_EQ(edi, 2)) goto loc_001CB8CE; /* je: equal / zero */

loc_001CB818:
    if (TEST_Z(edi, edi)) goto loc_001CB8CE; /* je: equal / zero */

loc_001CB820:
    eax = MEM32(esi + 0x170);
    eax--;
    if (CMP_A(eax, 7)) goto loc_001CB8C9; /* ja: above (unsigned >) */

loc_001CB830:
    { uint32_t _jt = MEM32(eax * 4 + 0x1CB8D4); /* switch: 8 entries, 5 targets */
    if (_jt == 0x001CB837u) goto loc_001CB837;
    if (_jt == 0x001CB861u) goto loc_001CB861;
    if (_jt == 0x001CB87Bu) goto loc_001CB87B;
    if (_jt == 0x001CB8BAu) goto loc_001CB8BA;
    if (_jt == 0x001CB8C9u) goto loc_001CB8C9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CB837:
    /* cmp edi, 5 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esi + 0x168) = xmm0.f[0]; /* movss */
    if (CMP_NE(edi, 5)) goto loc_001CB8C9; /* jne: not equal / not zero */

loc_001CB84C:
    MEM32(esi + 0x170) = 2;
    PUSH32(esp, 0); sub_001CBA60(); /* call 0x001CBA60 */

loc_001CB85B:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001CB861:
    if (CMP_NE(edi, 5)) goto loc_001CB8C9; /* jne: not equal / not zero */

loc_001CB866:
    MEM32(esi + 0x170) = 7;
    PUSH32(esp, 0); sub_001CBA60(); /* call 0x001CBA60 */

loc_001CB875:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001CB87B:
    eax = MEM32(esi + 0x164);
    if (TEST_Z(eax, eax)) goto loc_001CB8BA; /* je: equal / zero */

loc_001CB885:
    edx = MEM32(esi + 0x16C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 3;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0); sub_001F9220(); /* call 0x001F9220 */

loc_001CB8A6:
    eax = MEM32(esi + 0x164);
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */

loc_001CB8BA:
    if (CMP_NE(edi, 3)) goto loc_001CB8C9; /* jne: not equal / not zero */

loc_001CB8BF:
    MEM32(esi + 0x170) = 4;

loc_001CB8C9:
    PUSH32(esp, 0); sub_001CBA60(); /* call 0x001CBA60 */

loc_001CB8CE:
    POP32(esp, edi);

loc_001CB8CF:
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
