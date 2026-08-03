#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013F9C0
 * Original: 0x0013F9C0 - 0x0013FA20 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F9C0:
    eax = MEM32(0x4D5370);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0013FA1C; /* je: equal / zero */

loc_0013F9CA:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1B8);
    eax = MEM32(esi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x90), _icall_esp); /* indirect call */
    }

loc_0013F9DB:
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_0013F9E7:
    /* cmp edi, 6 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_A(edi, 6)) goto loc_0013F9FB; /* ja: above (unsigned >) */

loc_0013F9ED:
    { uint32_t _jt = MEM32(edi * 4 + 0x13FA20); /* switch: 13 entries, 5 targets */
    if (_jt == 0x0013F9F4u) goto loc_0013F9F4;
    if (_jt == 0x0013F9FBu) goto loc_0013F9FB;
    if (_jt == 0x0013FA07u) goto loc_0013FA07;
    if (_jt == 0x0013FA0Eu) goto loc_0013FA0E;
    if (_jt == 0x0013FA15u) goto loc_0013FA15;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013F9F4:
    eax = MEM32(0x3EC23C);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013F9FB:
    if (CMP_A(eax, 5)) goto loc_0013FA1C; /* ja: above (unsigned >) */

loc_0013FA00:
    { uint32_t _jt = MEM32(eax * 4 + 0x13FA3C); /* switch: 6 entries, 3 targets */
    if (_jt == 0x0013FA07u) goto loc_0013FA07;
    if (_jt == 0x0013FA0Eu) goto loc_0013FA0E;
    if (_jt == 0x0013FA15u) goto loc_0013FA15;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013FA07:
    eax = MEM32(0x3EC230);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013FA0E:
    eax = MEM32(0x3EC234);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013FA15:
    eax = MEM32(0x3EC238);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013FA1C:
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
