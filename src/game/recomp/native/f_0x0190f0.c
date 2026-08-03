#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"

/* Exact retail frontend readiness method, 0x190F0..0x1910E. */
void sub_000190F0(void)
{
    int _flags = 0;
    edx = MEM32(eax + 0x988);
    if (CMP_LE(edx & edx, 0)) {
        if (CMP_NE(MEM32(eax + 0x984), ecx))
            MEM32(eax + 0x984) = ecx;
        SET_LO8(eax, 1);
    } else {
        SET_LO8(eax, 0);
    }
    esp += 4;
}
