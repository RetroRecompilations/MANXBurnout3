#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/* Original Burnout 3 controller-axis activity test, 0x179D0..0x17A6F. */
void sub_000179D0(void)
{
    int _flags = 0;
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
#define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
#define fp_pop() (_fp_top++)
#define fp_popp() (fp_pop())
#define fp_top() _fp_stack[_fp_top & 7]

    esp -= 0x14;
    PUSH32(esp, edi);
    edi = esp + 8;
    edx = esi;
    PUSH32(esp, 0); sub_00017BB0();

    xmm2 = MEMF(0x384A80);
    xmm1 = 0.0f;
    SET_LO8(edx, 0);
    POP32(esp, edi);
loc_scan:
    eax = SX8(LO8(edx));
    ecx = MEM32(esp + eax * 4 + 4);
    if (TEST_Z(ecx, ecx)) goto loc_next;
    eax = MEM32(ecx + 4);
    xmm0 = xmm1;
    if (CMP_EQ(MEM8(eax + 8), 0)) goto loc_magnitude;
    xmm0 = MEMF(eax + 0x74);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_magnitude;
    if (CMP_EQ(MEM8(eax + 0x31), 0)) goto loc_zero;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_magnitude;
loc_zero:
    xmm0 = xmm1;
loc_magnitude:
    MEMF(esp) = xmm0;
    fp_push(MEMF(esp));
    fp_top() = fabs(fp_top());
    MEMF(esp) = (float)fp_top(); fp_popp();
    xmm3 = MEMF(esp);
    if (xmm3 > xmm2) MEMF(ecx + 0x184) = MEMF(0x4AE200);
    if (xmm0 > xmm1) goto loc_found;
loc_next:
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_L(LO8(edx), 4)) goto loc_scan;
    SET_LO8(eax, 0);
    esp += 0x14;
    esp += 4;
    return;
loc_found:
    MEM8(esi + 0xB38) = LO8(edx);
    SET_LO8(eax, 1);
    esp += 0x14;
    esp += 4;

#undef fp_push
#undef fp_pop
#undef fp_popp
#undef fp_top
}
