#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5C70
 * Original: 0x001A5C70 - 0x001A5D66 (246 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5C70:
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(ebp + ebx * 4 + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_001A5D5F; /* je: equal / zero */

loc_001A5C84:
    SET_LO8(eax, MEM8(ebx + ebp + 0x110));
    if (CMP_AE(LO8(eax), MEM8(ecx + 8))) goto loc_001A5D5F; /* jae: above or equal (unsigned >=) */

loc_001A5C94:
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    eax = MEM32(ecx);
    esi = esi << 5;
    esi = esi + eax;
    /* comiss xmm0.f[0], MEMF(esi + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esi + 0x14))) goto loc_001A5D5E; /* jb: below (unsigned <) */

loc_001A5CA9:
    SET_LO8(edx, MEM8(esi + 0x18));
    eax = 0; /* xor self */
    /* cmp LO8(edx), 4 - flags set for next jcc */
    edx = MEM32(ebp + ebx * 4);
    xmm0.f[0] = MEMF(edx); /* movss */
    SET_LO8(eax, (CMP_NE(LO8(edx), 4)) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax--;
    eax = eax & 0xB;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + 0x40);
    edx = MEM32(eax);
    edi = MEM32(edx + ebx * 4);
    if (CMP_NE(edi, 0xFF)) goto loc_001A5CDF; /* jne: not equal / not zero */

loc_001A5CDB:
    eax = 0; /* xor self */
    goto loc_001A5CE9;

loc_001A5CDF:
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;

loc_001A5CE9:
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    PUSH32(esp, 0); sub_0019E160(); /* call 0x0019E160 */

loc_001A5CF3:
    /* cmp edi, 0xFF - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(edi, 0xFF)) goto loc_001A5D05; /* jne: not equal / not zero */

loc_001A5D01:
    edi = 0; /* xor self */
    goto loc_001A5D0E;

loc_001A5D05:
    edi = (uint32_t)((int32_t)edi * (int32_t)0x4C);
    edi = edi + 0x60EC2C;

loc_001A5D0E:
    eax = ZX8(MEM8(esi + 0x18));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x1B));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x1A));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x19));
    PUSH32(esp, edx);
    edx = MEM32(ebp + ebx * 4 + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6137E0);
    PUSH32(esp, 0); sub_001A2B20(); /* call 0x001A2B20 */

loc_001A5D56:
    MEM8(ebx + ebp + 0x110) = MEM8(ebx + ebp + 0x110) + 1;
    POP32(esp, edi);

loc_001A5D5E:
    POP32(esp, esi);

loc_001A5D5F:
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}
