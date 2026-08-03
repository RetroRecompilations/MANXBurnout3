#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00167CE0
 * Original: 0x00167CE0 - 0x00167DBD (221 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167CE0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esi + 0x2A0;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    MEM32(esp + 0xC) = eax;

loc_00167CF0:
    eax = 1;
    edx = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_00167CFE:
    ecx = MEM32(esi + 0xC24);
    edi = eax;
    eax = MEM32(esi + 0xC20);
    ebx = edx;
    eax = eax & edi;
    ecx = ecx & ebx;
    eax = eax | ecx;
    if ((eax == 0)) goto loc_00167D4D; /* je: equal / zero */

loc_00167D16:
    SET_LO8(eax, MEM8(esi + 0xC44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00167D2D; /* je: equal / zero */

loc_00167D20:
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00167D2D:
    ecx = MEM32(esi + 0xC20);
    eax = MEM32(esi + 0xC24);
    edi = ~edi;
    ebx = ~ebx;
    ecx = ecx & edi;
    eax = eax & ebx;
    MEM32(esi + 0xC20) = ecx;
    MEM32(esi + 0xC24) = eax;

loc_00167D4D:
    ecx = MEM32(esp + 0xC);
    ebp++;
    ecx = ecx + 4;
    /* cmp ebp, 0x14 - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(ebp, 0x14)) goto loc_00167CF0; /* jl: less (signed <) */

loc_00167D5E:
    SET_LO8(eax, MEM8(esi + 0xC44));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(esp + 0x14);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00167D7F; /* je: equal / zero */

loc_00167D6C:
    ecx = MEM32(esi + edi * 4 + 0x2A0);
    eax = MEM32(ecx);
    edx = esi + 0x250;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00167D7F:
    eax = 1;
    edx = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_00167D8D:
    ecx = MEM32(esi + 0xC20);
    ecx = ecx | eax;
    eax = MEM32(esi + 0xC24);
    MEM32(esi + 0xC40) = edi;
    POP32(esp, edi);
    eax = eax | edx;
    POP32(esp, ebp);
    MEM32(esi + 0xC20) = ecx;
    MEM32(esi + 0xC24) = eax;
    MEM8(esi + 0xC46) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
