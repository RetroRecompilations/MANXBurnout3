#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001554A0
 * Original: 0x001554A0 - 0x0015558E (238 bytes, 73 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001554A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001554A0:
    PUSH32(esp, ebx);
    ebx = edx;
    edx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + edx;
    edx = MEM32(0x4A1BE4);
    eax = eax + edx;
    edx = edx + eax;
    MEM32(0x4A1BE0) = eax;
    eax = eax & 0xF;
    MEM32(0x4A1BE4) = edx;
    if ((eax != 0)) goto loc_00155510; /* jne: not equal / not zero */

loc_001554D1:
    eax = MEM32(0x3EC8E8);
    edx = MEM32(0x3EC8DC);
    PUSH32(esp, eax);
    eax = MEM32(0x45B9BC);
    PUSH32(esp, edx);
    MEM32(ebx) = 0;
    MEM32(esi) = 0;
    edx = MEM32(eax * 4 + 0x3EC8F8);
    eax = MEM32(0x3EC8D8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3AF1A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00155508:
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00155510:
    if (CMP_NE(eax, 7)) goto loc_00155556; /* jne: not equal / not zero */

loc_00155515:
    edx = MEM32(0x3EC8E8);
    eax = MEM32(0x3EC8E0);
    PUSH32(esp, edx);
    edx = MEM32(0x45B9BC);
    PUSH32(esp, eax);
    MEM32(ebx) = 0;
    MEM32(esi) = 0;
    eax = MEM32(edx * 4 + 0x3EC8F8);
    edx = MEM32(0x3EC8D8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3AF1A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0015554E:
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00155556:
    if (CMP_NE(eax, 0xF)) goto loc_00155572; /* jne: not equal / not zero */

loc_0015555B:
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001551E0(); /* call 0x001551E0 */

loc_00155561:
    MEM32(ebx) = 0;
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00155572:
    eax = MEM32(0x73A194);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x73A190);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001550B0(); /* call 0x001550B0 */

loc_00155589:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
