#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_0013EA20
 * Original: 0x0013EA20 - 0x0013EEDB (1211 bytes, 312 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EA20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    /* The retail frontend normally reaches this audio-scene loader after
     * sub_001AA990 has torn down the preceding scene.  That teardown leaves
     * the loader at state 0x18; its exact state machine then wraps through
     * to state 1 before the next scene is opened.  The portable boot enters
     * the first frontend without a preceding screen object, so the teardown
     * is (correctly) skipped and this file-backed global is still zero.
     * State zero is not an idle state here: the unsigned (state - 1) switch
     * below returns false forever.  Start the same state machine at its
     * retail entry state.  Codec/DirectSound work remains controlled by the
     * selected-track key and is skipped when no Xbox audio scene is selected.
     */
    if (MEM32(MEM32(esp + 4) + 4) == 0)
        MEM32(MEM32(esp + 4) + 4) = 1;

    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_audio_scene;
        const uint32_t state_object = MEM32(esp + 4);
        if (traced_audio_scene++ < 24)
            fprintf(stderr,
                    "[B3-FE] 13EA20 state=%u object=%08X key=%08X:%08X "
                    "stream=%08X/%08X esp=%08X\n",
                    MEM32(state_object + 4), state_object,
                    MEM32(0x73A194), MEM32(0x73A190),
                    MEM32(state_object + 0x3D28),
                    MEM32(state_object + 0x3D2C), esp);
    }

loc_0013EA20:
    eax = MEM32(0x73A190);
    ecx = MEM32(0x73A194);
    esp = esp - 0x88;
    eax = eax | ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xB;
    if ((eax == 0)) goto loc_0013EBCC; /* je: equal / zero */

loc_0013EA49:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEM8(ebp + 0x3D3C) = 0;
    ecx = ZX8(MEM8(0x411E74));
    MEMF(0x3EBFCC) = xmm1.f[0]; /* movss */
    MEMF(0x4A1EF0) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(0x40FAA8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC424); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x40FAA4) = xmm0.f[0]; /* movss */
    MEMF(0x40FAAC) = xmm1.f[0]; /* movss */
    /* cmp MEM32(ebp + 0x3AC0), 4 - flags set for next jcc */
    MEM8(esp + 0x12) = 1;
    if (CMP_NE(MEM32(ebp + 0x3AC0), 4)) goto loc_0013EBD1; /* jne: not equal / not zero */

loc_0013EABB:
    SET_LO8(edx, MEM8(ebp + 0x3A2C));
    xmm0.f[0] = MEMF(0x3EC934); /* movss */
    eax = MEM32(ebp + 0x3AC0);
    esi = ebp + 0x34C8;
    SET_LO8(edx, LO8(edx) | 4);
    SET_LO8(ebx, 1);
    MEM8(esi + 0x564) = LO8(edx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = 5;
    MEM8(0x40FBAE) = LO8(ebx);
    /* cmp MEM32(esi + 0x5F8), edx - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    SET_LO8(ecx, LO8(ebx));
    if (CMP_EQ(MEM32(esi + 0x5F8), edx)) goto loc_0013EBD1; /* je: equal / zero */

loc_0013EB03:
    eax--;
    /* cmp eax, 4 - flags set for next jcc */
    MEM32(esi + 0x5F8) = edx;
    if (CMP_A(eax, 4)) goto loc_0013EB86; /* ja: above (unsigned >) */

loc_0013EB0F:
    { uint32_t _jt = MEM32(eax * 4 + 0x13EEDC); /* switch: 17 entries, 14 targets */
    if (_jt == 0x0013EB16u) goto loc_0013EB16;
    if (_jt == 0x0013EB23u) goto loc_0013EB23;
    if (_jt == 0x0013EC05u) goto loc_0013EC05;
    if (_jt == 0x0013EC2Du) goto loc_0013EC2D;
    if (_jt == 0x0013EC41u) goto loc_0013EC41;
    if (_jt == 0x0013EC80u) goto loc_0013EC80;
    if (_jt == 0x0013ECA0u) goto loc_0013ECA0;
    if (_jt == 0x0013EDEBu) goto loc_0013EDEB;
    if (_jt == 0x0013EE1Bu) goto loc_0013EE1B;
    if (_jt == 0x0013EE25u) goto loc_0013EE25;
    if (_jt == 0x0013EE2Cu) goto loc_0013EE2C;
    if (_jt == 0x0013EE5Au) goto loc_0013EE5A;
    if (_jt == 0x0013EE7Du) goto loc_0013EE7D;
    if (_jt == 0x0013EE9Fu) goto loc_0013EE9F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013EB16:
    if (CMP_EQ(MEM32(esi + 0x5F4), 0xD)) goto loc_0013EB23; /* je: equal / zero */

loc_0013EB1F:
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(ecx, 0); /* xor self */

loc_0013EB23:
    if (CMP_EQ(MEM32(esi + 0x5F4), 1)) goto loc_0013EB86; /* je: equal / zero */

loc_0013EB2C:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0013EB37; /* je: equal / zero */

loc_0013EB30:
    eax = esi;
    PUSH32(esp, 0); sub_00155330(); /* call 0x00155330 */

loc_0013EB37:
    if (CMP_EQ(MEM32(esi + 0x5F8), 3)) goto loc_0013EB86; /* je: equal / zero */

loc_0013EB40:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0013EB86; /* je: equal / zero */

loc_0013EB44:
    eax = esi;
    PUSH32(esp, 0); sub_00153A20(); /* call 0x00153A20 */

loc_0013EB4B:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013EB58; /* jne: not equal / not zero */

loc_0013EB4F:
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_0013EB54:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013EB63; /* jne: not equal / not zero */

loc_0013EB58:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_0013EB5E:
    MEM8(esp + 0x13) = 1;

loc_0013EB63:
    SET_LO8(eax, MEM8(esi + 0xD0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EB75; /* je: equal / zero */

loc_0013EB6D:
    MEM32(esi + 0x5F4) = edi;
    goto loc_0013EB86;

loc_0013EB75:
    eax = esi;
    PUSH32(esp, 0); sub_00153230(); /* call 0x00153230 */

loc_0013EB7C:
    MEM32(esi + 0x5F4) = 0;

loc_0013EB86:
    if (CMP_NE(MEM32(esi + 0x5F8), 4)) goto loc_0013EBD1; /* jne: not equal / not zero */

loc_0013EB8F:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_0013EB95:
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013EBC0; /* jne: not equal / not zero */

loc_0013EB9D:
    SET_LO8(eax, MEM8(esi + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EBBA; /* je: equal / zero */

loc_0013EBA7:
    SET_LO8(eax, MEM8(esi + 0x566));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013EBBA; /* jne: not equal / not zero */

loc_0013EBB1:
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_0013EBB6:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013EBC0; /* jne: not equal / not zero */

loc_0013EBBA:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_0013EBC0:
    MEM32(esi + 0x5F4) = 0;
    goto loc_0013EBD1;

loc_0013EBCC:
    MEM8(esp + 0x12) = 0;

loc_0013EBD1:
    eax = MEM32(ebp + 4);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax--;
    esi = 0x17;
    /* cmp eax, esi - flags set for next jcc */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x3D3D) = 0;
    MEM32(0x3EC254) = 0xFFFFD8EFu;
    if (CMP_A(eax, esi)) goto loc_0013EC41; /* ja: above (unsigned >) */

loc_0013EBF7:
    edx = ZX8(MEM8(eax + 0x13EF20));
    { uint32_t _jt = MEM32(edx * 4 + 0x13EEF0); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0013EC05u) goto loc_0013EC05;
    if (_jt == 0x0013EC2Du) goto loc_0013EC2D;
    if (_jt == 0x0013EC41u) goto loc_0013EC41;
    if (_jt == 0x0013EC80u) goto loc_0013EC80;
    if (_jt == 0x0013ECA0u) goto loc_0013ECA0;
    if (_jt == 0x0013EDEBu) goto loc_0013EDEB;
    if (_jt == 0x0013EE1Bu) goto loc_0013EE1B;
    if (_jt == 0x0013EE25u) goto loc_0013EE25;
    if (_jt == 0x0013EE2Cu) goto loc_0013EE2C;
    if (_jt == 0x0013EE5Au) goto loc_0013EE5A;
    if (_jt == 0x0013EE7Du) goto loc_0013EE7D;
    if (_jt == 0x0013EE9Fu) goto loc_0013EE9F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013EC05:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EC26; /* je: equal / zero */

loc_0013EC0D:
    if (CMP_EQ(MEM32(ebp + 0x3AB8), esi)) goto loc_0013EC26; /* je: equal / zero */

loc_0013EC15:
    PUSH32(esp, 5);
    eax = ebp + 0x34C8;
    PUSH32(esp, 0); sub_00153BE0(); /* call 0x00153BE0 */

loc_0013EC22:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EC41; /* je: equal / zero */

loc_0013EC26:
    MEM32(ebp + 4) = 2;

loc_0013EC2D:
    esi = ebp + 0x34C8;
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_0013EC38:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013EC50; /* jne: not equal / not zero */

loc_0013EC3C:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_0013EC41:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

loc_0013EC50:
    edi = ebp + 0x1150;
    PUSH32(esp, 0); sub_0014CDF0(); /* call 0x0014CDF0 */

loc_0013EC5B:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0013EC65:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EC79; /* je: equal / zero */

loc_0013EC69:
    SET_LO8(eax, MEM8(0x752D80));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013EC79; /* jne: not equal / not zero */

loc_0013EC72:
    eax = esi;
    PUSH32(esp, 0); sub_00155330(); /* call 0x00155330 */

loc_0013EC79:
    MEM32(ebp + 4) = 3;

loc_0013EC80:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EC99; /* je: equal / zero */

loc_0013EC88:
    esi = ebp + 0x3440;
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00140110(); /* call 0x00140110 */

loc_0013EC95:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EC41; /* je: equal / zero */

loc_0013EC99:
    MEM32(ebp + 4) = 4;

loc_0013ECA0:
    eax = MEM32(ebp + 0x3D28);
    if (TEST_NZ(eax, eax)) goto loc_0013EDAD; /* jne: not equal / not zero */

loc_0013ECAE:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EDE4; /* je: equal / zero */

loc_0013ECBA:
    eax = MEM32(0x3AE170);
    edx = MEM32(0x73A194);
    ecx = MEM32(0x3AE174);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x73A190);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_0013ECE3:
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_0013ECF2:
    edi = esp + 0x38;
    esp = esp + 0x14;
    edi--;
    /* nop */

loc_0013ED00:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013ED00; /* jne: not equal / not zero */

loc_0013ED08:
    SET_LO16(eax, MEM16(0x3AE16C));
    PUSH32(esp, 2);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_0013ED22:
    edi = esp + 0x30;
    esp = esp + 0xC;
    edi--;
    /* nop */

loc_0013ED30:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013ED30; /* jne: not equal / not zero */

loc_0013ED38:
    SET_LO16(eax, MEM16(0x3AE168));
    PUSH32(esp, 2);
    ecx = esp + 0x28;
    PUSH32(esp, 0x3AE164);
    PUSH32(esp, ecx);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_0013ED52:
    edi = esp + 0x30;
    esp = esp + 0xC;
    edi--;
    /* nop */

loc_0013ED60:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013ED60; /* jne: not equal / not zero */

loc_0013ED68:
    SET_LO16(edx, MEM16(0x3AE16C));
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x3AE158);
    PUSH32(esp, ecx);
    MEM16(edi) = LO16(edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0013ED86:
    esp = esp + 0xC;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 1);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_0013ED9F:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x3D28) = eax;
    if (TEST_Z(eax, eax)) goto loc_0013EC41; /* je: equal / zero */

loc_0013EDAD:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EDE4; /* je: equal / zero */

loc_0013EDB5:
    eax = MEM32(ebp + 0x3D2C);
    if (TEST_NZ(eax, eax)) goto loc_0013EDE4; /* jne: not equal / not zero */

loc_0013EDBF:
    PUSH32(esp, 0x1000);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0013F9C0(); /* call 0x0013F9C0 */

loc_0013EDCB:
    PUSH32(esp, eax);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_0013EDD6:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x3D2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_0013EC41; /* je: equal / zero */

loc_0013EDE4:
    MEM32(ebp + 4) = 5;

loc_0013EDEB:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EDFD; /* je: equal / zero */

loc_0013EDF3:
    esi = 0x40B310;
    PUSH32(esp, 0); sub_001356A0(); /* call 0x001356A0 */

loc_0013EDFD:
    edi = MEM32(ebp + 8);
    ebx = 0x40B830;
    MEM32(ebp + 0x3D38) = 0;
    PUSH32(esp, 0); sub_001CA1E0(); /* call 0x001CA1E0 */

loc_0013EE14:
    MEM32(ebp + 4) = 6;

loc_0013EE1B:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebp + 4) = 7;

loc_0013EE25:
    MEM32(ebp + 4) = 8;

loc_0013EE2C:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EE44; /* je: equal / zero */

loc_0013EE34:
    MEMF(ebp + 0x34C0) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x34C4) = xmm0.f[0]; /* movss */

loc_0013EE44:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 4) = 9;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

loc_0013EE5A:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EE76; /* je: equal / zero */

loc_0013EE62:
    eax = ebp + 0x1150;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0014B600(); /* call 0x0014B600 */

loc_0013EE6E:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EC41; /* je: equal / zero */

loc_0013EE76:
    MEM32(ebp + 4) = 0xA;

loc_0013EE7D:
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EE99; /* je: equal / zero */

loc_0013EE85:
    ecx = ebp + 0x1A90;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00145F00(); /* call 0x00145F00 */

loc_0013EE91:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EC41; /* je: equal / zero */

loc_0013EE99:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebp + 4) = edi;

loc_0013EE9F:
    SET_LO8(eax, MEM8(esp + 0x12));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ebp + 0x3D30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(0x3EBFD0) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EEC9; /* je: equal / zero */

loc_0013EEBF:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0013EEC9:
    POP32(esp, edi);
    MEM32(ebp + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

}
