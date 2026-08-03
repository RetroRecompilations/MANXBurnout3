#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B6A90
 * Original: 0x001B6A90 - 0x001B6AF9 (105 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6A90:
    ecx = MEM32(esi + 0x524);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    /* cmp ecx, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, ebp)) goto loc_001B6AA4; /* je: equal / zero */

loc_001B6A9F:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001B6AA4:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(esi + 0x524) = ebp;
    MEM32(esi + 0x528) = ebp;
    MEMF(esi + 0x580) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x58C) = ebp;
    edi = esi;
    ebx = 8;
    /* nop */

loc_001B6AD0:
    ecx = ecx | 0xFFFFFFFFu;
    eax = edi;
    PUSH32(esp, 0); sub_001B6840(); /* call 0x001B6840 */

loc_001B6ADA:
    edi = edi + 0x90;
    ebx--;
    if ((ebx != 0)) goto loc_001B6AD0; /* jne: not equal / not zero */

loc_001B6AE3:
    POP32(esp, edi);
    MEM32(esi + 0x584) = ebp;
    POP32(esp, ebp);
    MEM32(esi + 0x588) = 2;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
