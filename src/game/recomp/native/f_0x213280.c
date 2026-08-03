#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213280
 * Original: 0x00213280 - 0x002134A5 (549 bytes, 220 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213280:
    edx = MEM32(esp + 4);
    if (TEST_NZ(edx, edx)) goto loc_0021328C; /* jne: not equal / not zero */

loc_00213288:
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0021328C:
    eax = MEM32(esp + 0xC);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002134A0; /* je: equal / zero */

loc_00213299:
    SET_LO8(ebx, MEM8(eax));
    if (CMP_BE(LO8(ebx), 0x20)) goto loc_002134A0; /* jbe: below or equal (unsigned <=) */

loc_002132A4:
    /* cmp LO8(ebx), 0x7E - flags set for next jcc */
    SET_LO8(ecx, MEM8(edx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = edx;
    if (CMP_NE(LO8(ebx), 0x7E)) goto loc_002132F2; /* jne: not equal / not zero */

loc_002132AF:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002132E9; /* je: equal / zero */

loc_002132B3:
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002132B3; /* jne: not equal / not zero */

loc_002132BB:
    if (CMP_EQ(eax, edx)) goto loc_002132E9; /* je: equal / zero */

loc_002132BF:
    SET_LO8(ecx, MEM8(eax + -1));
    if (CMP_B(LO8(ecx), 0x20)) goto loc_002132E9; /* jb: below (unsigned <) */

loc_002132C7:
    esi = ZX8(LO8(ecx));
    SET_LO8(ecx, MEM8(0x3C5DA0));
    edi = SX8(LO8(ecx));
    if (CMP_EQ(esi, edi)) goto loc_002132E9; /* je: equal / zero */

loc_002132D7:
    esi = MEM32(esp + 0x14);
    esi = edx + esi + -1;
    if (CMP_AE(eax, esi)) goto loc_002132E9; /* jae: above or equal (unsigned >=) */

loc_002132E3:
    MEM8(eax) = LO8(ecx);
    eax++;
    MEM8(eax) = 0;

loc_002132E9:
    ecx = eax;
    ebx = eax;
    goto loc_002133D3;

loc_002132F2:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002132E9; /* je: equal / zero */

loc_002132F6:
    SET_LO8(ecx, MEM8(eax));
    if (CMP_A(LO8(ecx), 0x20)) goto loc_00213300; /* ja: above (unsigned >) */

loc_002132FD:
    eax++;
    goto loc_0021336D;

loc_00213300:
    ecx = ZX8(LO8(ecx));
    if (CMP_EQ(MEM8(ecx + 0x36FD50), 1)) goto loc_002132E9; /* je: equal / zero */

loc_0021330C:
    edx = ZX8(MEM8(eax));
    SET_LO8(ecx, MEM8(edx + 0x36FD50));
    edx = SX8(LO8(ebx));
    SET_LO8(edx, MEM8(edx + 0x36FD50));
    if (CMP_NE(LO8(ecx), LO8(edx))) goto loc_0021334F; /* jne: not equal / not zero */

loc_00213322:
    esi = MEM32(esp + 0x18);
    edi = eax;
    edi = edi - esi;
    /* nop */

loc_00213330:
    if (CMP_B(LO8(ecx), 2)) goto loc_0021334F; /* jb: below (unsigned <) */

loc_00213335:
    ecx = ZX8(MEM8(edi + esi + 1));
    edx = (uint32_t)(int32_t)SMEM8(esi + 1);
    SET_LO8(ecx, MEM8(ecx + 0x36FD50));
    SET_LO8(edx, MEM8(edx + 0x36FD50));
    esi++;
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_00213330; /* je: equal / zero */

loc_0021334F:
    edx = ZX8(LO8(edx));
    ecx = ZX8(LO8(ecx));
    edx = edx + ecx;
    if (CMP_EQ(edx, 2)) goto loc_002133B6; /* je: equal / zero */

loc_0021335C:
    /* nop */

loc_00213360:
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_00213360; /* jae: above or equal (unsigned >=) */

loc_00213369:
    edx = MEM32(esp + 0x10);

loc_0021336D:
    if (CMP_NE(MEM8(eax), 0)) goto loc_002132F6; /* jne: not equal / not zero */

loc_00213372:
    if (CMP_EQ(eax, edx)) goto loc_002132E9; /* je: equal / zero */

loc_0021337A:
    SET_LO8(ecx, MEM8(eax + -1));
    if (CMP_B(LO8(ecx), 0x20)) goto loc_002132E9; /* jb: below (unsigned <) */

loc_00213386:
    esi = ZX8(LO8(ecx));
    SET_LO8(ecx, MEM8(0x3C5DA0));
    edi = SX8(LO8(ecx));
    if (CMP_EQ(esi, edi)) goto loc_002132E9; /* je: equal / zero */

loc_0021339A:
    esi = MEM32(esp + 0x14);
    esi = edx + esi + -1;
    if (CMP_AE(eax, esi)) goto loc_002132E9; /* jae: above or equal (unsigned >=) */

loc_002133AA:
    MEM8(eax) = LO8(ecx);
    eax++;
    MEM8(eax) = 0;
    ecx = eax;
    ebx = eax;
    goto loc_002133D3;

loc_002133B6:
    /* cmp MEM8(eax), 0x20 - flags set for next jcc */
    ecx = eax;
    ebx = eax;
    if (CMP_B(MEM8(eax), 0x20)) goto loc_002133C9; /* jb: below (unsigned <) */

loc_002133BF:
    /* nop */

loc_002133C0:
    SET_LO8(edx, MEM8(ecx + 1));
    ecx++;
    if (CMP_AE(LO8(edx), 0x20)) goto loc_002133C0; /* jae: above or equal (unsigned >=) */

loc_002133C9:
    /* cmp MEM8(ecx), 0 - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    if (CMP_BE(MEM8(ecx), 0)) goto loc_002133D3; /* jbe: below or equal (unsigned <=) */

loc_002133D2:
    ecx++;

loc_002133D3:
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_B(MEM8(esi), 0x20)) goto loc_002133E7; /* jb: below (unsigned <) */

loc_002133DF:
    /* nop */

loc_002133E0:
    ebp++;
    if (CMP_AE(MEM8(esi + ebp), 0x20)) goto loc_002133E0; /* jae: above or equal (unsigned >=) */

loc_002133E7:
    ebp++;
    esi = ebp;
    esi = esi - ecx;
    esi = esi + eax;
    /* cmp MEM8(ecx), 0 - flags set for next jcc */
    edi = ecx;
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_002133FD; /* je: equal / zero */

loc_002133F5:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002133F5; /* jne: not equal / not zero */

loc_002133FD:
    edi++;
    if (CMP_LE(esi & esi, 0)) goto loc_00213418; /* jle: less or equal (signed <=) */

loc_00213402:
    eax = MEM32(esp + 0x18);
    edx = edx - edi;
    edx = edx + eax;
    if (CMP_GE(edx, esi)) goto loc_00213416; /* jge: greater or equal (signed >=) */

loc_0021340E:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00213416:
    /* test esi, esi - flags set for next jcc */

loc_00213418:
    if (TEST_NZ(esi, esi)) goto loc_0021342F; /* jne: not equal / not zero */

loc_0021341A:
    edi = MEM32(esp + 0x1C);
    ecx = ebp;
    esi = ebx;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0021345D; /* jne: not equal / not zero */

loc_00213428:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021342F:
    if (CMP_LE(esi & esi, 0)) goto loc_00213446; /* jle: less or equal (signed <=) */

loc_00213433:
    eax = edi;
    eax = eax - ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002442A0(); /* call 0x002442A0 */

loc_00213441:
    esp = esp + 0xC;
    /* test esi, esi - flags set for next jcc */

loc_00213446:
    if (CMP_GE(esi & esi, 0)) goto loc_0021345D; /* jge: greater or equal (signed >=) */

loc_00213448:
    edx = esi;
    edx = edx - ebx;
    edx = edx + edi;
    PUSH32(esp, edx);
    eax = ebx;
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002442A0(); /* call 0x002442A0 */

loc_0021345A:
    esp = esp + 0xC;

loc_0021345D:
    esi = MEM32(esp + 0x1C);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    if (CMP_NE(MEM8(ebx + ebp), 0)) goto loc_0021348F; /* jne: not equal / not zero */

loc_00213479:
    if (CMP_EQ(MEM8(0x3C5DA0), 0xA)) goto loc_0021348F; /* je: equal / zero */

loc_00213482:
    MEM8(ebx + ebp + -1) = 0;
    eax = ebp + -1;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021348F:
    SET_LO8(eax, MEM8(0x3C5DA0));
    MEM8(ebx + ebp + -1) = LO8(eax);
    eax = ebp + -1;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002134A0:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
