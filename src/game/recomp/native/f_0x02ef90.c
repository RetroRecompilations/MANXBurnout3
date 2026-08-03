#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002EF90
 * Original: 0x0002EF90 - 0x0002F254 (708 bytes, 154 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EF90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EF90:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001C7150(); /* call 0x001C7150 */

loc_0002EF9D:
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x460764);
    PUSH32(esp, 0x3EAD60);
    PUSH32(esp, 0x387CD4);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0002EFB4:
    PUSH32(esp, ebp);
    MEM8(0x4A1D28) = 1;
    PUSH32(esp, 0); sub_0002ECC0(); /* call 0x0002ECC0 */

loc_0002EFC1:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x3C) = ebx;
    MEM32(ebp + 0x40) = ebx;
    MEM32(ebp + 0x44) = ebx;
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x20);
    xmm1.f[0] = MEMF(0x3B18D4); /* movss */
    xmm2.f[0] = MEMF(0x3B18D0); /* movss */
    MEM32(ebp + 0x28) = eax;
    MEM32(ebp + 0x2C) = ecx;
    MEM32(ebp + 0x3B0) = ebx;
    MEM32(ebp + 0x3B4) = ebx;
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xF) = LO8(ebx);
    esi = MEM32(0x3E7B9C);
    edx = eax;
    MEM32(ebp + 0x30) = edx;
    edx = MEM32(0x3E7BB0);
    eax = ecx;
    MEM32(ebp + 0x34) = eax;
    MEMF(0x4D6FE0) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B18C8); /* movss */
    ecx = MEM32(0x3E7B98);
    MEMF(0x4D6FF0) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B18CC); /* movss */
    MEMF(0x4D6FE4) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(0x4D6FF4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(0x4D6FF8) = xmm1.f[0]; /* movss */
    MEMF(0x4D6FFC) = xmm1.f[0]; /* movss */
    MEMF(0x4D6FE8) = xmm1.f[0]; /* movss */
    MEMF(0x4D6FEC) = xmm1.f[0]; /* movss */
    MEM8(0x4D7005) = LO8(ebx);
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x4D6C90) = eax;
    MEM32(0x4D6C94) = eax;
    MEM32(0x4D6C98) = eax;
    MEM32(0x4D6C9C) = eax;
    MEM32(0x4D6CA0) = eax;
    MEM32(0x4D6CA4) = eax;
    eax = MEM32(0x3E7BA4);
    MEMF(ebp + 0x68) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3A7964); /* movss */
    MEMF(ebp + 0x6C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B17E8); /* movss */
    MEMF(ebp + 0x70) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3A7950); /* movss */
    MEMF(ebp + 0x74) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B17E4); /* movss */
    MEMF(ebp + 0x78) = xmm2.f[0]; /* movss */
    MEMF(ebp + 0x260) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x264) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x268) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x300) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x304) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x308) = xmm1.f[0]; /* movss */
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(0x3C84C8);
    MEM8(ebp + 0x49) = LO8(ebx);
    MEM32(ebp + 0x14) = edx;
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002F131:
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx + 4) = eax;
    if (CMP_NE(MEM32(ecx + 0x18), ebx)) goto loc_0002F156; /* jne: not equal / not zero */

loc_0002F13C:
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + ecx;
    eax = ecx + 0x20;
    edx = 0x80;

loc_0002F147:
    MEM32(eax) = MEM32(eax) + ecx;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_0002F147; /* jne: not equal / not zero */

loc_0002F14F:
    MEM32(ecx + 0x18) = 1;

loc_0002F156:
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_001C1480(); /* call 0x001C1480 */

loc_0002F15E:
    edx = MEM32(0x3C84CC);
    esi = MEM32(0x3E7BB4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002F170:
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx + 4) = eax;
    if (CMP_NE(MEM32(ecx + 0x18), ebx)) goto loc_0002F195; /* jne: not equal / not zero */

loc_0002F17B:
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + ecx;
    eax = ecx + 0x20;
    edx = 0x80;

loc_0002F186:
    MEM32(eax) = MEM32(eax) + ecx;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_0002F186; /* jne: not equal / not zero */

loc_0002F18E:
    MEM32(ecx + 0x18) = 1;

loc_0002F195:
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, 0); sub_001C1480(); /* call 0x001C1480 */

loc_0002F19D:
    esi = MEM32(0x3E7BA8);
    PUSH32(esp, 0x3AAEB8);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002F1AD:
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx + 4) = eax;
    if (CMP_NE(MEM32(ecx + 0x18), ebx)) goto loc_0002F1D2; /* jne: not equal / not zero */

loc_0002F1B8:
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + ecx;
    eax = ecx + 0x20;
    edx = 0x80;

loc_0002F1C3:
    MEM32(eax) = MEM32(eax) + ecx;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_0002F1C3; /* jne: not equal / not zero */

loc_0002F1CB:
    MEM32(ecx + 0x18) = 1;

loc_0002F1D2:
    edi = MEM32(ebp + 0x18);
    PUSH32(esp, 0); sub_001C1480(); /* call 0x001C1480 */

loc_0002F1DA:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(ebp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7964); /* movss */
    MEMF(ebp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17E8); /* movss */
    MEMF(ebp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    MEMF(ebp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17E4); /* movss */
    PUSH32(esp, ebx);
    edi = ebp;
    MEMF(ebp + 0x78) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0002F380(); /* call 0x0002F380 */

loc_0002F223:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x37C) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x19C) = xmm0.f[0]; /* movss */
    MEM32(ebp + 0x80) = 1;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
