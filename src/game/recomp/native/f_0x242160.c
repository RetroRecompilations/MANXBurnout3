#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242160
 * Original: 0x00242160 - 0x00242227 (199 bytes, 82 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242160:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x64);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    ebp = 4;
    if (TEST_NZ(eax, eax)) goto loc_00242179; /* jne: not equal / not zero */

loc_00242176:
    ebp = MEM32(ebx + 0x68);

loc_00242179:
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);
    esp = esp - 0xC;
    if (TEST_Z(eax, eax)) goto loc_002421EA; /* je: equal / zero */

loc_00242188:
    eax = esi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0); sub_0024E004(); /* call 0x0024E004 */

loc_002421A2:
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    esp = esp - 0xC;
    ecx = esi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0); sub_0024E060(); /* call 0x0024E060 */

loc_002421C5:
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    esp = esp - 0xC;
    edx = esi;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, edi);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0); sub_0024E084(); /* call 0x0024E084 */

loc_002421E6:
    PUSH32(esp, 1);
    goto loc_00242206;

loc_002421EA:
    edx = esi;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, edi);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0); sub_0024E020(); /* call 0x0024E020 */

loc_00242204:
    PUSH32(esp, 0xFFFFFFFFu);

loc_00242206:
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = edx;
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_0024E084(); /* call 0x0024E084 */

loc_00242222:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
