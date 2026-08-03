#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CEFC0
 * Original: 0x001CEFC0 - 0x001CF05E (158 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CEFC0:
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CF006; /* je: equal / zero */

loc_001CEFC7:
    ecx = MEM32(esi + 0x244);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001CEFD2:
    if (CMP_NE(eax, 2)) goto loc_001CEFDA; /* jne: not equal / not zero */

loc_001CEFD7:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_001CEFDA:
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    ecx = ecx + 0x20000;
    edx = edx + 0x20000;
    eax = ecx;
    /* cmp eax, 0x40000 - flags set for next jcc */
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, 0x40000)) goto loc_001CF002; /* jne: not equal / not zero */

loc_001CEFFB:
    MEM32(esi + 0xC) = 0;

loc_001CF002:
    MEM8(esi + 0x2D) = 0;

loc_001CF006:
    eax = MEM32(esi + 0x10);
    ecx = 0x40000;
    ecx = ecx - eax;
    if (CMP_L(ecx, 0x20000)) goto loc_001CF05B; /* jl: less (signed <) */

loc_001CF018:
    if (CMP_NE(MEM32(esi), 0)) goto loc_001CF039; /* jne: not equal / not zero */

loc_001CF01D:
    ecx = MEM32(esi + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_001CF039; /* jne: not equal / not zero */

loc_001CF024:
    if (TEST_NZ(eax, eax)) goto loc_001CF039; /* jne: not equal / not zero */

loc_001CF028:
    edx = MEM32(esi + 0x244);
    eax = MEM32(edx + 0x18);
    eax = eax - MEM32(esi + 0x22C);
    MEM32(esi) = eax;

loc_001CF039:
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x244);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0x20000);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001CF053:
    MEM8(esi + 0x2D) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001CF05B:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
