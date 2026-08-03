#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A3EA0
 * Original: 0x001A3EA0 - 0x001A4136 (662 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3EA0:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    PUSH32(esp, esi);
    MEM32(eax + 0x3634C) = 0x2B9D6F8;
    MEM32(eax + 0x36348) = 0xFD462907u;
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(eax + 0x363A0) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x363A4) = LO16(ecx);
    MEM8(eax + 0x363A6) = LO8(ecx);
    edx = eax + 0x363A7;
    esi = 2;
    edi = edi;

loc_001A3EE0:
    MEM8(edx + 2) = LO8(ecx);
    MEM8(edx) = LO8(ecx);
    edx++;
    esi--;
    if ((esi != 0)) goto loc_001A3EE0; /* jne: not equal / not zero */

loc_001A3EE9:
    edx = eax + 0x127D0;
    MEM32(eax + 0x36364) = edx;
    MEM8(eax + 0x363AB) = LO8(ecx);
    MEM8(eax + 0x363AC) = LO8(ecx);
    MEM8(eax + 0x363AD) = LO8(ecx);
    MEM8(eax + 0x363AE) = LO8(ecx);
    MEM8(eax + 0x363AF) = LO8(ecx);
    MEM8(eax + 0x363B0) = LO8(ecx);
    MEM8(eax + 0x363B1) = LO8(ecx);
    MEM8(eax + 0x363BC) = 1;
    esi = 0; /* xor self */
    edx = eax + 0x128D8;
    edi = edi;

loc_001A3F30:
    if (CMP_GE(esi, 0xFD)) goto loc_001A3F3F; /* jge: greater or equal (signed >=) */

loc_001A3F38:
    edi = edx + 0x78;
    MEM32(edx) = edi;
    goto loc_001A3F4D;

loc_001A3F3F:
    edi = edx + -264;
    MEM32(edx) = ecx;
    MEM32(eax + 0x36368) = edi;

loc_001A3F4D:
    esi++;
    edx = edx + 0x180;
    if (CMP_L(esi, 0xFE)) goto loc_001A3F30; /* jl: less (signed <) */

loc_001A3F5C:
    edx = 0; /* xor self */
    MEM32(eax + 0x36370) = ecx;
    MEM32(eax + 0x36374) = ecx;
    MEM32(eax + 0x36378) = edx;
    MEM32(eax + 0x3637C) = edx;
    MEM32(eax + 0x36380) = edx;
    MEM32(eax + 0x36384) = edx;
    MEM32(eax + 0x36388) = edx;
    MEM32(eax + 0x3638C) = edx;
    MEM32(eax + 0x36390) = edx;
    MEM32(eax + 0x36394) = edx;
    edx = eax + 0x2A4D0;
    PUSH32(esp, ebx);
    MEM32(eax + 0x3636C) = edx;
    MEM8(eax + 0x36398) = LO8(ecx);
    MEM8(eax + 0x36399) = LO8(ecx);
    edx = 0; /* xor self */
    esi = eax + 0x2A514;
    PUSH32(esp, ebp);
    /* nop */

loc_001A3FC0:
    if (CMP_GE(edx, 0xFD)) goto loc_001A3FCE; /* jge: greater or equal (signed >=) */

loc_001A3FC8:
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(esi) = LO8(ebx);

loc_001A3FCE:
    edx++;
    esi = esi + 0x50;
    if (CMP_L(edx, 0xFE)) goto loc_001A3FC0; /* jl: less (signed <) */

loc_001A3FDA:
    MEM32(eax + 0x362E0) = ecx;
    MEM32(eax + 0x362E4) = ecx;
    MEM32(eax + 0x362E8) = ecx;
    MEM32(eax + 0x362EC) = ecx;
    MEM32(eax + 0x362F0) = ecx;
    MEM32(eax + 0x362F4) = ecx;
    MEM32(eax + 0x362F8) = ecx;
    MEM32(eax + 0x362FC) = ecx;
    MEM32(eax + 0x36300) = ecx;
    MEM32(eax + 0x36304) = ecx;
    MEM32(eax + 0x36308) = ecx;
    MEM32(eax + 0x3630C) = ecx;
    MEM32(eax + 0x36310) = ecx;
    MEM32(eax + 0x36314) = ecx;
    MEM32(eax + 0x36318) = ecx;
    MEM32(eax + 0x3631C) = ecx;
    edx = eax + 0x362AE;
    MEM32(esp + 0x14) = edx;
    edx = eax + 0x36218;
    MEM32(eax + 0x36320) = ecx;
    MEM32(eax + 0x36324) = ecx;
    MEM32(eax + 0x36328) = ecx;
    MEM32(eax + 0x3632C) = ecx;
    MEM32(eax + 0x36330) = ecx;
    MEM32(eax + 0x36334) = ecx;
    MEM32(eax + 0x36338) = ecx;
    MEM32(eax + 0x3633C) = ecx;
    ebp = eax + 0x36356;
    MEM32(esp + 0x10) = edx;
    edi = eax + 0x35C24;
    esi = eax + 0x34454;
    MEM32(esp + 0x18) = 6;
    goto loc_001A40A0;

    /* nop */

loc_001A40A0:
    MEM8(ebp + -6) = LO8(ecx);
    MEM8(ebp) = LO8(ecx);
    MEM8(ebp + 6) = LO8(ecx);
    edx = 0; /* xor self */
    goto loc_001A40B0;

    /* nop */

loc_001A40B0:
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM8(edi + edx) = LO8(ecx);
    edx++;
    esi = esi + 4;
    if (CMP_L(edx, 0xFE)) goto loc_001A40B0; /* jl: less (signed <) */

loc_001A40C3:
    ebx = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 0xC) = edx;
    MEM32(ebx + 0x10) = edx;
    MEM32(ebx + 0x14) = edx;
    MEM8(ebx + 0x18) = LO8(edx);
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = edx;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x19;
    edx = MEM32(esp + 0x18);
    ebx = ebx + 8;
    ebp++;
    edi = edi + 0xFE;
    edx--;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edx;
    if ((edx != 0)) goto loc_001A40A0; /* jne: not equal / not zero */

loc_001A4104:
    POP32(esp, ebp);
    MEM32(eax + 0x3639C) = 0x494F00;
    MEM32(eax + 0x36340) = ecx;
    edx = 0x3E80;
    POP32(esp, ebx);
    goto loc_001A4120;

    /* nop */

loc_001A4120:
    esi = MEM32(eax + 0x3639C);
    MEM8(ecx + esi) = 0xFF;
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_001A4120; /* jne: not equal / not zero */

loc_001A412E:
    ecx = 0x3E8;
    eax = 0; /* xor self */

}
