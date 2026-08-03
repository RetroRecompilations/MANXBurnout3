#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE920
 * Original: 0x001CE920 - 0x001CE979 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE920(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE920:
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(esi + 0x24), 0xE)) goto loc_001CE92E; /* je: equal / zero */

loc_001CE929:
    PUSH32(esp, 0); sub_001CEA80(); /* call 0x001CEA80 */

loc_001CE92E:
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    /* cmp ecx, 7 - flags set for next jcc */
    MEM32(esi + 0x24C) = eax;
    MEM32(esi + 0x258) = eax;
    MEM32(esi + 0x238) = eax;
    if (CMP_EQ(ecx, 7)) goto loc_001CE95E; /* je: equal / zero */

loc_001CE94A:
    ecx = MEM32(esi + 0x244);
    if (CMP_EQ(ecx, eax)) goto loc_001CE969; /* je: equal / zero */

loc_001CE954:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001CE959:
    if (CMP_NE(eax, 2)) goto loc_001CE969; /* jne: not equal / not zero */

loc_001CE95E:
    MEM32(esi + 0x24) = 0xF;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CE969:
    PUSH32(esp, 0); sub_001CED10(); /* call 0x001CED10 */

loc_001CE96E:
    MEM32(esi + 0x24) = 0x10;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
