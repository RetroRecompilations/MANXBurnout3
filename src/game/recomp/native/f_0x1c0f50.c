#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C0F50
 * Original: 0x001C0F50 - 0x001C0FDE (142 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0F50(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001C0F50:
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edx));
    PUSH32(esp, esi);
    eax = ecx;
    eax = eax & 0x7F;
    eax = MEM32(edi + eax * 4 + 0x20);
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C0F75; /* je: equal / zero */

loc_001C0F65:
    esi = MEM32(edi + 0x1C);

loc_001C0F68:
    if (CMP_EQ(eax, esi)) goto loc_001C0F75; /* je: equal / zero */

loc_001C0F6C:
    eax = eax + 0x20;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C0F68; /* jne: not equal / not zero */

loc_001C0F75:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    ecx = eax;
    edx = edx + 2;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_001C0FC9; /* je: equal / zero */

loc_001C0F8C:
    /* nop */

loc_001C0F90:
    xmm0.f[0] = MEMF(ecx + 0x18); /* movss */
    ecx = eax;
    ecx = ecx & 0x7F;
    ecx = MEM32(edi + ecx * 4 + 0x20);
    /* cmp MEM16(ecx + 0x1C), LO16(eax) - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    if (CMP_EQ(MEM16(ecx + 0x1C), LO16(eax))) goto loc_001C0FBD; /* je: equal / zero */

loc_001C0FAB:
    esi = MEM32(edi + 0x1C);
    edi = edi;

loc_001C0FB0:
    if (CMP_EQ(ecx, esi)) goto loc_001C0FBD; /* je: equal / zero */

loc_001C0FB4:
    ecx = ecx + 0x20;
    if (CMP_NE(MEM16(ecx + 0x1C), LO16(eax))) goto loc_001C0FB0; /* jne: not equal / not zero */

loc_001C0FBD:
    SET_LO16(eax, MEM16(edx + 2));
    edx = edx + 2;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_001C0F90; /* jne: not equal / not zero */

loc_001C0FC9:
    xmm0.f[0] = MEMF(ecx + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
