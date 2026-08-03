#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0275
 * Original: 0x001D0275 - 0x001D032C (183 bytes, 65 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0275(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0275:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x204;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -516;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_001D0172(); /* call 0x001D0172 */

loc_001D0293:
    ebx = eax;
    /* test ebx, ebx - flags set for next jcc */
    edi = 0x24830000;
    if (TEST_S(ebx, ebx)) goto loc_001D02E3; /* jl: less (signed <) */

loc_001D029E:
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_001D02A6:
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001D02C8; /* jne: not equal / not zero */

loc_001D02AC:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Au);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B80C), _icall_esp); /* indirect call */
    }

loc_001D02B7:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D02BD:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001D02C6:
    goto loc_001D031A;

loc_001D02C8:
    MEM32(esi) = 0xBE4BEA00u;
    eax = MEM32(ebp + -512);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0xC) = eax;
    goto loc_001D02F0;

loc_001D02E3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B80C), _icall_esp); /* indirect call */
    }

loc_001D02EA:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D02F0:
    if (TEST_S(ebx, ebx)) goto loc_001D031A; /* jl: less (signed <) */

loc_001D02F4:
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -516;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D01D8(); /* call 0x001D01D8 */

loc_001D0304:
    if (TEST_NZ(eax, eax)) goto loc_001D031A; /* jne: not equal / not zero */

loc_001D0308:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001D0311:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_001D0318:
    esi = 0; /* xor self */

loc_001D031A:
    if (TEST_Z(esi, esi)) goto loc_001D0322; /* je: equal / zero */

loc_001D031E:
    eax = esi;
    goto loc_001D0325;

loc_001D0322:
    eax = eax | 0xFFFFFFFFu;

loc_001D0325:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
