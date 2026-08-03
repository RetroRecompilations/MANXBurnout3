#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C5C0
 * Original: 0x0021C5C0 - 0x0021C647 (135 bytes, 55 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C5C0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_0021C5D3; /* jne: not equal / not zero */

loc_0021C5CE:
    edi = 0x41CE70;

loc_0021C5D3:
    ebp = MEM32(0x36B880);
    /* nop */

loc_0021C5E0:
    /* test ebx, ebx - flags set for next jcc */
    esi = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_0021C5EB; /* jne: not equal / not zero */

loc_0021C5E6:
    esi = 0x41CE70;

loc_0021C5EB:
    PUSH32(esp, 0); sub_001D191E(); /* call 0x001D191E */

loc_0021C5F0:
    if (CMP_EQ(MEM32(esi), eax)) goto loc_0021C62C; /* je: equal / zero */

loc_0021C5F4:
    eax = 1;
    ecx = esi + 8;
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = _tmp; }
    if (TEST_Z(eax, eax)) goto loc_0021C61F; /* je: equal / zero */

loc_0021C602:
    esi = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0021C608:
    edx = 1;
    eax = edi + 8;
    { uint32_t _tmp = MEM32(eax);
    MEM32(eax) = edx;
    edx = _tmp; }
    if (TEST_Z(edx, edx)) goto loc_0021C638; /* je: equal / zero */

loc_0021C616:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_0021C61D:
    goto loc_0021C5E0;

loc_0021C61F:
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0021C625:
    PUSH32(esp, 0); sub_001D191E(); /* call 0x001D191E */

loc_0021C62A:
    MEM32(esi) = eax;

loc_0021C62C:
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    eax++;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021C638:
    PUSH32(esp, 0); sub_001D191E(); /* call 0x001D191E */

loc_0021C63D:
    MEM32(edi) = eax;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
