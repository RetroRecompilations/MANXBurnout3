#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9DE0
 * Original: 0x001F9DE0 - 0x001F9ED2 (242 bytes, 91 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9DE0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001F9DE0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x36DBE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F9DF3:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F9E03; /* jne: not equal / not zero */

loc_001F9DFA:
    eax = ZX8(MEM8(esi + 0xC));
    eax = eax >> 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F9E03:
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x36DBD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F9E11:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F9E1F; /* jne: not equal / not zero */

loc_001F9E18:
    eax = 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F9E1F:
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x36DBF8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F9E2D:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F9E3B; /* jne: not equal / not zero */

loc_001F9E34:
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F9E3B:
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x36DC08);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F9E49:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F9E57; /* jne: not equal / not zero */

loc_001F9E50:
    eax = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F9E57:
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x36DC18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F9E65:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001F9EC1; /* je: equal / zero */

loc_001F9E6C:
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x36DC78);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F9E7A:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001F9EC1; /* je: equal / zero */

loc_001F9E81:
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x36DC38);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F9E8F:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F9EBD; /* jne: not equal / not zero */

loc_001F9E96:
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001F9EA1; /* je: equal / zero */

loc_001F9E9D:
    eax = MEM32(eax);
    goto loc_001F9EA6;

loc_001F9EA1:
    eax = 0x1F400;

loc_001F9EA6:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001F9EB1; /* jne: not equal / not zero */

loc_001F9EAC:
    esi = 0xBB80;

loc_001F9EB1:
    eax = eax + eax * 8;
    eax = eax << 4;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F9EBD:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F9EC1:
    SET_LO8(eax, MEM8(esi + 0xD));
    SET_LO8(eax, LO8(eax) - 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x24;
    esp += 4; return; /* ret */

}
