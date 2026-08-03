#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AA720
 * Original: 0x001AA720 - 0x001AA91A (506 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA720:
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(ebp + 0x144331));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA73F; /* jne: not equal / not zero */

loc_001AA735:
    SET_LO8(eax, MEM8(ebp + 0x144330));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA7AE; /* je: equal / zero */

loc_001AA73F:
    SET_LO8(eax, 0); /* xor self */
    edi = esp + 0x10;
    edx = 0x4AE20C;
    PUSH32(esp, 0); sub_00017BB0(); /* call 0x00017BB0 */

loc_001AA74F:
    eax = edi;
    edx = 4;

loc_001AA756:
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001AA76C; /* je: equal / zero */

loc_001AA75C:
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(ecx + 0x184) = xmm0.f[0]; /* movss */

loc_001AA76C:
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_001AA756; /* jne: not equal / not zero */

loc_001AA772:
    SET_LO8(eax, 1);
    edi = esp + 0x10;
    edx = 0x4AE20C;
    PUSH32(esp, 0); sub_00017BB0(); /* call 0x00017BB0 */

loc_001AA782:
    eax = edi;
    edx = 4;
    /* nop */

loc_001AA790:
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001AA7A6; /* je: equal / zero */

loc_001AA796:
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(ecx + 0x184) = xmm0.f[0]; /* movss */

loc_001AA7A6:
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_001AA790; /* jne: not equal / not zero */

loc_001AA7AC:
    goto loc_001AA7C8;

loc_001AA7AE:
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    ebx = 0x60E040;
    PUSH32(esp, 0); sub_00188D70(); /* call 0x00188D70 */

loc_001AA7BC:
    ecx = ebp + 0x12ADB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019B1E0(); /* call 0x0019B1E0 */

loc_001AA7C8:
    edx = MEM32(ebp + 0x12B790);
    edx = edx | MEM32(ebp + 0x12B794);
    if ((edx == 0)) goto loc_001AA913; /* je: equal / zero */

loc_001AA7DA:
    if (CMP_NE(MEM32(0x4D537C), 0xFFFFFFFFu)) goto loc_001AA7EA; /* jne: not equal / not zero */

loc_001AA7E3:
    esi = ebp;
    PUSH32(esp, 0); sub_001AA920(); /* call 0x001AA920 */

loc_001AA7EA:
    SET_LO8(eax, MEM8(ebp + 0x144331));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA913; /* jne: not equal / not zero */

loc_001AA7F8:
    SET_LO8(eax, MEM8(ebp + 0x144330));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA913; /* jne: not equal / not zero */

loc_001AA806:
    eax = MEM32(ebp + 0x12B79C);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AA82D; /* jle: less or equal (signed <=) */

loc_001AA812:
    edi = ebp + 0x12B7A8;

loc_001AA818:
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001AA81F:
    eax = MEM32(ebp + 0x12B79C);
    esi++;
    edi = edi + 4;
    if (CMP_L(esi, eax)) goto loc_001AA818; /* jl: less (signed <) */

loc_001AA82D:
    ecx = ebp + 0x126B50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0018E890(); /* call 0x0018E890 */

loc_001AA839:
    ebx = ebp + 0x4DE0;
    PUSH32(esp, 0); sub_001A20F0(); /* call 0x001A20F0 */

loc_001AA844:
    esi = ebp + 0x1265C0;
    PUSH32(esp, 0); sub_0018BC90(); /* call 0x0018BC90 */

loc_001AA84F:
    edx = MEM32(ebp + 0x1C);
    eax = ebp + 0x3C910;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110AF0(); /* call 0x00110AF0 */

loc_001AA85F:
    esi = 0x5A9A00;
    PUSH32(esp, 0); sub_0017F290(); /* call 0x0017F290 */

loc_001AA869:
    eax = MEM32(ebp + 0x12B79C);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AA89A; /* jle: less or equal (signed <=) */

loc_001AA875:
    ebx = ebp + 0x3C98C;
    goto loc_001AA880;

    /* nop */

loc_001AA880:
    esi = MEM32(ebx);
    PUSH32(esp, 0x5A9A00);
    PUSH32(esp, 0); sub_001803C0(); /* call 0x001803C0 */

loc_001AA88C:
    eax = MEM32(ebp + 0x12B79C);
    edi++;
    ebx = ebx + 0x30;
    if (CMP_L(edi, eax)) goto loc_001AA880; /* jl: less (signed <) */

loc_001AA89A:
    eax = MEM32(ebp + 0x12359C);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AA8CA; /* jle: less or equal (signed <=) */

loc_001AA8A6:
    ebx = ebp + 0x123490;
    /* nop */

loc_001AA8B0:
    esi = MEM32(ebx);
    eax = 0x5A9A00;
    PUSH32(esp, 0); sub_00180520(); /* call 0x00180520 */

loc_001AA8BC:
    eax = MEM32(ebp + 0x12359C);
    edi++;
    ebx = ebx + 4;
    if (CMP_L(edi, eax)) goto loc_001AA8B0; /* jl: less (signed <) */

loc_001AA8CA:
    PUSH32(esp, 0x5A9A00);
    PUSH32(esp, 0); sub_001839E0(); /* call 0x001839E0 */

loc_001AA8D4:
    esi = 0x5A9A00;
    PUSH32(esp, 0); sub_0017F360(); /* call 0x0017F360 */

loc_001AA8DE:
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    eax = ebp + 0x128D10;
    PUSH32(esp, 0); sub_00164FB0(); /* call 0x00164FB0 */

loc_001AA8ED:
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    eax = ebp + 0x129D60;
    PUSH32(esp, 0); sub_00164FB0(); /* call 0x00164FB0 */

loc_001AA8FC:
    PUSH32(esp, 0); sub_0017AAC0(); /* call 0x0017AAC0 */

loc_001AA901:
    esi = ebp + 0x3C910;
    PUSH32(esp, 0); sub_00111850(); /* call 0x00111850 */

loc_001AA90C:
    edi = ebp;
    PUSH32(esp, 0); sub_001AB560(); /* call 0x001AB560 */

loc_001AA913:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;

}
