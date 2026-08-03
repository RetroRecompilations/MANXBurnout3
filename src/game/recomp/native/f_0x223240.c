#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00223240
 * Original: 0x00223240 - 0x0022334C (268 bytes, 83 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223240:
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x120);
    SET_LO8(eax, MEM8(ebx + 0x4018));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ebx + 0x4018;
    SET_LO8(ecx, 0x7F);
    /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebx + 0x4010);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx + 3;
    edi = edi + edx;
    eax = ebx;
    eax = eax - edi;
    ebp = eax + ecx + 0x4018;
    eax = MEM32(ebx + 0x80A8);
    if (CMP_LE(eax & eax, 0)) goto loc_0022333D; /* jle: less or equal (signed <=) */

loc_00223282:
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    edx = ebx + 0x86BC;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226AD0(); /* call 0x00226AD0 */

loc_00223291:
    SET_LO8(eax, MEM8(ebx + 0x801B));
    MEM8(esp + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x801A));
    MEM8(esp + 0x1D) = LO8(ecx);
    edx = MEM32(ebx + 0x8018);
    edx = edx >> 8;
    MEM8(esp + 0x1E) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x8018));
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM8(esp + 0x23) = LO8(eax);
    PUSH32(esp, 0); sub_00225550(); /* call 0x00225550 */

loc_002232C6:
    edx = MEM32(ebx + 0x80A8);
    PUSH32(esp, edx);
    eax = ebx + 0x80AC;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002232DE:
    ebp = ebp + 0xFFFFFFF0u;
    eax = edi + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002232F4:
    PUSH32(esp, 4);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_00223305:
    PUSH32(esp, 0x10);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002255E0(); /* call 0x002255E0 */

loc_00223316:
    esp = esp + 0x40;
    ecx = 4;
    esi = esp + 0x18;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    POP32(esp, esi);
    if (1 /* strings matched (repe cmpsb) */) goto loc_0022332D; /* je: equal / zero */

loc_00223329:
    edi = 0; /* xor self */
    goto loc_0022333D;

loc_0022332D:
    edi = MEM32(esp + 0x10);
    MEM32(ebx + 0x4010) = ebp;
    MEM32(ebx + 0x400C) = ebp;

loc_0022333D:
    MEM32(ebx + 0x8018) = MEM32(ebx + 0x8018) + 1;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}
