#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00016D00
 * Original: 0x00016D00 - 0x00016DF1 (241 bytes, 56 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016D00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00016D00:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x7C3C;
    PUSH32(esp, 0); sub_00011080(); /* call 0x00011080 */

loc_00016D0D:
    esi = 0x4D6170;
    PUSH32(esp, 0); sub_0002EE70(); /* call 0x0002EE70 */

loc_00016D17:
    eax = MEM32(0x411684);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00016D2C; /* je: equal / zero */

loc_00016D22:
    esi = 0x4115F0;
    PUSH32(esp, 0); sub_00155C00(); /* call 0x00155C00 */

loc_00016D2C:
    eax = MEM32(0x411680);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_00016D37:
    esi = 2;
    PUSH32(esp, 0x40B310);
    MEM32(0x3FA68C) = esi;
    PUSH32(esp, 0); sub_001CA620(); /* call 0x001CA620 */

loc_00016D4C:
    edx = MEM32(0x40B310);
    ecx = 0x40B310;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00016D5A:
    MEM32(0x3FA69C) = esi;
    esi = 0x60EA00;
    PUSH32(esp, 0); sub_001AABD0(); /* call 0x001AABD0 */

loc_00016D6A:
    ecx = 0x567170;
    PUSH32(esp, 0); sub_001B41F0(); /* call 0x001B41F0 */

loc_00016D74:
    PUSH32(esp, 0x572980);
    PUSH32(esp, 0); sub_000FCB30(); /* call 0x000FCB30 */

loc_00016D7E:
    eax = MEM32(edi + 0x28980);
    ecx = edi + 0x28980;
    MEM8(edi + 0x2E1D8) = LO8(ebx);
    MEM32(edi + 0x2E1D0) = ebx;
    MEM32(edi + 0x2E1D4) = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00016D9F:
    edx = MEM32(edi + 0x295D0);
    ecx = edi + 0x295D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00016DAE:
    MEM32(edi + 0x2E18C) = ebx;
    MEM32(edi + 0x2E190) = ebx;
    eax = MEM32(0x3FA6AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CFF7A(); /* call 0x001CFF7A */

loc_00016DC5:
    ecx = MEM32(0x3FA6B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CFF7A(); /* call 0x001CFF7A */

loc_00016DD1:
    edx = MEM32(0x3FA6B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001CFF7A(); /* call 0x001CFF7A */

loc_00016DDD:
    eax = 3;
    POP32(esp, esi);
    MEM32(edi + 0x2E218) = eax;
    MEM32(edi + 0x2E214) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
