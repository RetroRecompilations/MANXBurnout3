#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001CA530
 * Original: 0x001CA530 - 0x001CA59D (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA530(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001CA530:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_update;
        if (traced_update++ < 8)
            fprintf(stderr,
                    "[B3-AUDIO] 1CA530 base=%08X callbacks=%u first=%08X second=%08X streams=%08X esp=%08X\n",
                    eax, MEM32(eax + 0x528), MEM32(eax + 0x520),
                    MEM32(eax + 0x524), MEM32(eax + 0x2DDC), esp);
    }
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x528);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_001CA557; /* jbe: below or equal (unsigned <=) */

loc_001CA541:
    ecx = MEM32(edi + esi * 4 + 0x520);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001CA54C:
    eax = MEM32(edi + 0x528);
    esi++;
    if (CMP_B(esi, eax)) goto loc_001CA541; /* jb: below (unsigned <) */

loc_001CA557:
    esi = MEM32(edi + 0x2DDC);
    if (TEST_Z(esi, esi)) goto loc_001CA56F; /* je: equal / zero */

loc_001CA561:
    eax = esi + 8;
    PUSH32(esp, 0); sub_001CB7E0(); /* call 0x001CB7E0 */

loc_001CA569:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001CA561; /* jne: not equal / not zero */

loc_001CA56F:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-AUDIO] 1CA530 before device update esp=%08X\n", esp);
    ebx = edi + 8;
    PUSH32(esp, 0); sub_001CE0B0(); /* call 0x001CE0B0 */

loc_001CA577:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-AUDIO] 1CA530 after device update esp=%08X\n", esp);
#if 0
    /* Retail hands the four frame-mix parameters to sub_001CD620 here. That
     * routine services the Xbox DirectSound mixer and waits on its device
     * state; there is no Xbox device in the portable build. Criterion's
     * higher-level voice/state updates above are deliberately retained.
     * Native decoded assets are mixed by the host backend instead. */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = edi + 0x534;
    PUSH32(esp, 0); sub_001CD620(); /* call 0x001CD620 */
#endif

loc_001CA597:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-AUDIO] 1CA530 after mixer update esp=%08X\n", esp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
