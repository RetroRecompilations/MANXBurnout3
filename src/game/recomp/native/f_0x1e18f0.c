#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E18F0
 * Original: 0x001E18F0 - 0x001E1AE9 (505 bytes, 169 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E18F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E18F0:
    eax = MEM32(0x41AC90);
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_001E192B; /* je: equal / zero */

loc_001E18FF:
    PUSH32(esp, 0); sub_001DAC30(); /* call 0x001DAC30 */

loc_001E1904:
    if (TEST_Z(eax, eax)) goto loc_001E1933; /* je: equal / zero */

loc_001E1908:
    PUSH32(esp, 0x80000017u);
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001E191A:
    MEM32(esp + 0xC) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001E1928:
    esp = esp + 8;

loc_001E192B:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001E1933:
    /* cmp MEM32(0x7593E4), 0x1E0A10 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM32(0x7593E4), 0x1E0A10)) goto loc_001E19D1; /* je: equal / zero */

loc_001E194A:
    ecx = MEM32(0x41AC98);
    eax = 0; /* xor self */
    if (CMP_BE(ecx, ebp)) goto loc_001E196A; /* jbe: below or equal (unsigned <=) */

loc_001E1956:
    edx = MEM32(0x41AC94);
    /* nop */

loc_001E1960:
    if (CMP_EQ(edi, MEM32(edx + eax * 4))) goto loc_001E196A; /* je: equal / zero */

loc_001E1965:
    eax++;
    if (CMP_B(eax, ecx)) goto loc_001E1960; /* jb: below (unsigned <) */

loc_001E196A:
    if (CMP_NE(ecx, eax)) goto loc_001E19D1; /* jne: not equal / not zero */

loc_001E196E:
    ecx = ecx * 4 + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001E1981:
    ecx = MEM32(0x41AC94);
    esp = esp + 8;
    ebx = 0; /* xor self */
    /* cmp ecx, ebp - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, ebp)) goto loc_001E19BD; /* je: equal / zero */

loc_001E1992:
    edx = MEM32(0x41AC98);
    if (CMP_BE(edx, ebp)) goto loc_001E19B3; /* jbe: below or equal (unsigned <=) */

loc_001E199C:
    ecx = ecx - esi;
    ebx = edx;

loc_001E19A0:
    ebp = MEM32(ecx + eax);
    MEM32(eax) = ebp;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_001E19A0; /* jne: not equal / not zero */

loc_001E19AB:
    ecx = MEM32(0x41AC94);
    ebp = 0; /* xor self */

loc_001E19B3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001E19BA:
    esp = esp + 4;

loc_001E19BD:
    eax = MEM32(0x41AC98);
    eax++;
    MEM32(esi + ebx * 4) = edi;
    MEM32(0x41AC98) = eax;
    MEM32(0x41AC94) = esi;

loc_001E19D1:
    esi = MEM32(edi + 0x10);
    if (CMP_EQ(esi, ebp)) goto loc_001E19F4; /* je: equal / zero */

loc_001E19D8:
    goto loc_001E19E0;

    /* nop */

loc_001E19E0:
    edx = MEM32(esp + 0x24);
    if (CMP_EQ(MEM32(esi + 8), edx)) goto loc_001E1A9E; /* je: equal / zero */

loc_001E19ED:
    esi = MEM32(esi + 0x30);
    if (CMP_NE(esi, ebp)) goto loc_001E19E0; /* jne: not equal / not zero */

loc_001E19F4:
    ebx = MEM32(esp + 0x20);
    edx = MEM32(edi);
    eax = MEM32(edi + 8);
    esi = ebx + 3;
    esi = esi & 0xFFFFFFFCu;
    esi = esi + edx;
    if (CMP_EQ(eax, ebp)) goto loc_001E1A11; /* je: equal / zero */

loc_001E1A09:
    if (CMP_G(esi, eax)) goto loc_001E1AE4; /* jg: greater (signed >) */

loc_001E1A11:
    ecx = MEM32(0x41AC90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E4), _icall_esp); /* indirect call */
    }

loc_001E1A23:
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_001E1AE4; /* je: equal / zero */

loc_001E1A2E:
    edx = MEM32(edi);
    ecx = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    MEM32(edi) = esi;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x28);
    /* cmp ecx, ebp - flags set for next jcc */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = ebp;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = ebp;
    MEM32(eax + 0x1C) = ebp;
    if (CMP_NE(ecx, ebp)) goto loc_001E1A5A; /* jne: not equal / not zero */

loc_001E1A55:
    ecx = 0x2087B0;

loc_001E1A5A:
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x2C);
    if (CMP_NE(ecx, ebp)) goto loc_001E1A6A; /* jne: not equal / not zero */

loc_001E1A65:
    ecx = 0x2087B0;

loc_001E1A6A:
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x30);
    if (CMP_NE(ecx, ebp)) goto loc_001E1A7A; /* jne: not equal / not zero */

loc_001E1A75:
    ecx = 0x2087B0;

loc_001E1A7A:
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ebp;
    MEM32(eax + 0x30) = ebp;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = edi;
    if (CMP_NE(MEM32(edi + 0x10), ebp)) goto loc_001E1ACB; /* jne: not equal / not zero */

loc_001E1A8E:
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001E1A9E:
    PUSH32(esp, 0x80000017u);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001E1AB0:
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001E1ABE:
    eax = MEM32(esi);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001E1ACB:
    edx = MEM32(edi + 0x14);
    MEM32(edx + 0x30) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(eax + 0x34) = ecx;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001E1AE4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

}
