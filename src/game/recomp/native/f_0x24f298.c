#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024F298
 * Original: 0x0024F298 - 0x0024F2D3 (59 bytes, 25 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F298(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024F298:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x1C), edi)) goto loc_0024F2CE; /* je: equal / zero */

loc_0024F2A5:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8B8), _icall_esp); /* indirect call */
    }

loc_0024F2AC:
    ecx = MEM32(esi + 0x1C);
    SET_LO8(ebx, LO8(eax));
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x30), _icall_esp); /* indirect call */
    }

loc_0024F2BA:
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0024F2C5:
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8B4), _icall_esp); /* indirect call */
    }

loc_0024F2CD:
    POP32(esp, ebx);

loc_0024F2CE:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
