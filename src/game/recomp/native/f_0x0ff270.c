#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FF270
 * Original: 0x000FF270 - 0x000FF545 (725 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000FF270:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_000FF282:
    edi = esi + 0x10;
    eax = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_000FF292:
    ebx = esi + 0x20;
    eax = ebx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_000FF2A2:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_000FF4E1; /* jbe: below or equal (unsigned <=) */

loc_000FF2B4:
    xmm2.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_000FF47D; /* jbe: below or equal (unsigned <=) */

loc_000FF2C3:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    eax = ebx;
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_000FF41B; /* jbe: below or equal (unsigned <=) */

loc_000FF2CE:
    ecx = edi;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_000FF2D5:
    eax = esi;
    ecx = ebx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_000FF2E4:
    eax = edi;
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_000FF2F3:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000FF090(); /* call 0x000FF090 */

loc_000FF307:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x14), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    esp = esp + 4;
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_000FF3C6; /* jbe: below or equal (unsigned <=) */

loc_000FF327:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_000FF37C; /* jbe: below or equal (unsigned <=) */

loc_000FF332:
    PUSH32(esp, ebx);
    ecx = edi;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_000FF33E:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esi;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000FF34D:
    eax = esi;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF354:
    PUSH32(esp, edi);
    ecx = esi;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_000FF360:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    ecx = ebx;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000FF36F:
    eax = ebx;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF376:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF37C:
    eax = esp + 0x30;

loc_000FF380:
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_000FF388:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    ecx = ebx;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000FF397:
    eax = ebx;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF39E:
    PUSH32(esp, esi);
    ecx = ebx;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_000FF3AA:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    ecx = edi;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000FF3B9:
    eax = edi;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF3C0:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF3C6:
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    eax = esp + 0x30;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_000FF380; /* jbe: below or equal (unsigned <=) */

loc_000FF3D5:
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_000FF3DD:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    ecx = edi;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000FF3EC:
    eax = edi;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF3F3:
    PUSH32(esp, ebx);
    ecx = edi;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_000FF3FF:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    ecx = esi;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000FF40E:
    eax = esi;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF415:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF41B:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF448:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF477:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF47D:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF4AC:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esi;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF4DB:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF4E1:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esi;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF510:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = ebx;
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000FF53F:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
