#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/**
 * sub_000FC5D0
 * Original: 0x000FC5D0 - 0x000FC704
 *
 * Offline-native replacement for the retail online-service bootstrap.
 * Burnout 3's local frontend, profiles and save data do not depend on Xbox
 * Live.  The original state machine starts XONLINE/XNET and a permanent
 * polling thread before performing the object finalisation below.  Native
 * builds omit that subsystem and execute only the retail finalisation.
 */
void sub_000FC5D0(void)
{
    recomp_xmm_t xmm0;

    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0;

    xmm0.f[0] = 0.0f;
    MEMF(edi + 0x30D98) = xmm0.f[0];
    eax = edi;
    PUSH32(esp, 0);
    sub_000FE410();

    eax = edi + 0x9970;
    MEM8(edi + 0x9A56) = 0;
    MEM8(eax + 0xA0) = 0;
    ecx = 0xA;
    while (ecx != 0) {
        MEM8(eax) = 0;
        eax += 0x10;
        ecx--;
    }

    PUSH32(esp, 0);
    sub_000FDAC0();

    MEM8(edi + 0x30DD8) = 0;
    MEM8(edi + 0x30DC9) = 0;
    MEM32(edi + 0x30A80) = 0;
    MEM32(edi + 0x30DC0) = 0xFFFFFFFFu;
    MEM32(edi + 0x30A84) = 0x17;

    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8;
}
