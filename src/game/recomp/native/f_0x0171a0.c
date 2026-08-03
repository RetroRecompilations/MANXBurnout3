#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_000171A0
 * Original: 0x000171A0 - 0x0001724A (170 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000171A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000171A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    xmm0.f[0] = MEMF(0x4D6198); /* movss */
    xmm2.f[0] = MEMF(0x4D61A0); /* movss */
    xmm3.f[0] = MEMF(0x4D61A4); /* movss */
    xmm1.f[0] = MEMF(0x4D619C); /* movss */
    /* ucomiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000171D8; /* jp: parity */

loc_000171CF:
    /* ucomiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00017236; /* jnp: not parity */

loc_000171D8:
    edx = MEM32(0x4D6198);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = MEMF(0x4D618C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEM32(ebp + -16) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -16); /* addss */
    eax = MEM32(0x4D619C);
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebp + -4);
    MEMF(0x4D618C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x4D6190); /* movss */
    MEM32(ebp + -12) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -12); /* addss */
    MEMF(0x4D6190) = xmm0.f[0]; /* movss */
    MEM32(0x4D61A0) = edx;
    MEM32(0x4D61A4) = eax;

loc_00017236:
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x2E1D0);
    edx = MEM32(ecx);
    if (ecx == 0x004D4008u && edx != 0x003A9E7Cu) {
        MEM32(ecx) = 0x003A9E7Cu;
        edx = 0x003A9E7Cu;
    }
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_frontend_render;
        if (traced_frontend_render < 12) {
            fprintf(stderr,
                    "[B3-FE] render=%u object=%08X vtable=%08X method=%08X\n",
                    traced_frontend_render, ecx, edx, MEM32(edx + 0xC));
            traced_frontend_render++;
        }
    }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00017244:
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
