#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>

/* Retail menu-screen activation.  Keep the XBE-owned state setup and route
 * untranslated leaf helpers through the normal safe dispatch boundary. */
void sub_00086F70(void)
{
    uint32_t ebp;
    uint32_t call_esp;
    int _flags = 0;
    recomp_xmm_t xmm0, xmm1;

    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned trace_count;
        if (trace_count++ < 32)
            fprintf(stderr,
                    "[B3-FE] 86F70 activate screen=%08X id=%03X arg1=%08X "
                    "arg2=%02X current=%08X\n",
                    ecx, eax, MEM32(esp + 4), MEM8(esp + 8),
                    MEM32(0x557A70));
    }

    PUSH32(esp, ebp);
    ebp = esp;
    esp &= 0xFFFFFFF0u;
    esp -= 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_NE(MEM32(0x557A70), 0x559F8C)) goto loc_00086F9D;
    eax = 0x557880;
    PUSH32(esp, 0); sub_00063670();
    MEM8(0x55927D) = 0;

loc_00086F9D:
    eax = MEM32(0x4D4244);
    xmm0.f[0] = 0.0f;
    MEM32(0x557A70) = ebx;
    MEM8(0x55927F) = 0;
    MEMF(0x557A5C) = xmm0.f[0];
    MEM32(0x557A64) = 2;
    if (CMP_EQ(eax, 0x18) || CMP_EQ(eax, 1)) goto loc_00086FE1;
    edi = 0x4D4008;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000154A0, call_esp);
    PUSH32(esp, edi);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000152E0, call_esp);
    xmm0.f[0] = 0.0f;

loc_00086FE1:
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebp + 0xC));
    xmm1.f[0] = MEMF(ebp + 0x10);
    MEM32(0x4D4248) = eax;
    SET_LO8(eax, (CMP_NE(esi, 0xF90)) ? 1 : 0);
    MEM32(ebx + 4) = 0;
    MEM8(ebx + 0xC) = LO8(ecx);
    MEM8(ebx + 0xD) = 0;
    MEM8(ebx + 0xE) = 0;
    MEM8(ebx + 0xF) = LO8(eax);
    MEMF(ebx + 8) = xmm1.f[0];
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000870E9;

    edx = MEM32(0x4D532C);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    eax = 5;
    ecx = 0x5509C8;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000C9240, call_esp);
    edi = 0x5509AC;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000D3AF0, call_esp);
    goto loc_00087042;

loc_00087042:
    ecx = (uint32_t)(int32_t)SMEM16(0x54FF38);
    SET_LO8(edx, MEM8(0x55927D));
    xmm0.f[0] = MEMF(0x3B16C0);
    esi = (ecx + 2) << 4;
    eax = (ecx + 1) << 4;
    ecx = MEM32(0x557A4C);
    MEM8(0x54FF94) = LO8(edx);
    MEM8(0x54FF3A) = 1;
    MEM8(0x54FF3B) = 0;
    MEM8(0x54FF99) = 4;
    MEMF(0x54FF8C) = xmm0.f[0];
    MEMF(0x54FF90) = xmm0.f[0];
    MEM8(0x54FF98) = 0;
    MEM32(esi + ecx) = 0x10;
    edx = MEM32(0x557A4C);
    PUSH32(esp, 0);
    esi = 0x54FF30;
    MEM32(eax + edx) = 8;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000B9C30, call_esp);
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000BA100, call_esp);
    SET_LO8(eax, MEM8(ebx + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000871C3;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x550CB0);
    edx = 3;
    call_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(0x000D4700, call_esp);
    goto loc_000870DE;

loc_000870E9:
    eax = (uint32_t)(int32_t)SMEM16(0x54FF38);
    SET_LO8(edx, MEM8(0x55927D));
    edi = MEM32(0x557A34);
    xmm1.f[0] = MEMF(0x3B16C0);
    MEM8(0x54FF94) = LO8(edx);
    edx = MEM32(0x557A4C);
    esi = (eax + 2) << 4;
    MEM8(0x54FF3A) = 1;
    MEM8(0x54FF3B) = 0;
    MEM8(0x54FF99) = 3;
    MEMF(0x54FF8C) = xmm1.f[0];
    MEMF(0x54FF90) = xmm1.f[0];
    MEM8(0x54FF98) = 0;
    ecx = (eax + 1) << 4;
    MEM32(esi + edx) = 0x10;
    edx = MEM32(0x557A4C);
    MEM32(ecx + edx) = 8;
    PUSH32(esp, edi);
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850();
    xmm1.f[0] = MEMF(0x56FD58);
    PUSH32(esp, 0x557980);
    MEMF(esp + 0x1C) = xmm1.f[0];
    xmm1.f[0] = MEMF(0x56FDE8);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    edx = esp + 0x28;
    esi = esp + 0x30;
    MEM32(0x54FF50) = eax;
    MEMF(esp + 0x24) = xmm1.f[0];
    MEMF(esp + 0x28) = xmm0.f[0];
    MEMF(esp + 0x2C) = xmm0.f[0];
    MEMF(esp + 0x30) = xmm0.f[0];
    MEMF(esp + 0x34) = xmm0.f[0];
    PUSH32(esp, 0); sub_001C18A0();
    PUSH32(esp, 0);
    ebx = 0x550E38;
    PUSH32(esp, 0); sub_000CB5F0();
    goto loc_000871C3;

loc_000870DE:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16;
    return;

loc_000871C3:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16;
}
