#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FC710
 * Original: 0x000FC710 - 0x000FC988 (632 bytes, 182 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC710:
    PUSH32(esp, ecx);
    if (CMP_NE(MEM32(esi + 0x30A84), 0x17)) goto loc_000FC986; /* jne: not equal / not zero */

loc_000FC71E:
    eax = MEM32(0x57BB38);
    if (TEST_Z(eax, eax)) goto loc_000FC740; /* je: equal / zero */

loc_000FC727:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242740(); /* call 0x00242740 */

loc_000FC72D:
    eax = eax >> 6;
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esp + 3) = LO8(eax);
    if ((LO8(eax) != 0)) goto loc_000FC767; /* jne: not equal / not zero */

loc_000FC73B:
    eax = MEM32(0x57BB38);

loc_000FC740:
    ecx = MEM32(0x57BC20);
    if (TEST_NZ(ecx, ecx)) goto loc_000FC7BF; /* jne: not equal / not zero */

loc_000FC74A:
    if (TEST_Z(eax, eax)) goto loc_000FC7BF; /* je: equal / zero */

loc_000FC74E:
    PUSH32(esp, 1);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242770(); /* call 0x00242770 */

loc_000FC75B:
    MEM32(0x57BC20) = 1;
    goto loc_000FC7BC;

loc_000FC767:
    ecx = MEM32(0x57BC20);
    if (TEST_Z(ecx, ecx)) goto loc_000FC7BF; /* je: equal / zero */

loc_000FC771:
    eax = MEM32(0x57BC24);
    if (TEST_NZ(eax, eax)) goto loc_000FC7BF; /* jne: not equal / not zero */

loc_000FC77A:
    eax = MEM32(0x57BB38);
    if (TEST_Z(eax, eax)) goto loc_000FC7BF; /* je: equal / zero */

loc_000FC783:
    if (CMP_NE(ecx, 2)) goto loc_000FC7A5; /* jne: not equal / not zero */

loc_000FC788:
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242760(); /* call 0x00242760 */

loc_000FC790:
    eax = MEM32(0x57BB38);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242750(); /* call 0x00242750 */

loc_000FC79D:
    eax = MEM32(0x57BB38);
    esp = esp + 0x10;

loc_000FC7A5:
    PUSH32(esp, 0);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242770(); /* call 0x00242770 */

loc_000FC7B2:
    MEM32(0x57BC20) = 0;

loc_000FC7BC:
    esp = esp + 0xC;

loc_000FC7BF:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    SET_LO8(eax, MEM8(esi + 0x30DD8));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(0x4A1D84);
    MEMF(0x478928) = xmm0.f[0]; /* movss */
    MEMF(0x468924) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x30D98); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x4AE1FC); /* addss */
    MEMF(esi + 0x30D98) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FC88E; /* je: equal / zero */

loc_000FC803:
    /* cmp edx, 0x55555555 - flags set for next jcc */
    eax = MEM32(0x4D6B2C);
    if (CMP_AE(edx, 0x55555555)) goto loc_000FC817; /* jae: above or equal (unsigned >=) */

loc_000FC810:
    if (CMP_A(eax, 0xAAAAAAAAu)) goto loc_000FC82A; /* ja: above (unsigned >) */

loc_000FC817:
    if (CMP_AE(eax, 0x55555555)) goto loc_000FC826; /* jae: above or equal (unsigned >=) */

loc_000FC81E:
    if (CMP_A(edx, 0xAAAAAAAAu)) goto loc_000FC866; /* ja: above (unsigned >) */

loc_000FC826:
    if (CMP_BE(edx, eax)) goto loc_000FC866; /* jbe: below or equal (unsigned <=) */

loc_000FC82A:
    if (CMP_AE(edx, 0x55555555)) goto loc_000FC850; /* jae: above or equal (unsigned >=) */

loc_000FC832:
    if (CMP_BE(eax, 0xAAAAAAAAu)) goto loc_000FC850; /* jbe: below or equal (unsigned <=) */

loc_000FC839:
    ecx = edx;
    ecx = ecx - eax;
    ecx--;
    eax = ecx;
    ecx = MEM32(esi + 0x30DD0);
    ecx = ecx - eax;
    MEM32(esi + 0x30DD4) = ecx;
    goto loc_000FC898;

loc_000FC850:
    ecx = edx;
    ecx = ecx - eax;
    eax = ecx;
    ecx = MEM32(esi + 0x30DD0);
    ecx = ecx - eax;
    MEM32(esi + 0x30DD4) = ecx;
    goto loc_000FC898;

loc_000FC866:
    if (CMP_AE(eax, 0x55555555)) goto loc_000FC87A; /* jae: above or equal (unsigned >=) */

loc_000FC86D:
    if (CMP_BE(edx, 0xAAAAAAAAu)) goto loc_000FC87A; /* jbe: below or equal (unsigned <=) */

loc_000FC875:
    eax = eax - edx;
    eax--;
    goto loc_000FC87C;

loc_000FC87A:
    eax = eax - edx;

loc_000FC87C:
    ecx = MEM32(esi + 0x30DD0);
    eax = (uint32_t)(-(int32_t)eax);
    ecx = ecx - eax;
    MEM32(esi + 0x30DD4) = ecx;
    goto loc_000FC898;

loc_000FC88E:
    MEM32(esi + 0x30DD4) = 0;

loc_000FC898:
    eax = edx;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_000FC8A2; /* jne: not equal / not zero */

loc_000FC8A0:
    eax = 0; /* xor self */

loc_000FC8A2:
    eax = ZX16(LO16(eax));
    MEM32(esi + 0x88) = eax;
    if (CMP_NE(MEM32(esi), 0x17)) goto loc_000FC8BC; /* jne: not equal / not zero */

loc_000FC8B0:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001B7EF0(); /* call 0x001B7EF0 */

loc_000FC8B6:
    edx = MEM32(0x4A1D84);

loc_000FC8BC:
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_NE(LO16(edi), 0xFFFF)) goto loc_000FC8C8; /* jne: not equal / not zero */

loc_000FC8C6:
    edi = 0; /* xor self */

loc_000FC8C8:
    PUSH32(esp, 0); sub_002159B0(); /* call 0x002159B0 */

loc_000FC8CD:
    edx = MEM32(esi + 0x92BC);
    ecx = ZX16(LO16(edi));
    MEM32(esi + 0x92B8) = ecx;
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_000FC908; /* jle: less or equal (signed <=) */

loc_000FC8E5:
    PUSH32(esp, ebp);
    ebp = esi + 8;
    /* nop */

loc_000FC8F0:
    eax = MEM32(ebp);
    if (TEST_Z(eax, eax)) goto loc_000FC8FC; /* je: equal / zero */

loc_000FC8F7:
    PUSH32(esp, 0); sub_00101C90(); /* call 0x00101C90 */

loc_000FC8FC:
    eax = MEM32(esi + 0x28);
    edi++;
    ebp = ebp + 4;
    if (CMP_L(edi, eax)) goto loc_000FC8F0; /* jl: less (signed <) */

loc_000FC907:
    POP32(esp, ebp);

loc_000FC908:
    eax = MEM32(esi + 0x937C);
    ecx = esi + 0x937C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_000FC917:
    SET_LO8(eax, MEM8(esi + 0x996D));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FC941; /* je: equal / zero */

loc_000FC922:
    eax = MEM32(esi + 0x9964);
    if (TEST_Z(eax, eax)) goto loc_000FC941; /* je: equal / zero */

loc_000FC92C:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00212910(); /* call 0x00212910 */

loc_000FC932:
    ecx = MEM32(esi + 0x9964);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00211690(); /* call 0x00211690 */

loc_000FC93E:
    esp = esp + 8;

loc_000FC941:
    eax = MEM32(esi + 0x91B8);
    if (TEST_Z(eax, eax)) goto loc_000FC980; /* je: equal / zero */

loc_000FC94B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242740(); /* call 0x00242740 */

loc_000FC951:
    ecx = MEM32(0x57C2E8);
    eax = SX8(LO8(eax));
    eax = eax & 0x40;
    eax = eax >> 6;
    esp = esp + 4;
    if (CMP_EQ(ecx, eax)) goto loc_000FC980; /* je: equal / zero */

loc_000FC967:
    ecx = MEM32(0x57C2E4);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x57C2E8) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_000FC980; /* je: equal / zero */

loc_000FC976:
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00211750(); /* call 0x00211750 */

loc_000FC97D:
    esp = esp + 8;

loc_000FC980:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000FD830(); /* call 0x000FD830 */

loc_000FC986:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
