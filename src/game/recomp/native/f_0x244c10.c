#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244C10
 * Original: 0x00244C10 - 0x00244C51 (65 bytes, 27 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244C10:
    if (TEST_Z(eax, eax)) goto loc_00244C28; /* je: equal / zero */

loc_00244C14:
    if (CMP_AE(eax, 0x1000)) goto loc_00244C29; /* jae: above or equal (unsigned >=) */

loc_00244C1B:
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax + esp;
    eax = eax + 4;
    /* test MEM32(eax), eax - flags set for next jcc */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    eax = MEM32(eax);
    PUSH32(esp, eax);

loc_00244C28:
    esp += 4; return; /* ret */

loc_00244C29:
    PUSH32(esp, ecx);
    ecx = esp + 8;

loc_00244C2E:
    ecx = ecx - 0x1000;
    eax = eax - 0x1000;
    /* test MEM32(ecx), eax - flags set for next jcc */
    if (CMP_AE(eax, 0x1000)) goto loc_00244C2E; /* jae: above or equal (unsigned >=) */

loc_00244C42:
    ecx = ecx - eax;
    eax = esp;
    /* test MEM32(ecx), eax - flags set for next jcc */
    esp = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    esp += 4; return; /* ret */

}
