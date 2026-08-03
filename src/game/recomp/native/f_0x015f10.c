#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_00015F10
 * Original: 0x00015F10 - 0x0001659E (1678 bytes, 373 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015F10(void)
{
    uint32_t ebp;
    uint32_t entry_esp = esp;
    uint32_t caller_ebx = ebx;
    uint32_t caller_esi = esi;
    uint32_t caller_edi = edi;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    if (getenv("B3_STACK_TRACE")) {
        static int traced_table_at_entry;
        if (!traced_table_at_entry) {
            fprintf(stderr, "[B3-STACK] 15F10 table entry=%08X next=%08X\n",
                    MEM32(0x165A0), MEM32(0x165A4));
            traced_table_at_entry = 1;
        }
    }

loc_00015F10:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x7C3C;
    edi = esi;
    PUSH32(esp, 0); sub_000110E0(); /* call 0x000110E0 */

loc_00015F28:
    eax = MEM32(ebp + 0x2E1E8);
    eax--;
    if (CMP_A(eax, 0x17)) goto loc_000162B6; /* ja: above (unsigned >) */

loc_00015F38:
    eax = ZX8(MEM8(eax + 0x165D8));
    edi = 7;
    { uint32_t _jt = MEM32(eax * 4 + 0x165A0); /* switch: 14 entries, 14 targets */
    if (getenv("B3_STACK_TRACE")) {
        static int traced_jump_target;
        if (!traced_jump_target) {
            fprintf(stderr, "[B3-STACK] 15F10 state=%u index=%u jt=%08X jt+base=%08X entry=%08X current=%08X\n",
                    MEM32(ebp + 0x2E1E8), eax, _jt,
                    MEM32(eax * 4 + 0x265A0), entry_esp, esp);
            traced_jump_target = 1;
        }
    }
    if (_jt == 0x00015F4Bu) goto loc_00015F4B;
    if (_jt == 0x00015F76u) goto loc_00015F76;
    if (_jt == 0x00015FBCu) goto loc_00015FBC;
    if (_jt == 0x00016074u) goto loc_00016074;
    if (_jt == 0x000160E0u) goto loc_000160E0;
    if (_jt == 0x00016116u) goto loc_00016116;
    if (_jt == 0x00016162u) goto loc_00016162;
    if (_jt == 0x000161AAu) goto loc_000161AA;
    if (_jt == 0x000161F6u) goto loc_000161F6;
    if (_jt == 0x00016225u) goto loc_00016225;
    if (_jt == 0x0001623Fu) goto loc_0001623F;
    if (_jt == 0x00016278u) goto loc_00016278;
    if (_jt == 0x0001628Eu) goto loc_0001628E;
    if (_jt == 0x000162B6u) goto loc_000162B6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00015F4B:
    ebx = ebp;
    PUSH32(esp, 0); sub_00021790(); /* call 0x00021790 */

loc_00015F52:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_00015F5A:
    esi = ebp + 0x2A220;
    PUSH32(esp, 0); sub_001B4310(); /* call 0x001B4310 */

loc_00015F65:
    MEM8(ebp + 0x2CE62) = 1;
    MEM32(ebp + 0x2E1E8) = 2;

loc_00015F76:
    edx = MEM32(0x3FA644);
    ecx = 0x3F9CC4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00015F86:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x2AE40) = eax;
    if (TEST_Z(eax, eax)) goto loc_0001629E; /* je: equal / zero */

loc_00015F94:
    ecx = MEM32(0x3F9CCC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = ebp + 0x2AE44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3AA3A0);
    PUSH32(esp, 0x4AEDDC);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_00015FB2:
    MEM32(ebp + 0x2E1E8) = 3;

loc_00015FBC:
    SET_LO8(eax, MEM8(ebp + 0x2AE44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_00015FCA:
    esi = MEM32(ebp + 0x2AE40);
    PUSH32(esp, 0); sub_00014730(); /* call 0x00014730 */

loc_00015FD5:
    edx = MEM32(0x3FA644);
    ecx = 0x3F9CD4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00015FE5:
    MEM32(ebp + 0x2E1FC) = eax;
    edx = MEM32(0x3FA644);
    ecx = 0x3F9CE4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00015FFB:
    ecx = MEM32(ebp + 0x2E1FC);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + 0x2E200) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0001629E; /* je: equal / zero */

loc_0001600F:
    if (TEST_Z(eax, eax)) goto loc_0001629E; /* je: equal / zero */

loc_00016017:
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_000173B0(); /* call 0x000173B0 */

loc_00016025:
    eax = MEM32(0x3F9CDC);
    ecx = MEM32(ebp + 0x2E1FC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = ebp + 0x2AE4C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = ebp + 0x7C3C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_0001604A:
    ecx = MEM32(0x3F9CEC);
    edx = MEM32(ebp + 0x2E200);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = ebp + 0x2AE4D;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_0001606A:
    MEM32(ebp + 0x2E1E8) = 4;

loc_00016074:
    SET_LO8(eax, MEM8(ebp + 0x2AE4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_00016082:
    SET_LO8(eax, MEM8(ebp + 0x2AE4D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_00016090:
    eax = MEM32(ebp + 0x2E1FC);
    ecx = ebp + 0x2E18C;
    PUSH32(esp, 0); sub_00020930(); /* call 0x00020930 */

loc_000160A1:
    eax = MEM32(ebp + 0x2E200);
    ecx = ebp + 0x2E190;
    PUSH32(esp, 0); sub_00020930(); /* call 0x00020930 */

loc_000160B2:
    PUSH32(esp, 0x1000);
    edx = ebp + 0x2AE60;
    PUSH32(esp, edx);
    eax = ebp + 0x2CE60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3AA390);
    esi = ebp + 0x7C3C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_000160D6:
    MEM32(ebp + 0x2E1E8) = 5;

loc_000160E0:
    SET_LO8(eax, MEM8(ebp + 0x2CE60));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_000160EE:
    PUSH32(esp, 0x1000);
    ecx = ebp + 0x2BE60;
    PUSH32(esp, ecx);
    edx = ebp + 0x2CE61;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3AA37C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_0001610C:
    MEM32(ebp + 0x2E1E8) = 6;

loc_00016116:
    SET_LO8(eax, MEM8(ebp + 0x2CE61));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_00016124:
    edx = MEM32(0x3FA644);
    ecx = 0x3F9CF4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00016134:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x2E204) = eax;
    if (TEST_Z(eax, eax)) goto loc_0001629E; /* je: equal / zero */

loc_00016142:
    ecx = MEM32(0x3F9CFC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = ebp + 0x2AE4E;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3AA368);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_0001615C:
    /* EDI is the callee-saved constant 7 loaded at 0x15F40. Translated
     * resource calls can leak their internal EDI, unlike the original ABI. */
    MEM32(ebp + 0x2E1E8) = 7;

loc_00016162:
    SET_LO8(eax, MEM8(ebp + 0x2AE4E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_00016170:
    eax = MEM32(ebp + 0x2E204);
    esi = eax;
    MEM32(ebp + 0x2AE48) = eax;
    PUSH32(esp, 0); sub_00159710(); /* call 0x00159710 */

loc_00016183:
    eax = MEM32(ebp + 0x2AE48);
    ecx = MEM32(eax + 4);
    if (CMP_L(MEM32(ecx + 4), edi)) goto loc_00016196; /* jl: less (signed <) */

loc_00016191:
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;

loc_00016196:
    PUSH32(esp, 0); sub_00157CE0(); /* call 0x00157CE0 */

loc_0001619B:
    PUSH32(esp, 0); sub_00157680(); /* call 0x00157680 */

loc_000161A0:
    MEM32(ebp + 0x2E1E8) = 8;

loc_000161AA:
    PUSH32(esp, 0x4D6618);
    PUSH32(esp, 0); sub_00040820(); /* call 0x00040820 */

loc_000161B4:
    PUSH32(esp, 0x4D6170);
    PUSH32(esp, 0); sub_0002F260(); /* call 0x0002F260 */

loc_000161BE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_000161C6:
    ebx = 0x44CB20;
    PUSH32(esp, 0); sub_0001B5C0(); /* call 0x0001B5C0 */

loc_000161D0:
    esi = 0x44D680;
    MEM32(0x44CFBC) = 0x44CB20;
    PUSH32(esp, 0); sub_0001EE50(); /* call 0x0001EE50 */

loc_000161E4:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_000161EC:
    MEM32(ebp + 0x2E1E8) = 9;

loc_000161F6:
    if (CMP_GE(MEM32(0x40E110), 1)) goto loc_00016209; /* jge: greater or equal (signed >=) */

loc_000161FF:
    edi = 0x40B310;
    PUSH32(esp, 0); sub_00135040(); /* call 0x00135040 */

loc_00016209:
    eax = 0x40B310;
    PUSH32(esp, 0); sub_00135240(); /* call 0x00135240 */

loc_00016213:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_0001621B:
    MEM32(ebp + 0x2E1E8) = 0xA;

loc_00016225:
    PUSH32(esp, 1);
    eax = 0x572980;
    PUSH32(esp, 0); sub_000FC5D0(); /* call 0x000FC5D0 */

loc_00016231:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001629E; /* je: equal / zero */

loc_00016235:
    MEM32(ebp + 0x2E1E8) = 0xB;

loc_0001623F:
    PUSH32(esp, 0x3000);
    PUSH32(esp, ebp);
    edx = ebp + 0x2AE4F;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, edx);
    MEM8(edx) = LO8(ebx);
    ecx = 0xC00;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x3AA354);
    eax = ebp + 0x7C3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_0001626C:
    MEM32(ebp + 0x2E1E8) = 0xC;
    goto loc_0001627A;

loc_00016278:
    ebx = 0; /* xor self */

loc_0001627A:
    if (CMP_EQ(MEM8(ebp + 0x2AE4F), LO8(ebx))) goto loc_0001629E; /* je: equal / zero */

loc_00016282:
    MEM32(ebp + 0x2E1E8) = 0xD;
    goto loc_00016290;

loc_0001628E:
    ebx = 0; /* xor self */

loc_00016290:
    edi = 0x464018;
    PUSH32(esp, 0); sub_00062BD0(); /* call 0x00062BD0 */

loc_0001629A:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000162AA; /* jne: not equal / not zero */

loc_0001629E:
    SET_LO8(eax, 0); /* xor self */
    /* This function is polled thousands of times during retail startup. Its
     * generated nested calls can alter the shared emulated ESP, so replaying
     * the epilogue from that altered value leaked 0x20 bytes per poll. The
     * original instruction is `ret 4`: restore the ABI from the entry value
     * and the real callee-saved register values. */
    edi = caller_edi;
    esi = caller_esi;
    ebx = caller_ebx;
    esp = entry_esp + 8u;
    return; /* ret 4 */

loc_000162AA:
    MEM32(ebp + 0x2E1E8) = 0xE;
    goto loc_000162B8;

loc_000162B6:
    ebx = 0; /* xor self */

loc_000162B8:
    if (CMP_EQ(MEM8(0x45B9C0), LO8(ebx))) goto loc_000162D4; /* je: equal / zero */

loc_000162C0:
    edx = MEM32(0x4D6B2C);
    MEM32(0x4A1EB8) = edx;
    MEM8(0x3F7B14) = LO8(ebx);
    goto loc_000162E5;

loc_000162D4:
    eax = MEM32(0x4D6B2C);
    MEM32(0x4A1EB8) = eax;
    MEM8(0x3F7B14) = 1;

loc_000162E5:
    xmm0.f[0] = MEMF(0x49C120); /* movss */
    edx = MEM32(0x4A1EB4);
    ecx = ebp + 0x7040;
    eax = 1;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x24) = eax;
    SET_LO8(eax, LO8(ebx));
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebx;
    MEM8(ecx + 0x28) = LO8(ebx);
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00016334; /* jne: not equal / not zero */

loc_0001632B:
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016330:
    MEM8(ecx + 0x28) = 1;

loc_00016334:
    esi = 0x557880;
    MEM32(0x420C60) = ebx;
    MEM8(0x4A7199) = LO8(ebx);
    MEM32(0x4A719C) = ebx;
    MEM8(0x4A4B92) = LO8(ebx);
    MEM8(0x4A4B93) = LO8(ebx);
    MEM8(0x4A1C74) = LO8(ebx);
    MEM8(0x4A1C75) = LO8(ebx);
    MEM8(0x4A1C76) = LO8(ebx);
    MEM8(0x4A1C77) = LO8(ebx);
    MEM8(0x4A1C78) = LO8(ebx);
    MEM8(0x4A1C79) = LO8(ebx);
    MEM8(0x4A4B90) = 1;
    MEM8(0x4A4B91) = 1;
    PUSH32(esp, 0); sub_00063590(); /* call 0x00063590 */

loc_0001638E:
    eax = 0x45BAD0;
    PUSH32(esp, 0); sub_001C66F0(); /* call 0x001C66F0 */

loc_00016398:
    eax = MEM32(0x45BAE4);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x45BAD0;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000163AA:
    edi = eax;
    MEM32(0x45BB04) = eax;
    PUSH32(esp, 0); sub_0002DE40(); /* call 0x0002DE40 */

loc_000163B6:
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(0x45BB08) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(0x45BB0C) = xmm0.f[0]; /* movss */
    MEM32(0x45BB10) = ebx;
    MEM32(0x45BB14) = ebx;
    MEM32(0x45BB18) = ebx;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x28948);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4AED45);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x188);
    edx = edx + 0x4AE724;
    MEM32(ebp + 0x28930) = edx;
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(ebp + 0x2894C) = xmm0.f[0]; /* movss */
    eax = MEM32(0x4D532C);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x690);
    SET_LO16(esi, MEM16(ecx));
    eax = ebp + 0x28934;
    edx = eax + 0x10;
    /* cmp eax, edx - flags set for next jcc */
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edx)) goto loc_0001644A; /* jae: above or equal (unsigned >=) */

loc_00016434:
    if (CMP_EQ(MEM16(ecx), LO16(ebx))) goto loc_0001644D; /* je: equal / zero */

loc_00016439:
    SET_LO16(esi, MEM16(ecx + 2));
    ecx = ecx + 2;
    eax = eax + 2;
    /* cmp eax, edx - flags set for next jcc */
    MEM16(eax) = LO16(esi);
    if (CMP_B(eax, edx)) goto loc_00016434; /* jb: below (unsigned <) */

loc_0001644A:
    MEM16(edx) = LO16(ebx);

loc_0001644D:
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x2896C);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x4AED45);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    eax = eax + 0x4AE724;
    MEM32(ebp + 0x28954) = eax;
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(ebp + 0x28970) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x4D532C);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 0x694);
    SET_LO16(esi, MEM16(ecx));
    eax = ebp + 0x28958;
    edx = eax + 0x10;
    /* cmp eax, edx - flags set for next jcc */
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edx)) goto loc_000164B6; /* jae: above or equal (unsigned >=) */

loc_0001649E:
    edi = edi;

loc_000164A0:
    if (CMP_EQ(MEM16(ecx), LO16(ebx))) goto loc_000164B9; /* je: equal / zero */

loc_000164A5:
    SET_LO16(esi, MEM16(ecx + 2));
    ecx = ecx + 2;
    eax = eax + 2;
    /* cmp eax, edx - flags set for next jcc */
    MEM16(eax) = LO16(esi);
    if (CMP_B(eax, edx)) goto loc_000164A0; /* jb: below (unsigned <) */

loc_000164B6:
    MEM16(edx) = LO16(ebx);

loc_000164B9:
    eax = eax | 0xFFFFFFFFu;
    edi = ebp + 0x706C;
    MEM32(ebp + 0x2E1E0) = eax;
    MEM32(ebp + 0x2E1E4) = eax;
    MEM32(ebp + 0x2E1DC) = eax;
    if (CMP_EQ(MEM8(edi + 0xB7C), LO8(ebx))) goto loc_000164E9; /* je: equal / zero */

loc_000164DC:
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001B57A0(); /* call 0x001B57A0 */

loc_000164E3:
    MEM8(edi + 0xB7C) = LO8(ebx);

loc_000164E9:
    MEM16(edi + 0xB7D) = 0x101;
    PUSH32(esp, 0); sub_00021B40(); /* call 0x00021B40 */

loc_000164F7:
    ecx = MEM32(ebp + 0x7BFC);
    MEM8(ebp + 0x2E1EC) = LO8(ebx);
    MEM8(ebp + 0x2E1ED) = LO8(ebx);
    MEM8(ebp + 0x2E1EE) = LO8(ebx);
    ebx = ebp + 0x83E0;
    eax = 0x3AA344;
    MEM32(ebp + 0x2E1F0) = 1;
    MEM32(ebp + 0x2E1F4) = 3;
    PUSH32(esp, 0); sub_001AF200(); /* call 0x001AF200 */

loc_00016533:
    eax = 0x47A140;
    PUSH32(esp, 0); sub_0016AFD0(); /* call 0x0016AFD0 */

loc_0001653D:
    PUSH32(esp, 0); sub_00190430(); /* call 0x00190430 */

loc_00016542:
    PUSH32(esp, 0); sub_0017A0F0(); /* call 0x0017A0F0 */

loc_00016547:
    PUSH32(esp, 0); sub_0001F7C0(); /* call 0x0001F7C0 */

loc_0001654C:
    ebx = ebp + 0x7000;
    eax = ebx;
    MEM32(ebp + 0x2E20C) = 1;
    PUSH32(esp, 0); sub_00020800(); /* call 0x00020800 */

loc_00016563:
    eax = 0x40B310;
    PUSH32(esp, 0); sub_00135350(); /* call 0x00135350 */

loc_0001656D:
    eax = ebp + 0x2CE68;
    MEM32(ebp + 0x2E1D4) = eax;
    eax = 1;
    MEM32(ebp + 0x2E1E8) = 0x17;
    MEM32(ebp + 0x2E218) = eax;
    MEM32(ebp + 0x2E214) = eax;
    edi = caller_edi;
    esi = caller_esi;
    ebx = caller_ebx;
    esp = entry_esp + 8u;
    return; /* ret 4 */

}
