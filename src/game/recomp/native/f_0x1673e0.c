#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001673E0
 * Original: 0x001673E0 - 0x001674A4 (196 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001673E0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001673E0:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x60EA00);
    ebx = ecx;
    PUSH32(esp, 0x3A1C68);
    PUSH32(esp, ebx);
    MEM32(ebx + 0xC30) = eax;
    MEMF(ebx + 0xC28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B4170(); /* call 0x001B4170 */

loc_00167405:
    eax = ebx + 0x18;
    ecx = ebx;
    PUSH32(esp, 0); sub_00165460(); /* call 0x00165460 */

loc_0016740F:
    ecx = MEM32(ebx + 0xC30);
    eax = 0; /* xor self */
    /* cmp ecx, eax - flags set for next jcc */
    MEM8(ebx + 0xC44) = LO8(eax);
    MEM8(ebx + 0xC45) = LO8(eax);
    MEM8(ebx + 0xC47) = LO8(eax);
    MEM32(ebx + 0xC20) = eax;
    MEM32(ebx + 0xC24) = eax;
    if (CMP_NE(ecx, eax)) goto loc_00167457; /* jne: not equal / not zero */

loc_00167439:
    MEM32(0x47A134) = eax;
    MEM32(0x47A10C) = eax;
    MEM32(0x47A110) = eax;
    MEM32(0x47A0D4) = 1;
    MEM32(0x47A12C) = eax;

loc_00167457:
    PUSH32(esp, 0xBA38E6DCu);
    PUSH32(esp, 0x828A38A1u);
    MEM32(ebx + 0x60) = ebx;
    PUSH32(esp, 0); sub_001B4260(); /* call 0x001B4260 */

loc_00167469:
    esi = eax;
    if (CMP_EQ(MEM32(ebx + 4), esi)) goto loc_001674A1; /* je: equal / zero */

loc_00167470:
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0016747A:
    eax = MEM32(ebx + 0x10);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx + 4);
    MEM32(ebx + 4) = esi;
    if (TEST_Z(eax, eax)) goto loc_00167497; /* je: equal / zero */

loc_00167487:
    /* test esi, esi - flags set for next jcc */
    edx = MEM32(eax + 0x20);
    MEM32(ebx + 0x14) = edx;
    if (TEST_Z(esi, esi)) goto loc_00167497; /* je: equal / zero */

loc_00167491:
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x10) = eax;

loc_00167497:
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_001674A1:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
