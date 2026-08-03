#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001543B0
 * Original: 0x001543B0 - 0x00154457 (167 bytes, 44 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001543B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001543B0:
    if (TEST_NZ(MEM8(esi + 0x618), 0x10)) goto loc_001543F2; /* jne: not equal / not zero */

loc_001543B9:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x614);
    ecx = MEM32(0x3EC8D4);
    edx = MEM32(0x3EC8D0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x58C;
    PUSH32(esp, 0x3AF230);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001543E0:
    eax = MEM32(esi + 0x618);
    esp = esp + 0x14;
    eax = eax | 0x10;
    MEM32(esi + 0x618) = eax;

loc_001543F2:
    PUSH32(esp, 0x800);
    PUSH32(esp, 0);
    ecx = esi + 0x58C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_0015440A:
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x5E4) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00154417; /* jne: not equal / not zero */

loc_00154414:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00154417:
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0x39D468;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00154424:
    edx = MEM32(esi + 0x618);
    SET_LO8(ecx, MEM8(esi + 0x614));
    edx = edx & 0xFFFFFFEFu;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM32(esi + 0x5E8) = eax;
    SET_LO8(eax, LO8(ecx));
    /* cmp LO8(eax), 0xA - flags set for next jcc */
    MEM32(esi + 0x618) = edx;
    MEM8(esi + 0x614) = LO8(ecx);
    if (CMP_NE(LO8(eax), 0xA)) goto loc_00154454; /* jne: not equal / not zero */

loc_0015444D:
    MEM8(esi + 0x614) = 0;

loc_00154454:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
