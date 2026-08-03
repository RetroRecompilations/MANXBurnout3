#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00114F30
 * Original: 0x00114F30 - 0x0011512F (511 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00114F30:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    SET_LO8(eax, MEM8(esi + 0x212));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0xC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00115037; /* je: equal / zero */

loc_00114F59:
    eax = ebx;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_00114F60:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00115037; /* jne: not equal / not zero */

loc_00114F68:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x170), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1720); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x1C))) goto loc_00115037; /* jbe: below or equal (unsigned <=) */

loc_00114FB0:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00114FB9:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_00114FF5:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00115004; /* jne: not equal / not zero */

loc_00114FF9:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00115002:
    goto loc_0011501C;

loc_00115004:
    esi = esi + 0xC0;
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00115014:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */

loc_0011501C:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    eax = esp + 0x30;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_0011502F:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */

loc_00115037:
    SET_LO8(eax, MEM8(edi + 0x212));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00115126; /* je: equal / zero */

loc_00115045:
    esi = MEM32(ebp + 0xC);
    eax = esi;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_0011504F:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00115126; /* jne: not equal / not zero */

loc_00115057:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x170), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1720); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x1C))) goto loc_00115126; /* jbe: below or equal (unsigned <=) */

loc_0011509F:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_001150A8:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = esp + 0x1C;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_001150E4:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001150F3; /* jne: not equal / not zero */

loc_001150E8:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_001150F1:
    goto loc_0011510B;

loc_001150F3:
    edi = edi + 0xC0;
    PUSH32(esp, edi);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00115103:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */

loc_0011510B:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    eax = esp + 0x30;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_0011511E:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */

loc_00115126:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
