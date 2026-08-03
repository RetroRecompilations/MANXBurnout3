#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00184AD0
 * Original: 0x00184AD0 - 0x00184BCA (250 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00184AD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x13F4);
    ecx = MEM32(eax + 0x1920);
    SET_LO8(eax, MEM8(esi + 0x210));
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184B02; /* jne: not equal / not zero */

loc_00184AF8:
    /* cmp edi, 8 - flags set for next jcc */
    MEM8(esp + 0x14) = 0;
    if (CMP_NE(edi, 8)) goto loc_00184B07; /* jne: not equal / not zero */

loc_00184B02:
    MEM8(esp + 0x14) = 1;

loc_00184B07:
    ecx = MEM32(ebp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    ecx = esi;
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00184B22:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(ebp + 0xC);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00184B3B:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(esi + 0xCC0);
    edx = MEM32(esi + 0xCC4);
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x49C); /* addss */
    eax = edi + -3;
    /* cmp eax, 5 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_A(eax, 5)) goto loc_00184BC2; /* ja: above (unsigned >) */

loc_00184B70:
    eax = ZX8(MEM8(eax + 0x184BD4));
    { uint32_t _jt = MEM32(eax * 4 + 0x184BCC); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00184B7Eu) goto loc_00184B7E;
    if (_jt == 0x00184BC2u) goto loc_00184BC2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00184B7E:
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B1870); /* movss */
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00184B92; /* jne: not equal / not zero */

loc_00184B8A:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */

loc_00184B92:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = 0x60DFD0;
    ecx = esp + 0x54;
    PUSH32(esp, 0); sub_00188600(); /* call 0x00188600 */

loc_00184BC2:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
