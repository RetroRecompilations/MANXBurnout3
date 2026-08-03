#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00021A50
 * Original: 0x00021A50 - 0x00021B34 (228 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021A50:
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B57E0(); /* call 0x001B57E0 */

loc_00021A5C:
    ebx = edi + 0x80;
    esi = ebx;
    ebp = 4;
    /* nop */

loc_00021A70:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00021A7D; /* je: equal / zero */

loc_00021A76:
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00021A7D:
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00021A70; /* jne: not equal / not zero */

loc_00021A83:
    MEM32(esp + 0xC) = 0;
    ebp = edi;
    MEM32(esp + 0x10) = ebx;
    esi = edi + 0x98;
    MEM32(esp + 0x14) = 4;
    /* nop */

loc_00021AA0:
    ebx = MEM32(esi + 0x11C);
    /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    eax = MEM32(ebp);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_00021ADE; /* jne: not equal / not zero */

loc_00021AAE:
    if (CMP_NE(eax, 2)) goto loc_00021AFB; /* jne: not equal / not zero */

loc_00021AB3:
    if (TEST_Z(eax, eax)) goto loc_00021AFB; /* je: equal / zero */

loc_00021AB7:
    if (CMP_NE(MEM32(esi + 4), eax)) goto loc_00021AFB; /* jne: not equal / not zero */

loc_00021ABC:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(ecx) = esi;
    edx = MEM32(edi + 0x90);
    edx++;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(edi + 0x90) = edx;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00021ADC:
    goto loc_00021AFB;

loc_00021ADE:
    if (CMP_EQ(eax, 2)) goto loc_00021AFB; /* je: equal / zero */

loc_00021AE3:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00021AEA:
    MEM32(edi + ebx * 4 + 0x80) = 0;
    MEM32(edi + 0x90) = MEM32(edi + 0x90) - 1;

loc_00021AFB:
    eax = MEM32(esp + 0xC);
    ebx = MEM32(esp + 0x10);
    eax++;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    ebx = ebx + 4;
    esi = esi + 0x120;
    ebp = ebp + 0x20;
    eax--;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00021AA0; /* jne: not equal / not zero */

loc_00021B27:
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00018170(); return; /* tail jmp 0x00018170 */

}
