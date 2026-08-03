#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA350
 * Original: 0x001CA350 - 0x001CA49E (334 bytes, 95 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA350:
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2DFC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    edi = esi + 0x520;
    PUSH32(esp, 0); sub_001F7A90(); /* call 0x001F7A90 */

loc_001CA371:
    MEM32(edi + 0x10) = eax;
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0020A1F0(); /* call 0x0020A1F0 */

loc_001CA38B:
    ecx = MEM32(edi + 0x10);
    xmm0.f[0] = MEMF(0x3A7ED8); /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x10);
    edx = MEM32(eax + 0x70);
    edx = edx | 0x10;
    PUSH32(esp, 3);
    MEM32(eax + 0x70) = edx;
    PUSH32(esp, 0); sub_001F7800(); /* call 0x001F7800 */

loc_001CA3AE:
    MEM32(edi + 0xC) = ebx;
    edx = MEM32(esi + 0x2DFC);
    esp = esp + 0x18;
    ecx = esi + 0x534;
    eax = ebp + 0x20;
    PUSH32(esp, ecx);
    MEM32(eax) = edx;
    MEM32(ebp + 0x24) = edi;
    PUSH32(esp, 0); sub_001CD200(); /* call 0x001CD200 */

loc_001CA3CE:
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    ecx = MEM32(esi + 0x2DFC);
    edi = esi + 0x4E4;
    PUSH32(esp, 0); sub_001C9B30(); /* call 0x001C9B30 */

loc_001CA3E5:
    edx = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x2DFC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esi + 0x2DC4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CBE00(); /* call 0x001CBE00 */

loc_001CA3FF:
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_001CE050(); /* call 0x001CE050 */

loc_001CA416:
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D21D4(); /* call 0x001D21D4 */

loc_001CA420:
    eax = ZX16(MEM16(esp + 0x12));
    ecx = ZX16(MEM16(esp + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edx = ZX16(MEM16(esp + 0x16));
    eax = eax + ecx;
    ecx = ZX16(MEM16(esp + 0x18));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + ecx;
    ecx = MEM32(0x3F7B84);
    MEM32(0x4A1BE4) = eax;
    POP32(esp, edi);
    eax = ~eax;
    MEM32(0x4A1BE0) = eax;
    POP32(esp, ebp);
    MEM32(esi + 0x2E00) = 1;
    MEM8(esi + 0x2E05) = 0;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    if (CMP_NE(ecx, eax)) goto loc_001CA47A; /* jne: not equal / not zero */

loc_001CA470:
    ecx = 0; /* xor self */
    MEM32(0x3F7B84) = ecx;
    goto loc_001CA47C;

loc_001CA47A:
    ecx = 0; /* xor self */

loc_001CA47C:
    if (CMP_NE(MEM32(0x3F7B88), eax)) goto loc_001CA48A; /* jne: not equal / not zero */

loc_001CA484:
    MEM32(0x3F7B88) = ecx;

loc_001CA48A:
    if (CMP_NE(MEM32(0x3F7B8C), eax)) goto loc_001CA498; /* jne: not equal / not zero */

loc_001CA492:
    MEM32(0x3F7B8C) = ecx;

loc_001CA498:
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}
