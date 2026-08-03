#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001BBE0
 * Original: 0x0001BBE0 - 0x0001BC8A (170 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BBE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001BBE0:
    ecx = MEM32(eax + 0x380);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0001BC89; /* je: equal / zero */

loc_0001BBEF:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x385));
    SET_LO8(edx, 0); /* xor self */
    /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, MEM8(ecx + eax + 0x386));
    if (CMP_EQ(LO8(ebx), LO8(edx))) goto loc_0001BC47; /* je: equal / zero */

loc_0001BC03:
    MEM8(eax + 0x498) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 0x384));
    MEM8(ecx + eax + 0x386) = LO8(ebx);
    SET_LO8(ecx, MEM8(eax + 0x380));
    MEM8(eax + 0x494) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x384));
    MEM8(eax + 0x49A) = 1;
    MEM8(eax + 0x496) = LO8(ecx);
    MEM32(eax + 0x380) = 0xFFFFFFFFu;
    MEM8(eax + 0x384) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001BC47:
    MEM8(eax + 0x499) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 0x384));
    MEM8(ecx + eax + 0x3CF) = LO8(ebx);
    SET_LO8(ecx, MEM8(eax + 0x380));
    MEM8(eax + 0x495) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x384));
    MEM8(eax + 0x49A) = LO8(edx);
    MEM8(eax + 0x497) = LO8(ecx);
    MEM32(eax + 0x380) = 0xFFFFFFFFu;
    MEM8(eax + 0x384) = LO8(edx);
    POP32(esp, ebx);

loc_0001BC89:
    esp += 4; return; /* ret */

}
