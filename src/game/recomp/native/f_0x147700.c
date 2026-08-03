#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00147700
 * Original: 0x00147700 - 0x001477F4 (244 bytes, 81 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147700(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00147700:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xC0);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0014773E; /* je: equal / zero */

loc_0014770E:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00147718:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00147722:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0xC0) = ebx;

loc_0014773E:
    esi = MEM32(edi + 0xC4);
    if (CMP_EQ(esi, ebx)) goto loc_00147778; /* je: equal / zero */

loc_00147748:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00147752:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014775C:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0xC4) = ebx;

loc_00147778:
    esi = MEM32(edi + 0xC8);
    if (CMP_EQ(esi, ebx)) goto loc_001477B2; /* je: equal / zero */

loc_00147782:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014778C:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00147796:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0xC8) = ebx;

loc_001477B2:
    MEM32(edi + 0x110) = 0xFFFFFFFFu;
    MEM32(edi) = ebx;
    MEM8(edi + 0x124) = LO8(ebx);
    eax = MEM32(edi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_001477E7; /* je: equal / zero */

loc_001477CB:
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001477D0:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001477E4; /* je: equal / zero */

loc_001477D4:
    esi = MEM32(edi + 0x10);
    eax = MEM32(esi + 0x14);
    if (CMP_NE(eax, MEM32(edi + 0x44))) goto loc_001477E4; /* jne: not equal / not zero */

loc_001477DF:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_001477E4:
    MEM32(edi + 0x10) = ebx;

loc_001477E7:
    POP32(esp, esi);
    MEM8(edi + 0x14) = LO8(ebx);
    MEM32(edi + 0x44) = ebx;
    MEM8(edi + 0x16) = 0x3C;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
