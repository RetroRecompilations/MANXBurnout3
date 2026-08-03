#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FD370
 * Original: 0x001FD370 - 0x001FD476 (262 bytes, 93 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD370:
    esp = esp - 0xC;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(esp + 0x10);
    eax = ZX16(MEM16(edx + 0x14));
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(ecx + 0xC));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = 1;
    if (CMP_BE(eax & eax, 0)) goto loc_001FD3F0; /* jbe: below or equal (unsigned <=) */

loc_001FD39A:
    ebp = 0; /* xor self */
    MEM32(esp + 0x14) = eax;

loc_001FD3A0:
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_001FD3DA; /* jbe: below or equal (unsigned <=) */

loc_001FD3A6:
    esi = 0; /* xor self */
    goto loc_001FD3B0;

    /* nop */

loc_001FD3B0:
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + ebp);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FD3CB:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FD3E2; /* je: equal / zero */

loc_001FD3D2:
    edi++;
    esi = esi + 0x18;
    if (CMP_B(edi, ebx)) goto loc_001FD3B0; /* jb: below (unsigned <) */

loc_001FD3DA:
    MEM32(esp + 0x10) = 0;

loc_001FD3E2:
    eax = MEM32(esp + 0x14);
    ebp = ebp + 0x14;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001FD3A0; /* jne: not equal / not zero */

loc_001FD3F0:
    eax = MEM32(esp + 0x20);
    eax = ZX16(MEM16(eax + 0x16));
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x4C);
    ebp = ZX16(MEM16(edx + 0xE));
    if (CMP_BE(eax & eax, 0)) goto loc_001FD460; /* jbe: below or equal (unsigned <=) */

loc_001FD407:
    ebx = 0; /* xor self */
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_001FD410:
    edi = 0; /* xor self */
    if (CMP_BE(ebp & ebp, 0)) goto loc_001FD44A; /* jbe: below or equal (unsigned <=) */

loc_001FD416:
    esi = 0; /* xor self */
    goto loc_001FD420;

    /* nop */

loc_001FD420:
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + ebx);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esi + ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FD43B:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FD452; /* je: equal / zero */

loc_001FD442:
    edi++;
    esi = esi + 0x18;
    if (CMP_B(edi, ebp)) goto loc_001FD420; /* jb: below (unsigned <) */

loc_001FD44A:
    MEM32(esp + 0x10) = 0;

loc_001FD452:
    eax = MEM32(esp + 0x24);
    ebx = ebx + 0x14;
    eax--;
    MEM32(esp + 0x24) = eax;
    if ((eax != 0)) goto loc_001FD410; /* jne: not equal / not zero */

loc_001FD460:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, ebp);
    eax = eax & ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
