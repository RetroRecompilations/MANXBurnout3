#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00022D30
 * Original: 0x00022D30 - 0x00022EE4 (436 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022D30:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((eax == 0)) goto loc_00022EBF; /* je: equal / zero */

loc_00022D41:
    eax--;
    if ((eax == 0)) goto loc_00022E8E; /* je: equal / zero */

loc_00022D48:
    eax--;
    if ((eax != 0)) goto loc_00022EDF; /* jne: not equal / not zero */

loc_00022D4F:
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00022DAA; /* je: equal / zero */

loc_00022D57:
    if (CMP_NE(eax, 4)) goto loc_00022EDF; /* jne: not equal / not zero */

loc_00022D60:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) goto loc_00022D7B; /* je: equal / zero */

loc_00022D6A:
    edx = MEM32(0x567178);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00022D7B:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x889D607Fu);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022D91:
    PUSH32(esp, 0x93CB4D00u);
    PUSH32(esp, 0xAA95607Fu);
    PUSH32(esp, 0x3F9BA0);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022DA5:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022DAA:
    eax = MEM32(0x4D1FD0);
    if (CMP_L(eax, MEM32(0x44CB14))) goto loc_00022E16; /* jl: less (signed <) */

loc_00022DB7:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x889D607Fu);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022DCD:
    PUSH32(esp, 0x93CB4D00u);
    PUSH32(esp, 0xAA95607Fu);
    PUSH32(esp, 0x3F9BA0);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022DE1:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) goto loc_00022EDF; /* je: equal / zero */

loc_00022DEF:
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0x2E;
    eax = MEM32(0x567178);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_00022E16:
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4520(); /* call 0x001B4520 */

loc_00022E22:
    PUSH32(esp, 0x93D12267u);
    edi = 0; /* xor self */
    /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, 0x889D607Fu);
    PUSH32(esp, 0x3F9A30);
    if (CMP_L(eax, 3)) goto loc_00022E62; /* jl: less (signed <) */

loc_00022E38:
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022E3D:
    PUSH32(esp, 0x93CB4D00u);
    PUSH32(esp, 0xAA95607Fu);
    PUSH32(esp, 0x3F9BA0);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022E51:
    PUSH32(esp, 0x2E);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022E5A:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022E62:
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022E67:
    PUSH32(esp, 0x93CB4D00u);
    PUSH32(esp, 0xAA95607Fu);
    PUSH32(esp, 0x3F9BA0);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022E7D:
    PUSH32(esp, 0x2F);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022E86:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022E8E:
    ecx = MEM32(0x3F9A34);
    if (TEST_Z(ecx, ecx)) goto loc_00022EDF; /* je: equal / zero */

loc_00022E98:
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    eax = MEM32(0x3F9A38);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_00022EBF:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022ED5:
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = edi;

loc_00022EDF:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
