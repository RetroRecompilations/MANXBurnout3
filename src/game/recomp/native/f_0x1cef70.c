#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CEF70
 * Original: 0x001CEF70 - 0x001CEFBC (76 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF70(void)
{

loc_001CEF70:
    ecx = eax + 0x54;
    edx = eax + 0x94;
    MEM32(eax + 0x5C) = 1;
    MEM32(eax + 0x64) = 4;
    MEM32(eax + 0x6C) = 5;
    MEM32(eax + 0x74) = 2;
    MEM32(eax + 0x7C) = 3;
    MEM32(eax + 0x98) = ecx;
    eax = MEM32(eax + 0x248);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx) = 0;
    MEM32(edx) = 6;
    PUSH32(esp, 0); sub_002F6110(); /* call 0x002F6110 */

loc_001CEFBB:
    esp += 4; return; /* ret */

}
