#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243450
 * Original: 0x00243450 - 0x002434BD (109 bytes, 51 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243450:
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_BE(edi, ecx)) goto loc_002434BA; /* jbe: below or equal (unsigned <=) */

loc_00243460:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_00243462:
    esi = ecx + ebp;
    /* cmp esi, edi - flags set for next jcc */
    ebx = ecx;
    if (CMP_A(esi, edi)) goto loc_00243489; /* ja: above (unsigned >) */

loc_0024346B:
    goto loc_00243470;

    /* nop */

loc_00243470:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_00243476:
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0024347F; /* jle: less or equal (signed <=) */

loc_0024347D:
    ebx = esi;

loc_0024347F:
    esi = esi + ebp;
    if (CMP_BE(esi, edi)) goto loc_00243470; /* jbe: below or equal (unsigned <=) */

loc_00243485:
    ecx = MEM32(esp + 0x14);

loc_00243489:
    /* cmp ebx, edi - flags set for next jcc */
    eax = edi;
    if (CMP_EQ(ebx, edi)) goto loc_002434B2; /* je: equal / zero */

loc_0024348F:
    if (TEST_Z(ebp, ebp)) goto loc_002434B2; /* je: equal / zero */

loc_00243493:
    ecx = ebx;
    ecx = ecx - edi;
    esi = ebp;
    /* nop */

loc_002434A0:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_002434A0; /* jne: not equal / not zero */

loc_002434AE:
    ecx = MEM32(esp + 0x14);

loc_002434B2:
    edi = edi - ebp;
    if (CMP_A(edi, ecx)) goto loc_00243462; /* ja: above (unsigned >) */

loc_002434B8:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002434BA:
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
