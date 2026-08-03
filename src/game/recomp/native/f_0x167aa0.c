#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00167AA0
 * Original: 0x00167AA0 - 0x00167BD8 (312 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167AA0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi + 0x2A0;
    ebx = 0; /* xor self */
    MEM32(esp + 8) = eax;
    PUSH32(esp, ebp);

loc_00167AB0:
    eax = 1;
    edx = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_00167ABE:
    ecx = MEM32(esi + 0xC24);
    edi = eax;
    eax = MEM32(esi + 0xC20);
    ebp = edx;
    eax = eax & edi;
    ecx = ecx & ebp;
    eax = eax | ecx;
    if ((eax == 0)) goto loc_00167B0D; /* je: equal / zero */

loc_00167AD6:
    SET_LO8(eax, MEM8(esi + 0xC44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00167AED; /* je: equal / zero */

loc_00167AE0:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00167AED:
    ecx = MEM32(esi + 0xC20);
    eax = MEM32(esi + 0xC24);
    edi = ~edi;
    ebp = ~ebp;
    ecx = ecx & edi;
    eax = eax & ebp;
    MEM32(esi + 0xC20) = ecx;
    MEM32(esi + 0xC24) = eax;

loc_00167B0D:
    ecx = MEM32(esp + 0xC);
    ebx++;
    ecx = ecx + 4;
    /* cmp ebx, 0x14 - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(ebx, 0x14)) goto loc_00167AB0; /* jl: less (signed <) */

loc_00167B1E:
    eax = MEM32(esi + 0x250);
    edi = esi + 0x250;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00167B2F:
    ebx = esi + 0x2A0;
    ebp = 0x14;
    /* nop */

loc_00167B40:
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00167B47:
    ebx = ebx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00167B40; /* jne: not equal / not zero */

loc_00167B4D:
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00167B54:
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    MEM8(esi + 0xC44) = 0;
    MEM32(esi + 0xC20) = ebx;
    MEM32(esi + 0xC24) = ebx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    edi = ecx;
    edi = edi | edx;
    POP32(esp, ebp);
    if ((edi == 0)) goto loc_00167B97; /* je: equal / zero */

loc_00167B78:
    if (CMP_NE(ecx, 0x828A38A1u)) goto loc_00167B88; /* jne: not equal / not zero */

loc_00167B80:
    if (CMP_EQ(edx, 0xBA38E6DCu)) goto loc_00167BD1; /* je: equal / zero */

loc_00167B88:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    eax = eax + 0x10;
    edi = ecx;
    edi = edi | edx;
    if ((edi != 0)) goto loc_00167B78; /* jne: not equal / not zero */

loc_00167B97:
    edi = 0; /* xor self */

loc_00167B99:
    if (CMP_EQ(MEM32(esi + 4), edi)) goto loc_00167BCD; /* je: equal / zero */

loc_00167B9E:
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00167BA7:
    eax = MEM32(esi + 0x10);
    /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esi + 4);
    MEM32(esi + 4) = edi;
    if (CMP_EQ(eax, ebx)) goto loc_00167BC4; /* je: equal / zero */

loc_00167BB4:
    /* cmp edi, ebx - flags set for next jcc */
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x14) = edx;
    if (CMP_EQ(edi, ebx)) goto loc_00167BC4; /* je: equal / zero */

loc_00167BBE:
    eax = MEM32(eax + 0x20);
    MEM32(edi + 0x10) = eax;

loc_00167BC4:
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_00167BCD:
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00167BD1:
    edi = MEM32(eax + 8);
    edi = edi + esi;
    goto loc_00167B99;

}
