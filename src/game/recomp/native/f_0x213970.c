#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213970
 * Original: 0x00213970 - 0x00213AAD (317 bytes, 124 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213970:
    eax = 0x1200;
    PUSH32(esp, 0); sub_00244C10(); /* call 0x00244C10 */

loc_0021397A:
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1218);
    /* test edi, edi - flags set for next jcc */
    ebp = edi;
    if (TEST_NZ(edi, edi)) goto loc_002139AC; /* jne: not equal / not zero */

loc_00213989:
    eax = MEM32(esp + 0x1214);
    ecx = MEM32(esp + 0x120C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00213580(); /* call 0x00213580 */

loc_0021399E:
    esp = esp + 8;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x1200;
    esp += 4; return; /* ret */

loc_002139AC:
    edx = MEM32(esp + 0x1214);
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    eax = esp + 0xC;
    if (TEST_NZ(edx, edx)) goto loc_002139C8; /* jne: not equal / not zero */

loc_002139BC:
    edx = MEM32(esp + 0x1210);
    MEM8(edx) = 0;
    goto loc_002139E3;

loc_002139C8:
    SET_LO8(ecx, MEM8(edx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002139DF; /* je: equal / zero */

loc_002139CE:
    esi = esp + 0xC;
    edx = edx - esi;

loc_002139D4:
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + eax + 1));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002139D4; /* jne: not equal / not zero */

loc_002139DF:
    MEM8(eax) = 0x3D;
    eax++;

loc_002139E3:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edi));
    esi = esp + 0x1210;
    esi = esi - eax;
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00213A04; /* je: equal / zero */

loc_002139F5:
    SET_LO8(edx, LO8(ebx));

loc_002139F7:
    if (CMP_EQ(LO8(edx), 0x20)) goto loc_00213A09; /* je: equal / zero */

loc_002139FC:
    SET_LO8(edx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002139F7; /* jne: not equal / not zero */

loc_00213A04:
    if (CMP_NE(MEM8(edi), 0x20)) goto loc_00213A10; /* jne: not equal / not zero */

loc_00213A09:
    MEM8(eax) = 0x22;
    ecx = eax + 1;
    esi--;

loc_00213A10:
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00213A67; /* je: equal / zero */

loc_00213A15:
    if (CMP_LE(esi & esi, 0)) goto loc_00213A6B; /* jle: less or equal (signed <=) */

loc_00213A19:
    SET_LO8(eax, MEM8(ebp));
    if (CMP_B(LO8(eax), 0x20)) goto loc_00213A3E; /* jb: below (unsigned <) */

loc_00213A20:
    if (CMP_EQ(LO8(eax), 0x7F)) goto loc_00213A3E; /* je: equal / zero */

loc_00213A24:
    if (CMP_EQ(LO8(eax), 0x3D)) goto loc_00213A3E; /* je: equal / zero */

loc_00213A28:
    if (CMP_EQ(LO8(eax), 0x22)) goto loc_00213A3E; /* je: equal / zero */

loc_00213A2C:
    if (CMP_EQ(LO8(eax), 0x3A)) goto loc_00213A3E; /* je: equal / zero */

loc_00213A30:
    if (CMP_EQ(LO8(eax), 0x25)) goto loc_00213A3E; /* je: equal / zero */

loc_00213A34:
    if (CMP_EQ(LO8(eax), 0x5E)) goto loc_00213A3E; /* je: equal / zero */

loc_00213A38:
    MEM8(ecx) = LO8(eax);
    ecx++;
    esi--;
    goto loc_00213A5F;

loc_00213A3E:
    if (CMP_L(esi, 3)) goto loc_00213A5C; /* jl: less (signed <) */

loc_00213A43:
    MEM8(ecx) = 0x25;
    eax = ZX8(LO8(eax));
    SET_LO8(edx, MEM8(eax + 0x36F850));
    SET_LO8(eax, MEM8(eax + 0x36F950));
    ecx++;
    MEM8(ecx) = LO8(edx);
    ecx++;
    MEM8(ecx) = LO8(eax);
    ecx++;

loc_00213A5C:
    esi = esi - 3;

loc_00213A5F:
    SET_LO8(eax, MEM8(ebp + 1));
    ebp++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00213A15; /* jne: not equal / not zero */

loc_00213A67:
    if (CMP_G(esi & esi, 0)) goto loc_00213A7A; /* jg: greater (signed >) */

loc_00213A6B:
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 0x1200;
    esp += 4; return; /* ret */

loc_00213A7A:
    if (CMP_NE(MEM8(edi), 0x20)) goto loc_00213A83; /* jne: not equal / not zero */

loc_00213A7F:
    MEM8(ecx) = 0x22;
    ecx++;

loc_00213A83:
    edx = MEM32(esp + 0x1214);
    eax = MEM32(esp + 0x1210);
    MEM8(ecx) = 0;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213280(); /* call 0x00213280 */

loc_00213AA0:
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x1200;
    esp += 4; return; /* ret */

}
