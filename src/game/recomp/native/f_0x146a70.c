#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00146A70
 * Original: 0x00146A70 - 0x00146DC8 (856 bytes, 279 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146A70:
    MEM8(eax + 0x124) = 0;
    SET_LO8(eax, MEM8(0x4A1DCC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00146DC7; /* jne: not equal / not zero */

loc_00146A84:
    ecx = MEM32(0x3EC2D0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2CC);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC2B4);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE988;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146AB6:
    eax = MEM32(0x3EC2D0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC2B8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2CC);
    eax = 0; /* xor self */
    edx = 0x3AE978;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146AE3:
    edx = MEM32(0x3EC2D0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC294);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE968;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146B10:
    ecx = MEM32(0x3EC2D0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2CC);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC298);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE958;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146B3E:
    eax = MEM32(0x3EC2D0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC29C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2CC);
    eax = 0; /* xor self */
    edx = 0x3AE948;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146B6B:
    edx = MEM32(0x3EC2D0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC2C4);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE934;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146B98:
    ecx = MEM32(0x3EC2D0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2CC);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC2C8);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE920;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146BC6:
    eax = MEM32(0x3EC2CC);
    edi = MEM32(0x4A1E94);
    ebx = MEM32(0x3EC2D0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AE904);
    ebp = ebx;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00146BE9:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3EC2A0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00146C08:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00146C10:
    if (CMP_NE(LO8(eax), 1)) goto loc_00146C1D; /* jne: not equal / not zero */

loc_00146C14:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00146C1B:
    goto loc_00146C23;

loc_00146C1D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00146C23:
    ecx = MEM32(0x3EC2CC);
    eax = MEM32(0x3EC2D0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AE8EC);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00146C47:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3EC2A4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00146C66:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00146C6E:
    if (CMP_NE(LO8(eax), 1)) goto loc_00146C7B; /* jne: not equal / not zero */

loc_00146C72:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00146C79:
    goto loc_00146C81;

loc_00146C7B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00146C81:
    ecx = MEM32(0x3EC2CC);
    eax = MEM32(0x3EC2D0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AE8C8);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00146CA5:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3EC2BC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00146CC4:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00146CCC:
    if (CMP_NE(LO8(eax), 1)) goto loc_00146CD9; /* jne: not equal / not zero */

loc_00146CD0:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00146CD7:
    goto loc_00146CDF;

loc_00146CD9:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00146CDF:
    ecx = MEM32(0x3EC2CC);
    eax = MEM32(0x3EC2D0);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AE8A0);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00146D03:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3EC2C0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00146D22:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00146D2A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00146D37; /* jne: not equal / not zero */

loc_00146D2E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00146D35:
    goto loc_00146D3D;

loc_00146D37:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00146D3D:
    eax = MEM32(0x3EC2D0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC2B0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2CC);
    eax = 0; /* xor self */
    edx = 0x3AE890;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146D67:
    edx = MEM32(0x3EC2D0);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2CC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC2A8);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE87C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146D91:
    ecx = MEM32(0x3EC2D0);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2CC);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC2AC);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE868;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00146DBC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x4A1DCC) = 1;
    POP32(esp, ebx);

loc_00146DC7:
    esp += 4; return; /* ret */

}
