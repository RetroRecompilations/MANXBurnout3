#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00161DE0
 * Original: 0x00161DE0 - 0x0016204F (623 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161DE0:
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* cmp ecx, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, edi)) goto loc_00161E22; /* je: equal / zero */

loc_00161DF5:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_00161DFA:
    eax = eax - edi;
    if ((eax == 0)) goto loc_00161E14; /* je: equal / zero */

loc_00161DFE:
    eax = eax - 2;
    if ((eax == 0)) goto loc_00161E14; /* je: equal / zero */

loc_00161E03:
    eax--;
    if ((eax != 0)) goto loc_00161E22; /* jne: not equal / not zero */

loc_00161E06:
    MEM32(ebx + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_00161E14:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_00161E22:
    eax = MEM32(ebx + 0x40);
    /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_A(eax, 4)) goto loc_00161EEC; /* ja: above (unsigned >) */

loc_00161E2F:
    { uint32_t _jt = MEM32(eax * 4 + 0x162050); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00161E36u) goto loc_00161E36;
    if (_jt == 0x00161EFBu) goto loc_00161EFB;
    if (_jt == 0x00161F36u) goto loc_00161F36;
    if (_jt == 0x0016200Bu) goto loc_0016200B;
    if (_jt == 0x00162032u) goto loc_00162032;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00161E36:
    if (CMP_NE(esi, 1)) goto loc_00161E70; /* jne: not equal / not zero */

loc_00161E3B:
    ecx = MEM32(0x3AF504);
    edx = MEM32(0x3AF508);
    eax = MEM32(0x3AF50C);
    MEM32(esp + 0x20) = ecx;
    SET_LO16(ecx, MEM16(0x3AF510));
    MEM32(esp + 0x24) = edx;
    SET_LO8(edx, MEM8(0x3AF512));
    MEM32(esp + 0x28) = eax;
    MEM16(esp + 0x2C) = LO16(ecx);
    MEM8(esp + 0x2E) = LO8(edx);
    goto loc_00161ED0;

loc_00161E70:
    if (CMP_NE(esi, 3)) goto loc_00161EA9; /* jne: not equal / not zero */

loc_00161E75:
    eax = MEM32(0x3AF4F4);
    ecx = MEM32(0x3AF4F8);
    edx = MEM32(0x3AF4FC);
    MEM32(esp + 0x20) = eax;
    SET_LO16(eax, MEM16(0x3AF500));
    MEM32(esp + 0x24) = ecx;
    SET_LO8(ecx, MEM8(0x3AF502));
    MEM32(esp + 0x28) = edx;
    MEM16(esp + 0x2C) = LO16(eax);
    MEM8(esp + 0x2E) = LO8(ecx);
    goto loc_00161ED0;

loc_00161EA9:
    edx = MEM32(0x3AF4E4);
    eax = MEM32(0x3AF4E8);
    ecx = MEM32(0x3AF4EC);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x3AF4F0);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;

loc_00161ED0:
    esi = MEM32(0x4AED9C);
    PUSH32(esp, 0x11);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_00161EE2:
    MEM32(ebx + 0x3C) = eax;
    MEM32(ebx + 0x40) = 1;

loc_00161EEC:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_00161EFB:
    ecx = MEM32(ebx + 0x3C);
    if (CMP_NE(ecx, edi)) goto loc_00161F11; /* jne: not equal / not zero */

loc_00161F02:
    POP32(esp, ebp);
    MEM32(ebx + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_00161F11:
    eax = MEM32(esp + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00161F20:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x40) = 2;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_00161F36:
    ebp = MEM32(esp + 0x68);
    edi = MEM32(ebp);
    ebp = ebp + 8;
    if (CMP_NE(esi, 3)) goto loc_00161F77; /* jne: not equal / not zero */

loc_00161F45:
    ecx = MEM32(0x463C34);
    edx = MEM32(0x463C30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00157720(); /* call 0x00157720 */

loc_00161F58:
    eax++;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3AF4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00161F69:
    esp = esp + 0x14;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00161F75:
    goto loc_00161F94;

loc_00161F77:
    if (CMP_NE(esi, 1)) goto loc_00161F89; /* jne: not equal / not zero */

loc_00161F7C:
    eax = MEM32(0x463C30);
    edx = MEM32(0x463C34);
    goto loc_00161F94;

loc_00161F89:
    eax = MEM32(0x73A190);
    edx = MEM32(0x73A194);

loc_00161F94:
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00161FB1; /* jle: less or equal (signed <=) */

loc_00161F9A:
    esi = ebp;
    /* nop */

loc_00161FA0:
    if (CMP_NE(eax, MEM32(esi))) goto loc_00161FA9; /* jne: not equal / not zero */

loc_00161FA4:
    if (CMP_EQ(edx, MEM32(esi + 4))) goto loc_00161FD8; /* je: equal / zero */

loc_00161FA9:
    ecx++;
    esi = esi + 0x10;
    if (CMP_L(ecx, edi)) goto loc_00161FA0; /* jl: less (signed <) */

loc_00161FB1:
    edi = MEM32(esp + 0x68);
    eax = 0; /* xor self */
    ecx = 0x200;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161FC6:
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(ebx + 0x3C) = eax;
    MEM32(ebx + 0x40) = eax;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_00161FD8:
    ecx = ecx << 4;
    eax = MEM32(ecx + ebp + 0xC);
    esi = ecx + ebp;
    ecx = MEM32(ebx + 0x3C);
    edi = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0x10), _icall_esp); /* indirect call */
    }

loc_00161FEF:
    eax = MEM32(esi + 8);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(ebx + 0x44) = eax;
    POP32(esp, esi);
    MEM32(ebx + 0x40) = 3;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_0016200B:
    eax = MEM32(ebx + 0x44);
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0016201C:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x40) = 4;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

loc_00162032:
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0016203A:
    POP32(esp, ebp);
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

}
