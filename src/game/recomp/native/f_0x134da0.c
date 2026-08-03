#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00134DA0
 * Original: 0x00134DA0 - 0x00134ED0 (304 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00134DA0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    esi = eax;
    eax = esi + 0x88;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134DB9:
    if (TEST_Z(eax, eax)) goto loc_00134DC5; /* je: equal / zero */

loc_00134DBD:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134DC5:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x8C;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134DDA:
    if (TEST_Z(eax, eax)) goto loc_00134DE6; /* je: equal / zero */

loc_00134DDE:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134DE6:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x98;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134DFB:
    if (TEST_Z(eax, eax)) goto loc_00134E07; /* je: equal / zero */

loc_00134DFF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134E07:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x90;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134E1C:
    if (TEST_Z(eax, eax)) goto loc_00134E28; /* je: equal / zero */

loc_00134E20:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134E28:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x94;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134E3D:
    if (TEST_Z(eax, eax)) goto loc_00134E49; /* je: equal / zero */

loc_00134E41:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134E49:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xA8;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134E5E:
    if (TEST_Z(eax, eax)) goto loc_00134E6A; /* je: equal / zero */

loc_00134E62:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134E6A:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xA4;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134E7F:
    if (TEST_Z(eax, eax)) goto loc_00134E8B; /* je: equal / zero */

loc_00134E83:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134E8B:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x9C;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134EA0:
    if (TEST_Z(eax, eax)) goto loc_00134EAC; /* je: equal / zero */

loc_00134EA4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134EAC:
    edi = MEM32(0x4A1E94);
    esi = esi + 0xA0;
    edi = edi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00134EC1:
    if (TEST_Z(eax, eax)) goto loc_00134ECD; /* je: equal / zero */

loc_00134EC5:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00134ECD:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
