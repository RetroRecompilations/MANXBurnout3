#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FA210
 * Original: 0x001FA210 - 0x001FA37C (364 bytes, 132 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA210(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001FA210:
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x36DBE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA226:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FA261; /* je: equal / zero */

loc_001FA22D:
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0x36DBD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA23B:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FA24C; /* jne: not equal / not zero */

loc_001FA242:
    eax = 0x1C;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001FA24C:
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x36DBF8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA25A:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FA26B; /* jne: not equal / not zero */

loc_001FA261:
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001FA26B:
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x36DC68);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA279:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FA28A; /* jne: not equal / not zero */

loc_001FA280:
    eax = 0x600;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001FA28A:
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0x36DC08);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA298:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FA2A9; /* jne: not equal / not zero */

loc_001FA29F:
    eax = 0xE;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001FA2A9:
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x36DC18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA2B7:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FA326; /* je: equal / zero */

loc_001FA2BE:
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x36DC78);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA2CC:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FA326; /* je: equal / zero */

loc_001FA2D3:
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0x36DC38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA2E1:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FA31C; /* je: equal / zero */

loc_001FA2E8:
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x36DC48);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA2F6:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FA31C; /* je: equal / zero */

loc_001FA2FD:
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x36DC58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FA30B:
    esp = esp + 8;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x180;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001FA31C:
    eax = 0x480;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001FA326:
    SET_LO8(ecx, MEM8(ebx + 0xD));
    SET_LO8(eax, 1);
    if (CMP_NE(LO8(ecx), LO8(eax))) goto loc_001FA339; /* jne: not equal / not zero */

loc_001FA32F:
    eax = 0x40;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001FA339:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    esi = ebx;
    edi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, ebx);
    MEM8(esp + 0x1D) = LO8(eax);
    PUSH32(esp, 0); sub_001F9DE0(); /* call 0x001F9DE0 */

loc_001FA352:
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0); sub_001F9DE0(); /* call 0x001F9DE0 */

loc_001FA35E:
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edx = esp + 0x14;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0); sub_001FA210(); /* call 0x001FA210 */

loc_001FA36E:
    esp = esp + 0xC;
    edx = 0; /* xor self */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}
