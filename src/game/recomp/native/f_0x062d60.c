#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"

/* Exact retail Frontend.txd lookup table population, 0x62D60..0x62D92. */
void sub_00062D60(void)
{
    int _flags = 0;

    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    edi = 0x38A280;
    ebx += 0x400;

loc_00062D70:
    eax = MEM32(edi);
    esi = MEM32(0x4D41D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002DDF0();
    MEM32(ebx) = eax;
    edi += 4;
    ebx += 4;
    if (CMP_L(edi, 0x38A4BC)) goto loc_00062D70;

    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4;
}
