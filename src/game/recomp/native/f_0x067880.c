#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>

/* Retail initial-profile/save screen event handler. */
void sub_00067880(void)
{
    uint32_t ebp = g_seh_ebp;
    int _flags = 0;
    recomp_xmm_t xmm0;

    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned trace_count;
        if (trace_count++ < 16)
            fprintf(stderr,
                    "[B3-FE] 67880 event=%u arg1=%08X arg2=%08X object=%08X screen=%08X\n",
                    MEM32(esp + 4), MEM32(esp + 8), MEM32(esp + 12), ecx,
                    MEM32(0x557A70));
    }

    eax = MEM32(esp + 4) - 3;
    PUSH32(esp, edi);
    if (eax == 0) goto loc_000678E6;
    eax -= 2;
    if (eax != 0) goto loc_00067A47;
    eax = MEM32(esp + 0x10);
    if (eax == 0) goto loc_000678A5;
    eax -= 2;
    if (eax != 0) goto loc_00067A47;

loc_000678A5:
    SET_LO8(eax, MEM8(ecx + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000678CC;
    PUSH32(esp, 0x447A0000);
    PUSH32(esp, 1);
    MEM8(ecx + 0x1C) = 0;
    PUSH32(esp, 9);
    ecx = 0x55CB88;
    eax = 0xF90;
    PUSH32(esp, 0); sub_00086F70();
    POP32(esp, edi);
    esp += 20;
    return;

loc_000678CC:
    PUSH32(esp, 0x944140D3u);
    PUSH32(esp, 0x20FEDE85);
    PUSH32(esp, 0x567170);
    edi = 0;
    PUSH32(esp, 0); sub_000146E0();
    POP32(esp, edi);
    esp += 20;
    return;

loc_000678E6:
    xmm0.f[0] = MEMF(0x3EC930);
    MEM8(ecx + 0x1C) = 1;
    SET_LO8(edx, MEM8(0x411B4C));
    eax = MEM32(0x411BE0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0);
    SET_LO8(edx, LO8(edx) & 0xFB);
    edi = 0;
    MEM8(0x411B4C) = LO8(edx);
    MEMF(0x4115EC) = xmm0.f[0];
    MEM8(0x40FBAE) = LO8(ebx);
    if (CMP_EQ(eax, edi)) goto loc_000679E6;
    eax--;
    PUSH32(esp, esi);
    MEM32(0x411BE0) = edi;
    if (CMP_A(eax, 4)) goto loc_0006799E;
    {
        uint32_t jt = MEM32(eax * 4 + 0x67A4C);
        if (jt == 0x67935) goto loc_00067935;
        if (jt == 0x679FB) goto loc_000679FB;
        if (jt == 0x67A02) goto loc_00067A02;
        if (jt == 0x67A09) goto loc_00067A09;
        if (jt == 0x67A10) goto loc_00067A10;
        if (jt == 0x67A17) goto loc_00067A17;
        if (jt == 0x67A1E) goto loc_00067A1E;
        if (jt == 0x67A25) goto loc_00067A25;
        if (jt == 0x67A2C) goto loc_00067A2C;
        g_seh_ebp = ebp;
        RECOMP_ITAIL(jt);
        return;
    }

loc_00067935:
    if (CMP_EQ(MEM32(0x411BDC), 1)) goto loc_0006799E;
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00155330();
    if (CMP_EQ(MEM32(0x411BE0), 3)) goto loc_0006799E;
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153A20();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006796D;
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00067979;

loc_0006796D:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420();
    SET_LO8(ebx, 1);

loc_00067979:
    SET_LO8(eax, MEM8(0x4116B8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006798E;
    MEM32(0x411BDC) = 0xB;
    goto loc_0006799E;

loc_0006798E:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153230();
    MEM32(0x411BDC) = edi;

loc_0006799E:
    if (CMP_NE(MEM32(0x411BE0), 4)) goto loc_000679E5;
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_001552E0();
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000679DF;
    SET_LO8(eax, MEM8(0x411B20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000679D5;
    SET_LO8(eax, MEM8(0x411B4E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000679D5;
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000679DF;

loc_000679D5:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420();

loc_000679DF:
    MEM32(0x411BDC) = edi;

loc_000679E5:
    POP32(esp, esi);

loc_000679E6:
    eax = MEM32(0x45B9BC) - 2;
    POP32(esp, ebx);
    if (CMP_A(eax, 9)) goto loc_00067A2C;
    {
        uint32_t jt = MEM32(eax * 4 + 0x67A60);
        if (jt == 0x679FB) goto loc_000679FB;
        if (jt == 0x67A02) goto loc_00067A02;
        if (jt == 0x67A09) goto loc_00067A09;
        if (jt == 0x67A10) goto loc_00067A10;
        if (jt == 0x67A17) goto loc_00067A17;
        if (jt == 0x67A1E) goto loc_00067A1E;
        if (jt == 0x67A25) goto loc_00067A25;
        if (jt == 0x67A2C) goto loc_00067A2C;
        g_seh_ebp = ebp;
        RECOMP_ITAIL(jt);
        return;
    }

loc_000679FB: eax = 1; goto loc_00067A31;
loc_00067A02: eax = 8; goto loc_00067A31;
loc_00067A09: eax = 7; goto loc_00067A31;
loc_00067A10: eax = 4; goto loc_00067A31;
loc_00067A17: eax = 3; goto loc_00067A31;
loc_00067A1E: eax = 5; goto loc_00067A31;
loc_00067A25: eax = 6; goto loc_00067A31;
loc_00067A2C: eax = 2;

loc_00067A31:
    PUSH32(esp, 0x447A0000);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x55CB88;
    eax = 0xF90;
    PUSH32(esp, 0); sub_00086F70();

loc_00067A47:
    POP32(esp, edi);
    esp += 20;
}
