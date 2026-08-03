#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002141D0
 * Original: 0x002141D0 - 0x002142A4 (212 bytes, 90 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002141D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002141D0:
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) (void)0; /* goto loc_002142A3 - dead code, label not in function */ /* je: equal / zero */

loc_002141DC:
    SET_LO8(edx, MEM8(ecx));
    if (CMP_EQ(LO8(edx), 0x24)) goto loc_002141EC; /* je: equal / zero */

loc_002141E3:
    if (CMP_NE(LO8(edx), 0x5E)) (void)0; /* goto loc_002142A3 - dead code, label not in function */ /* jne: not equal / not zero */

loc_002141EC:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(edi, edi)) goto loc_0021423E; /* jne: not equal / not zero */

loc_002141F5:
    eax = 0; /* xor self */
    if (CMP_NE(LO8(edx), 0x24)) goto loc_00214219; /* jne: not equal / not zero */

loc_002141FC:
    SET_LO8(edx, MEM8(ecx + 1));
    ecx++;
    if (CMP_B(LO8(edx), 0x30)) goto loc_0021424C; /* jb: below (unsigned <) */

loc_00214205:
    if (CMP_B(MEM8(ecx + 1), 0x30)) goto loc_0021424C; /* jb: below (unsigned <) */

loc_0021420B:
    SET_LO8(edx, MEM8(ecx + 2));
    ecx = ecx + 2;
    eax++;
    if (CMP_AE(LO8(edx), 0x30)) goto loc_00214205; /* jae: above or equal (unsigned >=) */

loc_00214217:
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00214219:
    SET_LO8(edx, MEM8(ecx + 1));
    /* cmp LO8(edx), 0x80 - flags set for next jcc */
    eax = ecx + 1;
    if (CMP_B(LO8(edx), 0x80)) goto loc_0021422D; /* jb: below (unsigned <) */

loc_00214224:
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    if (CMP_AE(LO8(edx), 0x80)) goto loc_00214224; /* jae: above or equal (unsigned >=) */

loc_0021422D:
    eax = eax - ecx;
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0021423E:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_GE(esi, 1)) goto loc_0021424E; /* jge: greater or equal (signed >=) */

loc_00214248:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);

loc_0021424C:
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0021424E:
    eax = 0; /* xor self */
    /* cmp LO8(edx), 0x24 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(LO8(edx), 0x24)) goto loc_00214291; /* jne: not equal / not zero */

loc_00214256:
    ecx++;
    if (CMP_LE(esi & esi, 0)) goto loc_0021429F; /* jle: less or equal (signed <=) */

loc_0021425B:
    goto loc_00214260;

    /* nop */

loc_00214260:
    SET_LO8(ebx, MEM8(ecx));
    if (CMP_B(LO8(ebx), 0x30)) goto loc_0021429F; /* jb: below (unsigned <) */

loc_00214267:
    SET_LO8(edx, MEM8(ecx + 1));
    if (CMP_B(LO8(edx), 0x30)) goto loc_0021429F; /* jb: below (unsigned <) */

loc_0021426F:
    edx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(edx + 0x36FB50));
    ebx = ZX8(LO8(ebx));
    SET_LO8(edx, LO8(edx) | MEM8(ebx + 0x36FA50));
    eax++;
    MEM8(eax + edi + -1) = LO8(edx);
    ecx = ecx + 2;
    if (CMP_L(eax, esi)) goto loc_00214260; /* jl: less (signed <) */

loc_0021428D:
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00214291:
    eax = ecx + 1;
    PUSH32(esp, esi);
    ebx = edi;
    PUSH32(esp, 0); sub_00213230(); /* call 0x00213230 */

loc_0021429C:
    esp = esp + 4;

loc_0021429F:
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
