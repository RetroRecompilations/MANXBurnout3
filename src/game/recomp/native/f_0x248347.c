#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00248347
 * Original: 0x00248347 - 0x002483C9 (130 bytes, 41 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248347(void)
{
    int _flags = 0; /* fallback flag var */

loc_00248347:
    eax = ZX8(MEM8(0x24));
    if (CMP_B(LO8(eax), 2)) goto loc_0024835B; /* jb: below (unsigned <) */

loc_00248353:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B9E4), _icall_esp); /* indirect call */
    }

loc_0024835B:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(0x28);
    if (CMP_EQ(MEM32(eax + 0x28), 0)) goto loc_00248380; /* je: equal / zero */

loc_00248369:
    eax = MEM32(0x41A7D4);
    ecx = MEM32(4);
    edi = MEM32(ecx + eax * 4);
    edi = edi + 0xC;
    goto loc_00248385;

loc_00248380:
    edi = 0x76B924;

loc_00248385:
    esi = MEM32(edi);
    if (TEST_NZ(esi, esi)) goto loc_002483C4; /* jne: not equal / not zero */

loc_0024838B:
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002440FD(); /* call 0x002440FD */

loc_00248397:
    esi = eax;
    /* test esi, esi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(esi, esi)) goto loc_002483BC; /* je: equal / zero */

loc_0024839F:
    MEM32(edi) = esi;
    MEM32(esi + 0x54) = 0x3C6A90;
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0); sub_001D191E(); /* call 0x001D191E */

loc_002483B4:
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    MEM32(esi) = eax;
    goto loc_002483C4;

loc_002483BC:
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00246EE4(); /* call 0x00246EE4 */

loc_002483C3:
    POP32(esp, ecx);

loc_002483C4:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
