#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000BFC40
 * Original: 0x000BFC40 - 0x000BFCAB (107 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFC40(void)
{

loc_000BFC40:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(esi + 0xA) = LO8(ebx);
    MEM8(esi + 0xB) = LO8(ebx);
    SET_LO16(eax, MEM16(0x557A54));
    MEM16(esi + 8) = LO16(eax);
    eax = MEM32(0x557A54);
    ecx = MEM32(0x557A58);
    eax++;
    MEM32(0x557A54) = eax;
    MEM32(esi + 4) = ecx;
    ecx = esi + 0x20;
    MEM32(0x557A58) = esi;
    edx = MEM32(ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000BFC74:
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM8(esi + 0xAC) = LO8(ebx);
    MEM8(esi + 0xA0) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xAD) = LO8(eax);
    MEM8(esi + 0xAE) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
