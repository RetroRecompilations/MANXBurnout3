#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D418C
 * Original: 0x001D418C - 0x001D42AC (288 bytes, 111 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D418C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D418C:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x4C;
    ebx = 0; /* xor self */
    /* cmp MEM32(ecx), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ecx), ebx)) goto loc_001D429F; /* jne: not equal / not zero */

loc_001D41A8:
    ecx = MEM32(eax + 0x48);
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_001D41F8; /* je: equal / zero */

loc_001D41B2:
    eax = MEM32(ecx + 8);
    if (CMP_EQ(eax, MEM32(ecx + 4))) goto loc_001D41F8; /* je: equal / zero */

loc_001D41BA:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    edx = MEM32(ecx + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    edx = edx + ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B908), _icall_esp); /* indirect call */
    }

loc_001D41DC:
    if (CMP_GE(eax & eax, 0)) goto loc_001D41E7; /* jge: greater or equal (signed >=) */

loc_001D41E0:
    eax = 0; /* xor self */
    goto loc_001D42A5;

loc_001D41E7:
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = MEM32(eax + 8) + ecx;
    eax = MEM32(ebp + 8);
    goto loc_001D427C;

loc_001D41F8:
    edi = MEM32(0x36B908);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x10000;
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_001D421A:
    if (TEST_S(eax, eax)) goto loc_001D41E0; /* jl: less (signed <) */

loc_001D421E:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_001D4234:
    if (CMP_GE(eax & eax, 0)) goto loc_001D424D; /* jge: greater or equal (signed >=) */

loc_001D4238:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B904), _icall_esp); /* indirect call */
    }

loc_001D424B:
    goto loc_001D41E0;

loc_001D424D:
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x48);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x48) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = eax + 0x10;
    MEM32(ebp + -12) = ecx;

loc_001D427C:
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + -12);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x18);
    eax = eax + 0x4C;
    goto loc_001D4293;

loc_001D428C:
    MEM32(eax) = edx;
    eax = edx;
    edx = edx + 0x10;

loc_001D4293:
    if (CMP_B(edx, ecx)) goto loc_001D428C; /* jb: below (unsigned <) */

loc_001D4297:
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x18);
    ecx = ecx + 0x4C;

loc_001D429F:
    eax = MEM32(ecx);
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_001D42A5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
