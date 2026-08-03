#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111CD0
 * Original: 0x00111CD0 - 0x00112164 (1172 bytes, 374 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00111CD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    MEM8(esi + 0x2C) = 0;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x2D) = 0;
    SET_LO8(edx, MEM8(edi));
    if (CMP_EQ(LO8(edx), 8)) goto loc_0011215B; /* je: equal / zero */

loc_00111D06:
    ebx = MEM32(esi + 0x28);
    SET_LO8(ecx, MEM8(ebx));
    if (CMP_EQ(LO8(ecx), 8)) goto loc_0011215B; /* je: equal / zero */

loc_00111D14:
    SET_LO8(eax, LO8(edx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00111D2E; /* je: equal / zero */

loc_00111D1A:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111D2E; /* je: equal / zero */

loc_00111D1E:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00111D2E; /* je: equal / zero */

loc_00111D22:
    if (CMP_EQ(LO8(eax), 4)) goto loc_00111D2E; /* je: equal / zero */

loc_00111D26:
    if (CMP_EQ(LO8(eax), 6)) goto loc_00111D2E; /* je: equal / zero */

loc_00111D2A:
    if (CMP_NE(LO8(eax), 7)) goto loc_00111D33; /* jne: not equal / not zero */

loc_00111D2E:
    if (CMP_EQ(LO8(ecx), 3)) goto loc_00111D52; /* je: equal / zero */

loc_00111D33:
    SET_LO8(eax, MEM8(ebx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00111D4D; /* je: equal / zero */

loc_00111D39:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111D4D; /* je: equal / zero */

loc_00111D3D:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00111D4D; /* je: equal / zero */

loc_00111D41:
    if (CMP_EQ(LO8(eax), 4)) goto loc_00111D4D; /* je: equal / zero */

loc_00111D45:
    if (CMP_EQ(LO8(eax), 6)) goto loc_00111D4D; /* je: equal / zero */

loc_00111D49:
    if (CMP_NE(LO8(eax), 7)) goto loc_00111D90; /* jne: not equal / not zero */

loc_00111D4D:
    if (CMP_NE(LO8(edx), 3)) goto loc_00111D90; /* jne: not equal / not zero */

loc_00111D52:
    if (CMP_NE(LO8(edx), 3)) goto loc_00111D5D; /* jne: not equal / not zero */

loc_00111D57:
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = edi;

loc_00111D5D:
    eax = MEM32(esi + 0x24);
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00111D72; /* je: equal / zero */

loc_00111D66:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111D72; /* je: equal / zero */

loc_00111D6A:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00111D72; /* je: equal / zero */

loc_00111D6E:
    if (CMP_NE(LO8(eax), 4)) goto loc_00111D81; /* jne: not equal / not zero */

loc_00111D72:
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00112E70(); /* call 0x00112E70 */

loc_00111D7C:
    goto loc_00111E53;

loc_00111D81:
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001135E0(); /* call 0x001135E0 */

loc_00111D8B:
    goto loc_00111E53;

loc_00111D90:
    SET_LO8(eax, MEM8(edi));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00111D9E; /* je: equal / zero */

loc_00111D96:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111D9E; /* je: equal / zero */

loc_00111D9A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00111DEB; /* jne: not equal / not zero */

loc_00111D9E:
    SET_LO8(eax, MEM8(ebx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00111DAC; /* je: equal / zero */

loc_00111DA4:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111DAC; /* je: equal / zero */

loc_00111DA8:
    if (CMP_NE(LO8(eax), 1)) goto loc_00111DEB; /* jne: not equal / not zero */

loc_00111DAC:
    edx = MEM32(edi + 0xC);
    SET_LO8(eax, MEM8(edx + 0x210));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00111DD1; /* jne: not equal / not zero */

loc_00111DB9:
    eax = MEM32(ebx + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x210));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00111DD1; /* jne: not equal / not zero */

loc_00111DC6:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001121F0(); /* call 0x001121F0 */

loc_00111DCC:
    goto loc_00111E53;

loc_00111DD1:
    ecx = MEM32(ebx + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x210));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00111DE4; /* jne: not equal / not zero */

loc_00111DDE:
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = edi;

loc_00111DE4:
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    goto loc_00111E4E;

loc_00111DEB:
    eax = edi;
    PUSH32(esp, 0); sub_0010FB20(); /* call 0x0010FB20 */

loc_00111DF2:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111DFB; /* je: equal / zero */

loc_00111DF6:
    if (CMP_EQ(MEM8(ebx), 5)) goto loc_00111E0B; /* je: equal / zero */

loc_00111DFB:
    eax = ebx;
    PUSH32(esp, 0); sub_0010FB20(); /* call 0x0010FB20 */

loc_00111E02:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111E22; /* je: equal / zero */

loc_00111E06:
    if (CMP_NE(MEM8(edi), 5)) goto loc_00111E22; /* jne: not equal / not zero */

loc_00111E0B:
    if (CMP_NE(MEM8(edi), 5)) goto loc_00111E16; /* jne: not equal / not zero */

loc_00111E10:
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = edi;

loc_00111E16:
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00113890(); /* call 0x00113890 */

loc_00111E20:
    goto loc_00111E53;

loc_00111E22:
    eax = edi;
    PUSH32(esp, 0); sub_0010FB20(); /* call 0x0010FB20 */

loc_00111E29:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111E53; /* je: equal / zero */

loc_00111E2D:
    eax = ebx;
    PUSH32(esp, 0); sub_0010FB20(); /* call 0x0010FB20 */

loc_00111E34:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111E53; /* je: equal / zero */

loc_00111E38:
    eax = ebx;
    PUSH32(esp, 0); sub_0010C550(); /* call 0x0010C550 */

loc_00111E3F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111E49; /* je: equal / zero */

loc_00111E43:
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = edi;

loc_00111E49:
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);

loc_00111E4E:
    PUSH32(esp, 0); sub_00113960(); /* call 0x00113960 */

loc_00111E53:
    SET_LO8(eax, MEM8(esi + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011215B; /* je: equal / zero */

loc_00111E5E:
    edi = MEM32(esi + 0x24);
    SET_LO8(eax, MEM8(edi));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00111E77; /* je: equal / zero */

loc_00111E67:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111E77; /* je: equal / zero */

loc_00111E6B:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00111E77; /* je: equal / zero */

loc_00111E6F:
    if (CMP_NE(LO8(eax), 4)) goto loc_0011215B; /* jne: not equal / not zero */

loc_00111E77:
    ebx = MEM32(esi + 0x28);
    eax = ebx;
    PUSH32(esp, 0); sub_0010FB50(); /* call 0x0010FB50 */

loc_00111E81:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011215B; /* je: equal / zero */

loc_00111E89:
    edx = MEM32(edi + 0xC);
    SET_LO8(eax, MEM8(edx + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011215B; /* je: equal / zero */

loc_00111E9A:
    eax = MEM32(ebx + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x210));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0011215B; /* je: equal / zero */

loc_00111EAB:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00111EB5:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111ED7; /* je: equal / zero */

loc_00111EBD:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xA8), _icall_esp); /* indirect call */
    }

loc_00111ED1:
    MEM8(esp + 0x12) = LO8(eax);
    goto loc_00111EDC;

loc_00111ED7:
    MEM8(esp + 0x12) = 0;

loc_00111EDC:
    eax = MEM32(esi + 0x28);
    eax = MEM32(eax + 4);
    edi = MEM32(esi + 0x24);
    ecx = MEM32(edi + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00111F01:
    ebx = MEM32(edi + 0xC);
    eax = MEM32(esi + 0x24);
    /* cmp MEM8(eax), 4 - flags set for next jcc */
    edx = MEM32(ebx + 0xCC0);
    edi = MEM32(ebx + 0xCC4);
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(MEM8(eax), 4)) goto loc_00111F74; /* jne: not equal / not zero */

loc_00111F1C:
    eax = ZX8(MEM8(ebx + 0x242A));
    ecx = MEM32(eax * 8 + 0x647B70);
    edx = MEM32(eax * 8 + 0x647B74);
    eax = MEM32(ebx + 0x2420);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_0010C550(); /* call 0x0010C550 */

loc_00111F4B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111F64; /* je: equal / zero */

loc_00111F4F:
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(esp + 0x13));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00112170(); /* call 0x00112170 */

loc_00111F62:
    goto loc_00111F96;

loc_00111F64:
    SET_LO8(eax, MEM8(esp + 0x13));
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00112170(); /* call 0x00112170 */

loc_00111F72:
    goto loc_00111F96;

loc_00111F74:
    edx = MEM32(ebx + 0x13F4);
    eax = MEM32(edx + 0x1970);
    ecx = MEM32(edx + 0x1974);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x14) = 1;

loc_00111F96:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00111FAC; /* je: equal / zero */

loc_00111F9E:
    xmm0.f[0] = MEMF(edi + 0x370); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00111FAC:
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = edi + 0x300;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0012FA40(); /* call 0x0012FA40 */

loc_00111FE3:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011200D; /* je: equal / zero */

loc_00111FEB:
    xmm0.f[0] = MEMF(edi + 0x370); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0011200D; /* jbe: below or equal (unsigned <=) */

loc_00112007:
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */

loc_0011200D:
    eax = MEM32(esi + 0x28);
    edi = MEM32(eax + 0xC);
    ecx = MEM32(edi + 0xCC4);
    edx = MEM32(edi + 0xCC0);
    MEM32(esp + 0x18) = ecx;
    /* cmp MEM8(eax), 4 - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(MEM8(eax), 4)) goto loc_0011208C; /* jne: not equal / not zero */

loc_0011202C:
    eax = ZX8(MEM8(edi + 0x242A));
    ecx = MEM32(eax * 8 + 0x647B70);
    edx = MEM32(eax * 8 + 0x647B74);
    eax = MEM32(edi + 0x2420);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x24);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_0010C550(); /* call 0x0010C550 */

loc_0011205B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112078; /* je: equal / zero */

loc_0011205F:
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esp + 0x13));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); sub_00112170(); /* call 0x00112170 */

loc_00112076:
    goto loc_001120AE;

loc_00112078:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x1B));
    ecx = edi;
    PUSH32(esp, 0); sub_00112170(); /* call 0x00112170 */

loc_0011208A:
    goto loc_001120AE;

loc_0011208C:
    ecx = MEM32(edi + 0x13F4);
    edx = MEM32(ecx + 0x1970);
    eax = MEM32(ecx + 0x1974);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x14) = 1;

loc_001120AE:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001120C8; /* je: equal / zero */

loc_001120B6:
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(ecx + 0x370); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_001120C8:
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_001120DC:
    ecx = MEM32(esi + 0x28);
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax + 0x300;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0); sub_0012FA40(); /* call 0x0012FA40 */

loc_0011210B:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00112150; /* je: equal / zero */

loc_00112113:
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(edx + 0x370); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00112139; /* jbe: below or equal (unsigned <=) */

loc_00112133:
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */

loc_00112139:
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    eax = 0x739C60;
    PUSH32(esp, 0); sub_0017DD20(); /* call 0x0017DD20 */

loc_00112150:
    PUSH32(esp, esi);
    esi = 0x64ACE8;
    PUSH32(esp, 0); sub_0010E690(); /* call 0x0010E690 */

loc_0011215B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
