#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214040
 * Original: 0x00214040 - 0x002141CC (396 bytes, 177 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214040:
    ecx = MEM32(esp + 4);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_00214099; /* jne: not equal / not zero */

loc_0021404A:
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00214058; /* jne: not equal / not zero */

loc_00214052:
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00214058:
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(esi, esi)) goto loc_0021406F; /* jne: not equal / not zero */

loc_00214060:
    edx = eax + 1;

loc_00214063:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00214063; /* jne: not equal / not zero */

loc_0021406A:
    POP32(esp, edi);
    eax = eax - edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021406F:
    edi = MEM32(esp + 0x14);
    ecx = 1;
    if (CMP_LE(edi, ecx)) goto loc_00214090; /* jle: less or equal (signed <=) */

loc_0021407C:
    /* nop */

loc_00214080:
    SET_LO8(edx, MEM8(eax));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00214090; /* je: equal / zero */

loc_00214086:
    esi++;
    MEM8(esi + -1) = LO8(edx);
    eax++;
    ecx++;
    if (CMP_L(ecx, edi)) goto loc_00214080; /* jl: less (signed <) */

loc_00214090:
    POP32(esp, edi);
    MEM8(esi) = 0;
    eax = ecx + -1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00214099:
    SET_LO8(eax, MEM8(ecx));
    /* cmp LO8(eax), 0x5E - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(LO8(eax), 0x5E)) goto loc_002140F4; /* jne: not equal / not zero */

loc_002140A0:
    ebx = MEM32(esp + 0x14);
    if (TEST_NZ(ebx, ebx)) goto loc_002140CF; /* jne: not equal / not zero */

loc_002140A8:
    SET_LO8(edx, MEM8(ecx + 1));
    /* cmp LO8(edx), 0x80 - flags set for next jcc */
    eax = ecx + 1;
    if (CMP_B(LO8(edx), 0x80)) goto loc_002140BC; /* jb: below (unsigned <) */

loc_002140B3:
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    if (CMP_AE(LO8(edx), 0x80)) goto loc_002140B3; /* jae: above or equal (unsigned >=) */

loc_002140BC:
    eax = eax - ecx;
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    POP32(esp, ebx);
    eax = eax + edx;
    POP32(esp, edi);
    eax = (uint32_t)((int32_t)eax >> 3);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002140CF:
    edx = MEM32(esp + 0x18);
    if (CMP_GE(edx, 1)) goto loc_002140DF; /* jge: greater or equal (signed >=) */

loc_002140D8:
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002140DF:
    edx--;
    eax = ecx + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00213230(); /* call 0x00213230 */

loc_002140E9:
    esp = esp + 4;
    MEM8(eax + ebx) = 0;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002140F4:
    if (CMP_NE(LO8(eax), 0x22)) goto loc_00214101; /* jne: not equal / not zero */

loc_002140F8:
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0x10) = LO8(ebx);
    ecx++;
    goto loc_0021410A;

loc_00214101:
    MEM8(esp + 0x10) = 0;
    SET_LO8(ebx, MEM8(esp + 0x10));

loc_0021410A:
    esi = MEM32(esp + 0x14);
    if (TEST_NZ(esi, esi)) goto loc_0021414C; /* jne: not equal / not zero */

loc_00214112:
    SET_LO8(edx, MEM8(ecx));
    eax = 0; /* xor self */
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_002141C8; /* je: equal / zero */

loc_0021411E:
    edi = edi;

loc_00214120:
    SET_LO8(edx, MEM8(ecx));
    if (CMP_B(LO8(edx), 0x20)) goto loc_002141C8; /* jb: below (unsigned <) */

loc_0021412B:
    if (CMP_NE(LO8(edx), 0x25)) goto loc_0021413F; /* jne: not equal / not zero */

loc_00214130:
    if (CMP_B(MEM8(ecx + 1), 0x20)) goto loc_0021413F; /* jb: below (unsigned <) */

loc_00214136:
    if (CMP_B(MEM8(ecx + 2), 0x20)) goto loc_0021413F; /* jb: below (unsigned <) */

loc_0021413C:
    ecx = ecx + 2;

loc_0021413F:
    SET_LO8(edx, MEM8(ecx + 1));
    eax++;
    ecx++;
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_00214120; /* jne: not equal / not zero */

loc_00214148:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021414C:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    if (CMP_GE(ebp, 1)) goto loc_0021415E; /* jge: greater or equal (signed >=) */

loc_00214156:
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021415E:
    edi = 1;
    /* cmp ebp, edi - flags set for next jcc */
    eax = ecx;
    if (CMP_LE(ebp, edi)) goto loc_002141C1; /* jle: less or equal (signed <=) */

loc_00214169:
    /* nop */

loc_00214170:
    SET_LO8(ebx, MEM8(eax));
    if (CMP_EQ(LO8(ebx), MEM8(esp + 0x14))) goto loc_002141C1; /* je: equal / zero */

loc_00214178:
    if (CMP_B(LO8(ebx), 0x20)) goto loc_002141C1; /* jb: below (unsigned <) */

loc_0021417D:
    if (CMP_NE(LO8(ebx), 0x25)) goto loc_002141B8; /* jne: not equal / not zero */

loc_00214182:
    SET_LO8(ecx, MEM8(eax + 1));
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00214191; /* jne: not equal / not zero */

loc_00214189:
    MEM8(esi) = LO8(ebx);
    esi++;
    eax = eax + 2;
    goto loc_002141BC;

loc_00214191:
    if (CMP_B(LO8(ecx), 0x20)) goto loc_002141B8; /* jb: below (unsigned <) */

loc_00214196:
    SET_LO8(edx, MEM8(eax + 2));
    if (CMP_B(LO8(edx), 0x20)) goto loc_002141B8; /* jb: below (unsigned <) */

loc_0021419E:
    edx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(edx + 0x36FB50));
    ecx = ZX8(LO8(ecx));
    SET_LO8(edx, LO8(edx) | MEM8(ecx + 0x36FA50));
    MEM8(esi) = LO8(edx);
    esi++;
    eax = eax + 3;
    goto loc_002141BC;

loc_002141B8:
    MEM8(esi) = LO8(ebx);
    esi++;
    eax++;

loc_002141BC:
    edi++;
    if (CMP_L(edi, ebp)) goto loc_00214170; /* jl: less (signed <) */

loc_002141C1:
    MEM8(esi) = 0;
    eax = edi + -1;
    POP32(esp, ebp);

loc_002141C8:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
