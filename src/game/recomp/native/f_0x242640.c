#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242640
 * Original: 0x00242640 - 0x002426D4 (148 bytes, 63 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242640:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_0024266B; /* jne: not equal / not zero */

loc_0024264C:
    ebx = MEM32(esp + 0x10);
    edi = ebx + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00242A20(); /* call 0x00242A20 */

loc_00242659:
    esi = eax;
    esp = esp + 4;
    if (CMP_GE(esi & esi, 0)) goto loc_0024269F; /* jge: greater or equal (signed >=) */

loc_00242662:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0024266B:
    if (TEST_S(esi, esi)) goto loc_002426CB; /* jl: less (signed <) */

loc_0024266F:
    ebx = MEM32(esp + 0x10);
    if (CMP_GE(esi, MEM32(ebx + 0x14))) goto loc_002426CB; /* jge: greater or equal (signed >=) */

loc_00242678:
    eax = MEM32(ebx + 4);
    /* test eax, eax - flags set for next jcc */
    edi = ebx + 4;
    if (TEST_Z(eax, eax)) goto loc_0024269F; /* je: equal / zero */

loc_00242682:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = ebx + 0x3C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_0024268D:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00242B00(); /* call 0x00242B00 */

loc_00242694:
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_0024269E:
    POP32(esp, ebp);

loc_0024269F:
    ebx = ebx + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_002426A9:
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00242A50(); /* call 0x00242A50 */

loc_002426BB:
    esp = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_002426C5:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002426CB:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
