#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221050
 * Original: 0x00221050 - 0x00221190 (320 bytes, 129 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221050:
    eax = MEM32(esp + 8);
    if (CMP_GE(eax & eax, 0)) goto loc_0022105B; /* jge: greater or equal (signed >=) */

loc_00221058:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0022105B:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00221065:
    edx = MEM32(esp + 0x14);
    ebp = eax;
    eax = 0; /* xor self */
    ecx = 0x17;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + 8) = 0x220FC0;
    MEM32(ebp + 0xC) = 0x221020;
    SET_LO8(eax, MEM8(edx));
    esp = esp + 4;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002210A6; /* je: equal / zero */

loc_0022108F:
    /* nop */

loc_00221090:
    if (CMP_EQ(LO8(eax), 0x2E)) goto loc_0022109C; /* je: equal / zero */

loc_00221094:
    if (CMP_L(LO8(eax), 0x30)) goto loc_002210A6; /* jl: less (signed <) */

loc_00221098:
    if (CMP_G(LO8(eax), 0x39)) goto loc_002210A6; /* jg: greater (signed >) */

loc_0022109C:
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00221090; /* jne: not equal / not zero */

loc_002210A4:
    goto loc_002210AB;

loc_002210A6:
    if (CMP_NE(MEM8(ecx), 0)) goto loc_00221122; /* jne: not equal / not zero */

loc_002210AB:
    esi = 0; /* xor self */
    /* nop */

loc_002210B0:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx));
    ecx = 0; /* xor self */
    if (CMP_L(LO8(eax), 0x30)) goto loc_002210D4; /* jl: less (signed <) */

loc_002210BA:
    /* nop */

loc_002210C0:
    if (CMP_G(LO8(eax), 0x39)) goto loc_002210D4; /* jg: greater (signed >) */

loc_002210C4:
    eax = eax & 0xF;
    ecx = ecx + ecx * 4;
    edx++;
    ecx = eax + ecx * 2;
    SET_LO8(eax, MEM8(edx));
    if (CMP_GE(LO8(eax), 0x30)) goto loc_002210C0; /* jge: greater or equal (signed >=) */

loc_002210D4:
    edi = (uint32_t)(int32_t)SMEM8(edx);
    eax = 0; /* xor self */
    /* cmp esi, 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(esi, 3)) ? 1 : 0); /* setge */
    eax--;
    eax = eax & 0x2E;
    if (CMP_NE(edi, eax)) goto loc_0022110E; /* jne: not equal / not zero */

loc_002210E7:
    if (CMP_G(ecx, 0xFF)) goto loc_0022110E; /* jg: greater (signed >) */

loc_002210EF:
    eax = MEM32(ebp + 4);
    eax = eax << 8;
    eax = eax | ecx;
    edx++;
    esi++;
    /* cmp esi, 4 - flags set for next jcc */
    MEM32(ebp + 4) = eax;
    MEM32(ebp) = 1;
    if (CMP_L(esi, 4)) goto loc_002210B0; /* jl: less (signed <) */

loc_00221108:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0022110E:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0xFFFFFFFEu;
    MEM32(ebp + 4) = 0;
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00221122:
    eax = MEM32(0x41CFF0);
    if (TEST_Z(eax, eax)) goto loc_0022113B; /* je: equal / zero */

loc_0022112B:
    POP32(esp, edi);
    MEM32(ebp + 4) = eax;
    POP32(esp, esi);
    MEM32(ebp) = 1;
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0022113B:
    PUSH32(esp, ebx);
    ebx = ebp + 0x10;
    esi = edx;
    ecx = 0x10;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(ebp + 0x4F) = 0;
    PUSH32(esp, 0); sub_003398C9(); /* call 0x003398C9 */

loc_00221153:
    esi = ebp + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x54) = eax;
    MEM32(esi) = 0;
    PUSH32(esp, 0); sub_003392D6(); /* call 0x003392D6 */

loc_00221167:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00221108; /* je: equal / zero */

loc_0022116C:
    esi = MEM32(esi);
    if (TEST_Z(esi, esi)) goto loc_00221178; /* je: equal / zero */

loc_00221172:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003392ED(); /* call 0x003392ED */

loc_00221178:
    ecx = MEM32(ebp + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003398D6(); /* call 0x003398D6 */

loc_00221181:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_00221187:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
