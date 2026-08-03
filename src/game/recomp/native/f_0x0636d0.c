#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_000636D0
 * Original: 0x000636D0 - 0x00063A68 (920 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000636D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_000636D0:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr,
                "[B3-FE] 636D0 enter obj=%08X state=%u callback=%08X list=%08X flags=%u/%u esp=%08X\n",
                esi, MEM32(esi + 0x1E4), MEM32(esi + 0x1F0),
                MEM32(esi + 0x1D8), MEM8(esi + 0x19FD),
                MEM8(0x4A4B90), esp);
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(0x4D652C);
    edx = MEM32(0x4D6B20);
    ecx = MEM32(0x4D6B28);
    xmm0.f[0] = MEMF(0x4AE1FC); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = eax - MEM32(0x4D6B24);
    eax = eax - edx;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x557870); /* mulss */
    eax = MEM32(0x4D6530);
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1C40); /* mulss */
    edx = ecx + ecx;
    ecx = MEM32(esi + 0x1B4);
    eax = eax - edx;
    MEMF(ebp + -16) = xmm1.f[0]; /* movss */
    edx = MEM32(ebp + -16);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x5592C8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1C38); /* mulss */
    MEMF(ebp + -12) = xmm1.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, MEM8(0x4A4B90));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00063A31; /* je: equal / zero */

loc_00063759:
    eax = MEM32(esi + 0x1E4);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_A(eax, 4)) goto loc_000638F6; /* ja: above (unsigned >) */

loc_0006376A:
    { uint32_t _jt = MEM32(eax * 4 + 0x63A68); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00063771u) goto loc_00063771;
    if (_jt == 0x000637D2u) goto loc_000637D2;
    if (_jt == 0x00063835u) goto loc_00063835;
    if (_jt == 0x000638ABu) goto loc_000638AB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00063771:
    xmm2.f[0] = MEMF(esi + 0x1DC); /* movss */
    xmm1.f[0] = MEMF(0x3B16E8); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm1.f[0])) goto loc_000637A8; /* jb: below (unsigned <) */

loc_00063786:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x1E4) = 2;
    MEMF(esi + 0x1DC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    goto loc_000638F6;

loc_000637A8:
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1DC); /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esi + 0x1DC) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] >= xmm1.f[0])) goto loc_0006380B; /* jae: above or equal (unsigned >=) */

loc_000637BD:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x557854); /* mulss */
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    goto loc_000638F6;

loc_000637D2:
    xmm2.f[0] = MEMF(esi + 0x1DC); /* movss */
    xmm1.f[0] = MEMF(0x557838); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm1.f[0])) goto loc_000637F6; /* jb: below (unsigned <) */

loc_000637E7:
    MEM32(esi + 0x1E4) = 5;
    goto loc_000638F6;

loc_000637F6:
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1DC); /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esi + 0x1DC) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00063820; /* jb: below (unsigned <) */

loc_0006380B:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    goto loc_000638F6;

loc_00063820:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x557868); /* mulss */
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    goto loc_000638F6;

loc_00063835:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], MEMF(esi + 0x1DC) - sets EFLAGS */
    if ((xmm2.f[0] < MEMF(esi + 0x1DC))) goto loc_0006387E; /* jb: below (unsigned <) */

loc_00063841:
    SET_LO8(eax, MEM8(esi + 0x19FF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000638B7; /* je: equal / zero */

loc_0006384B:
    xmm0.f[0] = MEMF(0x3B16E8); /* movss */
    MEMF(esi + 0x1DC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1E4) = 1;
    MEM8(esi + 0x19FF) = 0;
    goto loc_000638F6;

loc_0006387E:
    xmm1.f[0] = MEMF(esi + 0x1DC); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esi + 0x1DC) = xmm1.f[0]; /* movss */
    if ((xmm2.f[0] < xmm1.f[0])) goto loc_000638A1; /* jb: below (unsigned <) */

loc_00063897:
    MEMF(esi + 0x1E0) = xmm2.f[0]; /* movss */
    goto loc_000638F6;

loc_000638A1:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x557868); /* mulss */
    goto loc_000638EE;

loc_000638AB:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], MEMF(esi + 0x1DC) - sets EFLAGS */
    if ((xmm2.f[0] < MEMF(esi + 0x1DC))) goto loc_000638C3; /* jb: below (unsigned <) */

loc_000638B7:
    MEMF(esi + 0x1DC) = xmm2.f[0]; /* movss */
    SET_LO8(ecx, 1);
    goto loc_000638F6;

loc_000638C3:
    xmm1.f[0] = MEMF(esi + 0x1DC); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esi + 0x1DC) = xmm1.f[0]; /* movss */
    if ((xmm2.f[0] < xmm1.f[0])) goto loc_000638E6; /* jb: below (unsigned <) */

loc_000638DC:
    MEMF(esi + 0x1E0) = xmm2.f[0]; /* movss */
    goto loc_000638F6;

loc_000638E6:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x557854); /* mulss */

loc_000638EE:
    MEMF(esi + 0x1E0) = xmm1.f[0]; /* movss */

loc_000638F6:
    SET_LO8(eax, MEM8(esi + 0x19FD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006394D; /* jne: not equal / not zero */

loc_00063900:
    eax = MEM32(0x4D4244);
    if (CMP_EQ(eax, 0x17)) goto loc_00063914; /* je: equal / zero */

loc_0006390A:
    if (CMP_EQ(eax, 0x18)) goto loc_00063914; /* je: equal / zero */

loc_0006390F:
    if (CMP_NE(eax, 1)) goto loc_0006394D; /* jne: not equal / not zero */

loc_00063914:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0006394D; /* je: equal / zero */

loc_00063918:
    eax = esi;
    PUSH32(esp, 0); sub_00063670(); /* call 0x00063670 */

loc_0006391F:
    edx = MEM32(esi + 0x1E8);
    if (CMP_GE(edx, 3)) goto loc_00063932; /* jge: greater or equal (signed >=) */

loc_0006392A:
    eax = MEM32(esi + 0x1EC);
    goto loc_00063934;

loc_00063932:
    eax = 0; /* xor self */

loc_00063934:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) goto loc_0006394D; /* je: equal / zero */

loc_0006393E:
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(0x567178);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi), _icall_esp); /* indirect call */
    }

loc_0006394D:
    ecx = MEM32(esi + 0x1F0);
    if (TEST_Z(ecx, ecx)) goto loc_0006397F; /* je: equal / zero */

loc_00063957:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 636D0 callback=%08X method=%08X esp=%08X\n",
                ecx, MEM32(MEM32(ecx)), esp);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0006395B:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 636D0 callback returned esp=%08X\n", esp);
    edi = MEM32(esi + 0x1D8);
    if (TEST_Z(edi, edi)) goto loc_00063996; /* je: equal / zero */

loc_00063965:
    ebx = MEM32(ebp + -4);

loc_00063968:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_list;
        if (traced_list++ < 12)
            fprintf(stderr,
                    "[B3-FE] 636D0 list node=%08X next=%08X enabled=%u method=%08X\n",
                    edi, MEM32(edi + 4), MEM8(edi + 0xA), MEM32(MEM32(edi)));
    }
    SET_LO8(eax, MEM8(edi + 0xA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00063976; /* je: equal / zero */

loc_0006396F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00063976:
    edi = MEM32(edi + 4);
    if (TEST_NZ(edi, edi)) goto loc_00063968; /* jne: not equal / not zero */

loc_0006397D:
    goto loc_00063996;

loc_0006397F:
    SET_LO8(eax, MEM8(0x555D5A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00063996; /* je: equal / zero */

loc_00063988:
    eax = MEM32(ebp + -4);
    PUSH32(esp, eax);
    ecx = 0x555D50;
    PUSH32(esp, 0); sub_000C2DF0(); /* call 0x000C2DF0 */

loc_00063996:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 636D0 after callbacks esp=%08X\n", esp);
    edx = 0x4AE20C;
    PUSH32(esp, 0); sub_00017750(); /* call 0x00017750 */

loc_000639A0:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 636D0 after 17750 result=%02X esp=%08X\n",
                LO8(eax), esp);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00063A31; /* jne: not equal / not zero */

loc_000639A8:
    if (CMP_EQ(MEM32(esi + 0x1F0), 0x559F8C)) goto loc_00063A31; /* je: equal / zero */

loc_000639B4:
    if (CMP_EQ(MEM32(0x4D53B4), 4)) goto loc_00063A31; /* je: equal / zero */

loc_000639BD:
    SET_LO8(eax, MEM8(0x5A3759));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x555D5A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00063A1F; /* jne: not equal / not zero */

loc_000639CB:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000639DD; /* jne: not equal / not zero */

loc_000639CF:
    MEM8(0x555D5A) = 1;
    MEM8(0x555D5B) = 0;

loc_000639DD:
    ecx = MEM32(0x4D537C);
    eax = 0xFFFFFFFFu;
    if (CMP_NE(ecx, eax)) goto loc_00063A31; /* jne: not equal / not zero */

loc_000639EC:
    ecx = MEM32(esi + 0x1F0);
    if (TEST_NZ(ecx, ecx)) goto loc_00063A31; /* jne: not equal / not zero */

loc_000639F6:
    ecx = (uint32_t)(int32_t)SMEM8(0x4AED45);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x188);
    edx = MEM32(ecx + 0x4AE728);
    edi = MEM32(edx + 0x11C);
    ecx = 0; /* xor self */
    /* cmp edi, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(edi, eax)) ? 1 : 0); /* setne */
    eax = ecx;
    MEM32(0x4D5380) = eax;
    goto loc_00063A31;

loc_00063A1F:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00063A31; /* jne: not equal / not zero */

loc_00063A23:
    MEM8(0x555D5A) = 1;
    MEM8(0x555D5B) = 0;

loc_00063A31:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 636D0 epilogue flags=%u esp=%08X\n",
                MEM8(esi + 0x19FD), esp);
    SET_LO8(eax, MEM8(esi + 0x19FD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00063A62; /* je: equal / zero */

loc_00063A3B:
    eax = MEM32(esi + 0x1F0);
    if (TEST_NZ(eax, eax)) goto loc_00063A5B; /* jne: not equal / not zero */

loc_00063A45:
    PUSH32(esp, 0x94413FA7u);
    PUSH32(esp, 0x37AAA797);
    PUSH32(esp, 0x567170);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00063A5B:
    MEM8(esi + 0x19FD) = 0;

loc_00063A62:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
