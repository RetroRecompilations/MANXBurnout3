#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00135500
 * Original: 0x00135500 - 0x0013569C (412 bytes, 91 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135500(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00135500:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(0x3EBFCC) = xmm1.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(esi + 0x6B64));
    MEMF(0x4A1EF0) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esi + 0x4798) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC424); /* movss */
    PUSH32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x4794) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x479C) = xmm1.f[0]; /* movss */
    edi = 0x1E;

loc_00135562:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_00135567:
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D53AC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4AE1FC); /* mulss */
    eax = ZX8(MEM8(esi + 0x6B64));
    edx = MEM32(0x3EBFD0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x4AE200);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBFCC); /* mulss */
    PUSH32(esp, ecx);
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA530(); /* call 0x001CA530 */

loc_001355B3:
    PUSH32(esp, 0); sub_001F5840(); /* call 0x001F5840 */

loc_001355B8:
    edi--;
    if ((edi != 0)) goto loc_00135562; /* jne: not equal / not zero */

loc_001355BB:
    PUSH32(esp, ebx);
    ebx = esi + 0x62D8;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_001355C7:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_001355CC:
    ecx = esi + 0x534;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CD760(); /* call 0x001CD760 */

loc_001355D8:
    eax = esi + 0x2DC4;
    PUSH32(esp, 0); sub_001CC0C0(); /* call 0x001CC0C0 */

loc_001355E3:
    ebx = esi + 8;
    PUSH32(esp, 0); sub_001CE1F0(); /* call 0x001CE1F0 */

loc_001355EB:
    PUSH32(esp, 0); sub_001F5840(); /* call 0x001F5840 */

loc_001355F0:
    eax = MEM32(esi + 0x6B50);
    if (TEST_Z(eax, eax)) goto loc_0013560F; /* je: equal / zero */

loc_001355FA:
    ebx = esi + 0x4E4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_00135605:
    MEM32(esi + 0x6B50) = 0;

loc_0013560F:
    edi = 0x1E;
    POP32(esp, ebx);

loc_00135615:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_0013561A:
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D53AC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4AE1FC); /* mulss */
    edx = MEM32(0x4AE200);
    eax = MEM32(0x3EBFD0);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x6B64));
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBFCC); /* mulss */
    PUSH32(esp, ecx);
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA530(); /* call 0x001CA530 */

loc_00135665:
    PUSH32(esp, 0); sub_001F5840(); /* call 0x001F5840 */

loc_0013566A:
    edi--;
    if ((edi != 0)) goto loc_00135615; /* jne: not equal / not zero */

loc_0013566D:
    PUSH32(esp, 0); sub_001CA5A0(); /* call 0x001CA5A0 */

loc_00135672:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00135679; /* jne: not equal / not zero */

loc_00135676:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135679:
    MEM32(0x3F9D04) = 2;
    POP32(esp, edi);
    MEM32(esi + 0x6B54) = 0;
    MEM32(esi + 0x2E00) = 0x18;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
