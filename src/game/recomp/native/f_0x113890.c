#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00113890
 * Original: 0x00113890 - 0x0011395C (204 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00113890:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edi);
    ecx = ecx + 0x70;
    PUSH32(esp, ecx);
    edx = eax;
    eax = MEM32(ebx + 0x28);
    esi = MEM32(edx + 8);
    edi = MEM32(eax + 8);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_001138C8:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    PUSH32(esp, 0);
    memcpy((void *)XBOX_PTR(esp + 0x74), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x44), 16); /* movaps */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x5C;
    ecx = esi;
    edx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x8C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001084E0(); /* call 0x001084E0 */

loc_00113906:
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113953; /* je: equal / zero */

loc_0011390D:
    eax = MEM32(ebx + 0x24);
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0011391E; /* je: equal / zero */

loc_00113916:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011391E; /* je: equal / zero */

loc_0011391A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00113933; /* jne: not equal / not zero */

loc_0011391E:
    edx = MEM32(esp + 0xC);
    edi = MEM32(edx + 0x13F4);
    edi = edi + 0x10D0;
    PUSH32(esp, 0); sub_00197A20(); /* call 0x00197A20 */

loc_00113933:
    edi = MEM32(ebp + 8);
    esi = MEM32(ebx + 0x28);
    eax = edi;
    PUSH32(esp, 0); sub_00114730(); /* call 0x00114730 */

loc_00113940:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113953; /* je: equal / zero */

loc_00113944:
    eax = MEM32(ebx + 0x24);
    if (CMP_GE(MEM8(eax), 8)) goto loc_00113953; /* jge: greater or equal (signed >=) */

loc_0011394C:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00113960(); /* call 0x00113960 */

loc_00113953:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
