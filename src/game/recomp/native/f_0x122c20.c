#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00122C20
 * Original: 0x00122C20 - 0x00122CF9 (217 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00122C20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    esi = ebx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    edx = eax + 0x1C;
    ecx = ecx - eax;
    esi = 0x28;

loc_00122C47:
    eax = ecx + edx;
    SET_LO16(ebx, MEM16(eax));
    edi = edx;
    MEM16(edi) = LO16(ebx);
    SET_LO8(eax, MEM8(eax + 2));
    edx = edx + 3;
    esi--;
    MEM8(edi + 2) = LO8(eax);
    if ((esi != 0)) goto loc_00122C47; /* jne: not equal / not zero */

loc_00122C5E:
    edx = MEM32(ebp + 8);
    edx = edx + 0xA0;
    eax = 0x28;
    /* nop */

loc_00122C70:
    esi = edx + ecx;
    ebx = MEM32(esi);
    edi = edx;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    edx = edx + 0x10;
    eax--;
    MEM32(edi + 0xC) = esi;
    if ((eax != 0)) goto loc_00122C70; /* jne: not equal / not zero */

loc_00122C91:
    edi = MEM32(ebp + 8);
    edx = edi + 0x320;
    esi = 0x16;
    /* nop */

loc_00122CA0:
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    edx = edx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_00122CA0; /* jne: not equal / not zero */

loc_00122CAD:
    edx = edi + 0x480;
    eax = 0x3C;
    goto loc_00122CC0;

    /* nop */

loc_00122CC0:
    SET_LO16(esi, MEM16(edx + ecx));
    MEM16(edx) = LO16(esi);
    edx = edx + 2;
    eax--;
    if ((eax != 0)) goto loc_00122CC0; /* jne: not equal / not zero */

loc_00122CCD:
    edx = edi + 0x4F8;
    esi = 0x16;

loc_00122CD8:
    eax = edx + ecx;
    ebx = MEM32(eax);
    edi = edx;
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    eax = MEM32(eax + 8);
    edx = edx + 0xC;
    esi--;
    MEM32(edi + 8) = eax;
    if ((esi != 0)) goto loc_00122CD8; /* jne: not equal / not zero */

loc_00122CF3:
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

}
