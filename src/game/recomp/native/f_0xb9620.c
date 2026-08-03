#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000B9620
 * Original: 0x000B9620 - 0x000B9BF7 (1495 bytes, 382 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm4;

loc_000B9620:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    SET_LO8(edx, MEM8(ebp + 0xC));
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 8);
    MEM8(ebx + 0xA) = 1;
    MEM8(ebx + 0xB) = 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x557A34);
    MEM8(ebx + 0x69) = LO8(edx);
    SET_LO8(edx, MEM8(0x55927D));
    ecx = eax + 2;
    MEM8(ebx + 0x64) = LO8(edx);
    MEMF(ebx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x60) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x68) = 0;
    edx = MEM32(0x557A4C);
    MEM32(esp + 0x20) = ecx;
    ecx = ecx << 4;
    MEM32(ecx + edx) = 0x10;
    ecx = MEM32(0x557A4C);
    esi = eax + 1;
    esi = esi << 4;
    MEM32(esi + ecx) = 8;
    ecx = MEM32(ebp + 0xC);
    /* cmp ecx, 0xB - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_A(ecx, 0xB)) goto loc_000B9B66; /* ja: above (unsigned >) */

loc_000B96A0:
    { uint32_t _jt = MEM32(ecx * 4 + 0xB9BF8); /* switch: 12 entries, 11 targets */
    if (_jt == 0x000B96A7u) goto loc_000B96A7;
    if (_jt == 0x000B970Eu) goto loc_000B970E;
    if (_jt == 0x000B982Fu) goto loc_000B982F;
    if (_jt == 0x000B9962u) goto loc_000B9962;
    if (_jt == 0x000B99F4u) goto loc_000B99F4;
    if (_jt == 0x000B9AE5u) goto loc_000B9AE5;
    if (_jt == 0x000B9B5Fu) goto loc_000B9B5F;
    if (_jt == 0x000B9B66u) goto loc_000B9B66;
    if (_jt == 0x000B9B74u) goto loc_000B9B74;
    if (_jt == 0x000B9B7Fu) goto loc_000B9B7F;
    if (_jt == 0x000B9BBEu) goto loc_000B9BBE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B96A7:
    PUSH32(esp, edi);
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B96B2:
    xmm0.f[0] = MEMF(0x56FD58); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x56FDE8); /* movss */
    PUSH32(esp, 0x557980);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    edx = esp + 0x20;
    esi = esp + 0x38;
    MEM32(ebx + 0x20) = eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C18A0(); /* call 0x001C18A0 */

loc_000B9703:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B970E:
    PUSH32(esp, edi);
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B9719:
    MEM32(ebx + 0x20) = eax;
    esi = ebx + 0x10;
    PUSH32(esp, 0x557990);
    eax = esp + 0x44;
    ecx = esi;
    MEM32(0x4D4248) = 0x1A;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000B9739:
    eax = MEM32(0x4D4244);
    xmm0.f[0] = MEMF(0x56FD58); /* movss */
    /* cmp eax, 0x17 - flags set for next jcc */
    eax = MEM32(ebx + 0x20);
    if (CMP_NE(eax, 0x17)) goto loc_000B97B9; /* jne: not equal / not zero */

loc_000B974E:
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x395840); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    edx = esp + 0x34;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    PUSH32(esp, edx);
    esi = 0x4D41D8;
    ecx = esp + 0x28;
    edi = esp + 0x20;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C57C0(); /* call 0x001C57C0 */

loc_000B979D:
    PUSH32(esp, 0xBF800000u);
    esi = ebx;
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B97A9:
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B97AE:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B97B9:
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x395840); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x557980);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    edx = esp + 0x28;
    esi = esp + 0x20;
    MEM8(ebx + 0x67) = 0;
    MEM8(ebx + 0x66) = 0;
    MEM8(ebx + 0x65) = 1;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C18A0(); /* call 0x001C18A0 */

loc_000B9813:
    PUSH32(esp, 0xBF800000u);
    esi = ebx;
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B981F:
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B9824:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B982F:
    PUSH32(esp, edi);
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B983A:
    MEM32(ebx + 0x20) = eax;
    eax = MEM32(0x4D4248);
    esi = 0x1A;
    if (CMP_EQ(eax, esi)) goto loc_000B985B; /* je: equal / zero */

loc_000B984B:
    edi = 0x4D4008;
    PUSH32(esp, 0); sub_000154A0(); /* call 0x000154A0 */

loc_000B9855:
    MEM32(0x4D4248) = esi;

loc_000B985B:
    esi = ebx + 0x10;
    PUSH32(esp, 0x557990);
    eax = esp + 0x44;
    ecx = esi;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000B986E:
    /* cmp MEM32(0x4D4244), 0x17 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x56FD58); /* movss */
    ecx = esp + 0x30;
    if (CMP_NE(MEM32(0x4D4244), 0x17)) goto loc_000B98ED; /* jne: not equal / not zero */

loc_000B9883:
    eax = MEM32(ebx + 0x20);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x395840); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    PUSH32(esp, ecx);
    esi = 0x4D41D8;
    ecx = esp + 0x28;
    edi = esp + 0x20;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C57C0(); /* call 0x001C57C0 */

loc_000B98D1:
    PUSH32(esp, 0x3F4CCCCD);
    esi = ebx;
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B98DD:
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B98E2:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B98ED:
    edx = MEM32(ebx + 0x20);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x395840); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x557980);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    PUSH32(esp, edx);
    edx = esp + 0x28;
    esi = esp + 0x20;
    MEM8(ebx + 0x67) = 0;
    MEM8(ebx + 0x66) = 0;
    MEM8(ebx + 0x65) = 1;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C18A0(); /* call 0x001C18A0 */

loc_000B9946:
    PUSH32(esp, 0x3F4CCCCD);
    esi = ebx;
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B9952:
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B9957:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B9962:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    ecx = 0x557A20;
    MEM8(ebx + 0x67) = 1;
    MEM8(ebx + 0x66) = 1;
    MEMF(ebx + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B997D:
    xmm1.f[0] = MEMF(0x56FD58); /* movss */
    PUSH32(esp, 0x557990);
    ecx = esp + 0x34;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x395840); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    PUSH32(esp, ecx);
    esi = 0x4D41D8;
    ecx = esp + 0x28;
    edi = esp + 0x20;
    MEM32(ebx + 0x20) = eax;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C57C0(); /* call 0x001C57C0 */

loc_000B99D8:
    PUSH32(esp, 0xBF800000u);
    esi = ebx;
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B99E4:
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B99E9:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B99F4:
    PUSH32(esp, edi);
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B99FF:
    xmm0.f[0] = MEMF(0x56FD58); /* movss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x557990);
    edx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1EEC); /* movss */
    PUSH32(esp, edx);
    esi = 0x4D41D8;
    ecx = esp + 0x40;
    edi = esp + 0x48;
    MEM32(ebx + 0x20) = eax;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C57C0(); /* call 0x001C57C0 */

loc_000B9A55:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B9A68:
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x5576B0);
    MEM32(ebx + 0x38) = eax;
    ecx = MEM32(0x464658);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = 0x5576B8;
    ecx = esp + 0x50;
    edi = esp + 0x48;
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000B9ADA:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B9AE5:
    PUSH32(esp, edi);
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B9AF0:
    xmm0.f[0] = MEMF(0x56FD58); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x5576B0);
    MEM32(ebx + 0x20) = eax;
    edx = MEM32(0x464718);
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1FAC); /* movss */
    PUSH32(esp, 0x557990);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    PUSH32(esp, eax);
    edx = 0x5576B8;
    ecx = esp + 0x50;
    edi = esp + 0x48;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000B9B5D:
    goto loc_000B9BD6;

loc_000B9B5F:
    SET_LO8(eax, MEM8(ebx + 0x64));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B9B74; /* je: equal / zero */

loc_000B9B66:
    PUSH32(esp, 0);
    esi = ebx;
    PUSH32(esp, 0); sub_000B9C30(); /* call 0x000B9C30 */

loc_000B9B6F:
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B9B74:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B9B7F:
    SET_LO8(eax, MEM8(ebx + 0x64));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B9BA2; /* je: equal / zero */

loc_000B9B88:
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B9B92:
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B9B97:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B9BA2:
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B9BAC:
    esi = ebx;
    PUSH32(esp, 0); sub_000BA100(); /* call 0x000BA100 */

loc_000B9BB3:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B9BBE:
    PUSH32(esp, 0x557990);
    ecx = ebx + 0x10;
    eax = esp + 0x44;
    MEM32(ebx + 0x20) = 0;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_000B9BD6:
    PUSH32(esp, 0xBF800000u);
    esi = ebx;
    PUSH32(esp, 0); sub_000B9D10(); /* call 0x000B9D10 */

loc_000B9BE2:
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0); sub_000BA1C0(); /* call 0x000BA1C0 */

loc_000B9BEC:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
