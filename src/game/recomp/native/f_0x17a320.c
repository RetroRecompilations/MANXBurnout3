#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017A320
 * Original: 0x0017A320 - 0x0017A3BE (158 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A320(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017A320:
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3F72DC);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0017A334:
    if (TEST_Z(eax, eax)) goto loc_0017A340; /* je: equal / zero */

loc_0017A338:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0017A340:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3F72E0);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0017A353:
    if (TEST_Z(eax, eax)) goto loc_0017A35F; /* je: equal / zero */

loc_0017A357:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0017A35F:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3F72E4);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0017A372:
    if (TEST_Z(eax, eax)) goto loc_0017A37E; /* je: equal / zero */

loc_0017A376:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0017A37E:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3F72F4);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0017A391:
    if (TEST_Z(eax, eax)) goto loc_0017A39D; /* je: equal / zero */

loc_0017A395:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0017A39D:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3F7304);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0017A3B0:
    if (TEST_Z(eax, eax)) goto loc_0017A3BC; /* je: equal / zero */

loc_0017A3B4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0017A3BC:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
