#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>

extern volatile uint32_t g_b3_movie_finished_latched __attribute__((weak));

/* Retail frontend-screen callback selected through vtable 0x003AC06C.
 * The two readiness helpers immediately below it in the XBE were omitted
 * from the selected native set, so keep those calls on the safe boundary
 * until their resource-side dependencies are promoted as well. */
void sub_000871D0(void)
{
    uint32_t ebp;
    uint32_t call_esp;
    int _flags = 0;
    recomp_xmm_t xmm0, xmm1;

    PUSH32(esp, ebp);
    ebp = esp;
    esp &= 0xFFFFFFF0u;
    esp -= 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned calls;
        if (calls++ < 32)
            fprintf(stderr,
                    "[B3-FE] 871D0 retail screen=%08X state=%u global=%u ready=%u/%u\n",
                    ebx, MEM32(ebx + 4), MEM32(0x557A64),
                    MEM8(ebx + 0xD), MEM8(ebx + 0xE));
    }
    if (CMP_NE(MEM32(0x557A64), 5)) goto loc_000875D0;

    eax = MEM32(ebx + 4);
    if (CMP_A(eax, 4)) goto loc_000875D0;
    {
        uint32_t jt = MEM32(eax * 4 + 0x875D8);
        if (jt == 0x00087202u) goto loc_00087202;
        if (jt == 0x00087253u) goto loc_00087253;
        if (jt == 0x00087358u) goto loc_00087358;
        if (jt == 0x000874B3u) goto loc_000874B3;
        if (jt == 0x00087546u) goto loc_00087546;
        goto loc_000875D0;
    }

loc_00087202:
    SET_LO8(edx, MEM8(0x411B4C));
    eax = MEM32(0x411BE0);
    xmm0.f[0] = MEMF(0x3EC930);
    SET_LO8(edx, LO8(edx) & 0xFB);
    edi = 0;
    MEM8(esp + 0x17) = 0;
    esi = eax;
    MEM8(0x411B4C) = LO8(edx);
    MEMF(0x4115EC) = xmm0.f[0];
    MEM8(0x40FBAE) = 0;
    if (CMP_EQ(eax, edi)) goto loc_0008730A;

    eax = esi - 1;
    MEM32(0x411BE0) = edi;
    if (CMP_A(eax, 4)) goto loc_000872BF;
    if (MEM32(eax * 4 + 0x875EC) != 0x00087253u) goto loc_000872BF;

loc_00087253:
    if (CMP_EQ(MEM32(0x411BDC), 1)) goto loc_000872BF;
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00155330();
    if (CMP_EQ(MEM32(0x411BE0), 3)) goto loc_000872BF;
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153A20();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008728B;
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008729A;

loc_0008728B:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420();
    MEM8(esp + 0x17) = 1;

loc_0008729A:
    SET_LO8(eax, MEM8(0x4116B8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000872AF;
    MEM32(0x411BDC) = 0xB;
    goto loc_000872BF;

loc_000872AF:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153230();
    MEM32(0x411BDC) = edi;

loc_000872BF:
    if (CMP_NE(MEM32(0x411BE0), 4)) goto loc_0008730A;
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_001552E0();
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00087304;
    SET_LO8(eax, MEM8(0x411B20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000872FA;
    SET_LO8(eax, MEM8(0x411B4E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000872FA;
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00087304;

loc_000872FA:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420();

loc_00087304:
    MEM32(0x411BDC) = edi;

loc_0008730A:
    SET_LO8(eax, MEM8(ebx + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00087320;
    PUSH32(esp, 0x4D4008);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x00014FB0, call_esp);
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 871D0 resource-ready result=%u active={mode:%u state:%u a:%08X b:%08X}\n",
                LO8(eax), MEM32(0x4D4248), MEM32(0x4D4244),
                MEM32(0x4D425C), MEM32(0x4D4260));
    MEM8(ebx + 0xE) = LO8(eax);
    goto loc_00087334;

loc_00087320:
    SET_LO8(eax, MEM8(ebx + 0xD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008733F;
    esi = 0x4D4008;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000151D0, call_esp);
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] 871D0 render-ready result=%u render-state=%u\n",
                LO8(eax), MEM32(0x4D4244));
    MEM8(ebx + 0xD) = LO8(eax);

loc_00087334:
    SET_LO8(eax, MEM8(ebx + 0xD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000875D0;

loc_0008733F:
    SET_LO8(eax, MEM8(ebx + 0xE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000875D0;
    MEM32(ebx + 4) = 1;
    goto loc_return;

loc_00087358:
    eax = 0x54FF30;
    MEM8(0x54FF3A) = 0;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000BA990, call_esp);
    SET_LO8(eax, MEM8(ebx + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008748F;

    eax = (uint32_t)(int32_t)SMEM16(0x54FF38);
    SET_LO8(edx, MEM8(0x55927D));
    edi = MEM32(0x557A34);
    xmm0.f[0] = MEMF(0x3B16C0);
    MEM8(0x54FF94) = LO8(edx);
    edx = MEM32(0x557A4C);
    esi = (eax + 2) << 4;
    MEMF(0x54FF90) = xmm0.f[0];
    xmm0.f[0] = 0.0f;
    MEM8(0x54FF3A) = 1;
    MEM8(0x54FF3B) = 0;
    MEM8(0x54FF99) = 0xA;
    MEM8(0x54FF98) = 0;
    ecx = (eax + 1) << 4;
    MEM32(esi + edx) = 0x10;
    edx = MEM32(0x557A4C);
    MEM32(ecx + edx) = 8;
    PUSH32(esp, edi);
    ecx = 0x557A20;
    MEM8(0x54FF97) = 1;
    MEM8(0x54FF96) = 1;
    MEMF(0x54FF8C) = xmm0.f[0];
    PUSH32(esp, 0); sub_001C6850();

    xmm1.f[0] = MEMF(0x56FD58);
    PUSH32(esp, 0x557990);
    ecx = esp + 0x1C;
    MEMF(esp + 0x24) = xmm1.f[0];
    xmm1.f[0] = MEMF(0x395840);
    MEMF(esp + 0x2C) = xmm0.f[0];
    MEMF(esp + 0x30) = xmm0.f[0];
    MEMF(esp + 0x1C) = xmm0.f[0];
    xmm0.f[0] = MEMF(0x35BF1C);
    PUSH32(esp, ecx);
    esi = 0x4D41D8;
    ecx = esp + 0x28;
    edi = esp + 0x30;
    MEM32(0x54FF50) = eax;
    MEMF(esp + 0x2C) = xmm1.f[0];
    MEMF(esp + 0x24) = xmm0.f[0];
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x001C57C0, call_esp);
    PUSH32(esp, 0xBF800000u);
    esi = 0x54FF30;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000B9D10, call_esp);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000BA100, call_esp);
    xmm0.f[0] = MEMF(ebx + 8);
    MEMF(0x54FF90) = xmm0.f[0];
    MEM32(ebx + 4) = 2;
    goto loc_return;

loc_0008748F:
    ecx = 0x550E38;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000CB9D0, call_esp);
    PUSH32(esp, 2);
    PUSH32(esp, 0x54FF30);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000B9620, call_esp);
    MEM32(ebx + 4) = 2;
    goto loc_return;

loc_000874B3:
    /* The host decoder runs outside the XBE thread. Publish its completion at
     * the exact point where the retail XMV callback's byte is consumed, so a
     * neighbouring retail media update cannot erase the asynchronous edge. */
    if (&g_b3_movie_finished_latched && g_b3_movie_finished_latched) {
        g_b3_movie_finished_latched = 0;
        MEM8(0x4D4239) = 1;
        if (getenv("B3_INPUT_TRACE"))
            fprintf(stderr, "[B3-FMV] retail movie completion delivered\n");
    }
    SET_LO8(eax, MEM8(0x4D4239));
    if (TEST_NZ(LO8(eax), LO8(eax))) {
        MEM32(ebx + 4) = 3;
        goto loc_return;
    }
    SET_LO8(eax, 0);
    esi = 0x4AE20C;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x00017790, call_esp);
    if (getenv("B3_INPUT_TRACE") &&
        (LO8(eax) || MEM8(ebx + 0xC)))
        fprintf(stderr, "[B3-INPUT] screen activity buttons result=%u flagC=%u\n",
                LO8(eax), MEM8(ebx + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000874ED;
    SET_LO8(ebx, 1);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000179D0, call_esp);
    if (getenv("B3_INPUT_TRACE") &&
        (LO8(eax) || MEM8(MEM32(esp + 0x18) + 0xC)))
        fprintf(stderr, "[B3-INPUT] screen activity axes result=%u flagC=%u\n",
                LO8(eax), MEM8(MEM32(esp + 0x18) + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000875D0;
    ebx = MEM32(esp + 0x18);

loc_000874ED:
    SET_LO8(eax, MEM8(ebx + 0xC));
    if (getenv("B3_INPUT_TRACE"))
        fprintf(stderr, "[B3-INPUT] screen advance gate flagC=%u mode=%u\n",
                LO8(eax), MEM32(0x4D4248));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000875D0;
    eax = MEM32(0x4D4248);
    if (eax <= 9) goto loc_00087538;
    eax = 0x411560;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x00141440, call_esp);

loc_00087538:
    MEM32(ebx + 4) = 4;
    goto loc_return;

loc_00087546:
    eax = 0x54FF30;
    MEM8(0x54FF3A) = 0;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000BA990, call_esp);
    edi = 0x4D4008;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000154A0, call_esp);
    PUSH32(esp, edi);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000152E0, call_esp);
    esi = 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0x54FF30);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000B9620, call_esp);
    xmm0.f[0] = 0.0f;
    MEM32(0x557A64) = esi;
    MEM8(0x55927F) = 0;
    MEMF(0x557A60) = xmm0.f[0];
    MEMF(0x557A5C) = xmm0.f[0];
    if (CMP_NE(MEM32(ebx + 4), esi)) goto loc_000875BA;
    edx = (uint32_t)(int32_t)SMEM8(0x4AED44);
    MEM32(0x557A68) = 2;
    MEM32(0x557A6C) = edx;
    goto loc_return;

loc_000875BA:
    eax = (uint32_t)(int32_t)SMEM8(0x4AED44);
    MEM32(0x557A68) = 0;
    MEM32(0x557A6C) = eax;
    goto loc_000875D0;

loc_return:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4;
    return;

loc_000875D0:
    goto loc_return;
}
