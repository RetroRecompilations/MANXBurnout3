#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sub_00062D60(void);

/* The scanner split this function at 0x14870 because the first conditional
 * branch crosses a false function boundary.  This is the complete retail
 * vtable update method, 0x14860..0x14C1F, kept together so its EBP-based
 * object frame survives the branch. */
void sub_00014860(void)
{
    const uint32_t entry_esp = esp;
    const uint32_t caller_ebx = ebx;
    const uint32_t caller_esi = esi;
    const uint32_t caller_edi = edi;
    const uint32_t caller_seh_ebp = g_seh_ebp;
    uint32_t ebp;
    int _flags = 0;
    recomp_xmm_t xmm0;

    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned update_count;
        if (update_count < 24) {
            fprintf(stderr,
                    "[B3-FE] retail update=%u object=%08X local_state=%u guard=%u esp=%08X "
                    "rlist={flag:%u ptr:%08X state:%u req:%08X}\n",
                    update_count, ecx, MEM32(ecx + 0x238), MEM8(0x55927C), esp,
                    MEM8(0x7397B0), MEM32(0x7397B4), MEM32(0x7397B8),
                    MEM32(0x7397BC));
            update_count++;
        }
    }
    SET_LO8(eax, MEM8(0x55927C));
    PUSH32(esp, g_seh_ebp);
    ebp = ecx;
    if (!TEST_Z(LO8(eax), LO8(eax))) {
        SET_LO8(eax, 0);
        ebx = caller_ebx;
        esi = caller_esi;
        edi = caller_edi;
        g_seh_ebp = caller_seh_ebp;
        esp = entry_esp + 4;
        return;
    }

    eax = MEM32(ebp + 0x238);
    PUSH32(esp, ebx);
    eax--;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x17)) goto loc_00014B5C;

    eax = ZX8(MEM8(eax + 0x14C50));
    {
        uint32_t jt = MEM32(eax * 4 + 0x14C20);
        if (jt == 0x14891) goto loc_00014891;
        if (jt == 0x148DF) goto loc_000148DF;
        if (jt == 0x14903) goto loc_00014903;
        if (jt == 0x14945) goto loc_00014945;
        if (jt == 0x14972) goto loc_00014972;
        if (jt == 0x149BB) goto loc_000149BB;
        if (jt == 0x149D3) goto loc_000149D3;
        if (jt == 0x149EF) goto loc_000149EF;
        if (jt == 0x14A0B) goto loc_00014A0B;
        if (jt == 0x14B20) goto loc_00014B20;
        if (jt == 0x14B3E) goto loc_00014B3E;
        if (jt == 0x14B5C) goto loc_00014B5C;
        g_seh_ebp = ebp;
        RECOMP_ITAIL(jt);
        return;
    }

loc_00014891:
    ecx = 0;
    eax = 0x3F9CC0;
    { uint32_t s = g_esp; PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000190F0, s); }
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000148A8;

loc_000148A1:
    SET_LO8(eax, 0);
    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    esp = entry_esp + 4;
    return;

loc_000148A8:
    esi = 0x40B310;
    MEM8(0x4CFAF0) = 0;
    MEM8(0x4CFB14) = 0;
    MEM16(0x4AED89) = 0x101;
    PUSH32(esp, 0); sub_001356A0();
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] after 1356A0 rlist state=%u ptr=%08X\n",
                MEM32(0x7397B8), MEM32(0x7397B4));
    ecx = 0x6C;
    eax = 0;
    edi = ebp + 8;
    { uint32_t i; for (i = 0; i < ecx; i++) MEM32(edi + i * 4) = eax; }
    edi += ecx * 4;
    ecx = 0;
    MEM32(ebp + 0x238) = 2;

loc_000148DF:
    edx = MEM32(0x3FA644);
    ecx = 0x3FA624;
    PUSH32(esp, 0); sub_00018BB0();
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] after first 18BB0 rlist state=%u ptr=%08X\n",
                MEM32(0x7397B8), MEM32(0x7397B4));
    MEM32(ebp + 0x25C) = eax;
    if (TEST_Z(eax, eax)) goto loc_000148A1;
    MEM32(ebp + 0x238) = 3;

loc_00014903:
    edx = MEM32(0x3FA644);
    ecx = 0x3FA604;
    PUSH32(esp, 0); sub_00018BB0();
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] after second 18BB0 rlist state=%u ptr=%08X\n",
                MEM32(0x7397B8), MEM32(0x7397B4));
    MEM32(ebp + 0x1C8) = eax;
    if (TEST_Z(eax, eax)) goto loc_000148A1;
    ecx = MEM32(0x3FA60C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = ebp + 0x261;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3A840C);
    PUSH32(esp, 0x4AEDDC);
    PUSH32(esp, 0); sub_00011240();
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] after frontend enqueue rlist state=%u ptr=%08X\n",
                MEM32(0x7397B8), MEM32(0x7397B4));
    MEM32(ebp + 0x238) = 4;

loc_00014945:
    SET_LO8(eax, MEM8(ebp + 0x261));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000148A1;
    esi = MEM32(ebp + 0x1C8);
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] before 14730 rlist state=%u ptr=%08X\n",
                MEM32(0x7397B8), MEM32(0x7397B4));
    PUSH32(esp, 0); sub_00014730();
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] after 14730 rlist state=%u ptr=%08X\n",
                MEM32(0x7397B8), MEM32(0x7397B4));
    eax = 0x464018;
    PUSH32(esp, 0); sub_00062D60();
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] after 62D60 rlist state=%u ptr=%08X\n",
                MEM32(0x7397B8), MEM32(0x7397B4));
    MEM32(ebp + 0x238) = 5;

loc_00014972:
    edx = MEM32(0x3FA644);
    ecx = 0x3FA634;
    PUSH32(esp, 0); sub_00018BB0();
    MEM32(ebp + 0x1CC) = eax;
    if (TEST_Z(eax, eax)) goto loc_000148A1;
    ecx = ebp + 0x262;
    MEM8(ecx) = 0;
    edx = MEM32(0x3FA63C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3A83F8);
    PUSH32(esp, 0x4AEDDC);
    PUSH32(esp, 0); sub_00011240();
    MEM32(ebp + 0x238) = 6;

loc_000149BB:
    SET_LO8(eax, MEM8(ebp + 0x262));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000148A1;
    MEM32(ebp + 0x238) = 7;

loc_000149D3:
    ebx = 0x60E040;
    PUSH32(esp, 0); sub_001888F0();
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000148A1;
    MEM32(ebp + 0x238) = 8;

loc_000149EF:
    PUSH32(esp, 0x7397B0);
    PUSH32(esp, 0); sub_0019AE10();
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000148A1;
    MEM32(ebp + 0x238) = 9;

loc_00014A0B:
    SET_LO8(ecx, MEM8(0x411B4C));
    eax = MEM32(0x411BE0);
    xmm0.f[0] = MEMF(0x3EC930);
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    MEM8(0x411B4C) = LO8(ecx);
    SET_LO8(ebx, 0);
    ecx = 1;
    MEMF(0x4115EC) = xmm0.f[0];
    MEM8(0x40FBAE) = LO8(ebx);
    if (CMP_EQ(eax, ecx)) goto loc_00014B16;
    eax--;
    MEM32(0x411BE0) = ecx;
    if (CMP_A(eax, 4)) goto loc_00014B16;
    if (MEM32(eax * 4 + 0x14C68) != 0x14A5B) {
        uint32_t jt = MEM32(eax * 4 + 0x14C68);
        g_seh_ebp = ebp;
        RECOMP_ITAIL(jt);
        return;
    }
    if (CMP_EQ(MEM32(0x411BDC), ecx)) goto loc_00014B16;
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00155330();
    if (CMP_EQ(MEM32(0x411BE0), 3)) goto loc_00014ACB;
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153A20();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00014A96;
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00014AA2;

loc_00014A96:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420();
    SET_LO8(ebx, 1);

loc_00014AA2:
    SET_LO8(eax, MEM8(0x4116B8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00014AB7;
    MEM32(0x411BDC) = 0xB;
    goto loc_00014ACB;

loc_00014AB7:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153230();
    MEM32(0x411BDC) = 0;

loc_00014ACB:
    if (CMP_NE(MEM32(0x411BE0), 4)) goto loc_00014B16;
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_001552E0();
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00014B0C;
    SET_LO8(eax, MEM8(0x411B20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00014B02;
    SET_LO8(eax, MEM8(0x411B4E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00014B02;
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00014B0C;

loc_00014B02:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420();

loc_00014B0C:
    MEM32(0x411BDC) = 0;

loc_00014B16:
    MEM32(ebp + 0x238) = 0xA;

loc_00014B20:
    PUSH32(esp, 1);
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153BE0();
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000148A1;
    MEM32(ebp + 0x238) = 0xB;

loc_00014B3E:
    SET_LO8(eax, 0);
    esi = 0x411560;
    PUSH32(esp, 0); sub_00140110();
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000148A1;
    MEM32(ebp + 0x238) = 0xC;

loc_00014B5C:
    SET_LO8(eax, MEM8(0x57BC68));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00014B8E;
    eax = MEM32(0x45B9BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x572980);
    PUSH32(esp, 0xFD720);
    PUSH32(esp, 0x572980);
    PUSH32(esp, 0xFD710);
    PUSH32(esp, 0x4D2);
    ecx = 0x57BCFC;
    { uint32_t s = g_esp; PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x001B9480, s); }

loc_00014B8E:
    if (CMP_NE(MEM32(0x572980), 0x17)) goto loc_00014BA1;
    esi = 0x572980;
    { uint32_t s = g_esp; PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x001B7CC0, s); }

loc_00014BA1:
    ecx = MEM32(ebp + 0x24C);
    edx = MEM32(ebp + 0x248);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x567170);
    edi = 0;
    PUSH32(esp, 0); sub_000146E0();
    ecx = ebp;
    { uint32_t s = g_esp; PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x00017450, s); }
    ecx = MEM32(0x75DD7C);
    eax = 1;
    MEM32(0x4D5390) = eax;
    MEM8(0x4D538D) = 0;
    if (TEST_NZ(ecx, ecx)) goto loc_00014BF8;
    MEM32(0x75DD7C) = eax;
    eax = MEM32(0x75DB60);
    MEM32(eax * 4 + 0x75DE20) = 0x7F;
    eax++;
    MEM32(0x75DB60) = eax;

loc_00014BF8:
    MEM32(0x75D69C) = 0x80000001u;
    PUSH32(esp, 0);
    edi = 0x4D6170;
    MEM32(ebp + 0x238) = 0x17;
    PUSH32(esp, 0); sub_0002F380();
    SET_LO8(eax, 1);
    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    esp = entry_esp + 4;
}
