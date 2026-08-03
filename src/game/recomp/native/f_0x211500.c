#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211500
 * Original: 0x00211500 - 0x00211576 (118 bytes, 54 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211500:
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_00211574; /* je: equal / zero */

loc_00211509:
    eax = MEM32(edi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00211574; /* je: equal / zero */

loc_00211510:
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B35F0(); /* call 0x001B35F0 */

loc_00211517:
    esi = eax;
    esp = esp + 4;
    esi--;
    if (((int32_t)esi < 0)) goto loc_00211573; /* js: sign (negative) */

loc_0021151F:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_00211521:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C240(); /* call 0x0021C240 */

loc_0021152B:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021156E; /* je: equal / zero */

loc_00211532:
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_00211540; /* je: equal / zero */

loc_0021153A:
    if (TEST_Z(MEM8(eax + 0x10), 1)) goto loc_0021156E; /* je: equal / zero */

loc_00211540:
    /* test esi, esi - flags set for next jcc */
    eax = MEM32(edi + 0xC);
    ebx = MEM32(edi + 0x10);
    if (TEST_S(esi, esi)) goto loc_00211568; /* jl: less (signed <) */

loc_0021154A:
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C190(); /* call 0x0021C190 */

loc_00211551:
    ebp = eax;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_00211568; /* je: equal / zero */

loc_0021155A:
    eax = MEM32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 4), _icall_esp); /* indirect call */
    }

loc_00211561:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 4), _icall_esp); /* indirect call */
    }

loc_00211565:
    esp = esp + 8;

loc_00211568:
    eax = MEM32(edi + 0x10);
    MEM32(eax + 0x50) = MEM32(eax + 0x50) - 1;

loc_0021156E:
    esi--;
    if (((int32_t)esi >= 0)) goto loc_00211521; /* jns: not sign (positive) */

loc_00211571:
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00211573:
    POP32(esp, esi);

loc_00211574:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
