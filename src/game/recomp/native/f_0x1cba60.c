#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBA60
 * Original: 0x001CBA60 - 0x001CBB4D (237 bytes, 60 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBA60(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001CBA60:
    eax = MEM32(esi + 0x16C);
    esp = esp - 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F9400(); /* call 0x001F9400 */

loc_001CBA6F:
    esp = esp + 4;
    if (CMP_EQ(eax, 6)) goto loc_001CBA8F; /* je: equal / zero */

loc_001CBA77:
    ecx = MEM32(esi + 0x16C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F9400(); /* call 0x001F9400 */

loc_001CBA83:
    esp = esp + 4;
    if (CMP_NE(eax, 5)) goto loc_001CBB49; /* jne: not equal / not zero */

loc_001CBA8F:
    /* test MEM8(esi + 0x18D), 0x10 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    if (TEST_NZ(MEM8(esi + 0x18D), 0x10)) goto loc_001CBAA8; /* jne: not equal / not zero */

loc_001CBAA0:
    xmm0.f[0] = MEMF(0x4A1EEC); /* movss */

loc_001CBAA8:
    eax = ZX8(MEM8(esi + 0x18C));
    eax = eax << 3;
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BEC); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BE8); /* movss */
    eax = MEM32(esi + 0x190);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_BE(eax & eax, 0)) goto loc_001CBB2D; /* jbe: below or equal (unsigned <=) */

loc_001CBAE0:
    PUSH32(esp, ebx);
    ebx = esi + 0x15C;
    goto loc_001CBAF0;

    /* nop */

loc_001CBAF0:
    eax = MEM32(esi + 0x16C);
    xmm0.f[0] = MEMF(ebx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001F9410(); /* call 0x001F9410 */

loc_001CBB15:
    eax = MEM32(esi + 0x190);
    esp = esp + 8;
    edi++;
    ebx = ebx + 4;
    if (CMP_B(edi, eax)) goto loc_001CBAF0; /* jb: below (unsigned <) */

loc_001CBB26:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    POP32(esp, ebx);

loc_001CBB2D:
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x16C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F9460(); /* call 0x001F9460 */

loc_001CBB45:
    esp = esp + 8;
    POP32(esp, edi);

loc_001CBB49:
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
