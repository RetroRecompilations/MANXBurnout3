#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002439E9
 * Original: 0x002439E9 - 0x00243A41 (88 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002439E9(void)
{
    int _flags = 0; /* fallback flag var */

loc_002439E9:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    goto loc_002439F1;

loc_002439F0:
    esi++;

loc_002439F1:
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00247752(); /* call 0x00247752 */

loc_002439FA:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_002439F0; /* jne: not equal / not zero */

loc_002439FF:
    ecx = ZX8(MEM8(esi));
    esi++;
    /* cmp ecx, 0x2D - flags set for next jcc */
    edx = ecx;
    if (CMP_EQ(ecx, 0x2D)) goto loc_00243A0F; /* je: equal / zero */

loc_00243A0A:
    if (CMP_NE(ecx, 0x2B)) goto loc_00243A13; /* jne: not equal / not zero */

loc_00243A0F:
    ecx = ZX8(MEM8(esi));
    esi++;

loc_00243A13:
    eax = 0; /* xor self */

loc_00243A15:
    if (CMP_L(ecx, 0x30)) goto loc_00243A24; /* jl: less (signed <) */

loc_00243A1A:
    if (CMP_G(ecx, 0x39)) goto loc_00243A24; /* jg: greater (signed >) */

loc_00243A1F:
    ecx = ecx - 0x30;
    goto loc_00243A27;

loc_00243A24:
    ecx = ecx | 0xFFFFFFFFu;

loc_00243A27:
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00243A38; /* je: equal / zero */

loc_00243A2C:
    eax = eax + eax * 4;
    eax = ecx + eax * 2;
    ecx = ZX8(MEM8(esi));
    esi++;
    goto loc_00243A15;

loc_00243A38:
    /* cmp edx, 0x2D - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(edx, 0x2D)) goto loc_00243A40; /* jne: not equal / not zero */

loc_00243A3E:
    eax = (uint32_t)(-(int32_t)eax);

loc_00243A40:
    esp += 4; return; /* ret */

}
