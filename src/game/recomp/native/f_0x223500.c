#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00223500
 * Original: 0x00223500 - 0x0022414E (3150 bytes, 1064 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223500:
    esp = esp - 0x44;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx + eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    eax = 0; /* xor self */
    ecx = 0x132;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    esi = esp + 0x64;
    ecx = esp + 0x10;
    edi = ebp;
    eax = edx;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223534:
    if (TEST_Z(eax, eax)) { sub_0022414E(); return; } /* je: equal / zero */

loc_0022353C:
    ecx = MEM32(esp + 0x10);
    ebx = 0x30;
    if (CMP_NE(ecx, ebx)) { sub_0022414E(); return; } /* jne: not equal / not zero */

loc_0022354D:
    ecx = esp + 0x10;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_0022355A:
    if (TEST_Z(eax, eax)) goto loc_00224141; /* je: equal / zero */

loc_00223562:
    if (CMP_NE(MEM32(esp + 0x10), ebx)) goto loc_00224141; /* jne: not equal / not zero */

loc_0022356C:
    ecx = MEM32(esp + 0x64);
    edx = ecx + 4;
    ebx = eax + ecx;
    /* cmp MEM8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x28) = ebx;
    if (CMP_EQ(MEM8(eax), 2)) goto loc_002235CA; /* je: equal / zero */

loc_00223583:
    if (CMP_EQ(eax, ebp)) goto loc_002235BB; /* je: equal / zero */

loc_00223587:
    eax++;
    if (CMP_EQ(eax, ebp)) goto loc_002235BB; /* je: equal / zero */

loc_0022358C:
    ecx = ZX8(MEM8(eax));
    eax++;
    if (CMP_BE(ecx, 0x7F)) goto loc_002235B3; /* jbe: below or equal (unsigned <=) */

loc_00223595:
    edx = ecx;
    edx = edx & 0x7F;
    ecx = 0;
    if (((int32_t)edx <= 0)) goto loc_002235B3; /* jle: less or equal (signed <=) */

loc_002235A1:
    if (CMP_EQ(eax, ebp)) goto loc_002235BB; /* je: equal / zero */

loc_002235A5:
    esi = ZX8(MEM8(eax));
    ecx = ecx << 8;
    ecx = ecx | esi;
    eax++;
    edx--;
    if (CMP_G(edx & edx, 0)) goto loc_002235A1; /* jg: greater (signed >) */

loc_002235B3:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x64) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002235C8; /* jne: not equal / not zero */

loc_002235BB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002235C8:
    eax = eax + ecx;

loc_002235CA:
    esi = esp + 0x64;
    ecx = esp + 0x10;
    edi = ebx;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_002235D9:
    if (TEST_Z(eax, eax)) goto loc_00224134; /* je: equal / zero */

loc_002235E1:
    edx = MEM32(esp + 0x64);
    if (TEST_S(edx, edx)) goto loc_00224134; /* jl: less (signed <) */

loc_002235ED:
    if (CMP_A(edx, 0x20)) goto loc_00224134; /* ja: above (unsigned >) */

loc_002235F6:
    edi = MEM32(esp + 0x5C);
    MEM32(edi + 0x1C4) = edx;
    ecx = edx;
    ebp = ecx;
    ecx = ecx >> 2;
    esi = eax;
    edi = edi + 0x1C8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = eax + edx;
    esi = esp + 0x64;
    ecx = esp + 0x10;
    edi = ebx;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223629:
    if (TEST_Z(eax, eax)) goto loc_00224127; /* je: equal / zero */

loc_00223631:
    if (CMP_NE(MEM32(esp + 0x10), 0x30)) goto loc_00224127; /* jne: not equal / not zero */

loc_0022363C:
    ecx = MEM32(esp + 0x64);
    ebp = eax + ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223650:
    if (TEST_Z(eax, eax)) goto loc_0022411A; /* je: equal / zero */

loc_00223658:
    if (CMP_NE(MEM32(esp + 0x10), 6)) goto loc_0022411A; /* jne: not equal / not zero */

loc_00223663:
    edx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002234B0(); /* call 0x002234B0 */

loc_0022366E:
    ecx = MEM32(esp + 0x64);
    esp = esp + 8;
    /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x1E8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0022368C; /* jne: not equal / not zero */

loc_0022367F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF9u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0022368C:
    esi = esp + 0x64;
    ecx = esp + 0x10;
    edi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_0022369D:
    if (TEST_Z(eax, eax)) goto loc_0022410D; /* je: equal / zero */

loc_002236A5:
    if (CMP_NE(MEM32(esp + 0x10), 0x30)) goto loc_0022410D; /* jne: not equal / not zero */

loc_002236B0:
    edx = MEM32(esp + 0x64);
    edi = eax + edx;
    ecx = esp + 0x10;
    MEM32(esp + 0x60) = edi;
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_002236C6:
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0022386E; /* je: equal / zero */

loc_002236D0:
    eax = MEM32(esp + 0x10);
    /* cmp eax, 0x30 - flags set for next jcc */
    edx = MEM32(esp + 0x5C);
    if (CMP_EQ(eax, 0x30)) goto loc_00223851; /* je: equal / zero */

loc_002236E1:
    if (CMP_EQ(eax, 0x31)) goto loc_00223851; /* je: equal / zero */

loc_002236EA:
    /* cmp eax, 6 - flags set for next jcc */
    esi = MEM32(esp + 0x64);
    if (CMP_NE(eax, 6)) goto loc_00223704; /* jne: not equal / not zero */

loc_002236F3:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002234B0(); /* call 0x002234B0 */

loc_002236FA:
    esp = esp + 8;
    ebp = eax;
    goto loc_0022384F;

loc_00223704:
    if (CMP_EQ(eax, 0x13)) goto loc_00223712; /* je: equal / zero */

loc_00223709:
    if (CMP_NE(eax, 0x14)) goto loc_0022384F; /* jne: not equal / not zero */

loc_00223712:
    if (CMP_NE(ebp, 1)) goto loc_0022374D; /* jne: not equal / not zero */

loc_00223717:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = edx + 4;
    if (CMP_LE(esi & esi, 0)) goto loc_0022384A; /* jle: less or equal (signed <=) */

loc_00223727:
    edi = ebx;
    edi = edi - eax;
    goto loc_00223730;

    /* nop */

loc_00223730:
    if (CMP_LE(ecx, 1)) goto loc_00223846; /* jle: less or equal (signed <=) */

loc_00223739:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223730; /* jg: greater (signed >) */

loc_00223748:
    goto loc_00223846;

loc_0022374D:
    if (CMP_NE(ebp, 2)) goto loc_00223783; /* jne: not equal / not zero */

loc_00223752:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = edx + 0x24;
    if (CMP_LE(esi & esi, 0)) goto loc_0022384A; /* jle: less or equal (signed <=) */

loc_00223762:
    edi = ebx;
    edi = edi - eax;

loc_00223766:
    if (CMP_LE(ecx, 1)) goto loc_00223846; /* jle: less or equal (signed <=) */

loc_0022376F:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223766; /* jg: greater (signed >) */

loc_0022377E:
    goto loc_00223846;

loc_00223783:
    if (CMP_NE(ebp, 3)) goto loc_002237BD; /* jne: not equal / not zero */

loc_00223788:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = edx + 0x44;
    if (CMP_LE(esi & esi, 0)) goto loc_0022384A; /* jle: less or equal (signed <=) */

loc_00223798:
    edi = ebx;
    edi = edi - eax;
    /* nop */

loc_002237A0:
    if (CMP_LE(ecx, 1)) goto loc_00223846; /* jle: less or equal (signed <=) */

loc_002237A9:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_002237A0; /* jg: greater (signed >) */

loc_002237B8:
    goto loc_00223846;

loc_002237BD:
    if (CMP_NE(ebp, 4)) goto loc_002237EC; /* jne: not equal / not zero */

loc_002237C2:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = edx + 0x64;
    if (CMP_LE(esi & esi, 0)) goto loc_0022384A; /* jle: less or equal (signed <=) */

loc_002237D2:
    edi = ebx;
    edi = edi - eax;

loc_002237D6:
    if (CMP_LE(ecx, 1)) goto loc_00223846; /* jle: less or equal (signed <=) */

loc_002237DB:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_002237D6; /* jg: greater (signed >) */

loc_002237EA:
    goto loc_00223846;

loc_002237EC:
    if (CMP_NE(ebp, 5)) goto loc_0022381A; /* jne: not equal / not zero */

loc_002237F1:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = edx + 0x84;
    if (CMP_LE(esi & esi, 0)) goto loc_0022384A; /* jle: less or equal (signed <=) */

loc_00223800:
    edi = ebx;
    edi = edi - eax;

loc_00223804:
    if (CMP_LE(ecx, 1)) goto loc_00223846; /* jle: less or equal (signed <=) */

loc_00223809:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223804; /* jg: greater (signed >) */

loc_00223818:
    goto loc_00223846;

loc_0022381A:
    if (CMP_NE(ebp, 6)) goto loc_0022384D; /* jne: not equal / not zero */

loc_0022381F:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = edx + 0xA4;
    if (CMP_LE(esi & esi, 0)) goto loc_0022384A; /* jle: less or equal (signed <=) */

loc_0022382E:
    edi = ebx;
    edi = edi - eax;

loc_00223832:
    if (CMP_LE(ecx, 1)) goto loc_00223846; /* jle: less or equal (signed <=) */

loc_00223837:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223832; /* jg: greater (signed >) */

loc_00223846:
    if (CMP_LE(ecx & ecx, 0)) goto loc_0022384D; /* jle: less or equal (signed <=) */

loc_0022384A:
    MEM8(eax) = 0;

loc_0022384D:
    ebp = 0; /* xor self */

loc_0022384F:
    ebx = ebx + esi;

loc_00223851:
    edi = MEM32(esp + 0x60);
    esi = esp + 0x64;
    ecx = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223864:
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_002236D0; /* jne: not equal / not zero */

loc_0022386E:
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x60);
    esi = esp + 0x64;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223883:
    if (TEST_Z(eax, eax)) goto loc_00224100; /* je: equal / zero */

loc_0022388B:
    if (CMP_NE(MEM32(esp + 0x10), 0x30)) goto loc_00224100; /* jne: not equal / not zero */

loc_00223896:
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_0022389F:
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_002240F3; /* je: equal / zero */

loc_002238A9:
    eax = MEM32(esp + 0x10);
    ebx = 0x17;
    if (CMP_NE(eax, ebx)) goto loc_002240F3; /* jne: not equal / not zero */

loc_002238BA:
    ecx = MEM32(esp + 0x5C);
    esi = MEM32(esp + 0x64);
    ecx = ecx + 0x184;
    /* test esi, esi - flags set for next jcc */
    edx = 0x20;
    if (CMP_LE(esi & esi, 0)) goto loc_002238ED; /* jle: less or equal (signed <=) */

loc_002238D1:
    edi = ebp;
    edi = edi - ecx;

loc_002238D5:
    if (CMP_LE(edx, 1)) goto loc_002238E9; /* jle: less or equal (signed <=) */

loc_002238DA:
    SET_LO8(eax, MEM8(edi + ecx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    edx--;
    eax = esi + edx + -32;
    if (CMP_G(eax & eax, 0)) goto loc_002238D5; /* jg: greater (signed >) */

loc_002238E9:
    if (CMP_LE(edx & edx, 0)) goto loc_002238F0; /* jle: less or equal (signed <=) */

loc_002238ED:
    MEM8(ecx) = 0;

loc_002238F0:
    edi = MEM32(esp + 0x14);
    ebp = ebp + esi;
    esi = esp + 0x64;
    ecx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223905:
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_002240E6; /* je: equal / zero */

loc_0022390F:
    if (CMP_NE(MEM32(esp + 0x10), ebx)) goto loc_002240E6; /* jne: not equal / not zero */

loc_00223919:
    ecx = MEM32(esp + 0x5C);
    esi = MEM32(esp + 0x64);
    ecx = ecx + 0x1A4;
    /* test esi, esi - flags set for next jcc */
    edx = 0x20;
    if (CMP_LE(esi & esi, 0)) goto loc_0022394C; /* jle: less or equal (signed <=) */

loc_00223930:
    edi = ebp;
    edi = edi - ecx;

loc_00223934:
    if (CMP_LE(edx, 1)) goto loc_00223948; /* jle: less or equal (signed <=) */

loc_00223939:
    SET_LO8(eax, MEM8(edi + ecx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    edx--;
    eax = esi + edx + -32;
    if (CMP_G(eax & eax, 0)) goto loc_00223934; /* jg: greater (signed >) */

loc_00223948:
    if (CMP_LE(edx & edx, 0)) goto loc_0022394F; /* jle: less or equal (signed <=) */

loc_0022394C:
    MEM8(ecx) = 0;

loc_0022394F:
    edi = MEM32(esp + 0x14);
    ebp = ebp + esi;
    esi = esp + 0x64;
    ecx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223964:
    if (TEST_Z(eax, eax)) goto loc_002240D9; /* je: equal / zero */

loc_0022396C:
    if (CMP_NE(MEM32(esp + 0x10), 0x30)) goto loc_002240D9; /* jne: not equal / not zero */

loc_00223977:
    ecx = MEM32(esp + 0x64);
    edi = eax + ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x18) = edi;
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_0022398D:
    /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esp + 0x5C);
    MEM32(esp + 0x60) = eax;
    if (TEST_Z(eax, eax)) goto loc_00223B59; /* je: equal / zero */

loc_0022399D:
    /* nop */

loc_002239A0:
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, 0x30)) goto loc_00223B38; /* je: equal / zero */

loc_002239AD:
    if (CMP_EQ(eax, 0x31)) goto loc_00223B38; /* je: equal / zero */

loc_002239B6:
    /* cmp eax, 6 - flags set for next jcc */
    esi = MEM32(esp + 0x64);
    if (CMP_NE(eax, 6)) goto loc_002239D4; /* jne: not equal / not zero */

loc_002239BF:
    edx = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002234B0(); /* call 0x002234B0 */

loc_002239CA:
    esp = esp + 8;
    ebp = eax;
    goto loc_00223B34;

loc_002239D4:
    if (CMP_EQ(eax, 0x13)) goto loc_002239E2; /* je: equal / zero */

loc_002239D9:
    if (CMP_NE(eax, 0x14)) goto loc_00223B34; /* jne: not equal / not zero */

loc_002239E2:
    if (CMP_NE(ebp, 1)) goto loc_00223A1D; /* jne: not equal / not zero */

loc_002239E7:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = ebx + 0xC4;
    if (CMP_LE(esi & esi, 0)) goto loc_00223B2F; /* jle: less or equal (signed <=) */

loc_002239FA:
    edi = MEM32(esp + 0x60);
    edi = edi - eax;

loc_00223A00:
    if (CMP_LE(ecx, 1)) goto loc_00223B2B; /* jle: less or equal (signed <=) */

loc_00223A09:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223A00; /* jg: greater (signed >) */

loc_00223A18:
    goto loc_00223B2B;

loc_00223A1D:
    if (CMP_NE(ebp, 2)) goto loc_00223A5D; /* jne: not equal / not zero */

loc_00223A22:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = ebx + 0xE4;
    if (CMP_LE(esi & esi, 0)) goto loc_00223B2F; /* jle: less or equal (signed <=) */

loc_00223A35:
    edi = MEM32(esp + 0x60);
    edi = edi - eax;
    goto loc_00223A40;

    /* nop */

loc_00223A40:
    if (CMP_LE(ecx, 1)) goto loc_00223B2B; /* jle: less or equal (signed <=) */

loc_00223A49:
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223A40; /* jg: greater (signed >) */

loc_00223A58:
    goto loc_00223B2B;

loc_00223A5D:
    if (CMP_NE(ebp, 3)) goto loc_00223A9D; /* jne: not equal / not zero */

loc_00223A62:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = ebx + 0x104;
    if (CMP_LE(esi & esi, 0)) goto loc_00223B2F; /* jle: less or equal (signed <=) */

loc_00223A75:
    edi = MEM32(esp + 0x60);
    edi = edi - eax;
    goto loc_00223A80;

    /* nop */

loc_00223A80:
    if (CMP_LE(ecx, 1)) goto loc_00223B2B; /* jle: less or equal (signed <=) */

loc_00223A89:
    SET_LO8(edx, MEM8(eax + edi));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223A80; /* jg: greater (signed >) */

loc_00223A98:
    goto loc_00223B2B;

loc_00223A9D:
    if (CMP_NE(ebp, 4)) goto loc_00223ACD; /* jne: not equal / not zero */

loc_00223AA2:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = ebx + 0x124;
    if (CMP_LE(esi & esi, 0)) goto loc_00223B2F; /* jle: less or equal (signed <=) */

loc_00223AB1:
    edi = MEM32(esp + 0x60);
    edi = edi - eax;

loc_00223AB7:
    if (CMP_LE(ecx, 1)) goto loc_00223B2B; /* jle: less or equal (signed <=) */

loc_00223ABC:
    SET_LO8(edx, MEM8(eax + edi));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223AB7; /* jg: greater (signed >) */

loc_00223ACB:
    goto loc_00223B2B;

loc_00223ACD:
    if (CMP_NE(ebp, 5)) goto loc_00223AFD; /* jne: not equal / not zero */

loc_00223AD2:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = ebx + 0x144;
    if (CMP_LE(esi & esi, 0)) goto loc_00223B2F; /* jle: less or equal (signed <=) */

loc_00223AE1:
    edi = MEM32(esp + 0x60);
    edi = edi - eax;

loc_00223AE7:
    if (CMP_LE(ecx, 1)) goto loc_00223B2B; /* jle: less or equal (signed <=) */

loc_00223AEC:
    SET_LO8(edx, MEM8(eax + edi));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223AE7; /* jg: greater (signed >) */

loc_00223AFB:
    goto loc_00223B2B;

loc_00223AFD:
    if (CMP_NE(ebp, 6)) goto loc_00223B32; /* jne: not equal / not zero */

loc_00223B02:
    /* test esi, esi - flags set for next jcc */
    ecx = 0x20;
    eax = ebx + 0x164;
    if (CMP_LE(esi & esi, 0)) goto loc_00223B2F; /* jle: less or equal (signed <=) */

loc_00223B11:
    edi = MEM32(esp + 0x60);
    edi = edi - eax;

loc_00223B17:
    if (CMP_LE(ecx, 1)) goto loc_00223B2B; /* jle: less or equal (signed <=) */

loc_00223B1C:
    SET_LO8(edx, MEM8(eax + edi));
    MEM8(eax) = LO8(edx);
    eax++;
    ecx--;
    edx = esi + ecx + -32;
    if (CMP_G(edx & edx, 0)) goto loc_00223B17; /* jg: greater (signed >) */

loc_00223B2B:
    if (CMP_LE(ecx & ecx, 0)) goto loc_00223B32; /* jle: less or equal (signed <=) */

loc_00223B2F:
    MEM8(eax) = 0;

loc_00223B32:
    ebp = 0; /* xor self */

loc_00223B34:
    MEM32(esp + 0x60) = MEM32(esp + 0x60) + esi;

loc_00223B38:
    edi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x60);
    esi = esp + 0x64;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223B4D:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x60) = eax;
    if (TEST_NZ(eax, eax)) goto loc_002239A0; /* jne: not equal / not zero */

loc_00223B59:
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    esi = esp + 0x64;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223B6E:
    if (TEST_Z(eax, eax)) goto loc_002240CC; /* je: equal / zero */

loc_00223B76:
    ecx = MEM32(esp + 0x10);
    ebp = 0x30;
    if (CMP_NE(ecx, ebp)) goto loc_002240CC; /* jne: not equal / not zero */

loc_00223B87:
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223B90:
    if (TEST_Z(eax, eax)) goto loc_002240BF; /* je: equal / zero */

loc_00223B98:
    if (CMP_NE(MEM32(esp + 0x10), ebp)) goto loc_002240BF; /* jne: not equal / not zero */

loc_00223BA2:
    ecx = MEM32(esp + 0x64);
    ebp = eax + ecx;
    ecx = esp + 0x10;
    edi = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223BB4:
    if (TEST_Z(eax, eax)) goto loc_002240B2; /* je: equal / zero */

loc_00223BBC:
    if (CMP_NE(MEM32(esp + 0x10), 6)) goto loc_002240B2; /* jne: not equal / not zero */

loc_00223BC7:
    edx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002234B0(); /* call 0x002234B0 */

loc_00223BD2:
    edi = MEM32(esp + 0x1C);
    MEM32(ebx + 0x270) = eax;
    esp = esp + 8;
    ecx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223BEA:
    if (TEST_Z(eax, eax)) goto loc_002240A5; /* je: equal / zero */

loc_00223BF2:
    if (CMP_NE(MEM32(esp + 0x10), 3)) goto loc_002240A5; /* jne: not equal / not zero */

loc_00223BFD:
    ecx = MEM32(esp + 0x64);
    if (CMP_L(ecx, 1)) goto loc_002240A5; /* jl: less (signed <) */

loc_00223C0A:
    if (CMP_A(ecx, 0x100)) goto loc_002240A5; /* ja: above (unsigned >) */

loc_00223C16:
    ebx = MEM32(esp + 0x5C);
    edx = ecx + -1;
    MEM32(ebx + 0x2B4) = edx;
    ebx = ebx + 0x2B8;
    ecx--;
    esi = eax + 1;
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x28);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(esp + 0x24);
    esi = esp + 0x64;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223C52:
    if (TEST_Z(eax, eax)) goto loc_00224098; /* je: equal / zero */

loc_00223C5A:
    if (CMP_NE(MEM32(esp + 0x10), 0x30)) goto loc_00224098; /* jne: not equal / not zero */

loc_00223C65:
    ecx = MEM32(esp + 0x64);
    ebp = eax + ecx;
    ecx = esp + 0x10;
    edi = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223C77:
    if (TEST_Z(eax, eax)) goto loc_0022408B; /* je: equal / zero */

loc_00223C7F:
    if (CMP_NE(MEM32(esp + 0x10), 6)) goto loc_0022408B; /* jne: not equal / not zero */

loc_00223C8A:
    edx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002234B0(); /* call 0x002234B0 */

loc_00223C95:
    ecx = MEM32(esp + 0x64);
    edi = MEM32(esp + 0x1C);
    MEM32(ecx + 0x1E8) = eax;
    esp = esp + 8;
    ecx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223CB1:
    if (TEST_Z(eax, eax)) goto loc_0022407E; /* je: equal / zero */

loc_00223CB9:
    if (CMP_NE(MEM32(esp + 0x10), 3)) goto loc_0022407E; /* jne: not equal / not zero */

loc_00223CC4:
    ecx = MEM32(esp + 0x64);
    edx = ecx + -1;
    if (TEST_S(edx, edx)) goto loc_0022407E; /* jl: less (signed <) */

loc_00223CD3:
    ecx--;
    if (CMP_A(ecx, 0x80)) goto loc_0022407E; /* ja: above (unsigned >) */

loc_00223CE0:
    ebp = MEM32(esp + 0x5C);
    MEM32(ebp + 0x1EC) = edx;
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax + 1;
    edi = ebp + 0x1F0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    if (CMP_NE(MEM32(ebp + 0x270), 7)) goto loc_00223E08; /* jne: not equal / not zero */

loc_00223D0E:
    eax = MEM32(ebp + 0x2B4);
    edi = eax + ebp + 0x2B8;
    esi = esp + 0x64;
    ecx = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223D2A:
    if (TEST_Z(eax, eax)) goto loc_00223E6A; /* je: equal / zero */

loc_00223D32:
    if (CMP_NE(MEM32(esp + 0x10), 0x30)) goto loc_00223E6A; /* jne: not equal / not zero */

loc_00223D3D:
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223D46:
    if (TEST_Z(eax, eax)) goto loc_00223E5D; /* je: equal / zero */

loc_00223D4E:
    if (CMP_NE(MEM32(esp + 0x10), 2)) goto loc_00223E5D; /* jne: not equal / not zero */

loc_00223D59:
    edx = MEM32(esp + 0x64);
    if (CMP_L(edx, 4)) goto loc_00223E5D; /* jl: less (signed <) */

loc_00223D66:
    if (CMP_A(edx, 0x81)) goto loc_00223E5D; /* ja: above (unsigned >) */

loc_00223D72:
    /* cmp MEM8(eax), 0 - flags set for next jcc */
    edi = ebp + 0x3BC;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00223D8E; /* jne: not equal / not zero */

loc_00223D7D:
    ecx = edx + -1;
    MEM32(ebp + 0x3B8) = ecx;
    ecx = edx + -1;
    esi = eax + 1;
    goto loc_00223D98;

loc_00223D8E:
    MEM32(ebp + 0x3B8) = edx;
    ecx = edx;
    esi = eax;

loc_00223D98:
    ebx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = eax + edx;
    edx = MEM32(ebp + 0x2B4);
    edi = edx + ebp + 0x2B8;
    esi = esp + 0x64;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00223440(); /* call 0x00223440 */

loc_00223DC2:
    if (TEST_Z(eax, eax)) goto loc_00223E50; /* je: equal / zero */

loc_00223DCA:
    if (CMP_NE(MEM32(esp + 0x10), 2)) goto loc_00223E50; /* jne: not equal / not zero */

loc_00223DD1:
    ecx = MEM32(esp + 0x64);
    if (CMP_L(ecx, 1)) goto loc_00223E50; /* jl: less (signed <) */

loc_00223DDA:
    if (CMP_A(ecx, 0x81)) goto loc_00223E50; /* ja: above (unsigned >) */

loc_00223DE2:
    /* cmp MEM8(eax), 0 - flags set for next jcc */
    edi = ebp + 0x444;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00223E3D; /* jne: not equal / not zero */

loc_00223DED:
    edx = ecx + -1;
    ecx--;
    esi = eax + 1;
    eax = ecx;
    ecx = ecx >> 2;
    MEM32(ebp + 0x440) = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;

loc_00223E03:
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_00223E08:
    eax = MEM32(esp + 0x58);
    esi = ebp + 0x164;
    eax = eax + 8;

loc_00223E15:
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_00223E77; /* jne: not equal / not zero */

loc_00223E1F:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00223E39; /* je: equal / zero */

loc_00223E23:
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_00223E77; /* jne: not equal / not zero */

loc_00223E2F:
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00223E15; /* jne: not equal / not zero */

loc_00223E39:
    eax = 0; /* xor self */
    goto loc_00223E7C;

loc_00223E3D:
    MEM32(ebp + 0x440) = ecx;
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    goto loc_00223E03;

loc_00223E50:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFE9u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00223E5D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEAu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00223E6A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEBu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00223E77:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00223E7C:
    if (TEST_Z(eax, eax)) goto loc_00223E8D; /* je: equal / zero */

loc_00223E80:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFE8u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00223E8D:
    eax = MEM32(0x370DF0);
    /* test eax, eax - flags set for next jcc */
    edi = 0x370DF0;
    if (TEST_Z(eax, eax)) goto loc_00223FD3; /* je: equal / zero */

loc_00223E9F:
    edx = ebp + 4;

loc_00223EA2:
    esi = edx;

loc_00223EA4:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00223EC8; /* jne: not equal / not zero */

loc_00223EAC:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00223EC4; /* je: equal / zero */

loc_00223EB0:
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00223EC8; /* jne: not equal / not zero */

loc_00223EBA:
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00223EA4; /* jne: not equal / not zero */

loc_00223EC4:
    eax = 0; /* xor self */
    goto loc_00223ECD;

loc_00223EC8:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00223ECD:
    if (TEST_NZ(eax, eax)) goto loc_00223FB3; /* jne: not equal / not zero */

loc_00223ED5:
    eax = MEM32(edi + 4);
    esi = ebp + 0x24;
    goto loc_00223EE0;

    /* nop */

loc_00223EE0:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00223F04; /* jne: not equal / not zero */

loc_00223EE8:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00223F00; /* je: equal / zero */

loc_00223EEC:
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00223F04; /* jne: not equal / not zero */

loc_00223EF6:
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00223EE0; /* jne: not equal / not zero */

loc_00223F00:
    eax = 0; /* xor self */
    goto loc_00223F09;

loc_00223F04:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00223F09:
    if (TEST_NZ(eax, eax)) goto loc_00223FB3; /* jne: not equal / not zero */

loc_00223F11:
    eax = MEM32(edi + 8);
    esi = ebp + 0x44;

loc_00223F17:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00223F3B; /* jne: not equal / not zero */

loc_00223F1F:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00223F37; /* je: equal / zero */

loc_00223F23:
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00223F3B; /* jne: not equal / not zero */

loc_00223F2D:
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00223F17; /* jne: not equal / not zero */

loc_00223F37:
    eax = 0; /* xor self */
    goto loc_00223F40;

loc_00223F3B:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00223F40:
    if (TEST_NZ(eax, eax)) goto loc_00223FB3; /* jne: not equal / not zero */

loc_00223F44:
    eax = MEM32(edi + 0xC);
    esi = ebp + 0x64;
    /* nop */

loc_00223F50:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00223F74; /* jne: not equal / not zero */

loc_00223F58:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00223F70; /* je: equal / zero */

loc_00223F5C:
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00223F74; /* jne: not equal / not zero */

loc_00223F66:
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00223F50; /* jne: not equal / not zero */

loc_00223F70:
    eax = 0; /* xor self */
    goto loc_00223F79;

loc_00223F74:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00223F79:
    if (TEST_NZ(eax, eax)) goto loc_00223FB3; /* jne: not equal / not zero */

loc_00223F7D:
    eax = MEM32(edi + 0x14);
    esi = ebp + 0xA4;

loc_00223F86:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00223FAA; /* jne: not equal / not zero */

loc_00223F8E:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00223FA6; /* je: equal / zero */

loc_00223F92:
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00223FAA; /* jne: not equal / not zero */

loc_00223F9C:
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00223F86; /* jne: not equal / not zero */

loc_00223FA6:
    eax = 0; /* xor self */
    goto loc_00223FAF;

loc_00223FAA:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00223FAF:
    if (TEST_Z(eax, eax)) goto loc_00223FCE; /* je: equal / zero */

loc_00223FB3:
    eax = MEM32(edi + 0x24);
    edi = edi + 0x24;
    if (TEST_NZ(eax, eax)) goto loc_00223EA2; /* jne: not equal / not zero */

loc_00223FC1:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFE7u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00223FCE:
    if (CMP_NE(MEM32(edi), 0)) goto loc_00223FE0; /* jne: not equal / not zero */

loc_00223FD3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFE7u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00223FE0:
    eax = MEM32(edi + 0x1C);
    if (CMP_EQ(eax, MEM32(ebp + 0x1EC))) goto loc_00223FF8; /* je: equal / zero */

loc_00223FEB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFE6u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00223FF8:
    eax = MEM32(ebp + 0x1E8);
    eax = eax - 8;
    if ((eax == 0)) goto loc_00224025; /* je: equal / zero */

loc_00224003:
    eax--;
    if ((eax == 0)) goto loc_0022400A; /* je: equal / zero */

loc_00224006:
    esi = 0; /* xor self */
    goto loc_00224041;

loc_0022400A:
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00223390(); /* call 0x00223390 */

loc_0022401E:
    esi = 0x14;
    goto loc_0022403E;

loc_00224025:
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00223350(); /* call 0x00223350 */

loc_00224039:
    esi = 0x10;

loc_0022403E:
    esp = esp + 0xC;

loc_00224041:
    edx = MEM32(ebp + 0x1EC);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    eax = ebp + 0x1F0;
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_002233D0(); /* call 0x002233D0 */

loc_0022405C:
    esp = esp + 8;
    ecx = esi;
    edx = 0; /* xor self */
    edi = esp + 0x40;
    esi = esp + 0x2C;
    /* repe cmpsb - string compare, ecx iterations */
    eax = edx;
    SET_LO8(eax, (1 /* strings matched (repe cmpsb) */) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    eax = eax & 0xFFFFFFE5u;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0022407E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFECu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0022408B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEDu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00224098:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEEu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002240A5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF0u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002240B2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF1u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002240BF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF2u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002240CC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF3u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002240D9:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF4u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002240E6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF5u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_002240F3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF6u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00224100:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF7u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0022410D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFF8u;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0022411A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFAu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00224127:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFBu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00224134:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00224141:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}
