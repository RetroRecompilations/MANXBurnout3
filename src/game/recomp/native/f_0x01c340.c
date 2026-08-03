#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001C340
 * Original: 0x0001C340 - 0x0001C9CF (1679 bytes, 485 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001C340:
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x12;
    edi = 0x44D01F;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = 0; /* xor self */
    ecx = 0x19;
    edi = 0x44D068;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(0x4D1FE8);
    MEM32(0x44D15C) = eax;
    MEM32(0x44D160) = eax;
    /* cmp MEM32(ecx + 8), eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_LE(MEM32(ecx + 8), eax)) goto loc_0001C660; /* jle: less or equal (signed <=) */

loc_0001C381:
    edx = MEM32(0x4D1FE8);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + eax * 8 + 4);
    /* test edx, edx - flags set for next jcc */
    ecx = ecx + eax * 8;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(edx & edx, 0)) goto loc_0001C64A; /* jle: less or equal (signed <=) */

loc_0001C3A5:
    MEM32(esp + 0x38) = 0;
    /* nop */

loc_0001C3B0:
    eax = MEM32(ecx);
    esi = MEM32(esp + 0x38);
    edx = MEM32(eax + esi + 0x14);
    eax = eax + esi;
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(edx & edx, 0)) goto loc_0001C627; /* jle: less or equal (signed <=) */

loc_0001C3D0:
    MEM32(esp + 0x2C) = 0;

loc_0001C3D8:
    esi = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi + eax + 0x34);
    edi = MEM32(esp + 0x4C);
    esi = esi + eax;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = esi;
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001C3FA:
    esp = esp + 8;
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x34) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001C600; /* je: equal / zero */

loc_0001C40A:
    ecx = MEM32(esi + 0x1C);
    if (TEST_Z(HI8(ecx), 0x1C)) goto loc_0001C41A; /* je: equal / zero */

loc_0001C412:
    MEM8(eax + edi + 0x386) = 3;

loc_0001C41A:
    ecx = MEM32(esi + 0x1C);
    if (TEST_NZ(ecx, ecx)) goto loc_0001C428; /* jne: not equal / not zero */

loc_0001C421:
    MEM8(eax + 0x44D01F) = 1;

loc_0001C428:
    if (TEST_Z(MEM8(esi + 0x1C), 1)) goto loc_0001C44D; /* je: equal / zero */

loc_0001C42E:
    if (TEST_Z(eax, eax)) goto loc_0001C446; /* je: equal / zero */

loc_0001C432:
    SET_LO8(ecx, MEM8(eax + edi + 0x385));
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0001C44D; /* jle: less or equal (signed <=) */

loc_0001C43D:
    MEM8(eax + 0x44D01F) = 1;
    goto loc_0001C44D;

loc_0001C446:
    MEM8(0x44D01F) = 1;

loc_0001C44D:
    if (TEST_Z(MEM8(esi + 0x1C), 2)) goto loc_0001C462; /* je: equal / zero */

loc_0001C453:
    edx = MEM32(edi + 0x40);
    if (CMP_B(edx, MEM32(esi + 0x20))) goto loc_0001C462; /* jb: below (unsigned <) */

loc_0001C45B:
    MEM8(eax + 0x44D01F) = 1;

loc_0001C462:
    eax = MEM32(esi + 0x1C);
    /* test LO8(eax), 8 - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(LO8(eax), 8)) goto loc_0001C574; /* je: equal / zero */

loc_0001C471:
    eax = eax & 0x10;
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0x1C) = eax;
    if ((eax == 0)) goto loc_0001C484; /* je: equal / zero */

loc_0001C47F:
    MEM8(esp + 0x13) = 0;

loc_0001C484:
    eax = esi + 0x24;
    MEM32(esp + 0x30) = eax;
    eax = 0xFFFFFFDCu;
    eax = eax - esi;
    MEM32(esp + 0x3C) = eax;

loc_0001C496:
    ecx = MEM32(esp + 0x30);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0001C543; /* je: equal / zero */

loc_0001C4A4:
    edx = ZX8(LO8(eax));
    PUSH32(esp, edx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_0001B640(); /* call 0x0001B640 */

loc_0001C4AF:
    edi = edx;
    esi = eax;
    eax = eax | edi;
    if ((eax != 0)) goto loc_0001C4CD; /* jne: not equal / not zero */

loc_0001C4B7:
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0001C543; /* je: equal / zero */

loc_0001C4C3:
    MEM8(esp + 0x13) = 1;
    goto loc_0001C562;

loc_0001C4CD:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001C4D6:
    esp = esp + 8;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0001C511; /* jne: not equal / not zero */

loc_0001C4DE:
    eax = 0; /* xor self */

loc_0001C4E0:
    ecx = MEM32(eax * 8 + 0x39D870);
    if (CMP_NE(ecx, esi)) goto loc_0001C4F6; /* jne: not equal / not zero */

loc_0001C4EB:
    edx = MEM32(eax * 8 + 0x39D874);
    if (CMP_EQ(edx, edi)) goto loc_0001C4FE; /* je: equal / zero */

loc_0001C4F6:
    eax++;
    if (CMP_L(eax, 0x64)) goto loc_0001C4E0; /* jl: less (signed <) */

loc_0001C4FC:
    goto loc_0001C51D;

loc_0001C4FE:
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001C51D; /* je: equal / zero */

loc_0001C503:
    ecx = MEM32(esp + 0x4C);
    ebp = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x3CF);
    goto loc_0001C51D;

loc_0001C511:
    edx = MEM32(esp + 0x4C);
    ebp = (uint32_t)(int32_t)SMEM8(eax + edx + 0x386);

loc_0001C51D:
    if (TEST_Z(MEM8(esp + 0x20), 4)) goto loc_0001C52B; /* je: equal / zero */

loc_0001C524:
    if (CMP_NE(ebp, 3)) goto loc_0001C531; /* jne: not equal / not zero */

loc_0001C529:
    goto loc_0001C52F;

loc_0001C52B:
    if (CMP_LE(ebp & ebp, 0)) goto loc_0001C531; /* jle: less or equal (signed <=) */

loc_0001C52F:
    SET_LO8(ebx, 1);

loc_0001C531:
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0001C53F; /* je: equal / zero */

loc_0001C539:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001C4C3; /* jne: not equal / not zero */

loc_0001C53D:
    goto loc_0001C543;

loc_0001C53F:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0001C55D; /* je: equal / zero */

loc_0001C543:
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x3C);
    eax++;
    ecx = ecx + eax;
    /* cmp ecx, 4 - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(ecx, 4)) goto loc_0001C496; /* jl: less (signed <) */

loc_0001C55B:
    goto loc_0001C562;

loc_0001C55D:
    MEM8(esp + 0x13) = 0;

loc_0001C562:
    edx = MEM32(esp + 0x34);
    SET_LO8(eax, MEM8(esp + 0x13));
    esi = MEM32(esp + 0x40);
    MEM8(edx + 0x44D01F) = LO8(eax);

loc_0001C574:
    ebx = MEM32(esi + 0x1C);
    if (TEST_Z(LO8(ebx), 0x20)) goto loc_0001C5EC; /* je: equal / zero */

loc_0001C57C:
    eax = MEM32(esp + 0x2C);
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (CMP_LE(eax & eax, 0)) goto loc_0001C5DE; /* jle: less or equal (signed <=) */

loc_0001C58B:
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx + 0x10);
    ebp = MEM32(esp + 0x18);
    esi = esi + 0x34;
    /* nop */

loc_0001C5A0:
    edx = MEM32(esi);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001C5AF:
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001C70D; /* je: equal / zero */

loc_0001C5BB:
    /* test LO8(ebx), 4 - flags set for next jcc */
    edx = MEM32(esp + 0x4C);
    eax = (uint32_t)(int32_t)SMEM8(eax + edx + 0x386);
    if (TEST_Z(LO8(ebx), 4)) goto loc_0001C705; /* je: equal / zero */

loc_0001C5D0:
    if (CMP_EQ(eax, 3)) goto loc_0001C70D; /* je: equal / zero */

loc_0001C5D9:
    MEM8(esp + 0x13) = 0;

loc_0001C5DE:
    SET_LO8(eax, MEM8(esp + 0x13));
    ecx = MEM32(esp + 0x34);
    MEM8(ecx + 0x44D01F) = LO8(eax);

loc_0001C5EC:
    edx = MEM32(esp + 0x34);
    SET_LO8(eax, MEM8(edx + 0x44D01F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C600; /* je: equal / zero */

loc_0001C5FA:
    MEM32(0x44D15C) = MEM32(0x44D15C) + 1;

loc_0001C600:
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax + 0x14);
    ecx++;
    esi = esi + 0x40;
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_L(ecx, edx)) goto loc_0001C3D8; /* jl: less (signed <) */

loc_0001C623:
    ecx = MEM32(esp + 0x44);

loc_0001C627:
    eax = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x38);
    edx = MEM32(ecx + 4);
    eax++;
    esi = esi + 0x18;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x38) = esi;
    if (CMP_L(eax, edx)) goto loc_0001C3B0; /* jl: less (signed <) */

loc_0001C646:
    eax = MEM32(esp + 0x28);

loc_0001C64A:
    ecx = MEM32(0x4D1FE8);
    edx = MEM32(ecx + 8);
    eax++;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(eax, edx)) goto loc_0001C381; /* jl: less (signed <) */

loc_0001C660:
    edx = MEM32(0x4D1FE8);
    eax = MEM32(edx + 8);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x28) = ecx;
    if (CMP_LE(eax, edi)) goto loc_0001C9A4; /* jle: less or equal (signed <=) */

loc_0001C679:
    /* nop */

loc_0001C680:
    eax = MEM32(edx + 4);
    esi = MEM32(eax + ecx * 8 + 4);
    /* cmp esi, edi - flags set for next jcc */
    eax = eax + ecx * 8;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x24) = edi;
    if (CMP_LE(esi, edi)) goto loc_0001C994; /* jle: less or equal (signed <=) */

loc_0001C69A:
    MEM32(esp + 0x34) = edi;
    edi = edi;

loc_0001C6A0:
    esi = MEM32(eax);
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esi + edx + 0x14);
    esi = esi + edx;
    /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(ecx, edi)) goto loc_0001C969; /* jle: less or equal (signed <=) */

loc_0001C6BC:
    MEM32(esp + 0x30) = edi;

loc_0001C6C0:
    eax = MEM32(esp + 0x30);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + eax + 0x34);
    edx = edx + eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    ebp = 0; /* xor self */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x2C) = ebp;
    /* nop */

loc_0001C6E0:
    edi = MEM32(ebp * 8 + 0x39D870);
    if (CMP_NE(edi, eax)) goto loc_0001C6F6; /* jne: not equal / not zero */

loc_0001C6EB:
    edi = MEM32(ebp * 8 + 0x39D874);
    if (CMP_EQ(edi, ecx)) goto loc_0001C71E; /* je: equal / zero */

loc_0001C6F6:
    ebp++;
    if (CMP_L(ebp, 0x64)) goto loc_0001C6E0; /* jl: less (signed <) */

loc_0001C6FC:
    MEM32(esp + 0x2C) = ebp;
    goto loc_0001C946;

loc_0001C705:
    if (CMP_G(eax & eax, 0)) goto loc_0001C5D9; /* jg: greater (signed >) */

loc_0001C70D:
    edi++;
    esi = esi + 0x40;
    if (CMP_L(edi, ebp)) goto loc_0001C5A0; /* jl: less (signed <) */

loc_0001C719:
    goto loc_0001C5DE;

loc_0001C71E:
    /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x2C) = ebp;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0001C946; /* je: equal / zero */

loc_0001C72B:
    eax = MEM32(edx + 0x1C);
    /* test HI8(eax), 0x1C - flags set for next jcc */
    eax = MEM32(esp + 0x4C);
    if (TEST_Z(HI8(eax), 0x1C)) goto loc_0001C73F; /* je: equal / zero */

loc_0001C737:
    MEM8(eax + ebp + 0x3CF) = 3;

loc_0001C73F:
    ecx = MEM32(edx + 0x1C);
    if (TEST_NZ(ecx, ecx)) goto loc_0001C74D; /* jne: not equal / not zero */

loc_0001C746:
    MEM8(ebp + 0x44D068) = 1;

loc_0001C74D:
    if (TEST_Z(MEM8(edx + 0x1C), 1)) goto loc_0001C77C; /* je: equal / zero */

loc_0001C753:
    if (TEST_Z(ebp, ebp)) goto loc_0001C775; /* je: equal / zero */

loc_0001C757:
    SET_LO8(ecx, MEM8(eax + ebp + 0x3CE));
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0001C77C; /* jle: less or equal (signed <=) */

loc_0001C762:
    SET_LO8(ecx, MEM8(ebp + 0x44D067));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001C77C; /* je: equal / zero */

loc_0001C76C:
    MEM8(ebp + 0x44D068) = 1;
    goto loc_0001C77C;

loc_0001C775:
    MEM8(0x44D068) = 1;

loc_0001C77C:
    if (TEST_Z(MEM8(edx + 0x1C), 2)) goto loc_0001C791; /* je: equal / zero */

loc_0001C782:
    eax = MEM32(eax + 0x40);
    if (CMP_B(eax, MEM32(edx + 0x20))) goto loc_0001C791; /* jb: below (unsigned <) */

loc_0001C78A:
    MEM8(ebp + 0x44D068) = 1;

loc_0001C791:
    eax = MEM32(edx + 0x1C);
    /* test LO8(eax), 8 - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(LO8(eax), 8)) goto loc_0001C8AB; /* je: equal / zero */

loc_0001C7A0:
    eax = eax & 0x10;
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0x1C) = eax;
    if ((eax == 0)) goto loc_0001C7B3; /* je: equal / zero */

loc_0001C7AE:
    MEM8(esp + 0x13) = 0;

loc_0001C7B3:
    eax = 0xFFFFFFDCu;
    ecx = edx + 0x24;
    eax = eax - edx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = eax;

loc_0001C7C5:
    edx = MEM32(esp + 0x38);
    SET_LO8(eax, MEM8(edx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0001C874; /* je: equal / zero */

loc_0001C7D3:
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_0001B640(); /* call 0x0001B640 */

loc_0001C7DE:
    esi = eax;
    edi = edx;
    ecx = esi;
    ecx = ecx | edi;
    if ((ecx != 0)) goto loc_0001C7FE; /* jne: not equal / not zero */

loc_0001C7E8:
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0001C874; /* je: equal / zero */

loc_0001C7F4:
    MEM8(esp + 0x13) = 1;
    goto loc_0001C893;

loc_0001C7FE:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_00157E60(); /* call 0x00157E60 */

loc_0001C807:
    esp = esp + 8;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0001C842; /* jne: not equal / not zero */

loc_0001C80F:
    eax = 0; /* xor self */

loc_0001C811:
    edx = MEM32(eax * 8 + 0x39D870);
    if (CMP_NE(edx, esi)) goto loc_0001C827; /* jne: not equal / not zero */

loc_0001C81C:
    ecx = MEM32(eax * 8 + 0x39D874);
    if (CMP_EQ(ecx, edi)) goto loc_0001C82F; /* je: equal / zero */

loc_0001C827:
    eax++;
    if (CMP_L(eax, 0x64)) goto loc_0001C811; /* jl: less (signed <) */

loc_0001C82D:
    goto loc_0001C84E;

loc_0001C82F:
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001C84E; /* je: equal / zero */

loc_0001C834:
    edx = MEM32(esp + 0x4C);
    ebp = (uint32_t)(int32_t)SMEM8(eax + edx + 0x3CF);
    goto loc_0001C84E;

loc_0001C842:
    ecx = MEM32(esp + 0x4C);
    ebp = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x386);

loc_0001C84E:
    if (TEST_Z(MEM8(esp + 0x20), 4)) goto loc_0001C85C; /* je: equal / zero */

loc_0001C855:
    if (CMP_NE(ebp, 3)) goto loc_0001C862; /* jne: not equal / not zero */

loc_0001C85A:
    goto loc_0001C860;

loc_0001C85C:
    if (CMP_LE(ebp & ebp, 0)) goto loc_0001C862; /* jle: less or equal (signed <=) */

loc_0001C860:
    SET_LO8(ebx, 1);

loc_0001C862:
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0001C870; /* je: equal / zero */

loc_0001C86A:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001C7F4; /* jne: not equal / not zero */

loc_0001C86E:
    goto loc_0001C874;

loc_0001C870:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0001C88E; /* je: equal / zero */

loc_0001C874:
    eax = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax++;
    edx = edx + eax;
    /* cmp edx, 4 - flags set for next jcc */
    MEM32(esp + 0x38) = eax;
    if (CMP_L(edx, 4)) goto loc_0001C7C5; /* jl: less (signed <) */

loc_0001C88C:
    goto loc_0001C893;

loc_0001C88E:
    MEM8(esp + 0x13) = 0;

loc_0001C893:
    eax = MEM32(esp + 0x2C);
    SET_LO8(ecx, MEM8(esp + 0x13));
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x40);
    MEM8(eax + 0x44D068) = LO8(ecx);
    ebp = eax;

loc_0001C8AB:
    edx = MEM32(edx + 0x1C);
    /* test LO8(edx), 0x20 - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (TEST_Z(LO8(edx), 0x20)) goto loc_0001C936; /* je: equal / zero */

loc_0001C8B7:
    ecx = MEM32(esp + 0x30);
    SET_LO8(eax, 1);
    edi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0001C930; /* jle: less or equal (signed <=) */

loc_0001C8C7:
    esi = MEM32(esi + 0x10);
    esi = esi + 0x34;
    /* nop */

loc_0001C8D0:
    edx = MEM32(esi);
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    eax = 0; /* xor self */
    /* nop */

loc_0001C8E0:
    ebx = MEM32(eax * 8 + 0x39D870);
    if (CMP_NE(ebx, ecx)) goto loc_0001C8F6; /* jne: not equal / not zero */

loc_0001C8EB:
    ebx = MEM32(eax * 8 + 0x39D874);
    if (CMP_EQ(ebx, edx)) goto loc_0001C901; /* je: equal / zero */

loc_0001C8F6:
    eax++;
    if (CMP_L(eax, 0x64)) goto loc_0001C8E0; /* jl: less (signed <) */

loc_0001C8FC:
    goto loc_0001C9B6;

loc_0001C901:
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001C9B6; /* je: equal / zero */

loc_0001C90A:
    ecx = MEM32(esp + 0x4C);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x3CF);
    if (TEST_Z(MEM8(esp + 0x20), 4)) goto loc_0001C9AE; /* je: equal / zero */

loc_0001C921:
    if (CMP_EQ(eax, 3)) goto loc_0001C9B6; /* je: equal / zero */

loc_0001C92A:
    SET_LO8(eax, 0); /* xor self */

loc_0001C92C:
    esi = MEM32(esp + 0x14);

loc_0001C930:
    MEM8(ebp + 0x44D068) = LO8(eax);

loc_0001C936:
    SET_LO8(eax, MEM8(ebp + 0x44D068));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C946; /* je: equal / zero */

loc_0001C940:
    MEM32(0x44D160) = MEM32(0x44D160) + 1;

loc_0001C946:
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esi + 0x14);
    eax++;
    edx = edx + 0x40;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x30) = edx;
    if (CMP_L(eax, ecx)) goto loc_0001C6C0; /* jl: less (signed <) */

loc_0001C965:
    eax = MEM32(esp + 0x44);

loc_0001C969:
    ecx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x34);
    edx = MEM32(eax + 4);
    ecx++;
    esi = esi + 0x18;
    edi = 0; /* xor self */
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x34) = esi;
    if (CMP_L(ecx, edx)) goto loc_0001C6A0; /* jl: less (signed <) */

loc_0001C98A:
    ecx = MEM32(esp + 0x28);
    edx = MEM32(0x4D1FE8);

loc_0001C994:
    eax = MEM32(edx + 8);
    ecx++;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(ecx, eax)) goto loc_0001C680; /* jl: less (signed <) */

loc_0001C9A4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 8; return; /* ret 4 */

loc_0001C9AE:
    if (CMP_G(eax & eax, 0)) goto loc_0001C92A; /* jg: greater (signed >) */

loc_0001C9B6:
    eax = MEM32(esp + 0x18);
    edi++;
    esi = esi + 0x40;
    if (CMP_L(edi, eax)) goto loc_0001C8D0; /* jl: less (signed <) */

loc_0001C9C6:
    SET_LO8(eax, MEM8(esp + 0x13));
    goto loc_0001C92C;

}
