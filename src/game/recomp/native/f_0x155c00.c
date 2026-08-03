#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155C00
 * Original: 0x00155C00 - 0x00155C96 (150 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155C00:
    eax = MEM32(esi + 0x90);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_00155C0C:
    edx = MEM32(esi + 0x90);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F5760(); /* call 0x002F5760 */

loc_00155C1E:
    eax = MEM32(esi + 0x94);
    if (TEST_Z(eax, eax)) goto loc_00155C34; /* je: equal / zero */

loc_00155C28:
    MEM32(esi + 0xC0) = 5;
    goto loc_00155C88;

loc_00155C34:
    eax = MEM32(esi + 0xC0);
    if (CMP_NE(eax, 2)) goto loc_00155C48; /* jne: not equal / not zero */

loc_00155C3F:
    MEM32(esi + 0xC4) = MEM32(esi + 0xC4) | 1;
    goto loc_00155C88;

loc_00155C48:
    /* cmp eax, 1 - flags set for next jcc */
    ecx = MEM32(esi + 0x9C);
    if (CMP_NE(eax, 1)) goto loc_00155C61; /* jne: not equal / not zero */

loc_00155C53:
    MEM32(esi + 0xC4) = MEM32(esi + 0xC4) | 0x40;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_00155C5F:
    goto loc_00155C88;

loc_00155C61:
    if (TEST_Z(ecx, ecx)) goto loc_00155C7E; /* je: equal / zero */

loc_00155C65:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00155C6A:
    MEM32(esi + 0x9C) = 0;
    MEM32(esi + 0x98) = 0xFFFFFFFFu;

loc_00155C7E:
    MEM32(esi + 0xC0) = 6;

loc_00155C88:
    MEM32(esi + 0xC4) = MEM32(esi + 0xC4) & 0xFFFFFFC9u;
    ecx = esi;
    g_seh_ebp = ebp; sub_00155900(); return; /* tail jmp 0x00155900 */

}
