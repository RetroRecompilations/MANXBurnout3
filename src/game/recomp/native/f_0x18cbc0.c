#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018CBC0
 * Original: 0x0018CBC0 - 0x0018D00F (1103 bytes, 346 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0;

loc_0018CBC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    /* cmp MEM32(esi), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 0;
    MEM8(esp + 0x24) = 0;
    MEM32(esp + 0x38) = 4;
    if (CMP_NE(MEM32(esi), 0)) goto loc_0018CC1C; /* jne: not equal / not zero */

loc_0018CBE8:
    edx = MEM32(0x3FA644);
    if (CMP_NE(edx, 2)) goto loc_0018CBFA; /* jne: not equal / not zero */

loc_0018CBF3:
    ecx = 0x3FA4D4;
    goto loc_0018CBFF;

loc_0018CBFA:
    ecx = 0x3FA014;

loc_0018CBFF:
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0018CC04:
    /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0018CC1C; /* jne: not equal / not zero */

loc_0018CC0A:
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_001C9600(); /* call 0x001C9600 */

loc_0018CC13:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018CC1C:
    eax = MEM32(0x3FA644);
    ecx = MEM32(0x3FA4DC);
    edi = MEM32(0x7397B4);
    SET_LO8(edx, MEM8(edi + 0x36));
    /* cmp eax, 2 - flags set for next jcc */
    if (CMP_NE(eax, 2)) ecx = MEM32(0x3FA01C); /* cmovne */
    eax = MEM32(esi);
    ebx = eax + ecx;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x40));
    MEM8(esp + 0x13) = LO8(edx);
    MEM32(esp + 0x2C) = eax;
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;
    MEM32(esp + 0x30) = ebx;
    MEM8(esp + 0x24) = 1;
    MEM32(esp + 0x20) = ecx;
    ecx = ZX16(LO16(ecx));
    edx = ecx;
    edx = edx << 6;
    edx = edx + eax;
    /* cmp edx, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x38) = 0x10;
    MEM32(esp + 0x34) = edx;
    if (CMP_BE(edx, ebx)) goto loc_0018CC80; /* jbe: below or equal (unsigned <=) */

loc_0018CC7E:
    eax = 0; /* xor self */

loc_0018CC80:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x3C) = eax;
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0018CD53; /* je: equal / zero */

loc_0018CC8F:
    if (CMP_LE(ecx & ecx, 0)) goto loc_0018CCD7; /* jle: less or equal (signed <=) */

loc_0018CC93:
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_0018CCA0:
    eax = MEM32(edi + 0x48);
    ecx = MEM32(esi + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ebx), 16); /* movaps */
    eax = eax + ebx;
    ecx = ecx + ebx;
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(esp + 0x14);
    ebx = ebx + 0x40;
    eax--;
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0018CCA0; /* jne: not equal / not zero */

loc_0018CCD7:
    ebx = ZX8(MEM8(esp + 0x13));
    eax = MEM32(esp + 0x30);
    ecx = edx + ebx;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x38) = 1;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x34) = ecx;
    if (CMP_BE(ecx, eax)) goto loc_0018CCF9; /* jbe: below or equal (unsigned <=) */

loc_0018CCF7:
    edx = 0; /* xor self */

loc_0018CCF9:
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x3C) = edx;
    MEM32(esi + 8) = edx;
    if (TEST_Z(edx, edx)) goto loc_0018CD53; /* je: equal / zero */

loc_0018CD04:
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0018CD25; /* jle: less or equal (signed <=) */

loc_0018CD0A:
    /* nop */

loc_0018CD10:
    ecx = MEM32(edi + 0x44);
    SET_LO8(ecx, MEM8(eax + ecx));
    edx = MEM32(esi + 8);
    MEM8(eax + edx) = LO8(ecx);
    eax++;
    if (CMP_L(eax, ebx)) goto loc_0018CD10; /* jl: less (signed <) */

loc_0018CD21:
    ecx = MEM32(esp + 0x34);

loc_0018CD25:
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x54);
    eax = ecx + 3;
    ecx = MEM32(esp + 0x30);
    eax = eax & 0xFFFFFFFCu;
    edx = eax + edx * 4;
    /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x38) = 4;
    MEM32(esp + 0x34) = edx;
    if (CMP_BE(edx, ecx)) goto loc_0018CD48; /* jbe: below or equal (unsigned <=) */

loc_0018CD46:
    eax = 0; /* xor self */

loc_0018CD48:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x3C) = eax;
    MEM32(esi + 0x14) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0018CD6A; /* jne: not equal / not zero */

loc_0018CD53:
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_001C9600(); /* call 0x001C9600 */

loc_0018CD5C:
    PUSH32(esp, 0); sub_001C9600(); /* call 0x001C9600 */

loc_0018CD61:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018CD6A:
    /* cmp MEM16(edi + 0x54), 0 - flags set for next jcc */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(MEM16(edi + 0x54), 0)) goto loc_0018CDBC; /* jle: less or equal (signed <=) */

loc_0018CD79:
    ecx = eax;
    goto loc_0018CD80;

    /* nop */

loc_0018CD80:
    eax = MEM32(esp + 0x14);
    ebx = edx;
    edx = ebx + eax;
    /* cmp MEM32(esp + 0x30), edx - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(ecx + ebx * 4) = eax;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(MEM32(ecx + ebx * 4), 0)) goto loc_0018CFB6; /* je: equal / zero */

loc_0018CDA7:
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x54);
    ebx++;
    /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_L(ebx, eax)) goto loc_0018CD80; /* jl: less (signed <) */

loc_0018CDB4:
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0x34) = edx;

loc_0018CDBC:
    ecx = 0; /* xor self */
    if (CMP_LE(MEM16(edi + 0x54), LO16(ecx))) goto loc_0018CDFC; /* jle: less or equal (signed <=) */

loc_0018CDC4:
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0018CDF3; /* jle: less or equal (signed <=) */

loc_0018CDCA:
    /* nop */

loc_0018CDD0:
    edx = MEM32(edi + 0x4C);
    edx = MEM32(edx + ecx * 4);
    ebx = MEM32(esi + 0x14);
    SET_LO8(edx, MEM8(eax + edx));
    ebx = MEM32(ebx + ecx * 4);
    MEM8(eax + ebx) = LO8(edx);
    edx = MEM32(esp + 0x14);
    eax++;
    if (CMP_L(eax, edx)) goto loc_0018CDD0; /* jl: less (signed <) */

loc_0018CDEB:
    edx = MEM32(esp + 0x34);
    ebx = MEM32(esp + 0x14);

loc_0018CDF3:
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x54);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0018CDC4; /* jl: less (signed <) */

loc_0018CDFC:
    eax = MEM32(esp + 0x30);
    ecx = edx + 3;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x54);
    ecx = ecx & 0xFFFFFFFCu;
    edx = ecx + edx * 4;
    /* cmp eax, edx - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & ecx;
    MEM32(esi + 0x18) = eax;
    if ((eax == 0)) goto loc_0018CF6D; /* je: equal / zero */

loc_0018CE1E:
    ebx = 0; /* xor self */
    if (CMP_LE(MEM16(edi + 0x54), LO16(ebx))) goto loc_0018CEC6; /* jle: less or equal (signed <=) */

loc_0018CE2A:
    /* nop */

loc_0018CE30:
    edi = MEM32(esp + 0x30);
    ecx = edx + 0xF;
    edx = MEM32(esp + 0x14);
    ecx = ecx & 0xFFFFFFF0u;
    edx = ecx + edx * 4;
    /* cmp edi, edx - flags set for next jcc */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = ~edi;
    edi = edi & ecx;
    MEM32(eax + ebx * 4) = edi;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + ebx * 4);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0018D002; /* je: equal / zero */

loc_0018CE5E:
    ecx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0018CEB1; /* jle: less or equal (signed <=) */

loc_0018CE68:
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x1C) = eax;

loc_0018CE70:
    ecx = MEM32(esi + 0x14);
    eax = edx + 1;
    edx = MEM32(ecx + ebx * 4);
    ecx = ZX8(MEM8(edx + edi));
    eax = eax & 0xFFFFFFFEu;
    edx = eax + ecx * 4;
    /* cmp MEM32(esp + 0x30), edx - flags set for next jcc */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ~ecx;
    ecx = ecx & eax;
    eax = MEM32(esp + 0x1C);
    MEM32(eax + edi * 4) = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + ebx * 4);
    /* cmp MEM32(ecx + edi * 4), 0 - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(MEM32(ecx + edi * 4), 0)) goto loc_0018CF6D; /* je: equal / zero */

loc_0018CEA8:
    ecx = MEM32(esp + 0x14);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0018CE70; /* jl: less (signed <) */

loc_0018CEB1:
    ecx = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x54);
    ebx++;
    if (CMP_L(ebx, ecx)) goto loc_0018CE30; /* jl: less (signed <) */

loc_0018CEC2:
    edi = MEM32(esp + 0x18);

loc_0018CEC6:
    edx = 0; /* xor self */
    if (CMP_LE(MEM16(edi + 0x54), LO16(edx))) goto loc_0018CF4A; /* jle: less or equal (signed <=) */

loc_0018CECE:
    edi = edi;

loc_0018CED0:
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0018CF41; /* jle: less or equal (signed <=) */

loc_0018CEDA:
    /* nop */

loc_0018CEE0:
    ebx = MEM32(esi + 0x14);
    ebx = MEM32(ebx + edx * 4);
    ecx = 0; /* xor self */
    if (CMP_BE(MEM8(eax + ebx), LO8(ecx))) goto loc_0018CF38; /* jbe: below or equal (unsigned <=) */

loc_0018CEED:
    /* nop */

loc_0018CEF0:
    edi = MEM32(edi + 0x50);
    edi = MEM32(edi + edx * 4);
    edi = MEM32(edi + eax * 4);
    SET_LO16(edi, MEM16(edi + ecx * 4));
    ebx = MEM32(esi + 0x18);
    ebx = MEM32(ebx + edx * 4);
    ebx = MEM32(ebx + eax * 4);
    MEM16(ebx + ecx * 4) = LO16(edi);
    edi = MEM32(esi + 0x18);
    edi = MEM32(edi + edx * 4);
    edi = MEM32(edi + eax * 4);
    MEM8(edi + ecx * 4 + 2) = LO8(eax);
    edi = MEM32(esi + 0x18);
    edi = MEM32(edi + edx * 4);
    edi = MEM32(edi + eax * 4);
    MEM8(edi + ecx * 4 + 3) = 0;
    edi = MEM32(esi + 0x14);
    edi = MEM32(edi + edx * 4);
    edi = ZX8(MEM8(edi + eax));
    ecx++;
    /* cmp ecx, edi - flags set for next jcc */
    edi = MEM32(esp + 0x18);
    if (CMP_L(ecx, edi)) goto loc_0018CEF0; /* jl: less (signed <) */

loc_0018CF38:
    ecx = MEM32(esp + 0x14);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0018CEE0; /* jl: less (signed <) */

loc_0018CF41:
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x54);
    edx++;
    if (CMP_L(edx, eax)) goto loc_0018CED0; /* jl: less (signed <) */

loc_0018CF4A:
    SET_LO16(ecx, MEM16(esp + 0x20));
    SET_LO8(edx, MEM8(esp + 0x13));
    MEM16(esi + 0x10) = LO16(ecx);
    ecx = 0x20;
    eax = 0; /* xor self */
    edi = esi + 0x1C;
    MEM8(esi + 0x12) = LO8(edx);
    MEM32(esi + 0xC) = 0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0018CF6D:
    ecx = MEM32(0x4A1ED8);
    eax = esp + 0x24;
    if (CMP_NE(eax, ecx)) goto loc_0018CFAD; /* jne: not equal / not zero */

loc_0018CF7B:
    PUSH32(esp, 0); sub_001E0E00(); /* call 0x001E0E00 */

loc_0018CF80:
    ecx = MEM32(0x4A1BC0);
    edx = MEM32(0x4A1BC4);
    MEM32(eax) = ecx;
    ecx = MEM32(0x4A1BC8);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x4A1BCC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(0x4A1ED8) = 0;

loc_0018CFAD:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018CFB6:
    eax = MEM32(0x4A1ED8);
    ecx = esp + 0x24;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x34) = edx;
    if (CMP_NE(ecx, eax)) goto loc_0018CFAD; /* jne: not equal / not zero */

loc_0018CFC7:
    PUSH32(esp, 0); sub_001E0E00(); /* call 0x001E0E00 */

loc_0018CFCC:
    edx = MEM32(0x4A1BC0);
    ecx = MEM32(0x4A1BC4);
    MEM32(eax) = edx;
    edx = MEM32(0x4A1BC8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x4A1BCC);
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    MEM32(eax + 0xC) = ecx;
    MEM32(0x4A1ED8) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018D002:
    eax = MEM32(0x4A1ED8);
    edx = esp + 0x24;
    /* cmp edx, eax - flags set for next jcc */

}
