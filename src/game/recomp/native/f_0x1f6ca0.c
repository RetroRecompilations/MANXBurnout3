#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6CA0
 * Original: 0x001F6CA0 - 0x001F6D3F (159 bytes, 69 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6CA0:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    ebx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41B404), _icall_esp); /* indirect call */
    }

loc_001F6CB7:
    esp = esp + 8;
    if (CMP_NE(eax, 1)) goto loc_001F6D39; /* jne: not equal / not zero */

loc_001F6CBF:
    eax = MEM32(esi + 0x44);
    eax--;
    if ((eax == 0)) goto loc_001F6D02; /* je: equal / zero */

loc_001F6CC5:
    eax = eax - 2;
    if ((eax != 0)) goto loc_001F6D21; /* jne: not equal / not zero */

loc_001F6CCA:
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F6590(); /* call 0x001F6590 */

loc_001F6CD3:
    ecx = MEM32(esi + 0x34);
    edx = MEM32(0x3C114C);
    esp = esp + 8;
    if (CMP_AE(edx, ecx)) goto loc_001F6CE5; /* jae: above or equal (unsigned >=) */

loc_001F6CE3:
    ecx = edx;

loc_001F6CE5:
    if (CMP_B(ebx, ecx)) goto loc_001F6CEB; /* jb: below (unsigned <) */

loc_001F6CE9:
    ebx = ecx;

loc_001F6CEB:
    edx = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x28), _icall_esp); /* indirect call */
    }

loc_001F6CFE:
    edi = eax;
    goto loc_001F6D1E;

loc_001F6D02:
    edi = MEM32(esi + 0x34);
    if (CMP_AE(ebx, edi)) goto loc_001F6D0B; /* jae: above or equal (unsigned >=) */

loc_001F6D09:
    edi = ebx;

loc_001F6D0B:
    PUSH32(esp, 0); sub_001DEEB0(); /* call 0x001DEEB0 */

loc_001F6D10:
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001F6D1E:
    esp = esp + 0x10;

loc_001F6D21:
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x40);
    eax = MEM32(esi + 0x28);
    edx = edx + edi;
    ecx = ecx + edi;
    eax = eax - edi;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x28) = eax;

loc_001F6D39:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
