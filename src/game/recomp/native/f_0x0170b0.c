#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_000170B0
 * Original: 0x000170B0 - 0x00017194 (228 bytes, 57 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000170B0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_000170B0:
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x4A4B90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000170D5; /* je: equal / zero */

loc_000170BA:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) goto loc_000170D5; /* je: equal / zero */

loc_000170C4:
    edx = MEM32(0x567178);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000170D5:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 170B0 scene audio state=%u esp=%08X\n",
                MEM32(0x40E124), esp);
    if (CMP_NE(MEM32(0x40E124), 0x17)) goto loc_000170E8; /* jne: not equal / not zero */

loc_000170DE:
    eax = 0x40E120;
    PUSH32(esp, 0); sub_0013EF40(); /* call 0x0013EF40 */

loc_000170E8:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 170B0 after 13EF40 esp=%08X\n", esp);
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_000170ED:
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D53AC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4AE1FC); /* mulss */
    eax = MEM32(0x4AE200);
    edx = ZX8(MEM8(0x411E74));
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EBFD0);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBFCC); /* mulss */
    PUSH32(esp, ecx);
    eax = 0x40B310;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA530(); /* call 0x001CA530 */

loc_0001713B:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 170B0 after native audio update esp=%08X\n", esp);
    PUSH32(esp, 0); sub_001F5840(); /* call 0x001F5840 */

loc_00017140:
    /* cmp MEM32(edi + 0x2E1DC), 0xFFFFFFFFu - flags set for next jcc */
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x2E20C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x60EA1C); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x2E210) = xmm0.f[0]; /* movss */
    if (CMP_NE(MEM32(edi + 0x2E1DC), 0xFFFFFFFFu)) goto loc_00017192; /* jne: not equal / not zero */

loc_00017166:
    SET_LO8(eax, MEM8(0x4A4B91));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017192; /* je: equal / zero */

loc_0001716F:
    eax = MEM32(esp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = edi + 0x28980;
    PUSH32(esp, 0); sub_00167940(); /* call 0x00167940 */

loc_0001717F:
    ecx = MEM32(edi + 0x2E210);
    PUSH32(esp, ecx);
    esi = edi + 0x295D0;
    PUSH32(esp, 0); sub_00167940(); /* call 0x00167940 */

loc_00017191:
    POP32(esp, esi);

loc_00017192:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
