#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00224400
 * Original: 0x00224400 - 0x00224AB1 (1713 bytes, 467 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00224400:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x97C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi);
    ebx = MEM32(esi + 0x120);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_00224548; /* je: equal / zero */

loc_00224424:
    eax = MEM32(esi + 0x118);
    if (CMP_L(eax, 0xA)) goto loc_00224548; /* jl: less (signed <) */

loc_00224433:
    if (CMP_G(eax, 0x10)) goto loc_00224548; /* jg: greater (signed >) */

loc_0022443C:
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    if (CMP_GE(edx, eax)) goto loc_0022446B; /* jge: greater or equal (signed >=) */

loc_00224445:
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = eax - edx;
    PUSH32(esp, eax);
    eax = edx + ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00220B90(); /* call 0x00220B90 */

loc_00224456:
    esp = esp + 0x18;
    if (CMP_LE(eax, edi)) goto loc_0022445F; /* jle: less or equal (signed <=) */

loc_0022445D:
    MEM32(ebx) = MEM32(ebx) + eax;

loc_0022445F:
    ecx = MEM32(ebx);
    if (CMP_NE(ecx, MEM32(ebx + 4))) goto loc_0022446B; /* jne: not equal / not zero */

loc_00224466:
    MEM32(ebx + 4) = edi;
    MEM32(ebx) = edi;

loc_0022446B:
    eax = MEM32(ebx + 0x4010);
    if (CMP_GE(eax, 4)) goto loc_002244BA; /* jge: greater or equal (signed >=) */

loc_00224476:
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edx = 4;
    edx = edx - eax;
    PUSH32(esp, edx);
    eax = eax + ebx + 0x4018;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00220C70(); /* call 0x00220C70 */

loc_00224491:
    esp = esp + 0x18;
    if (CMP_LE(eax, edi)) goto loc_002244AE; /* jle: less or equal (signed <=) */

loc_00224498:
    ecx = MEM32(ebx + 0x4010);
    ecx = ecx + eax;
    MEM32(ebx + 0x4010) = ecx;
    MEM32(ebx + 0x400C) = ecx;
    /* cmp eax, edi - flags set for next jcc */

loc_002244AE:
    if (CMP_GE(eax, edi)) goto loc_002244BA; /* jge: greater or equal (signed >=) */

loc_002244B0:
    MEM32(esi + 0x11C) = 1;

loc_002244BA:
    if (CMP_NE(MEM32(ebx + 0x4010), 4)) goto loc_00224507; /* jne: not equal / not zero */

loc_002244C3:
    edx = ZX8(MEM8(ebx + 0x4019));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(ebx + 0x4018));
    eax = eax | edx;
    /* cmp eax, 0x8000 - flags set for next jcc */
    MEM32(ebx + 0x4010) = eax;
    if (CMP_GE(eax, 0x8000)) goto loc_002244F9; /* jge: greater or equal (signed >=) */

loc_002244E1:
    ecx = ZX8(MEM8(ebx + 0x401A));
    eax = eax & 0x3FFF;
    edx = ecx + eax + 3;
    MEM32(ebx + 0x4010) = edx;
    goto loc_00224507;

loc_002244F9:
    eax = eax & 0x7FFF;
    eax = eax + 2;
    MEM32(ebx + 0x4010) = eax;

loc_00224507:
    ecx = MEM32(ebx + 0x400C);
    eax = MEM32(ebx + 0x4010);
    if (CMP_GE(ecx, eax)) goto loc_00224548; /* jge: greater or equal (signed >=) */

loc_00224517:
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = eax - ecx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ecx + ebx + 0x4018;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00220C70(); /* call 0x00220C70 */

loc_0022452D:
    esp = esp + 0x18;
    if (CMP_LE(eax, edi)) goto loc_0022453C; /* jle: less or equal (signed <=) */

loc_00224534:
    MEM32(ebx + 0x400C) = MEM32(ebx + 0x400C) + eax;
    /* cmp eax, edi - flags set for next jcc */

loc_0022453C:
    if (CMP_GE(eax, edi)) goto loc_00224548; /* jge: greater or equal (signed >=) */

loc_0022453E:
    MEM32(esi + 0x11C) = 1;

loc_00224548:
    if (CMP_NE(MEM32(esi + 0x118), 1)) goto loc_002245AB; /* jne: not equal / not zero */

loc_00224551:
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00224558:
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002245AB; /* je: equal / zero */

loc_0022455F:
    ecx = MEM32(esi + 4);
    if (CMP_NE(MEM32(ecx + 4), edi)) goto loc_00224573; /* jne: not equal / not zero */

loc_00224567:
    MEM32(esi + 0x118) = 0x1001;
    goto loc_002245A1;

loc_00224573:
    MEM32(esi + 0x118) = 2;
    eax = MEM32(ecx + 4);
    MEM8(esi + 0x10F) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 0x10E) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 0x10D) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 0x10C) = LO8(eax);

loc_002245A1:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_002245A5:
    esp = esp + 4;
    MEM32(esi + 4) = edi;

loc_002245AB:
    if (CMP_NE(MEM32(esi + 0x118), 2)) goto loc_002245D2; /* jne: not equal / not zero */

loc_002245B4:
    eax = MEM32(esi);
    PUSH32(esp, 0x10);
    edx = esi + 0x108;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00220A40(); /* call 0x00220A40 */

loc_002245C5:
    esp = esp + 0xC;
    MEM32(esi + 0x118) = 3;

loc_002245D2:
    if (CMP_NE(MEM32(esi + 0x118), 3)) goto loc_00224621; /* jne: not equal / not zero */

loc_002245DB:
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x73746174);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00220DF0(); /* call 0x00220DF0 */

loc_002245EA:
    esp = esp + 0x10;
    if (CMP_LE(eax, edi)) goto loc_0022460B; /* jle: less or equal (signed <=) */

loc_002245F1:
    edx = ebx;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0xFFFFFFF6u;
    edx = edx + 0x14;
    MEM32(esi + 0x118) = edx;
    MEM32(esi + 0x11C) = edi;
    /* cmp eax, edi - flags set for next jcc */

loc_0022460B:
    if (CMP_GE(eax, edi)) goto loc_00224621; /* jge: greater or equal (signed >=) */

loc_0022460D:
    MEM32(esi + 0x118) = 0x1002;
    MEM32(esi + 0x11C) = 1;

loc_00224621:
    if (CMP_NE(MEM32(esi + 0x118), 0xA)) goto loc_002246CD; /* jne: not equal / not zero */

loc_0022462E:
    SET_LO16(ecx, MEM16(0x370C68));
    SET_LO8(edx, MEM8(0x370C6A));
    eax = 0; /* xor self */
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = eax;
    MEM16(esp + 0x78) = LO16(eax);
    MEM16(esp + 0x79) = LO16(ecx);
    MEM8(esp + 0x71) = LO8(eax);
    MEM8(esp + 0x73) = LO8(eax);
    MEM8(esp + 0x75) = LO8(eax);
    MEM8(esp + 0x76) = LO8(eax);
    MEM8(esp + 0x7B) = LO8(edx);
    MEM8(esp + 0x70) = 1;
    MEM8(esp + 0x72) = 2;
    MEM8(esp + 0x74) = 3;
    eax = MEM32(ebx + 0x81B4);
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM8(esp + 0x77) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x81B4));
    MEM8(esp + 0x78) = LO8(ecx);
    ecx = MEM32(ebx + 0x81B4);
    edx = ecx;
    ecx = ecx >> 2;
    esi = ebx + 0x81B8;
    edi = esp + 0x7C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x81B4);
    esi = MEM32(ebp + 8);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00223070(); /* call 0x00223070 */

loc_002246C0:
    esp = esp + 8;
    MEM32(esi + 0x118) = 0xB;

loc_002246CD:
    if (CMP_NE(MEM32(esi + 0x118), 0xB)) goto loc_002247A0; /* jne: not equal / not zero */

loc_002246DA:
    eax = MEM32(ebx + 0x4010);
    if (CMP_NE(MEM32(ebx + 0x400C), eax)) goto loc_002247A0; /* jne: not equal / not zero */

loc_002246EC:
    if (CMP_LE(eax, 4)) goto loc_002247A0; /* jle: less or equal (signed <=) */

loc_002246F5:
    eax = esi;
    PUSH32(esp, 0); sub_00223240(); /* call 0x00223240 */

loc_002246FC:
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 7));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + 5));
    edi = eax + 0xB;
    SET_LO8(edx, MEM8(eax + 8));
    SET_LO8(ecx, MEM8(eax + 6));
    MEM32(esp + 0xC) = edx;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 9));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(edx, MEM8(eax + 0xA));
    eax = ebx + 0x81F4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00223500(); /* call 0x00223500 */

loc_00224732:
    esp = esp + 0x10;
    if (CMP_GE(eax & eax, 0)) goto loc_00224745; /* jge: greater or equal (signed >=) */

loc_00224739:
    MEM32(esi + 0x118) = 0x1003;
    goto loc_002247A0;

loc_00224745:
    edi = edi + MEM32(esp + 0x14);
    edx = edi;
    SET_LO16(eax, MEM16(edx));
    ecx = ebx + 0x8020;
    MEM16(ecx) = LO16(eax);
    SET_LO8(edx, MEM8(edx + 2));
    eax = MEM32(esp + 0xC);
    MEM8(ecx + 2) = LO8(edx);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x81D0) = ecx;
    edx = ecx;
    esi = edi + eax;
    eax = MEM32(ebp + 8);
    ecx = ecx >> 2;
    edi = ebx + 0x81D4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + 8);
    MEM32(eax + 0x118) = 0xC;
    eax = 0; /* xor self */
    MEM32(ebx + 0x4010) = eax;
    MEM32(ebx + 0x400C) = eax;

loc_002247A0:
    if (CMP_NE(MEM32(esi + 0x118), 0xC)) goto loc_00224944; /* jne: not equal / not zero */

loc_002247AD:
    eax = ZX8(MEM8(ebx + 0x8022));
    eax = eax >> 3;
    edi = ebx + 0x86BC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx + 0x8028;
    PUSH32(esp, esi);
    MEM32(ebx + 0x8024) = eax;
    PUSH32(esp, 0); sub_00222EB0(); /* call 0x00222EB0 */

loc_002247D1:
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225550(); /* call 0x00225550 */

loc_002247DB:
    edx = MEM32(ebx + 0x8024);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002247ED:
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x38;
    PUSH32(esp, 0x3AC42C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002247FE:
    edx = MEM32(ebx + 0x81B4);
    PUSH32(esp, edx);
    eax = ebx + 0x81B8;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_00224816:
    edx = MEM32(ebx + 0x81D0);
    PUSH32(esp, edx);
    eax = ebx + 0x81D4;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_0022482E:
    esp = esp + 0x40;
    eax = ebx + 0x80AC;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(ebx + 0x80A8) = 0x10;
    PUSH32(esp, 0); sub_002255E0(); /* call 0x002255E0 */

loc_0022484E:
    eax = MEM32(ebx + 0x80A8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ebx + 0x80AC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00226970(); /* call 0x00226970 */

loc_00224864:
    ecx = MEM32(ebx + 0x8634);
    eax = MEM32(ebx + 0x85AC);
    PUSH32(esp, ecx);
    edx = ebx + 0x8638;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx + 0x85B0;
    PUSH32(esp, ecx);
    edx = esp + 0x49C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002275A0(); /* call 0x002275A0 */

loc_0022488D:
    eax = MEM32(ebx + 0x8024);
    PUSH32(esp, eax);
    ecx = esp + 0x4A4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227600(); /* call 0x00227600 */

loc_002248A2:
    edx = esp + 0x4AC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002276C0(); /* call 0x002276C0 */

loc_002248AF:
    esp = esp + 0x40;
    eax = 0; /* xor self */
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = eax;
    MEM16(esp + 0x78) = LO16(eax);
    MEM8(esp + 0x7A) = LO8(eax);
    MEM8(esp + 0x70) = 2;
    SET_LO8(ecx, MEM8(ebx + 0x8020));
    MEM8(esp + 0x71) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x8021));
    MEM8(esp + 0x72) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x8022));
    MEM8(esp + 0x73) = LO8(eax);
    ecx = MEM32(ebx + 0x85AC);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(esp + 0x76) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x85AC));
    MEM8(esp + 0x77) = LO8(edx);
    ecx = MEM32(ebx + 0x85AC);
    eax = ecx;
    ecx = ecx >> 2;
    esi = esp + 0x470;
    edi = esp + 0x7A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x85AC);
    esi = MEM32(ebp + 8);
    ecx = ecx + 0xA;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00223070(); /* call 0x00223070 */

loc_00224937:
    esp = esp + 8;
    MEM32(esi + 0x118) = 0xD;

loc_00224944:
    /* cmp MEM32(esi + 0x118), 0xD - flags set for next jcc */
    edi = 0xE;
    if (CMP_NE(MEM32(esi + 0x118), 0xD)) goto loc_00224980; /* jne: not equal / not zero */

loc_00224952:
    eax = MEM32(ebx + 0x4010);
    if (CMP_NE(MEM32(ebx + 0x400C), eax)) goto loc_00224980; /* jne: not equal / not zero */

loc_00224960:
    if (CMP_LE(eax, 4)) goto loc_00224980; /* jle: less or equal (signed <=) */

loc_00224965:
    eax = esi;
    PUSH32(esp, 0); sub_00223240(); /* call 0x00223240 */

loc_0022496C:
    eax = 0; /* xor self */
    MEM32(esi + 0x118) = edi;
    MEM32(ebx + 0x4010) = eax;
    MEM32(ebx + 0x400C) = eax;

loc_00224980:
    if (CMP_NE(MEM32(esi + 0x118), edi)) goto loc_00224A6F; /* jne: not equal / not zero */

loc_0022498C:
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225550(); /* call 0x00225550 */

loc_00224996:
    ecx = MEM32(ebx + 0x8024);
    PUSH32(esp, ecx);
    edx = ebx + 0x8028;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002249AE:
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x3AF1E4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002249BF:
    edx = MEM32(ebx + 0x81B4);
    PUSH32(esp, edx);
    eax = ebx + 0x81B8;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002249D7:
    edx = MEM32(ebx + 0x81D0);
    PUSH32(esp, edx);
    esi = ebx + 0x81D4;
    eax = esp + 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002249EF:
    PUSH32(esp, 0x10);
    edi = ebx + 0x8130;
    ecx = esp + 0x50;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(ebx + 0x812C) = 0x10;
    PUSH32(esp, 0); sub_002255E0(); /* call 0x002255E0 */

loc_00224A0C:
    edx = MEM32(ebx + 0x812C);
    esp = esp + 0x40;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = ebx + 0x87BE;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226970(); /* call 0x00226970 */

loc_00224A25:
    MEM8(esp + 0x80) = 3;
    ecx = MEM32(ebx + 0x81D0);
    edx = ecx;
    ecx = ecx >> 2;
    edi = esp + 0x81;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x81D0);
    esi = MEM32(ebp + 8);
    eax++;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00223070(); /* call 0x00223070 */

loc_00224A62:
    esp = esp + 0x18;
    MEM32(esi + 0x118) = 0xF;

loc_00224A6F:
    if (CMP_NE(MEM32(esi + 0x118), 0xF)) goto loc_00224AAA; /* jne: not equal / not zero */

loc_00224A78:
    eax = MEM32(ebx + 0x4010);
    if (CMP_NE(MEM32(ebx + 0x400C), eax)) goto loc_00224AAA; /* jne: not equal / not zero */

loc_00224A86:
    if (CMP_LE(eax, 4)) goto loc_00224AAA; /* jle: less or equal (signed <=) */

loc_00224A8B:
    eax = esi;
    PUSH32(esp, 0); sub_00223240(); /* call 0x00223240 */

loc_00224A92:
    eax = 0; /* xor self */
    MEM32(ebx + 0x4010) = eax;
    MEM32(ebx + 0x400C) = eax;
    MEM32(esi + 0x118) = 0x10;

loc_00224AAA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
