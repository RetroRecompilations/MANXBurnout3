#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001020A0
 * Original: 0x001020A0 - 0x00102455 (949 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001020A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0;

loc_001020A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi + 0x5D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010244C; /* je: equal / zero */

loc_001020C0:
    SET_LO8(eax, MEM8(edi + 0x5D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010244C; /* jne: not equal / not zero */

loc_001020CE:
    if (CMP_EQ(MEM32(0x5A3760), 0xFFFFFFFFu)) goto loc_0010244C; /* je: equal / zero */

loc_001020DB:
    eax = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    eax = eax + eax * 2;
    eax = eax << 4;
    ebx = MEM32(eax + 0x64B38C);
    if (TEST_Z(ebx, ebx)) goto loc_0010244C; /* je: equal / zero */

loc_001020F6:
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    esi = edi;
    PUSH32(esp, 0); sub_00101FA0(); /* call 0x00101FA0 */

loc_00102102:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010244C; /* je: equal / zero */

loc_0010210A:
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0010211E:
    if (CMP_EQ(eax, 3)) goto loc_0010244C; /* je: equal / zero */

loc_00102127:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xB0), 16); /* movaps */
    eax = esp + 0x80;
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FFC50(); /* call 0x000FFC50 */

loc_00102141:
    PUSH32(esp, eax);
    eax = esp + 0x94;
    ecx = esp + 0x64;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00102152:
    eax = MEM32(esp + 0x20);
    esi = 0; /* xor self */
    /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00102166; /* jne: not equal / not zero */

loc_00102162:
    MEM32(esp + 0x18) = esi;

loc_00102166:
    SET_LO8(eax, MEM8(ebx + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010217F; /* je: equal / zero */

loc_00102170:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00101E10(); /* call 0x00101E10 */

loc_00102176:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x17) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00102184; /* jne: not equal / not zero */

loc_0010217F:
    MEM8(esp + 0x17) = 0;

loc_00102184:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_00102198:
    if (CMP_A(eax, 5)) goto loc_001021FD; /* ja: above (unsigned >) */

loc_0010219D:
    { uint32_t _jt = MEM32(eax * 4 + 0x102458); /* switch: 6 entries, 3 targets */
    if (_jt == 0x001021A4u) goto loc_001021A4;
    if (_jt == 0x001021C2u) goto loc_001021C2;
    if (_jt == 0x001021FDu) goto loc_001021FD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001021A4:
    xmm0.f[0] = MEMF(0x73B894); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16C4); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = esi;
    goto loc_001021FD;

loc_001021C2:
    xmm0.f[0] = MEMF(0x73B894); /* movss */
    SET_LO8(eax, MEM8(0x73B342));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16C4); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001021EF; /* je: equal / zero */

loc_001021E7:
    MEM32(esp + 0x38) = 1;

loc_001021EF:
    SET_LO8(eax, MEM8(0x73B341));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001021FD; /* je: equal / zero */

loc_001021F8:
    MEM32(esp + 0x38) = MEM32(esp + 0x38) | 2;

loc_001021FD:
    SET_LO8(ecx, MEM8(ebx + 0x210));
    eax = MEM32(ebx + 0x1524);
    SET_LO8(edx, MEM8(edi + 0x4D9C));
    MEM8(esp + 0x44) = LO8(ecx);
    MEM32(esp + 0x40) = eax;
    SET_LO8(eax, MEM8(ebx + 0x1446));
    ecx = edi + 0x4D8D;
    MEM32(esp + 0x4C) = ecx;
    SET_LO8(ecx, MEM8(edi + 0x4D9A));
    MEM8(esp + 0x46) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x4D99));
    MEM8(esp + 0x3C) = LO8(edx);
    SET_LO8(edx, MEM8(ebx + 0x1528));
    MEM8(esp + 0x48) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x73BB78));
    MEM8(esp + 0x47) = LO8(eax);
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(edi + 0x6F0);
    MEM8(esp + 0x45) = LO8(edx);
    SET_LO8(eax, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    edx = edi + 0x4D93;
    MEM8(esp + 0x4A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x17));
    MEM32(esp + 0x50) = edx;
    SET_LO8(edx, MEM8(edi + 0x4D9B));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM8(esp + 0x4D) = LO8(edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x19BC);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x73C644);
    MEM32(esp + 0x3C) = edx;
    edx = esp + 0x6C;
    eax = esp + 0x7C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = edi + 0x6F8;
    eax = 0x73A1E0;
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00102426; /* je: equal / zero */

loc_001022B2:
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00103950(); /* call 0x00103950 */

loc_001022B9:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001022C3:
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEM32(esp + 0x18) = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x10;
    eax = eax + 8;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x731F9C);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00102417; /* jle: less or equal (signed <=) */

loc_001022E6:
    MEM32(esp + 0x1C) = 1;
    edi = edi;

loc_001022F0:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebp + 8);
    edi = MEM32(ecx * 4 + 0x731E90);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 0); sub_001B7E40(); /* call 0x001B7E40 */

loc_00102306:
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x242B);
    if (CMP_NE(ecx, eax)) goto loc_001023FF; /* jne: not equal / not zero */

loc_00102315:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    eax = esp + 0xB0;
    ecx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FFC50(); /* call 0x000FFC50 */

loc_0010232F:
    PUSH32(esp, eax);
    eax = esp + 0xA4;
    ecx = esp + 0x64;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00102340:
    SET_LO8(eax, MEM8(edi + 0x2429));
    edx = MEM32(edi + 0x204);
    MEM8(esp + 0x24) = LO8(eax);
    /* cmp ebx, MEM32(esp + 0x20) - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    if (CMP_GE(ebx, MEM32(esp + 0x20))) goto loc_00102414; /* jge: greater or equal (signed >=) */

loc_0010235E:
    SET_LO8(eax, MEM8(edi + 0x2428));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001023FF; /* jne: not equal / not zero */

loc_0010236C:
    edi = MEM32(edi + 0x2424);
    if (TEST_Z(edi, edi)) goto loc_001023DE; /* je: equal / zero */

loc_00102376:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    eax = esp + 0xC0;
    ecx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FFC50(); /* call 0x000FFC50 */

loc_00102393:
    PUSH32(esp, eax);
    eax = esp + 0xA4;
    ecx = esp + 0x94;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_001023A7:
    ecx = MEM32(esp + 0x20);
    if (CMP_GE(MEM32(esp + 0x1C), ecx)) goto loc_00102414; /* jge: greater or equal (signed >=) */

loc_001023B1:
    edx = MEM32(edi + 0x204);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x2429));
    PUSH32(esp, edx);
    ecx = esp + 0x94;
    edx = esp + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00103F50(); /* call 0x00103F50 */

loc_001023D4:
    eax = MEM32(esp + 0x1C);
    ebx++;
    eax++;
    MEM32(esp + 0x1C) = eax;

loc_001023DE:
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x68;
    edx = esp + 0x78;
    PUSH32(esp, 0); sub_00103F50(); /* call 0x00103F50 */

loc_001023F5:
    eax = MEM32(esp + 0x1C);
    ebx++;
    eax++;
    MEM32(esp + 0x1C) = eax;

loc_001023FF:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_001022F0; /* jl: less (signed <) */

loc_00102414:
    edi = MEM32(ebp + 8);

loc_00102417:
    eax = esi;
    PUSH32(esp, 0); sub_00103F80(); /* call 0x00103F80 */

loc_0010241E:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x16);
    ebx = ebx + 0x30;
    goto loc_00102437;

loc_00102426:
    PUSH32(esp, 0); sub_00103950(); /* call 0x00103950 */

loc_0010242B:
    eax = esi;
    PUSH32(esp, 0); sub_00103F80(); /* call 0x00103F80 */

loc_00102432:
    ebx = 0x30;

loc_00102437:
    ecx = edi;
    PUSH32(esp, 0); sub_001027C0(); /* call 0x001027C0 */

loc_0010243E:
    esi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    edi = 8;
    PUSH32(esp, 0); sub_001B73F0(); /* call 0x001B73F0 */

loc_0010244C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
