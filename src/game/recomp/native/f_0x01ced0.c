#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001CED0
 * Original: 0x0001CED0 - 0x0001CF40 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001CED0:
    edx = 0; /* xor self */

loc_0001CED2:
    SET_LO8(eax, MEM8(edx + 0x44D01F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001CF39; /* je: equal / zero */

loc_0001CEDC:
    ecx = MEM32(edx * 8 + 0x39DF3C);
    /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(edx * 8 + 0x39DF38);
    if (CMP_A(ecx & ecx, 0)) goto loc_0001CF01; /* ja: above (unsigned >) */

loc_0001CEEE:
    if (CMP_B(ecx & ecx, 0)) goto loc_0001CEF5; /* jb: below (unsigned <) */

loc_0001CEF0:
    if (CMP_AE(eax, 7)) goto loc_0001CF01; /* jae: above or equal (unsigned >=) */

loc_0001CEF5:
    ecx = MEM32(eax * 4 + 0x3ED0F8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);

loc_0001CF01:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00158260(); /* call 0x00158260 */

loc_0001CF08:
    esp = esp + 8;
    eax--;
    if (CMP_A(eax, 3)) goto loc_0001CF39; /* ja: above (unsigned >) */

loc_0001CF11:
    { uint32_t _jt = MEM32(eax * 4 + 0x1CF40); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0001CF18u) goto loc_0001CF18;
    if (_jt == 0x0001CF1Fu) goto loc_0001CF1F;
    if (_jt == 0x0001CF26u) goto loc_0001CF26;
    if (_jt == 0x0001CF2Du) goto loc_0001CF2D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001CF18:
    eax = 1;
    goto loc_0001CF32;

loc_0001CF1F:
    eax = 2;
    goto loc_0001CF32;

loc_0001CF26:
    eax = 3;
    goto loc_0001CF32;

loc_0001CF2D:
    eax = 4;

loc_0001CF32:
    MEM8(eax + 0x44D122) = 1;

loc_0001CF39:
    edx++;
    if (CMP_L(edx, 0x49)) goto loc_0001CED2; /* jl: less (signed <) */

loc_0001CF3F:
    esp += 4; return; /* ret */

}
