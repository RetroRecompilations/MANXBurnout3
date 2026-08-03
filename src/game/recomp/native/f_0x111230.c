#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111230
 * Original: 0x00111230 - 0x0011133F (271 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00111230:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebx + 0x1920);
    eax = eax - 0;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_00111274; /* je: equal / zero */

loc_0011124A:
    eax--;
    if ((eax == 0)) goto loc_00111262; /* je: equal / zero */

loc_0011124D:
    eax--;
    if ((eax != 0)) goto loc_00111286; /* jne: not equal / not zero */

loc_00111250:
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1560);
    edi = eax + esi + 0x2CCA0;
    goto loc_0011128A;

loc_00111262:
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1580);
    edi = ecx + esi + 0x26120;
    goto loc_0011128A;

loc_00111274:
    edx = MEM32(ebp + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4AD0);
    edi = edx + esi + 0x1CB80;
    goto loc_0011128A;

loc_00111286:
    edi = MEM32(esp + 0xC);

loc_0011128A:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_00111292:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x19BC);
    ecx = eax + eax * 2;
    eax = MEM32(ebx + 0x1920);
    ecx = ecx << 4;
    eax = eax - 0;
    esi = ecx + esi + 0x70;
    if ((eax == 0)) goto loc_001112BE; /* je: equal / zero */

loc_001112AE:
    eax--;
    if ((eax == 0)) goto loc_001112B9; /* je: equal / zero */

loc_001112B1:
    eax--;
    if ((eax != 0)) goto loc_001112C1; /* jne: not equal / not zero */

loc_001112B4:
    MEM8(esi) = 1;
    goto loc_001112C1;

loc_001112B9:
    MEM8(esi) = 0;
    goto loc_001112C1;

loc_001112BE:
    MEM8(esi) = 2;

loc_001112C1:
    MEM32(esi + 0xC) = edi;
    edx = MEM32(ebx + 0x1798);
    eax = MEM32(edx);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(edi + 0x204);
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm3.b, 16); /* movaps */
    eax = edi + 0x70;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm2.b, 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm3.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_00111308:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0011F890(); /* call 0x0011F890 */

loc_00111311:
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x204);
    SET_LO8(edx, MEM8(ebp + 0xC));
    eax = eax + 0x1D0;
    MEM32(esi + 8) = eax;
    eax = esi;
    MEM32(esi + 4) = ecx;
    MEM8(esi + 1) = 0;
    MEM8(esi + 2) = LO8(edx);
    PUSH32(esp, 0); sub_00114270(); /* call 0x00114270 */

loc_00111336:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
