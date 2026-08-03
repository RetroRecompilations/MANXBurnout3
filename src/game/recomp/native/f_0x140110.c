#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_00140110
 * Original: 0x00140110 - 0x001401EC (220 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140110(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00140110:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esi) = LO8(eax);
    MEM8(esi + 0x69) = LO8(ebx);
    MEM8(esi + 0x6A) = LO8(ebx);
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM8(esi + 0x6B) = LO8(ebx);
    MEM32(esi + 0x60) = 0x3E7;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x74) = 2;
    MEM8(esi + 1) = LO8(ebx);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM8(esi + 0x13) = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00140194; /* je: equal / zero */

loc_00140151:
    eax = MEM32(esi + 0x7C);
    if (CMP_EQ(eax, ebx)) goto loc_0014016D; /* je: equal / zero */

loc_00140158:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_00140162:
    MEM32(esi + 0x7C) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014016D:
    if (CMP_NE(MEM32(esi + 0x78), ebx)) goto loc_001401D2; /* jne: not equal / not zero */

loc_00140172:
    PUSH32(esp, 0x1000);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0013F9C0(); /* call 0x0013F9C0 */

loc_0014017E:
    PUSH32(esp, eax);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_00140189:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x78) = eax;
    if (CMP_NE(eax, ebx)) goto loc_001401D2; /* jne: not equal / not zero */

loc_00140190:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00140194:
    eax = MEM32(esi + 0x78);
    if (CMP_EQ(eax, ebx)) goto loc_001401B0; /* je: equal / zero */

loc_0014019B:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_001401A5:
    MEM32(esi + 0x78) = 0;

loc_001401AC:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001401B0:
    if (CMP_NE(MEM32(esi + 0x7C), ebx)) goto loc_001401D2; /* jne: not equal / not zero */

loc_001401B5:
    eax = MEM32(0x3EC264);
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_frontend_alloc;
        if (traced_frontend_alloc++ < 8)
            fprintf(stderr,
                    "[B3-FE] 140110 allocate fs=%08X name=%08X current=%08X/%08X esp=%08X\n",
                    0x40B7F4u, eax, MEM32(esi + 0x78), MEM32(esi + 0x7C), esp);
    }
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_001401CB:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x7C) = eax;
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_frontend_result;
        if (traced_frontend_result++ < 8)
            fprintf(stderr, "[B3-FE] 140110 allocation result=%08X esp=%08X\n", eax, esp);
    }
    if (CMP_EQ(eax, ebx)) goto loc_001401AC; /* je: equal / zero */

loc_001401D2:
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM8(esi + 0x10) = LO8(ebx);
    MEM8(esi + 0x11) = LO8(ebx);
    MEM8(esi + 0x12) = LO8(ebx);
    MEM32(esi + 0x70) = 0xFFFFFFFFu;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
