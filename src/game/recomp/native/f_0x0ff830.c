#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FF830
 * Original: 0x000FF830 - 0x000FFBE1 (945 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_000FF830:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_000FF87D; /* jb: below (unsigned <) */

loc_000FF84F:
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_000FF868; /* je: equal / zero */

loc_000FF856:
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x20;
    eax = ebx + 0x20;
    PUSH32(esp, 0); sub_000FF160(); /* call 0x000FF160 */

loc_000FF864:
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_000FF868:
    eax = MEM32(ebp + 8);
    esi = ebx;
    edi = eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF87D:
    /* comiss xmm0.f[0], MEMF(0x3B168C) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3B168C))) goto loc_000FF8A7; /* jb: below (unsigned <) */

loc_000FF886:
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000FF891; /* je: equal / zero */

loc_000FF88D:
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_000FF891:
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x10);
    edi = eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF8A7:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x20), 16); /* movaps */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_000FF8D4:
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_000FF8E9:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xF0), 16); /* movaps */
    eax = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x100), 16); /* movaps */
    PUSH32(esp, eax);
    edi = esp + 0x94;
    eax = esp + 0xC4;
    esi = esp + 0x14;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF650(); /* call 0x000FF650 */

loc_000FF939:
    xmm1.f[0] = MEMF(0x3B1688); /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    esp = esp + 4;
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_000FFA7F; /* jbe: below or equal (unsigned <=) */

loc_000FF953:
    eax = MEM32(ebp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x20), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    eax = esp + 0xA0;
    ecx = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_000FF9C9:
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    eax = esp + 0xA0;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_000FF9DE:
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    eax = esp + 0xA0;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_000FF9F3:
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    eax = esp + 0xA0;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_000FFA08:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x110), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x50;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FFA68:
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FFA71:
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FFA7A:
    goto loc_000FFBAD;

loc_000FFA7F:
    ecx = MEM32(ebp + 0x10);
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x14); /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    edx = esp + 0x120;
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm1.b, 16); /* movaps */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x20), 16); /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    memcpy((void *)XBOX_PTR(esp + 0x74), xmm2.b, 16); /* movaps */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_000FFAF3:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    esp = esp + 4;
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    ecx = esp + 0x124;
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    memcpy((void *)XBOX_PTR(esp + 0x108), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_000FFB3E:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x140), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0xB0) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    eax = esp + 0xA0;
    ecx = esp + 0x80;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_000FFB95:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    /* addps: xmm0.f[0] += MEMF(esp + 0xB0) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */

loc_000FFBAD:
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000FFBCA; /* je: equal / zero */

loc_000FFBB4:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000FFBCA:
    eax = MEM32(ebp + 8);
    esi = esp + 0x50;
    edi = eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
