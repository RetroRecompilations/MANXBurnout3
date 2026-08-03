#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010DD20
 * Original: 0x0010DD20 - 0x0010E4FF (2015 bytes, 517 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DD20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010DD20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(ebx + 0x210));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E4F7; /* jne: not equal / not zero */

loc_0010DD40:
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0010E4F7; /* je: equal / zero */

loc_0010DD49:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0010DD53:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    MEM8(esp + 0x12) = LO8(eax);
    eax = MEM32(ebx + 0x13F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x48), _icall_esp); /* indirect call */
    }

loc_0010DD74:
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0010DD7D:
    edx = MEM32(ebp + 8);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = ecx + edx;
    ecx = MEM32(esp + 0x3C);
    edi = eax + 0x110;
    MEM32(edi + 4) = 0;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x19BC);
    if (CMP_EQ(edx, esi)) goto loc_0010DDDF; /* je: equal / zero */

loc_0010DDA4:
    eax = MEM32(ecx + 0x1920);
    if (TEST_NZ(eax, eax)) goto loc_0010E4F7; /* jne: not equal / not zero */

loc_0010DDB2:
    MEM32(edi + 4) = 0xC;
    ecx = MEM32(ecx + 0x27D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    eax = MEM32(ecx + 0x4CFB20);
    ecx = ecx + 0x4CFB20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0010DDD7:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0010DDDF:
    xmm0.f[0] = MEMF(eax + 0x130); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3B16E0))) goto loc_0010E4F7; /* ja: above (unsigned >) */

loc_0010DDF4:
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 0xD) = 0;
    eax = MEM32(ebx + 0x13F4);
    if (TEST_Z(eax, eax)) goto loc_0010DE14; /* je: equal / zero */

loc_0010DE05:
    ecx = MEM32(eax + 0x1920);
    /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_0010DE19; /* je: equal / zero */

loc_0010DE14:
    MEM8(esp + 0x13) = 0;

loc_0010DE19:
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(esi, esi)) goto loc_0010E3C9; /* je: equal / zero */

loc_0010DE24:
    eax = MEM32(ebx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = eax + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = esp + 0x60;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_0010DE63:
    eax = esp + 0x60;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010DE72:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0010DE83:
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = eax + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = esp + 0x60;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_0010DEC6:
    eax = esp + 0x60;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010DED5:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0xC4;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0010DEE9:
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x24);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    esi = edi + 0xC;
    edx = edi + 8;
    PUSH32(esp, 0); sub_0010D9E0(); /* call 0x0010D9E0 */

loc_0010DF0C:
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x20;
    esi = edi + 0x14;
    edx = edi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0010D9E0(); /* call 0x0010D9E0 */

loc_0010DF20:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM8(edi + 0x18) = 0;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010DF5C; /* jbe: below or equal (unsigned <=) */

loc_0010DF32:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_000FF160(); /* call 0x000FF160 */

loc_0010DF3F:
    /* comiss xmm0.f[0], MEMF(0x3B1770) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1770))) goto loc_0010DF59; /* jbe: below or equal (unsigned <=) */

loc_0010DF48:
    xmm1.f[0] = MEMF(0x3B1DA4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010DF59; /* jbe: below or equal (unsigned <=) */

loc_0010DF55:
    MEM8(edi + 0x18) = 1;

loc_0010DF59:
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_0010DF5C:
    xmm1.f[0] = MEMF(ebx + 0xBC); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x38994C); /* mulss */
    /* comiss xmm1.f[0], MEMF(0x3B1C0C) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B1C0C))) goto loc_0010DF7B; /* jbe: below or equal (unsigned <=) */

loc_0010DF75:
    MEM8(edi + 0x1A) = 1;
    goto loc_0010DF7F;

loc_0010DF7B:
    MEM8(edi + 0x1A) = 0;

loc_0010DF7F:
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0xC) = 4;
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0010DF9A; /* ja: above (unsigned >) */

loc_0010DF92:
    MEM32(esp + 0xC) = 8;

loc_0010DF9A:
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x28);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_NE(LO8(ecx), 4)) goto loc_0010DFB5; /* jne: not equal / not zero */

loc_0010DFA7:
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x2420);
    MEM32(edi + 0x1C) = ecx;
    goto loc_0010DFD0;

loc_0010DFB5:
    if (CMP_NE(LO8(ecx), 3)) goto loc_0010DFC9; /* jne: not equal / not zero */

loc_0010DFBA:
    edx = MEM32(eax + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x173);
    MEM32(edi + 0x1C) = eax;
    goto loc_0010DFD0;

loc_0010DFC9:
    MEM32(edi + 0x1C) = 1;

loc_0010DFD0:
    eax = MEM32(edi + 0x1C);
    if (CMP_EQ(eax, 3)) goto loc_0010DFF2; /* je: equal / zero */

loc_0010DFD8:
    if (CMP_EQ(eax, 4)) goto loc_0010DFF2; /* je: equal / zero */

loc_0010DFDD:
    if (CMP_EQ(eax, 5)) goto loc_0010DFF2; /* je: equal / zero */

loc_0010DFE2:
    if (CMP_EQ(eax, 8)) goto loc_0010DFF2; /* je: equal / zero */

loc_0010DFE7:
    if (CMP_EQ(eax, 0xB)) goto loc_0010DFF2; /* je: equal / zero */

loc_0010DFEC:
    MEM8(edi + 0x19) = 0;
    goto loc_0010DFF6;

loc_0010DFF2:
    MEM8(edi + 0x19) = 1;

loc_0010DFF6:
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010E01C; /* jbe: below or equal (unsigned <=) */

loc_0010E007:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010E014; /* jbe: below or equal (unsigned <=) */

loc_0010E00C:
    MEM32(edi) = 0;
    goto loc_0010E02F;

loc_0010E014:
    MEM32(edi) = 1;
    goto loc_0010E02F;

loc_0010E01C:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010E029; /* jbe: below or equal (unsigned <=) */

loc_0010E021:
    MEM32(edi) = 2;
    goto loc_0010E02F;

loc_0010E029:
    MEM32(edi) = 3;

loc_0010E02F:
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(ebp + 8);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0010DAC0(); /* call 0x0010DAC0 */

loc_0010E046:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E431; /* jne: not equal / not zero */

loc_0010E04E:
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E082; /* je: equal / zero */

loc_0010E056:
    xmm0.f[0] = MEMF(ebx + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    xmm1.f[0] = MEMF(0x3A1A00); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010E082; /* jbe: below or equal (unsigned <=) */

loc_0010E073:
    eax = esi;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_0010E07A:
    if (TEST_Z(LO8(eax), 3)) goto loc_0010E431; /* je: equal / zero */

loc_0010E082:
    eax = esp + 0x20;
    ecx = ebx;
    PUSH32(esp, 0); sub_0010C520(); /* call 0x0010C520 */

loc_0010E08D:
    eax = edi;
    PUSH32(esp, 0); sub_0010C570(); /* call 0x0010C570 */

loc_0010E094:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E0D5; /* je: equal / zero */

loc_0010E098:
    edx = MEM32(esi + 0x580);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = edx;
    PUSH32(esp, esi);
    ecx = ecx | 2;
    eax = ebx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010E0B5:
    eax = MEM32(ebx + 0x204);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    esi = ebx;
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010E0C9:
    MEM32(edi + 4) = 1;
    goto loc_0010E431;

loc_0010E0D5:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0xBC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebx + 0xBC))) goto loc_0010E195; /* jbe: below or equal (unsigned <=) */

loc_0010E0EA:
    eax = esi;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_0010E0F1:
    edx = 0; /* xor self */
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    if (TEST_NZ(edx, edx)) goto loc_0010E195; /* jne: not equal / not zero */

loc_0010E102:
    ecx = MEM32(esp + 8);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0010E10F:
    /* comiss xmm0.f[0], MEMF(0x3A69C0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A69C0))) goto loc_0010E195; /* jbe: below or equal (unsigned <=) */

loc_0010E118:
    ecx = MEM32(esp + 8);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0010E125:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0xC) = 1;
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0010E13D; /* ja: above (unsigned >) */

loc_0010E135:
    MEM32(esp + 0xC) = 2;

loc_0010E13D:
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010E160:
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010E190:
    goto loc_0010E431;

loc_0010E195:
    SET_LO8(eax, MEM8(edi + 0x1A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E242; /* je: equal / zero */

loc_0010E1A0:
    eax = esi;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_0010E1A7:
    edx = 0; /* xor self */
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    if (TEST_NZ(edx, edx)) goto loc_0010E242; /* jne: not equal / not zero */

loc_0010E1B8:
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x10); /* subss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x14); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0xC8;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010E210:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0010E221:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    eax = ebx;
    PUSH32(esp, 0); sub_00125490(); /* call 0x00125490 */

loc_0010E236:
    MEM32(edi + 4) = 2;
    goto loc_0010E431;

loc_0010E242:
    eax = edi;
    PUSH32(esp, 0); sub_0010C590(); /* call 0x0010C590 */

loc_0010E249:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E287; /* je: equal / zero */

loc_0010E24D:
    eax = MEM32(esi + 0x584);
    ecx = MEM32(esp + 0xC);
    esi = eax;
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010E267:
    ecx = MEM32(ebx + 0x204);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    esi = ebx;
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010E27B:
    MEM32(edi + 4) = 3;
    goto loc_0010E431;

loc_0010E287:
    eax = MEM32(edi);
    if (CMP_A(eax, 3)) goto loc_0010E370; /* ja: above (unsigned >) */

loc_0010E292:
    { uint32_t _jt = MEM32(eax * 4 + 0x10E500); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0010E299u) goto loc_0010E299;
    if (_jt == 0x0010E2F6u) goto loc_0010E2F6;
    if (_jt == 0x0010E350u) goto loc_0010E350;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010E299:
    SET_LO8(eax, MEM8(edi + 0x19));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E2BF; /* jne: not equal / not zero */

loc_0010E2A0:
    eax = esi;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_0010E2A7:
    if (TEST_Z(LO8(eax), 1)) goto loc_0010E2BF; /* je: equal / zero */

loc_0010E2AB:
    xmm0.f[0] = MEMF(esi + 0x584); /* movss */
    MEM32(edi + 4) = 4;
    goto loc_0010E36A;

loc_0010E2BF:
    SET_LO8(eax, MEM8(edi + 0x1A));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(esi + 0x57C); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E2E5; /* je: equal / zero */

loc_0010E2D4:
    MEM32(esp + 0xC) = MEM32(esp + 0xC) | 2;
    MEM32(edi + 4) = 5;
    goto loc_0010E370;

loc_0010E2E5:
    MEM32(esp + 0xC) = 1;
    MEM32(edi + 4) = 6;
    goto loc_0010E370;

loc_0010E2F6:
    SET_LO8(eax, MEM8(edi + 0x19));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E320; /* jne: not equal / not zero */

loc_0010E2FD:
    eax = esi;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_0010E304:
    if (TEST_Z(LO8(eax), 1)) goto loc_0010E320; /* je: equal / zero */

loc_0010E308:
    eax = MEM32(esp + 0xC);
    xmm0.f[0] = MEMF(esi + 0x57C); /* movss */
    eax = eax | 1;
    MEM32(edi + 4) = 7;
    goto loc_0010E366;

loc_0010E320:
    SET_LO8(eax, MEM8(edi + 0x1A));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E33F; /* je: equal / zero */

loc_0010E32B:
    xmm0.f[0] = MEMF(esi + 0x57C); /* movss */
    eax = eax | 1;
    MEM32(edi + 4) = 8;
    goto loc_0010E366;

loc_0010E33F:
    xmm0.f[0] = MEMF(esi + 0x580); /* movss */
    MEM32(edi + 4) = 9;
    goto loc_0010E363;

loc_0010E350:
    xmm0.f[0] = MEMF(esi + 0x580); /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(edi + 4) = 0xA;

loc_0010E363:
    eax = eax | 2;

loc_0010E366:
    MEM32(esp + 0xC) = eax;

loc_0010E36A:
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0010E370:
    xmm0.f[0] = MEMF(ebx + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    xmm1.f[0] = MEMF(0x3A2928); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010E3A1; /* jbe: below or equal (unsigned <=) */

loc_0010E38D:
    xmm0.f[0] = MEMF(esi + 0x594); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0010E3A1:
    esi = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010E3B3:
    edx = MEM32(ebx + 0x204);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    esi = ebx;
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010E3C7:
    goto loc_0010E431;

loc_0010E3C9:
    ecx = ebx + 0x160;
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_0010E510(); /* call 0x0010E510 */

loc_0010E3D8:
    esi = MEM32(ebx + 0x204);
    eax = esi + 0x20;
    ecx = esp + 0x70;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0010E3EA:
    xmm1.f[0] = MEMF(0x3B1DE0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010E42A; /* jbe: below or equal (unsigned <=) */

loc_0010E3F7:
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x590);
    esi = esi + 0x10;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    esi = ebx;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010E414:
    eax = MEM32(ebx + 0x204);
    ecx = MEM32(esp + 8);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010E42A:
    MEM32(edi + 4) = 0xB;

loc_0010E431:
    ecx = MEM32(esp + 0x3C);
    /* cmp MEM32(ecx + 0x1920), 2 - flags set for next jcc */
    SET_LO8(eax, MEM8(esp + 0x12));
    if (CMP_NE(MEM32(ecx + 0x1920), 2)) goto loc_0010E47A; /* jne: not equal / not zero */

loc_0010E442:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E456; /* jne: not equal / not zero */

loc_0010E44E:
    xmm0.f[0] = MEMF(0x3B1708); /* movss */

loc_0010E456:
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    goto loc_0010E4C2;

loc_0010E47A:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E4A0; /* je: equal / zero */

loc_0010E47E:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017390(); /* call 0x00017390 */

loc_0010E488:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010E496; /* je: equal / zero */

loc_0010E48C:
    xmm0.f[0] = MEMF(0x3B1C5C); /* movss */
    goto loc_0010E4A8;

loc_0010E496:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    goto loc_0010E4A8;

loc_0010E4A0:
    xmm0.f[0] = MEMF(0x3B1698); /* movss */

loc_0010E4A8:
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */

loc_0010E4C2:
    eax = 0; /* xor self */
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x34) = eax;
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x1920);
    if (TEST_NZ(eax, eax)) goto loc_0010E4F7; /* jne: not equal / not zero */

loc_0010E4D9:
    ecx = MEM32(ecx + 0x27D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    edx = MEM32(ecx + 0x4CFB20);
    ecx = ecx + 0x4CFB20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0010E4F7:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
