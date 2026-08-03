#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242060
 * Original: 0x00242060 - 0x00242113 (179 bytes, 67 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242060:
    ecx = MEM32(edi + 0x64);
    esp = esp - 8;
    /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, eax)) goto loc_0024210C; /* je: equal / zero */

loc_00242071:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x64) = eax;
    if (TEST_Z(eax, eax)) goto loc_00242089; /* je: equal / zero */

loc_00242078:
    eax = MEM32(edi + 0x68);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 4;
    goto loc_00242098;

loc_00242089:
    ecx = MEM32(edi + 0x68);
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x10) = ecx;

loc_00242098:
    eax = MEM32(edi + 0x14);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0024210C; /* jle: less or equal (signed <=) */

loc_002420A1:
    ebx = 0; /* xor self */

loc_002420A3:
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + ebx + 0x20);
    eax = eax + ebx;
    if (CMP_NE(ecx, 2)) goto loc_002420FE; /* jne: not equal / not zero */

loc_002420B1:
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax + 0x10;
    PUSH32(esp, edx);
    esp = esp - 0xC;
    eax = esi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024E084(); /* call 0x0024E084 */

loc_002420DA:
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_0024E084(); /* call 0x0024E084 */

loc_002420FE:
    eax = MEM32(edi + 0x14);
    ebp++;
    ebx = ebx + 0x8C;
    if (CMP_L(ebp, eax)) goto loc_002420A3; /* jl: less (signed <) */

loc_0024210C:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
