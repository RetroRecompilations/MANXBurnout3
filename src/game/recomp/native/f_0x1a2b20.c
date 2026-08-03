#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A2B20
 * Original: 0x001A2B20 - 0x001A30AF (1423 bytes, 395 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A2B20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x363BE));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A2F3C; /* jne: not equal / not zero */

loc_001A2B3D:
    ecx = MEM32(ebp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_001A2F3C; /* je: equal / zero */

loc_001A2B48:
    eax = MEM32(esi + 0x36364);
    if (TEST_Z(eax, eax)) goto loc_001A2F3C; /* je: equal / zero */

loc_001A2B56:
    edx = MEM32(eax + 0x108);
    if (TEST_Z(edx, edx)) goto loc_001A2F3C; /* je: equal / zero */

loc_001A2B64:
    if (CMP_NE(ecx, 7)) goto loc_001A2B89; /* jne: not equal / not zero */

loc_001A2B69:
    eax = ZX8(MEM8(esi + 0x363AC));
    ecx = ZX8(MEM8(esi + 0x363AB));
    eax = eax + 3;
    if (CMP_LE(eax, ecx)) goto loc_001A2BA2; /* jle: less or equal (signed <=) */

loc_001A2B7E:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 60; return; /* ret 56 */

loc_001A2B89:
    edx = ZX8(MEM8(esi + 0x363AC));
    eax = ZX8(MEM8(esi + 0x363AB));
    edx = edx + 2;
    if (CMP_G(edx, eax)) goto loc_001A2F3C; /* jg: greater (signed >) */

loc_001A2BA2:
    edx = esi;
    PUSH32(esp, 0); sub_001A38F0(); /* call 0x001A38F0 */

loc_001A2BA9:
    ebx = eax;
    eax = esi;
    PUSH32(esp, 0); sub_001A3A10(); /* call 0x001A3A10 */

loc_001A2BB2:
    edi = eax;
    /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (TEST_NZ(edi, edi)) goto loc_001A2BD7; /* jne: not equal / not zero */

loc_001A2BBC:
    if (TEST_Z(ebx, ebx)) goto loc_001A2F3C; /* je: equal / zero */

loc_001A2BC4:
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A2BCC:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 60; return; /* ret 56 */

loc_001A2BD7:
    if (TEST_Z(ebx, ebx)) goto loc_001A2CBA; /* je: equal / zero */

loc_001A2BDF:
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A2C25; /* jle: less or equal (signed <=) */

loc_001A2BEC:
    ecx = esi + 0x34390;

loc_001A2BF2:
    edx = MEM32(ebp + 0x10);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_001A2C01; /* jne: not equal / not zero */

loc_001A2BF9:
    edx = MEM32(ebp + 0x14);
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_001A2C12; /* je: equal / zero */

loc_001A2C01:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    eax++;
    ecx = ecx + 8;
    if (CMP_L(eax, edx)) goto loc_001A2BF2; /* jl: less (signed <) */

loc_001A2C10:
    goto loc_001A2C25;

loc_001A2C12:
    ecx = MEM32(esi + eax * 4 + 0x343F0);
    MEM32(ebx + 0xB0) = ecx;
    MEM8(ebx + 0x176) = LO8(eax);

loc_001A2C25:
    edx = MEM32(ebp + 0x3C);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_001A7210(); /* call 0x001A7210 */

loc_001A2C34:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A2C56; /* jne: not equal / not zero */

loc_001A2C38:
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A2C41:
    ecx = MEM32(ebp + 8);
    eax = edi;
    PUSH32(esp, 0); sub_001A3A80(); /* call 0x001A3A80 */

loc_001A2C4B:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 60; return; /* ret 56 */

loc_001A2C56:
    eax = esi + 0x36348;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_001A2C61:
    edx = 0; /* xor self */
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 0x24);
    xmm0.f[0] = MEMF(ebp + 0x2C); /* movss */
    esi = edi;
    MEMF(edi) = xmm0.f[0]; /* movss */
    edx = edx - 0x1F4;
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0); sub_001A03F0(); /* call 0x001A03F0 */

loc_001A2CAA:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A2CCE; /* jne: not equal / not zero */

loc_001A2CAE:
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A2CBA:
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001A3A80(); /* call 0x001A3A80 */

loc_001A2CC3:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 60; return; /* ret 56 */

loc_001A2CCE:
    SET_LO8(eax, MEM8(ebx + 0x177));
    SET_LO8(ecx, MEM8(ebp + 0xC));
    xmm0.f[0] = MEMF(ebp + 0x30); /* movss */
    MEM32(ebx + 0x114) = edi;
    edx = MEM32(edi + 0x2C);
    MEM32(ebx + 0xC4) = edx;
    MEM8(edi + 0x4A) = LO8(eax);
    MEM8(edi + 0x4D) = LO8(ecx);
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0xB0);
    if (TEST_Z(eax, eax)) goto loc_001A2D18; /* je: equal / zero */

loc_001A2D00:
    edx = MEM32(eax + 0xE88);
    MEM32(edi + 8) = edx;
    eax = MEM32(ebx + 0xB0);
    ecx = MEM32(eax + 0xE98);
    MEM32(edi + 0xC) = ecx;

loc_001A2D18:
    eax = MEM32(ebp + 8);
    eax = eax + 0x36348;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_001A2D25:
    ecx = MEM32(ebx + 0x114);
    eax = eax & 0xFF;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(ebx + 0x17A));
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(ebx + 0x128) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x17A) = LO8(eax);
    PUSH32(esp, 0); sub_0019FF80(); /* call 0x0019FF80 */

loc_001A2D4F:
    edx = MEM32(ebx + 0x114);
    ecx = ZX8(MEM8(edx + 0x49));
    edx = MEM32(ebp + 8);
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    eax = ebx + 0x70;
    ecx = ecx + edx + 0x2F430;
    PUSH32(esp, 0); sub_00011AF0(); /* call 0x00011AF0 */

loc_001A2D71:
    xmm0.f[0] = MEMF(ebx + 0x120); /* movss */
    edx = ebx + 0x80;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00011610(); /* call 0x00011610 */

loc_001A2D88:
    PUSH32(esp, eax);
    ecx = ebx + 0xA0;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00013BD0(); /* call 0x00013BD0 */

loc_001A2D98:
    if (TEST_Z(MEM8(ebx + 0x174), 4)) goto loc_001A2DA9; /* je: equal / zero */

loc_001A2DA1:
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(eax, 8)) goto loc_001A2DB8; /* jne: not equal / not zero */

loc_001A2DA9:
    ecx = ebx;
    esi = 0x64B310;
    PUSH32(esp, 0); sub_00111620(); /* call 0x00111620 */

loc_001A2DB5:
    eax = MEM32(ebp + 0xC);

loc_001A2DB8:
    /* cmp eax, 7 - flags set for next jcc */
    SET_LO8(ecx, MEM8(ebp + 0x34));
    MEM8(ebx + 0x171) = 0;
    MEM8(ebx + 0xC9) = LO8(ecx);
    if (CMP_EQ(eax, 7)) goto loc_001A2DDB; /* je: equal / zero */

loc_001A2DCD:
    if (CMP_EQ(eax, 8)) goto loc_001A2DDB; /* je: equal / zero */

loc_001A2DD2:
    if (CMP_NE(eax, 9)) goto loc_001A2F06; /* jne: not equal / not zero */

loc_001A2DDB:
    edx = 0; /* xor self */
    /* cmp eax, 7 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, 7)) ? 1 : 0); /* sete */
    esi = ebx;
    MEM32(esp + 0x18) = 0;
    edx++;
    eax = edx;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_001A2F06; /* jle: less or equal (signed <=) */

loc_001A2DFC:
    /* nop */

loc_001A2E00:
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_001A38F0(); /* call 0x001A38F0 */

loc_001A2E08:
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001A2F25; /* je: equal / zero */

loc_001A2E12:
    eax = MEM32(esi + 0xB0);
    edx = MEM32(ebp + 0x3C);
    MEM32(edi + 0xB0) = eax;
    SET_LO8(ecx, MEM8(esi + 0x176));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    MEM8(edi + 0x176) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_001A7210(); /* call 0x001A7210 */

loc_001A2E39:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A2F47; /* je: equal / zero */

loc_001A2E41:
    SET_LO8(edx, MEM8(ebp + 0x34));
    MEM32(esi + 0x110) = edi;
    eax = MEM32(edi + 0xB0);
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x10C) = esi;
    ecx = MEM32(esi + 0xC4);
    MEM32(edi + 0xC4) = ecx;
    MEM8(edi + 0xC9) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_001A2E8D; /* je: equal / zero */

loc_001A2E6C:
    xmm0.f[0] = MEMF(eax + 0xE98); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x134); /* addss */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x138); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_001A2E8D:
    eax = MEM32(ebp + 8);
    eax = eax + 0x36348;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_001A2E9A:
    SET_LO8(edx, MEM8(edi + 0x17A));
    eax = eax & 0xFF;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(edx, LO8(edx) | 1);
    ecx = esi + 0x70;
    eax = edi + 0x70;
    MEMF(edi + 0x128) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x17A) = LO8(edx);
    PUSH32(esp, 0); sub_00011AF0(); /* call 0x00011AF0 */

loc_001A2EC5:
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, 8)) goto loc_001A2ED2; /* je: equal / zero */

loc_001A2ECD:
    if (CMP_NE(eax, 9)) goto loc_001A2EDE; /* jne: not equal / not zero */

loc_001A2ED2:
    ecx = MEM32(edi + 0x134);
    MEM32(edi + 0x138) = ecx;

loc_001A2EDE:
    if (CMP_NE(eax, 8)) goto loc_001A2EEF; /* jne: not equal / not zero */

loc_001A2EE3:
    ecx = edi;
    esi = 0x64B310;
    PUSH32(esp, 0); sub_00111620(); /* call 0x00111620 */

loc_001A2EEF:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    esi = edi;
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_001A2E00; /* jl: less (signed <) */

loc_001A2F06:
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001A30A4; /* je: equal / zero */

loc_001A2F11:
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_001A38F0(); /* call 0x001A38F0 */

loc_001A2F19:
    edi = eax;
    /* test edi, edi - flags set for next jcc */
    esi = edx;
    if (TEST_NZ(edi, edi)) goto loc_001A2F59; /* jne: not equal / not zero */

loc_001A2F21:
    PUSH32(esp, 1);
    goto loc_001A2F2A;

loc_001A2F25:
    PUSH32(esp, 0);

loc_001A2F27:
    esi = MEM32(ebp + 8);

loc_001A2F2A:
    eax = ebx;

loc_001A2F2C:
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A2F31:
    eax = MEM32(esp + 0x14);
    ecx = esi;
    PUSH32(esp, 0); sub_001A3A80(); /* call 0x001A3A80 */

loc_001A2F3C:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 60; return; /* ret 56 */

loc_001A2F47:
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A2F53:
    PUSH32(esp, 0);
    eax = edi;
    goto loc_001A2F2C;

loc_001A2F59:
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A2FA3; /* jle: less or equal (signed <=) */

loc_001A2F66:
    ecx = esi + 0x34390;
    /* nop */

loc_001A2F70:
    edx = MEM32(ebp + 0x1C);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_001A2F7F; /* jne: not equal / not zero */

loc_001A2F77:
    edx = MEM32(ebp + 0x20);
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_001A2F90; /* je: equal / zero */

loc_001A2F7F:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    eax++;
    ecx = ecx + 8;
    if (CMP_L(eax, edx)) goto loc_001A2F70; /* jl: less (signed <) */

loc_001A2F8E:
    goto loc_001A2FA3;

loc_001A2F90:
    ecx = MEM32(esi + eax * 4 + 0x343F0);
    MEM32(edi + 0xB0) = ecx;
    MEM8(edi + 0x176) = LO8(eax);

loc_001A2FA3:
    edx = MEM32(ebp + 0x3C);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_001A7210(); /* call 0x001A7210 */

loc_001A2FB2:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A2FC6; /* jne: not equal / not zero */

loc_001A2FB6:
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A2FBF:
    PUSH32(esp, 1);
    goto loc_001A2F27;

loc_001A2FC6:
    MEM32(ebx + 0x110) = edi;
    eax = MEM32(edi + 0xB0);
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x10C) = ebx;
    ecx = MEM32(ebx + 0xC4);
    MEM32(edi + 0xC4) = ecx;
    if (TEST_Z(eax, eax)) goto loc_001A3009; /* je: equal / zero */

loc_001A2FE8:
    xmm0.f[0] = MEMF(eax + 0xE98); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x138); /* addss */
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x134); /* addss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */

loc_001A3009:
    eax = MEM32(esi + 0x36348);
    edx = MEM32(esi + 0x3634C);
    ecx = esi + 0x36348;
    esi = eax;
    eax = eax << 0x10;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    esi = esi + edx;
    eax = eax + esi;
    MEM32(ecx) = eax;
    eax = eax + edx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(ecx);
    eax = eax & 0xFF;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(edi + 0x17A));
    MEMF(edi + 0x128) = xmm0.f[0]; /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(edi + 0x17A) = LO8(eax);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xA0), 16); /* movaps */
    ecx = edi;
    esi = 0x64B310;
    memcpy((void *)XBOX_PTR(edi + 0xA0), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00111620(); /* call 0x00111620 */

loc_001A308D:
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_001A30B0(); /* call 0x001A30B0 */

loc_001A3095:
    SET_LO8(ecx, MEM8(ebp + 0x38));
    MEM8(edi + 0x171) = LO8(eax);
    MEM8(edi + 0xC9) = LO8(ecx);

loc_001A30A4:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 60; return; /* ret 56 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
