#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F70C0
 * Original: 0x001F70C0 - 0x001F7143 (131 bytes, 49 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F70C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F70C0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    if (CMP_EQ(eax, 0x30)) goto loc_001F7135; /* je: equal / zero */

loc_001F70CD:
    if (CMP_EQ(eax, 0x50)) goto loc_001F7135; /* je: equal / zero */

loc_001F70D2:
    if (CMP_NE(eax, 0x70)) goto loc_001F713E; /* jne: not equal / not zero */

loc_001F70D7:
    eax = MEM32(esi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_001F70EC; /* je: equal / zero */

loc_001F70DE:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6CA0(); /* call 0x001F6CA0 */

loc_001F70E4:
    eax = MEM32(esi + 0x2C);
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F70EC:
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41B404), _icall_esp); /* indirect call */
    }

loc_001F70F8:
    esp = esp + 8;
    if (CMP_NE(eax, 1)) goto loc_001F713E; /* jne: not equal / not zero */

loc_001F7100:
    if (TEST_Z(MEM8(esi + 0x30), 4)) goto loc_001F7112; /* je: equal / zero */

loc_001F7106:
    MEM32(esi + 0x2C) = 0x500;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F7112:
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F6AD0(); /* call 0x001F6AD0 */

loc_001F711A:
    PUSH32(esp, 0); sub_001DEEB0(); /* call 0x001DEEB0 */

loc_001F711F:
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001F7126:
    MEM32(esi + 0x2C) = 0x100;
    eax = MEM32(esi + 0x2C);
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F7135:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6EB0(); /* call 0x001F6EB0 */

loc_001F713B:
    esp = esp + 4;

loc_001F713E:
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
