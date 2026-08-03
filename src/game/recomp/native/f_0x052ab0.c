#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00052AB0
 * Original: 0x00052AB0 - 0x00052CDD (557 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm2, xmm3, xmm4;

loc_00052AB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    /* cmp MEM32(ebx + 0x178), 0x17 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebx + 0x178), 0x17)) goto loc_00052AE8; /* jne: not equal / not zero */

loc_00052AC1:
    edx = ebx;
    edi = 2;

loc_00052AC8:
    eax = MEM32(edx + 0x68);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00052ADD; /* je: equal / zero */

loc_00052AD1:
    ecx = MEM32(eax + 0xC);
    /* cmp ecx, esi - flags set for next jcc */
    MEM32(eax + 0xC) = esi;
    eax = ecx;
    if (CMP_NE(ecx, esi)) goto loc_00052AD1; /* jne: not equal / not zero */

loc_00052ADD:
    MEM32(edx + 0x68) = esi;
    edx = edx + 0x70;
    edi--;
    if ((edi != 0)) goto loc_00052AC8; /* jne: not equal / not zero */

loc_00052AE6:
    goto loc_00052AEA;

loc_00052AE8:
    esi = 0; /* xor self */

loc_00052AEA:
    eax = MEM32(ebx + 0x170);
    edi = 0; /* xor self */
    if (CMP_LE(eax, esi)) goto loc_00052B0F; /* jle: less or equal (signed <=) */

loc_00052AF6:
    esi = ebx;

loc_00052AF8:
    eax = esi;
    PUSH32(esp, 0); sub_000538B0(); /* call 0x000538B0 */

loc_00052AFF:
    eax = MEM32(ebx + 0x170);
    edi++;
    esi = esi + 0x70;
    if (CMP_L(edi, eax)) goto loc_00052AF8; /* jl: less (signed <) */

loc_00052B0D:
    esi = 0; /* xor self */

loc_00052B0F:
    ecx = MEM32(ebx + 0x170);
    eax = 2;
    if (CMP_NE(ecx, eax)) goto loc_00052C4C; /* jne: not equal / not zero */

loc_00052B22:
    SET_LO8(ecx, MEM8(0x4D617F));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00052BBF; /* je: equal / zero */

loc_00052B30:
    if (TEST_NZ(MEM8(0x754C74), 1)) goto loc_00052B60; /* jne: not equal / not zero */

loc_00052B39:
    eax = MEM32(0x754C74);
    xmm2.f[0] = MEMF(0x54FA88); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1684); /* mulss */
    eax = eax | 1;
    MEM32(0x754C74) = eax;
    MEMF(0x754C70) = xmm2.f[0]; /* movss */
    goto loc_00052B68;

loc_00052B60:
    xmm2.f[0] = MEMF(0x754C70); /* movss */

loc_00052B68:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x54F8F0); /* movss */
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ebp + -16;
    eax = ebx;
    MEMF(ebp + -16) = xmm2.f[0]; /* movss */
    MEMF(ebp + -12) = xmm4.f[0]; /* movss */
    MEMF(ebp + -8) = xmm3.f[0]; /* movss */
    MEMF(ebp + -4) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_00053AA0(); /* call 0x00053AA0 */

loc_00052B95:
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    eax = ebx + 0x70;
    esi = ebp + -8;
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    MEMF(ebp + -4) = xmm4.f[0]; /* movss */
    MEMF(ebp + -16) = xmm2.f[0]; /* movss */
    MEMF(ebp + -12) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_00053AA0(); /* call 0x00053AA0 */

loc_00052BB8:
    esi = 0; /* xor self */
    goto loc_00052C5B;

loc_00052BBF:
    if (TEST_NZ(MEM8(0x754C74), 2)) goto loc_00052BF0; /* jne: not equal / not zero */

loc_00052BC8:
    ecx = MEM32(0x754C74);
    xmm2.f[0] = MEMF(0x54F8F0); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1684); /* mulss */
    ecx = ecx | eax;
    MEM32(0x754C74) = ecx;
    MEMF(0x754C6C) = xmm2.f[0]; /* movss */
    goto loc_00052BF8;

loc_00052BF0:
    xmm2.f[0] = MEMF(0x754C6C); /* movss */

loc_00052BF8:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x54FA88); /* movss */
    edx = ebp + -16;
    PUSH32(esp, edx);
    esi = ebp + -8;
    eax = ebx;
    MEMF(ebp + -8) = xmm4.f[0]; /* movss */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    MEMF(ebp + -16) = xmm3.f[0]; /* movss */
    MEMF(ebp + -12) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_00053AA0(); /* call 0x00053AA0 */

loc_00052C25:
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebx + 0x70;
    esi = ebp + -8;
    MEMF(ebp + -8) = xmm4.f[0]; /* movss */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    MEMF(ebp + -16) = xmm3.f[0]; /* movss */
    MEMF(ebp + -12) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0); sub_00053AA0(); /* call 0x00053AA0 */

loc_00052C48:
    esi = 0; /* xor self */
    goto loc_00052C5B;

loc_00052C4C:
    edi = ebx;
    PUSH32(esp, 0); sub_00053B70(); /* call 0x00053B70 */

loc_00052C53:
    edi = ebx + 0x70;
    PUSH32(esp, 0); sub_00053B70(); /* call 0x00053B70 */

loc_00052C5B:
    edi = ebx;
    MEM8(ebx + 0xE0) = 0;
    PUSH32(esp, 0); sub_00052D50(); /* call 0x00052D50 */

loc_00052C69:
    eax = ebx;
    PUSH32(esp, 0); sub_00053300(); /* call 0x00053300 */

loc_00052C70:
    eax = ebx;
    PUSH32(esp, 0); sub_00053420(); /* call 0x00053420 */

loc_00052C77:
    eax = ebx;
    PUSH32(esp, 0); sub_00053540(); /* call 0x00053540 */

loc_00052C7E:
    /* cmp MEM32(ebx + 0x170), esi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_LE(MEM32(ebx + 0x170), esi)) goto loc_00052CCB; /* jle: less or equal (signed <=) */

loc_00052C89:
    esi = ebx + 4;
    /* nop */

loc_00052C90:
    PUSH32(esp, 0x3F800000);
    edi = esi + -4;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 5;
    PUSH32(esp, 0); sub_00053A10(); /* call 0x00053A10 */

loc_00052CAA:
    eax = MEM32(ebp + -4);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    ecx = MEM32(ebx + 0x170);
    eax++;
    esi = esi + 0x70;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, ecx)) goto loc_00052C90; /* jl: less (signed <) */

loc_00052CCB:
    POP32(esp, edi);
    MEM32(ebx + 0x178) = 0x17;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
