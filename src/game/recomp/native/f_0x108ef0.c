#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00108EF0
 * Original: 0x00108EF0 - 0x00108F90 (160 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00108EF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00108F0B:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x10);
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x74), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x44), 16); /* movaps */
    PUSH32(esp, esi);
    memcpy((void *)XBOX_PTR(esp + 0x88), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x58), 16); /* movaps */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = esp + 0x6C;
    memcpy((void *)XBOX_PTR(esp + 0x9C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001084E0(); /* call 0x001084E0 */

loc_00108F4E:
    esp = esp + 0xC;
    /* test esi, esi - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(esi, esi)) goto loc_00108F6E; /* je: equal / zero */

loc_00108F57:
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00108F65:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */

loc_00108F6E:
    if (TEST_Z(edi, edi)) goto loc_00108F89; /* je: equal / zero */

loc_00108F72:
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_00108F80:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */

loc_00108F89:
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
