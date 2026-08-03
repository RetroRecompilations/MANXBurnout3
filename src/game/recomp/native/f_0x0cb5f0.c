#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000CB5F0
 * Original: 0x000CB5F0 - 0x000CB9C2 (978 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB5F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_000CB5F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = MEMF(0x3B16E8); /* movss */
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ebx + 8);
    MEM8(ebx + 0xA) = 1;
    MEM8(ebx + 0xB) = 0;
    MEMF(ebx + 0x28) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x2C) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x31) = 3;
    MEM8(ebx + 0x30) = 0;
    ecx = MEM32(0x557A34);
    edx = MEM32(ecx + 0x40);
    eax = esi + 1;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0x10);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000CB660; /* je: equal / zero */

loc_000CB63B:
    edi = MEM32(eax);
    MEM32(edx + 0x10) = edi;
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) goto loc_000CB64D; /* je: equal / zero */

loc_000CB646:
    MEM32(edx + 4) = 0;

loc_000CB64D:
    edx = MEM32(ecx + 0x44);
    if (TEST_NZ(edx, edx)) goto loc_000CB658; /* jne: not equal / not zero */

loc_000CB654:
    MEM32(eax) = edx;
    goto loc_000CB65D;

loc_000CB658:
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;

loc_000CB65D:
    MEM32(ecx + 0x44) = eax;

loc_000CB660:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = eax + 8;
    MEM32(eax + 0x48) = ecx;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(ebx + 0x24) = eax;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000CB6A5:
    ecx = MEM32(ebx + 0x24);
    MEM32(ebx + 0x18) = eax;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000CB6B8:
    edx = MEM32(ebx + 0x24);
    MEM32(ebx + 0x1C) = eax;
    PUSH32(esp, edx);
    eax = esi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000CB6CB:
    xmm2.f[0] = MEMF(0x570B20); /* movss */
    esi = MEM32(ebx + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x557880);
    MEM32(ebx + 0x20) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x570B18); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B16B8); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1688); /* movss */
    PUSH32(esp, edx);
    edi = 0x557980;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000B52A0(); /* call 0x000B52A0 */

loc_000CB735:
    xmm0.f[0] = MEMF(0x570B20); /* movss */
    esi = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x557880);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x570B18); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000B52A0(); /* call 0x000B52A0 */

loc_000CB792:
    xmm0.f[0] = MEMF(0x570B20); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x570B18); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x20);
    eax = 0; /* xor self */
    if (CMP_NE(edx, 1)) goto loc_000CB7EB; /* jne: not equal / not zero */

loc_000CB7E6:
    eax = 1;

loc_000CB7EB:
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    edx = esp + 0x2C;
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_000F9C00(); /* call 0x000F9C00 */

loc_000CB800:
    eax = MEM32(ebx + 0x24);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000CB814:
    ecx = MEM32(ebx + 0x24);
    MEM32(ebx + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000CB827:
    edx = MEM32(ebx + 0x24);
    MEM32(ebx + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000CB83A:
    PUSH32(esp, 0x7F7FFFFF);
    MEM32(ebx + 0xC) = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x5578C0), 16); /* movaps */
    ecx = MEM32(0x4D532C);
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x5578D0), 16); /* movaps */
    PUSH32(esp, 0);
    memcpy((void *)XBOX_PTR(esp + 0x48), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x396EB0); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x41B00000);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x570B3C); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x304);
    ecx = 0x4075D0;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_000CB8B7:
    edx = MEM32(0x4646BC);
    memcpy(xmm0.b, (void *)XBOX_PTR(0x557990), 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B17E4); /* movss */
    xmm3.f[0] = MEMF(0x3B1884); /* movss */
    xmm4.f[0] = MEMF(0x570AE8); /* movss */
    xmm1.f[0] = MEMF(0x570B3C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x5576B0);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x10);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    edx = 0x5576B8;
    ecx = esp + 0x38;
    edi = 0x4075D0;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000CB933:
    xmm0.f[0] = MEMF(0x5576B0); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x5576BC); /* movss */
    ecx = MEM32(0x4646BC);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x14);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x5576B8); /* movss */
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x5576B4); /* movss */
    eax = esp + 0x30;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x570B20); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    edx = esp + 0x30;
    ecx = esp + 0x28;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000CB9B8:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
