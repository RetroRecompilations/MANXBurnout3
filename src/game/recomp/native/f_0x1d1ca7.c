#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1CA7
 * Original: 0x001D1CA7 - 0x001D1D5F (184 bytes, 84 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1CA7(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D1CA7:
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001D1CC0; /* jne: not equal / not zero */

loc_001D1CB8:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243F9E(); /* call 0x00243F9E */

loc_001D1CBE:
    POP32(esp, ecx);
    eax++;

loc_001D1CC0:
    /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x18);
    if (CMP_LE(eax & eax, 0)) goto loc_001D1D45; /* jle: less or equal (signed <=) */

loc_001D1CC8:
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x18);

loc_001D1CCF:
    SET_LO16(ecx, MEM16(esi));
    edi++;
    if (CMP_A(LO16(ecx), 0x7F)) goto loc_001D1CE3; /* ja: above (unsigned >) */

loc_001D1CD9:
    if (CMP_G(edi, edx)) goto loc_001D1D3F; /* jg: greater (signed >) */

loc_001D1CDD:
    if (TEST_Z(eax, eax)) goto loc_001D1D3F; /* je: equal / zero */

loc_001D1CE1:
    goto loc_001D1D3C;

loc_001D1CE3:
    if (CMP_A(LO16(ecx), 0x7FF)) goto loc_001D1CFD; /* ja: above (unsigned >) */

loc_001D1CEA:
    if (CMP_G(edi, edx)) goto loc_001D1D2B; /* jg: greater (signed >) */

loc_001D1CEE:
    if (TEST_Z(eax, eax)) goto loc_001D1D2B; /* je: equal / zero */

loc_001D1CF2:
    ecx = ecx >> 6;
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    SET_LO8(ecx, LO8(ecx) | 0xC0);
    goto loc_001D1D28;

loc_001D1CFD:
    if (CMP_G(edi, edx)) goto loc_001D1D11; /* jg: greater (signed >) */

loc_001D1D01:
    if (TEST_Z(eax, eax)) goto loc_001D1D11; /* je: equal / zero */

loc_001D1D05:
    ecx = ecx >> 0xC;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(ecx, LO8(ecx) | 0xE0);
    MEM8(eax) = LO8(ecx);
    eax++;

loc_001D1D11:
    edi++;
    if (CMP_G(edi, edx)) goto loc_001D1D2B; /* jg: greater (signed >) */

loc_001D1D16:
    if (TEST_Z(eax, eax)) goto loc_001D1D2B; /* je: equal / zero */

loc_001D1D1A:
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    ecx = ecx >> 6;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(ecx, LO8(ecx) | 0x80);

loc_001D1D28:
    MEM8(eax) = LO8(ecx);
    eax++;

loc_001D1D2B:
    edi++;
    if (CMP_G(edi, edx)) goto loc_001D1D3F; /* jg: greater (signed >) */

loc_001D1D30:
    if (TEST_Z(eax, eax)) goto loc_001D1D3F; /* je: equal / zero */

loc_001D1D34:
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(ecx, LO8(ecx) | 0x80);

loc_001D1D3C:
    MEM8(eax) = LO8(ecx);
    eax++;

loc_001D1D3F:
    esi++;
    esi++;
    ebx--;
    if ((ebx != 0)) goto loc_001D1CCF; /* jne: not equal / not zero */

loc_001D1D44:
    POP32(esp, ebx);

loc_001D1D45:
    if (TEST_Z(edx, edx)) goto loc_001D1D58; /* je: equal / zero */

loc_001D1D49:
    if (CMP_GE(edx, edi)) goto loc_001D1D58; /* jge: greater or equal (signed >=) */

loc_001D1D4D:
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D1D54:
    eax = 0; /* xor self */
    goto loc_001D1D5A;

loc_001D1D58:
    eax = edi;

loc_001D1D5A:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
