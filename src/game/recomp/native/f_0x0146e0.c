#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_000146E0
 * Original: 0x000146E0 - 0x00014730 (80 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000146E0:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_lookup;
        if (traced_lookup++ < 6)
            fprintf(stderr,
                    "[B3-FE] 146E0 lookup list=%08X table=%08X key=%08X:%08X esp=%08X\n",
                    ebx, MEM32(ebx + 0xC), ecx, eax, esp);
    }
    PUSH32(esp, 0); sub_001B4260(); /* call 0x001B4260 */

loc_000146F5:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_result;
        if (traced_result++ < 6)
            fprintf(stderr,
                    "[B3-FE] 146E0 result=%08X current=%08X "
                    "list_vt=%08X leave=%08X enter=%08X result_vt=%08X esp=%08X\n",
                    eax, MEM32(ebx + 4), MEM32(ebx),
                    MEM32(MEM32(ebx) + 0x10), MEM32(MEM32(ebx) + 0x14),
                    eax ? MEM32(eax) : 0, esp);
    }
    esi = eax;
    if (CMP_EQ(MEM32(ebx + 4), esi)) goto loc_0001472B; /* je: equal / zero */

loc_000146FC:
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00014705:
    eax = MEM32(ebx + 0x10);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx + 4);
    MEM32(ebx + 4) = esi;
    if (TEST_Z(eax, eax)) goto loc_00014722; /* je: equal / zero */

loc_00014712:
    /* test esi, esi - flags set for next jcc */
    edx = MEM32(eax + 0x20);
    MEM32(ebx + 0x14) = edx;
    if (TEST_Z(esi, esi)) goto loc_00014722; /* je: equal / zero */

loc_0001471C:
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x10) = eax;

loc_00014722:
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0001472B:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
