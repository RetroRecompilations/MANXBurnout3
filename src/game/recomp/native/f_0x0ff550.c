#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FF550
 * Original: 0x000FF550 - 0x000FF64C (252 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_000FF550:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 0x14))) goto loc_000FF5B2; /* jbe: below or equal (unsigned <=) */

loc_000FF563:
    /* comiss xmm0.f[0], MEMF(ecx + 0x28) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 0x28))) goto loc_000FF602; /* jbe: below or equal (unsigned <=) */

loc_000FF56D:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_000FF5AE:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF5B2:
    xmm0.f[0] = MEMF(ecx + 0x14); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 0x28) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 0x28))) goto loc_000FF602; /* jbe: below or equal (unsigned <=) */

loc_000FF5BD:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x18); /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_000FF5FE:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FF602:
    xmm0.f[0] = MEMF(ecx + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x18); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_000FF648:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
