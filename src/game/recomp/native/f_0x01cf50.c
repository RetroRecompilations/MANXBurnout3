#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001CF50
 * Original: 0x0001CF50 - 0x0001D006 (182 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CF50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001CF50:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM8(esp + 7) = 1;
    SET_LO8(ebx, 1);
    eax = 0; /* xor self */
    SET_LO8(ecx, 3);
    /* nop */

loc_0001CF60:
    if (CMP_NE(MEM8(esi + eax + 0x386), LO8(ecx))) goto loc_0001CF71; /* jne: not equal / not zero */

loc_0001CF69:
    eax++;
    if (CMP_L(eax, 0x49)) goto loc_0001CF60; /* jl: less (signed <) */

loc_0001CF6F:
    goto loc_0001CF76;

loc_0001CF71:
    MEM8(esp + 7) = 0;

loc_0001CF76:
    eax = 0; /* xor self */
    goto loc_0001CF80;

    /* nop */

loc_0001CF80:
    if (CMP_NE(MEM8(esi + eax + 0x3CF), LO8(ecx))) goto loc_0001CF91; /* jne: not equal / not zero */

loc_0001CF89:
    eax++;
    if (CMP_L(eax, 0x64)) goto loc_0001CF80; /* jl: less (signed <) */

loc_0001CF8F:
    goto loc_0001CF93;

loc_0001CF91:
    SET_LO8(ebx, 0); /* xor self */

loc_0001CF93:
    PUSH32(esp, 0x11E910E5);
    PUSH32(esp, 0x664BF854);
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001CFA2:
    SET_LO8(ecx, MEM8(eax + esi + 0x386));
    esp = esp + 8;
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(LO8(ecx) & LO8(ecx), 0)) ? 1 : 0); /* setg */
    MEM8(0x44D127) = LO8(eax);
    eax = 0; /* xor self */
    edx = 0x1F1A3A94;
    ecx = 0x1A0F3A89;

loc_0001CFC2:
    if (CMP_NE(MEM32(eax * 8 + 0x39D870), edx)) goto loc_0001CFD4; /* jne: not equal / not zero */

loc_0001CFCB:
    if (CMP_EQ(MEM32(eax * 8 + 0x39D874), ecx)) goto loc_0001CFDD; /* je: equal / zero */

loc_0001CFD4:
    eax++;
    if (CMP_L(eax, 0x64)) goto loc_0001CFC2; /* jl: less (signed <) */

loc_0001CFDA:
    eax = eax | 0xFFFFFFFFu;

loc_0001CFDD:
    SET_LO8(ecx, MEM8(eax + esi + 0x3CF));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(LO8(ecx) & LO8(ecx), 0)) ? 1 : 0); /* setg */
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(0x44D128) = LO8(ecx);
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) (void)0; /* goto loc_0001D003 - dead code, label not in function */ /* je: equal / zero */

loc_0001CFF4:
    SET_LO8(eax, MEM8(esp + 3));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x44D129) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0001D00A(); return; } /* jne: not equal / not zero */

}
