#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002134B0
 * Original: 0x002134B0 - 0x00213578 (200 bytes, 84 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002134B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002134B0:
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_00213574; /* je: equal / zero */

loc_002134BD:
    SET_LO8(eax, MEM8(edi));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00213574; /* je: equal / zero */

loc_002134C7:
    edx = MEM32(esp + 0xC);
    if (TEST_Z(edx, edx)) goto loc_00213574; /* je: equal / zero */

loc_002134D3:
    if (CMP_EQ(MEM8(edx), 0)) goto loc_00213574; /* je: equal / zero */

loc_002134DC:
    ecx = edx;
    PUSH32(esp, ebx);
    /* nop */

loc_002134E0:
    SET_LO8(ebx, MEM8(ecx + 1));
    ecx++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002134E0; /* jne: not equal / not zero */

loc_002134E8:
    PUSH32(esp, ebp);
    ecx--;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    ebp = edi;
    esi = edi + -1;
    goto loc_00213500;

loc_002134F6:
    ecx = MEM32(esp + 0x14);
    /* nop */

loc_00213500:
    if (CMP_EQ(LO8(eax), 0x3D)) goto loc_00213508; /* je: equal / zero */

loc_00213504:
    if (CMP_NE(LO8(eax), 0x3A)) goto loc_00213551; /* jne: not equal / not zero */

loc_00213508:
    if (CMP_AE(MEM8(esi + 2), 0x20)) goto loc_00213513; /* jae: above or equal (unsigned >=) */

loc_0021350E:
    if (CMP_BE(MEM8(esi), 0x20)) goto loc_0021355A; /* jbe: below or equal (unsigned <=) */

loc_00213513:
    /* cmp esi, edi - flags set for next jcc */
    eax = esi;
    if (CMP_B(esi, edi)) goto loc_00213551; /* jb: below (unsigned <) */

loc_00213519:
    ebx = esi;
    ebx = ebx - ebp;
    ecx = ebx + ecx + 1;

loc_00213521:
    if (CMP_B(ecx, edx)) goto loc_00213551; /* jb: below (unsigned <) */

loc_00213525:
    edx = ZX8(MEM8(eax));
    ebx = ZX8(MEM8(ecx));
    SET_LO8(edx, MEM8(edx + 0x36FC50));
    /* cmp LO8(edx), MEM8(ebx + 0x36FC50) - flags set for next jcc */
    edx = MEM32(esp + 0x18);
    if (CMP_NE(LO8(edx), MEM8(ebx + 0x36FC50))) goto loc_00213551; /* jne: not equal / not zero */

loc_0021353D:
    if (CMP_NE(ecx, edx)) goto loc_0021354B; /* jne: not equal / not zero */

loc_00213541:
    if (CMP_EQ(eax, edi)) goto loc_00213561; /* je: equal / zero */

loc_00213545:
    if (CMP_BE(MEM8(eax + -1), 0x20)) goto loc_00213561; /* jbe: below or equal (unsigned <=) */

loc_0021354B:
    eax--;
    ecx--;
    if (CMP_AE(eax, edi)) goto loc_00213521; /* jae: above or equal (unsigned >=) */

loc_00213551:
    SET_LO8(eax, MEM8(ebp + 1));
    ebp++;
    esi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002134F6; /* jne: not equal / not zero */

loc_0021355A:
    eax = 0; /* xor self */

loc_0021355C:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00213561:
    SET_LO8(ecx, MEM8(ebp + 1));
    /* cmp LO8(ecx), 0x20 - flags set for next jcc */
    eax = ebp + 1;
    if (CMP_NE(LO8(ecx), 0x20)) goto loc_0021355C; /* jne: not equal / not zero */

loc_0021356C:
    POP32(esp, esi);
    eax = ebp + 2;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00213574:
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
