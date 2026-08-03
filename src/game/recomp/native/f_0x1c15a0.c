#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C15A0
 * Original: 0x001C15A0 - 0x001C1605 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001C15A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    ecx = MEM32(edx + 0x40);
    eax = MEM32(ecx + 0x10);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_001C15D9; /* je: equal / zero */

loc_001C15B4:
    ebx = MEM32(eax);
    MEM32(ecx + 0x10) = ebx;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001C15C6; /* je: equal / zero */

loc_001C15BF:
    MEM32(ecx + 4) = 0;

loc_001C15C6:
    ecx = MEM32(edx + 0x44);
    if (TEST_NZ(ecx, ecx)) goto loc_001C15D1; /* jne: not equal / not zero */

loc_001C15CD:
    MEM32(eax) = ecx;
    goto loc_001C15D6;

loc_001C15D1:
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;

loc_001C15D6:
    MEM32(edx + 0x44) = eax;

loc_001C15D9:
    eax = eax + 8;
    MEM32(eax + 0x48) = edx;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 4);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
