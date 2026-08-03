#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B3320
 * Original: 0x001B3320 - 0x001B3396 (118 bytes, 38 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3320(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B3320:
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_001B336E; /* je: equal / zero */

loc_001B3335:
    eax = MEM32(0x4A1EA4);
    if (CMP_B(eax, 2)) goto loc_001B3349; /* jb: below (unsigned <) */

loc_001B333F:
    MEM32(esi + 8) = 1;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B3349:
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = eax + eax * 4 + 0x49C110;
    PUSH32(esp, ecx);
    MEM32(eax * 4 + 0x49C108) = esi;
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_001B3360:
    eax = MEM32(0x4A1EA4);
    esp = esp + 0xC;
    eax++;
    MEM32(0x4A1EA4) = eax;

loc_001B336E:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_001B338F; /* jbe: below or equal (unsigned <=) */

loc_001B3378:
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001B3380:
    MEM32(eax + 0x20) = 0;
    eax = MEM32(esi + 0xC);
    edi++;
    if (CMP_B(edi, eax)) goto loc_001B3378; /* jb: below (unsigned <) */

loc_001B338F:
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
