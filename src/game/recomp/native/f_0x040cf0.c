#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00040CF0
 * Original: 0x00040CF0 - 0x00040F6C (636 bytes, 128 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00040CF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebx + 0xC4);
    ecx = MEM32(ebx + esi * 4 + 0xC8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0034CBF0(); /* call 0x0034CBF0 */

loc_00040D15:
    if (CMP_A(esi, 5)) goto loc_00040EF6; /* ja: above (unsigned >) */

loc_00040D1E:
    { uint32_t _jt = MEM32(esi * 4 + 0x40F6C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00040D25u) goto loc_00040D25;
    if (_jt == 0x00040D81u) goto loc_00040D81;
    if (_jt == 0x00040DE3u) goto loc_00040DE3;
    if (_jt == 0x00040E23u) goto loc_00040E23;
    if (_jt == 0x00040E60u) goto loc_00040E60;
    if (_jt == 0x00040E8Fu) goto loc_00040E8F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00040D25:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    goto loc_00040EE6;

loc_00040D81:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00040EEC;

loc_00040DE3:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_00040ECA;

loc_00040E23:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_00040ECA;

loc_00040E60:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_00040EC4;

loc_00040E8F:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_00040EC4:
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00040ECA:
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00040EE6:
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00040EEC:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */

loc_00040EF6:
    edx = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x80), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x90), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(ebx + 0xA0), xmm1.b, 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xB0), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_00040F36:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = ebx + 0x40;
    ecx = 0x10;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    MEMF(ebx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    POP32(esp, esi);
    MEMF(ebx + 0x7C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
