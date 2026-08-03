#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00129040
 * Original: 0x00129040 - 0x00129295 (597 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00129040:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    if (CMP_A(eax, 5)) goto loc_0012928D; /* ja: above (unsigned >) */

loc_0012905C:
    { uint32_t _jt = MEM32(eax * 4 + 0x129298); /* switch: 6 entries, 2 targets */
    if (_jt == 0x00129063u) goto loc_00129063;
    if (_jt == 0x0012909Bu) goto loc_0012909B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00129063:
    eax = MEM32(eax * 4 + 0x3EBFAC);
    ecx = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    eax = eax + 0x1C;
    eax = eax << 6;
    eax = eax + ecx;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0012909B:
    /* cmp eax, 2 - flags set for next jcc */
    ecx = edi + 0x50;
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    edx = edi + 0x60;
    ecx = MEM32(edx);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(eax, 2)) goto loc_0012911C; /* jne: not equal / not zero */

loc_001290EE:
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = 3;
    eax = edi;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_001290FF:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    xmm1.f[0] = MEMF(esi + 0x30); /* movss */
    eax = eax + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00129147;

loc_0012911C:
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = 2;
    eax = edi;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012912D:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = eax + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x30); /* subss */

loc_00129147:
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    edx = MEM32(edi + 0x14);
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0xC); /* divss */
    MEMF(edx + 0x7F0) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x14);
    MEMF(eax + 0x730) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x14);
    MEMF(ecx + 0x8F0) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x14);
    MEMF(edx + 0x8B0) = xmm0.f[0]; /* movss */
    esi = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x7C0), 16); /* movaps */
    eax = esp + 0x10;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_001291A4:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = esp + 0x20;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_001291B7:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x7C0), xmm0.b, 16); /* movaps */
    esi = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x700), 16); /* movaps */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_001291DB:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = esp + 0x20;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_001291EE:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x700), xmm0.b, 16); /* movaps */
    esi = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x8C0), 16); /* movaps */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00129212:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = esp + 0x20;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_00129225:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x8C0), xmm0.b, 16); /* movaps */
    esi = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x880), 16); /* movaps */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00129249:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = esp + 0x20;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_0012925C:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x880), xmm0.b, 16); /* movaps */
    esi = 3;
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_00129272:
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_00129279:
    esi = 7;
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_00129283:
    esi = 6;
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012928D:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
