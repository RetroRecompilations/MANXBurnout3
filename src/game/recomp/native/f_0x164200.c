#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00164200
 * Original: 0x00164200 - 0x00164393 (403 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm4, xmm5;

loc_00164200:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    xmm0.f[0] = MEMF(0x38994C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x40);
    xmm4.f[0] = MEMF(eax + 0xBC); /* movss */
    SET_LO8(eax, MEM8(eax + 0x215));
    /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    if (CMP_EQ(LO8(eax), 1)) goto loc_00164239; /* je: equal / zero */

loc_0016422D:
    if (CMP_EQ(LO8(eax), 2)) goto loc_00164239; /* je: equal / zero */

loc_00164231:
    if (CMP_EQ(LO8(eax), 3)) goto loc_00164239; /* je: equal / zero */

loc_00164235:
    if (CMP_NE(LO8(eax), 4)) goto loc_00164273; /* jne: not equal / not zero */

loc_00164239:
    xmm1.f[0] = MEMF(esi + 0x50); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B16E0))) goto loc_00164273; /* jbe: below or equal (unsigned <=) */

loc_00164247:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm1.f[0], MEMF(esi + 0x54) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esi + 0x54))) goto loc_00164273; /* jbe: below or equal (unsigned <=) */

loc_00164255:
    eax = MEM32(esi + 0x40);
    xmm1.f[0] = MEMF(eax + 0xBC); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */

loc_00164273:
    edi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x40);
    if (CMP_NE(eax, MEM32(edi + 0x1000))) goto loc_00164295; /* jne: not equal / not zero */

loc_00164281:
    xmm4.f[0] = xmm4.f[0] + MEMF(0x3A2928); /* addss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00164295:
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x215);
    eax--;
    if (CMP_A(eax, 6)) goto loc_00164387; /* ja: above (unsigned >) */

loc_001642A6:
    { uint32_t _jt = MEM32(eax * 4 + 0x164394); /* switch: 7 entries, 4 targets */
    if (_jt == 0x001642ADu) goto loc_001642AD;
    if (_jt == 0x0016436Bu) goto loc_0016436B;
    if (_jt == 0x0016437Fu) goto loc_0016437F;
    if (_jt == 0x00164387u) goto loc_00164387;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001642AD:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001642B7:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001642CF; /* je: equal / zero */

loc_001642BB:
    xmm4.f[0] = MEMF(0x3A2928); /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001642CF:
    ecx = MEM32(edi + 0x1000);
    ebx = MEM32(esi + 0x40);
    edi = MEM32(ecx + 0x13F4);
    esi = MEM32(ebx + 0x13F4);
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    esi = esi + 0x10D0;
    edi = edi + 0x10D0;
    PUSH32(esp, 0); sub_001942F0(); /* call 0x001942F0 */

loc_001642F8:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00164387; /* je: equal / zero */

loc_00164300:
    SET_LO8(eax, MEM8(ebx + 0x210));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00164387; /* jne: not equal / not zero */

loc_0016430A:
    ecx = edi;
    PUSH32(esp, 0); sub_00194400(); /* call 0x00194400 */

loc_00164311:
    ecx = esi;
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00194400(); /* call 0x00194400 */

loc_0016431B:
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = MEMF(0x3A2808); /* movss */
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm5.f[0])) goto loc_00164387; /* jbe: below or equal (unsigned <=) */

loc_0016432C:
    xmm5.f[0] = xmm5.f[0] * MEMF(0x3B1834); /* mulss */
    edx = MEM32(ebp + 8);
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B1688); /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3A340C); /* mulss */
    MEM8(edx + 0x1048) = 1;
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0016436B:
    xmm4.f[0] = MEMF(0x3B16B8); /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0016437F:
    xmm4.f[0] = MEMF(0x3B19DC); /* movss */

loc_00164387:
    POP32(esp, edi);
    POP32(esp, esi);
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
