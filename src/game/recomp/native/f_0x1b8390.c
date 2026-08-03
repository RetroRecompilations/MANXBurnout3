#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B8390
 * Original: 0x001B8390 - 0x001B84D1 (321 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8390:
    esp = esp - 8;
    SET_LO8(ecx, MEM8(edx + 2));
    PUSH32(esp, ebx);
    ebx = ebx | 0xFFFFFFFFu;
    /* test LO8(ecx), 1 - flags set for next jcc */
    MEM32(esp + 4) = ebx;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_001B83AA; /* jne: not equal / not zero */

loc_001B83A3:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001B83AA:
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = esi;
    ecx = eax + 0x324;
    PUSH32(esp, edi);
    /* nop */

loc_001B83C0:
    edi = MEM32(edx + 4);
    if (CMP_NE(MEM32(ecx), edi)) goto loc_001B8422; /* jne: not equal / not zero */

loc_001B83C7:
    SET_LO16(edi, MEM16(edx + 0xC));
    ebp = MEM32(ecx + 4);
    ebx = ZX16(LO16(edi));
    if (CMP_NE(ebp, ebx)) goto loc_001B83E2; /* jne: not equal / not zero */

loc_001B83D5:
    ebx = (uint32_t)(int32_t)SMEM8(edx + 3);
    if (CMP_EQ(MEM32(ecx + 8), ebx)) goto loc_001B8465; /* je: equal / zero */

loc_001B83E2:
    ebx = (uint32_t)(int32_t)SMEM8(edx + 3);
    ebp = MEM32(ecx + 8);
    if (CMP_NE(ebp, ebx)) goto loc_001B841E; /* jne: not equal / not zero */

loc_001B83ED:
    SET_LO16(esi, MEM16(ecx + 4));
    if (CMP_AE(LO16(esi), 0x5555)) goto loc_001B83FF; /* jae: above or equal (unsigned >=) */

loc_001B83F8:
    if (CMP_A(LO16(edi), 0xAAAA)) goto loc_001B8465; /* ja: above (unsigned >) */

loc_001B83FF:
    if (CMP_AE(LO16(edi), 0x5555)) goto loc_001B840D; /* jae: above or equal (unsigned >=) */

loc_001B8406:
    if (CMP_A(LO16(esi), 0xAAAA)) goto loc_001B8412; /* ja: above (unsigned >) */

loc_001B840D:
    if (CMP_A(LO16(esi), LO16(edi))) goto loc_001B8465; /* ja: above (unsigned >) */

loc_001B8412:
    /* cmp ebp, ebx - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    if (CMP_NE(ebp, ebx)) goto loc_001B841E; /* jne: not equal / not zero */

loc_001B841A:
    MEM32(esp + 0x10) = esi;

loc_001B841E:
    ebx = MEM32(esp + 0x10);

loc_001B8422:
    esi++;
    ecx = ecx + 0xC;
    /* cmp esi, 0xA - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_L(esi, 0xA)) goto loc_001B83C0; /* jl: less (signed <) */

loc_001B842F:
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_001B846F; /* je: equal / zero */

loc_001B8434:
    ecx = MEM32(edx + 4);
    esi = ebx + ebx * 2 + 0xC9;
    MEM32(eax + esi * 4) = ecx;
    ecx = ebx + ebx * 2;
    eax = eax + ecx * 4;
    ecx = ZX16(MEM16(edx + 0xC));
    POP32(esp, edi);
    MEM32(eax + 0x328) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(edx + 3);
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM32(eax + 0x32C) = edx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001B8465:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001B846F:
    ecx = MEM32(eax + 0x39C);
    ecx = ecx + 0x43;
    esi = ecx + ecx * 2;
    ecx = MEM32(edx + 4);
    MEM32(eax + esi * 4) = ecx;
    esi = ZX16(MEM16(edx + 0xC));
    ecx = MEM32(eax + 0x39C);
    ecx = ecx + ecx * 2;
    MEM32(eax + ecx * 4 + 0x328) = esi;
    edx = (uint32_t)(int32_t)SMEM8(edx + 3);
    ecx = MEM32(eax + 0x39C);
    ecx = ecx + ecx * 2;
    MEM32(eax + ecx * 4 + 0x32C) = edx;
    edx = MEM32(eax + 0x39C);
    edx++;
    ecx = edx;
    /* cmp ecx, 0xA - flags set for next jcc */
    MEM32(eax + 0x39C) = edx;
    if (CMP_L(ecx, 0xA)) goto loc_001B84C7; /* jl: less (signed <) */

loc_001B84BD:
    MEM32(eax + 0x39C) = 0;

loc_001B84C7:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
