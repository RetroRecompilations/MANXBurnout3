#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018BC90
 * Original: 0x0018BC90 - 0x0018BD51 (193 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018BC90:
    eax = MEM32(esi + 0x56C);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_0018BD4D; /* je: equal / zero */

loc_0018BCA1:
    eax = MEM32(0x73A19C);
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x58C));
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    edi = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0018BCF8; /* jbe: below or equal (unsigned <=) */

loc_0018BCDA:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = esi;

loc_0018BCE1:
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0017C170(); /* call 0x0017C170 */

loc_0018BCE8:
    ecx = ZX8(MEM8(esi + 0x58C));
    edi++;
    ebx = ebx + 0x10;
    if (CMP_L(edi, ecx)) goto loc_0018BCE1; /* jl: less (signed <) */

loc_0018BCF7:
    POP32(esp, ebp);

loc_0018BCF8:
    eax = 4;
    MEM32(esi + 0x428) = eax;
    MEM32(esi + 0x42C) = eax;
    edx = MEM32(esi + 0x56C);
    eax = MEM32(edx + 0x3FC);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0018BD4B; /* jle: less or equal (signed <=) */

loc_0018BD1B:
    ebx = esi + 0x140;

loc_0018BD21:
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_0017D0F0(); /* call 0x0017D0F0 */

loc_0018BD37:
    eax = MEM32(esi + 0x56C);
    ecx = MEM32(eax + 0x3FC);
    edi++;
    ebx = ebx + 0x70;
    if (CMP_L(edi, ecx)) goto loc_0018BD21; /* jl: less (signed <) */

loc_0018BD4B:
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0018BD4D:
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
