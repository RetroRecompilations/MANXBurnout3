#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CEA80
 * Original: 0x001CEA80 - 0x001CEACE (78 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CEA80:
    eax = MEM32(esi + 0x24);
    if (CMP_EQ(eax, 0xB)) goto loc_001CEA8D; /* je: equal / zero */

loc_001CEA88:
    if (CMP_NE(eax, 0xA)) goto loc_001CEACD; /* jne: not equal / not zero */

loc_001CEA8D:
    if (TEST_NZ(MEM8(esi + 0x28), 1)) goto loc_001CEAA9; /* jne: not equal / not zero */

loc_001CEA93:
    eax = MEM32(esi + 0x248);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F5760(); /* call 0x002F5760 */

loc_001CEAA5:
    MEM32(esi + 0x28) = MEM32(esi + 0x28) | 1;

loc_001CEAA9:
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    eax = eax & 0xFFFFFFEDu;
    /* cmp ecx, 1 - flags set for next jcc */
    MEM32(esi + 0x28) = eax;
    if (CMP_L(ecx, 1)) goto loc_001CEAC6; /* jl: less (signed <) */

loc_001CEABA:
    if (CMP_G(ecx, 7)) goto loc_001CEAC6; /* jg: greater (signed >) */

loc_001CEABF:
    eax = eax | 8;
    MEM32(esi + 0x28) = eax;
    esp += 4; return; /* ret */

loc_001CEAC6:
    MEM32(esi + 0x24) = 0xE;

loc_001CEACD:
    esp += 4; return; /* ret */

}
