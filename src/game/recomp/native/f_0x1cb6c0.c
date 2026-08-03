#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB6C0
 * Original: 0x001CB6C0 - 0x001CB7D9 (281 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB6C0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001CB6C0:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x194));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x195) = 0;
    MEM8(esi + 0x196) = 0;
    MEMF(esi + 0x168) = xmm0.f[0]; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CB702; /* jne: not equal / not zero */

loc_001CB6EE:
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CB5B0(); /* call 0x001CB5B0 */

loc_001CB6F9:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_001CB702:
    edx = MEM32(esi + 0x16C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F9400(); /* call 0x001F9400 */

loc_001CB70E:
    esp = esp + 4;
    eax = eax - 3;
    if ((eax == 0)) goto loc_001CB7AB; /* je: equal / zero */

loc_001CB71A:
    eax = eax - 2;
    if ((eax == 0)) goto loc_001CB74A; /* je: equal / zero */

loc_001CB71F:
    eax--;
    if ((eax != 0)) goto loc_001CB7D0; /* jne: not equal / not zero */

loc_001CB726:
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_001CB734:
    esp = esp + 8;
    MEM32(esi + 0x170) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_001CB74A:
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(esi + 0x170) = 2;
    PUSH32(esp, 0); sub_001CBB50(); /* call 0x001CBB50 */

loc_001CB763:
    ecx = MEM32(esi + 0x16C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 3;
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0); sub_001F94A0(); /* call 0x001F94A0 */

loc_001CB78C:
    edx = MEM32(esp + 0x1C);
    esp = esp + 8;
    eax = edi;
    ecx = esi;
    MEM32(esi + 0x190) = edx;
    PUSH32(esp, 0); sub_001CBD50(); /* call 0x001CBD50 */

loc_001CB7A2:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_001CB7AB:
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEM32(esi + 0x170) = 1;
    PUSH32(esp, 0); sub_001CBBC0(); /* call 0x001CBBC0 */

loc_001CB7BF:
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_001CB7CD:
    esp = esp + 8;

loc_001CB7D0:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}
