#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214910
 * Original: 0x00214910 - 0x00214A26 (278 bytes, 94 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214910:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x54);
    ebp = esi + 0x54;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA80(); /* call 0x0031AA80 */

loc_00214924:
    if (CMP_NE(eax, 0x1500F0)) goto loc_002149D6; /* jne: not equal / not zero */

loc_0021492F:
    SET_LO8(eax, MEM8(esi + 0xC0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002149DD; /* jne: not equal / not zero */

loc_0021493D:
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x8C) = ecx;
    edi = esi + 0x8C;
    MEM32(edi + 4) = edx;
    eax = esi + 0x94;
    ecx = esi + 0x44;
    ebx = MEM32(ecx);
    edx = eax;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    MEM32(edx + 8) = ebx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    PUSH32(esp, 0); sub_003392A9(); /* call 0x003392A9 */

loc_0021497A:
    edx = MEM32(edi);
    PUSH32(esp, esi);
    MEM32(0x41CD38) = edx;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    MEM32(0x41CD3C) = eax;
    esp = esp - 0xC;
    ecx = esi + 0xA4;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0); sub_0031AB16(); /* call 0x0031AB16 */

loc_002149B0:
    if (TEST_Z(eax, eax)) goto loc_002149CF; /* je: equal / zero */

loc_002149B4:
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 0;
    MEM32(esi + 0x58) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002149CF:
    MEM8(esi + 0xC0) = 1;

loc_002149D6:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002149DD:
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x8C;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003392BF(); /* call 0x003392BF */

loc_002149F2:
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214BF0(); /* call 0x00214BF0 */

loc_002149FC:
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x20);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00214A15; /* je: equal / zero */

loc_00214A0D:
    edx = MEM32(esi + 0xBC);
    MEM32(eax) = edx;

loc_00214A15:
    POP32(esp, edi);
    MEM32(esi + 0x58) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
