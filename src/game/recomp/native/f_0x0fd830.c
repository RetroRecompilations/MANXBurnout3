#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FD830
 * Original: 0x000FD830 - 0x000FDAAB (635 bytes, 159 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD830:
    esp = esp - 0xC;
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x9A50);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_000FDA68; /* je: equal / zero */

loc_000FD854:
    eax = MEM32(ebp + 0x30E1C);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_000FD8AD; /* jne: not equal / not zero */

loc_000FD860:
    SET_LO8(eax, MEM8(0x57BD1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FDA66; /* je: equal / zero */

loc_000FD86D:
    eax = MEM32(ebp + 0x937C);
    edi = ebp + 0x937C;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x78), _icall_esp); /* indirect call */
    }

loc_000FD87E:
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000FDA66; /* je: equal / zero */

loc_000FD887:
    ebx = eax;
    PUSH32(esp, 0); sub_001BD970(); /* call 0x001BD970 */

loc_000FD88E:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002147A0(); /* call 0x002147A0 */

loc_000FD89A:
    esp = esp + 0x10;
    MEM32(ebp + 0x30E1C) = eax;
    MEM32(ebp + 0x30E20) = 0xFFFFFFFFu;

loc_000FD8AD:
    /* cmp MEM32(ebp + 0x30E20), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(ebp + 0x30E20), 0xFFFFFFFFu)) goto loc_000FD9BC; /* je: equal / zero */

loc_000FD8BB:
    ecx = MEM32(ebp + 0x30E1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00020CD0(); /* call 0x00020CD0 */

loc_000FD8C7:
    ecx = MEM32(ebp + 0x30E1C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00214910(); /* call 0x00214910 */

loc_000FD8DD:
    esp = esp + 0x10;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_000FDA65; /* je: equal / zero */

loc_000FD8EC:
    ebx = MEM32(ebp + 0x30E20);
    edi = 0x572980;
    PUSH32(esp, 0); sub_001B7E70(); /* call 0x001B7E70 */

loc_000FD8FC:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_000FD9A4; /* je: equal / zero */

loc_000FD906:
    eax = MEM32(esi + 0x4F0);
    ebx = 1;
    if (CMP_NE(eax, ebx)) goto loc_000FD9A4; /* jne: not equal / not zero */

loc_000FD919:
    eax = MEM32(esp + 0x10);
    if (CMP_LE(eax & eax, 0)) goto loc_000FD99A; /* jle: less or equal (signed <=) */

loc_000FD921:
    MEM32(esi + 0x4F0) = 2;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0); sub_000FBE80(); /* call 0x000FBE80 */

loc_000FD937:
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x28) = eax;
    SET_LO8(eax, MEM8(esi + 0x5C0));
    if (TEST_Z(LO8(eax), 2)) goto loc_000FD950; /* je: equal / zero */

loc_000FD948:
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0x5C0) = LO8(eax);

loc_000FD950:
    SET_LO8(eax, MEM8(esi + 0x5C0));
    SET_LO16(ecx, MEM16(0x4A1D84));
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(esi + 0x5C2) = LO8(ebx);
    MEM8(esi + 0x5C3) = 6;
    MEM16(esi + 0x5CC) = LO16(ecx);
    MEM8(esi + 0x5C0) = LO8(eax);
    edx = MEM32(esi + 8);
    edi = esi + 0x14;
    ebx = ebp + 0xFAC;
    MEMF(esi + 0x5D0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001045F0(); /* call 0x001045F0 */

loc_000FD998:
    goto loc_000FD9A4;

loc_000FD99A:
    MEM32(esi + 0x4F0) = 4;

loc_000FD9A4:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEM32(ebp + 0x30E20) = 0xFFFFFFFFu;
    MEMF(ebp + 0x30E24) = xmm0.f[0]; /* movss */

loc_000FD9BC:
    edx = MEM32(0x5729A8);
    eax = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_000FDA12; /* jle: less or equal (signed <=) */

loc_000FD9CC:
    /* nop */

loc_000FD9D0:
    esi = MEM32(eax * 4 + 0x572988);
    if (TEST_Z(esi, esi)) goto loc_000FDA09; /* je: equal / zero */

loc_000FD9DB:
    if (CMP_NE(MEM32(ebp + 0x30E20), 0xFFFFFFFFu)) goto loc_000FDA09; /* jne: not equal / not zero */

loc_000FD9E4:
    ecx = MEM32(esi + 0x4F0);
    if (TEST_NZ(ecx, ecx)) goto loc_000FDA09; /* jne: not equal / not zero */

loc_000FD9EE:
    ebx = MEM32(esi + 8);
    edi = 0x57BCFC;
    PUSH32(esp, 0); sub_001BD970(); /* call 0x001BD970 */

loc_000FD9FB:
    if (TEST_NZ(eax, eax)) goto loc_000FDA6F; /* jne: not equal / not zero */

loc_000FD9FF:
    edx = MEM32(0x5729A8);
    eax = MEM32(esp + 0x10);

loc_000FDA09:
    eax++;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_000FD9D0; /* jl: less (signed <) */

loc_000FDA12:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x30E24); /* subss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_000FDA65; /* ja: above (unsigned >) */

loc_000FDA2D:
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_000FDA65; /* jle: less or equal (signed <=) */

loc_000FDA33:
    esi = 4;
    goto loc_000FDA40;

    /* nop */

loc_000FDA40:
    eax = MEM32(ecx * 4 + 0x572988);
    if (TEST_Z(eax, eax)) goto loc_000FDA60; /* je: equal / zero */

loc_000FDA4B:
    if (CMP_NE(MEM32(eax + 0x4F0), 2)) goto loc_000FDA60; /* jne: not equal / not zero */

loc_000FDA54:
    MEM32(eax + 0x4F0) = esi;
    edx = MEM32(0x5729A8);

loc_000FDA60:
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_000FDA40; /* jl: less (signed <) */

loc_000FDA65:
    POP32(esp, esi);

loc_000FDA66:
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000FDA68:
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_000FDA6F:
    edx = MEM32(ebp + 0x30E1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00214840(); /* call 0x00214840 */

loc_000FDA81:
    eax = MEM32(esi + 8);
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    esp = esp + 0xC;
    MEM32(esi + 0x4F0) = 1;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(ebp + 0x30E20) = eax;
    MEMF(ebp + 0x30E24) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);

}
