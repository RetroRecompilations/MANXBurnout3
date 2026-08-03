#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00021790
 * Original: 0x00021790 - 0x0002189C (268 bytes, 56 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021790:
    eax = MEM32(ebx + 0x2E1F8);
    eax--;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_000217A6; /* je: equal / zero */

loc_0002179A:
    eax--;
    if ((eax == 0)) goto loc_000217C2; /* je: equal / zero */

loc_0002179D:
    eax = eax - 0x16;
    if ((eax != 0)) goto loc_0002188E; /* jne: not equal / not zero */

loc_000217A6:
    esi = ebx + 0x706C;
    PUSH32(esp, 0); sub_000218A0(); /* call 0x000218A0 */

loc_000217B1:
    edx = esi;
    PUSH32(esp, 0); sub_00018110(); /* call 0x00018110 */

loc_000217B8:
    MEM32(ebx + 0x2E1F8) = 2;

loc_000217C2:
    PUSH32(esp, edi);
    PUSH32(esp, 0x3AADB4);
    PUSH32(esp, 0x3F9070);
    PUSH32(esp, 5);
    eax = 0x3F9040;
    MEM32(ebx + 0x7BFC) = 0x3F9040;
    PUSH32(esp, 0); sub_001B3D60(); /* call 0x001B3D60 */

loc_000217E3:
    MEM32(0x3F9064) = 0x214B0;
    MEM32(0x3F9068) = 0;
    MEM32(0x4A1EAC) = 0x3F9040;
    PUSH32(esp, 0); sub_001B3190(); /* call 0x001B3190 */

loc_00021806:
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x3F9798) = eax;
    MEM32(0x3F97D0) = eax;
    MEM32(0x3F9808) = eax;
    MEM32(0x3F9840) = eax;
    MEM32(0x3F9878) = eax;
    ecx = 0x3AADB0;
    eax = 5;
    esi = 0x3F9750;
    MEM32(0x3F9760) = 0x3F9768;
    PUSH32(esp, 0); sub_001B3320(); /* call 0x001B3320 */

loc_00021840:
    PUSH32(esp, 0x1B3600);
    PUSH32(esp, 0); sub_001F56A0(); /* call 0x001F56A0 */

loc_0002184A:
    PUSH32(esp, 0x1B3610);
    PUSH32(esp, 0); sub_001F56B0(); /* call 0x001F56B0 */

loc_00021854:
    esp = esp + 8;
    edi = 0x40B310;
    PUSH32(esp, 0); sub_00135040(); /* call 0x00135040 */

loc_00021861:
    MEM32(ebx + 0x2E1F8) = 3;
    eax = MEM32(0x411DC0);
    PUSH32(esp, 0x1A);
    MEM32(0x57BB38) = 0;
    ecx = MEM32(eax + 0x88);
    PUSH32(esp, 0x12);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002423E0(); /* call 0x002423E0 */

loc_0002188A:
    esp = esp + 0xC;
    POP32(esp, edi);

loc_0002188E:
    MEM32(ebx + 0x2E1E8) = 0x17;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
