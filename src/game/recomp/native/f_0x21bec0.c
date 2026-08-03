#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021BEC0
 * Original: 0x0021BEC0 - 0x0021BFB3 (243 bytes, 96 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021BEC0:
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    /* cmp ecx, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(ecx, 1)) goto loc_0021BED3; /* jge: greater or equal (signed >=) */

loc_0021BECA:
    eax = MEM32(ebx);
    if (CMP_L(eax, 1)) goto loc_0021BEEE; /* jl: less (signed <) */

loc_0021BED1:
    goto loc_0021BEE9;

loc_0021BED3:
    eax = MEM32(ebx + 0x18);
    esi = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (TEST_Z(esi, esi)) goto loc_0021BEE9; /* je: equal / zero */

loc_0021BEE2:
    eax = eax + esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);

loc_0021BEE9:
    if (CMP_GE(eax, 2)) goto loc_0021BEF3; /* jge: greater or equal (signed >=) */

loc_0021BEEE:
    eax = 2;

loc_0021BEF3:
    eax = eax + 2;
    esi = eax * 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_0021BF03:
    edx = eax;
    esp = esp + 4;
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_0021BFB0; /* je: equal / zero */

loc_0021BF12:
    PUSH32(esp, ebp);
    ecx = esi;
    ebp = ecx;
    ecx = ecx >> 2;
    PUSH32(esp, edi);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebx + 0x3C);
    MEM32(edx) = eax;
    MEM32(esi + edx + -4) = 0xFFFFFFFFu;
    eax = edx + 4;
    MEM32(ebx + 0x3C) = edx;
    /* cmp MEM32(eax), 0 - flags set for next jcc */
    ebp = 1;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0021BF59; /* jne: not equal / not zero */

loc_0021BF43:
    ecx = eax;

loc_0021BF45:
    edx = MEM32(ebx + 0x38);
    MEM32(ecx) = edx;
    eax = eax + 4;
    MEM32(ebx + 0x38) = ecx;
    edx = MEM32(eax);
    ebp++;
    /* test edx, edx - flags set for next jcc */
    ecx = eax;
    if (TEST_Z(edx, edx)) goto loc_0021BF45; /* je: equal / zero */

loc_0021BF59:
    esi = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 0x18);
    eax = ebp + -1;
    esi = esi + eax;
    eax = esi;
    ecx = ecx + eax;
    ecx = ecx << 3;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x10) = esi;
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_0021BF74:
    esi = MEM32(ebx + 0x40);
    esp = esp + 4;
    /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(esi, esi)) goto loc_0021BFA8; /* je: equal / zero */

loc_0021BF82:
    ecx = MEM32(ebx + 0x18);
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_0021BFA1:
    eax = MEM32(esp + 0x10);
    esp = esp + 4;

loc_0021BFA8:
    MEM32(ebx + 0x40) = eax;
    POP32(esp, edi);
    eax = ebp + -1;
    POP32(esp, ebp);

loc_0021BFB0:
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
