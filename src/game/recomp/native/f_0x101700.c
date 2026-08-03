#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00101700
 * Original: 0x00101700 - 0x00101781 (129 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101700(void)
{
    recomp_xmm_t xmm0;

loc_00101700:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xA0), xmm0.b, 16); /* movaps */
    SET_LO8(edx, MEM8(ecx + 0xB0));
    MEM8(eax + 0xB0) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0xB1));
    MEM8(eax + 0xB1) = LO8(ecx);
    esp += 4; return; /* ret */

}
