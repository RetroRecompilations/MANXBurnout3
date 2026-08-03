#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021CB70
 * Original: 0x0021CB70 - 0x0021CCF0 (384 bytes, 114 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CB70:
    eax = MEM32(ebx + 0x14);
    esp = esp - 0xA00;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA08);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x20C;
    PUSH32(esp, 0x800);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002135F0(); /* call 0x002135F0 */

loc_0021CB95:
    esp = esp + 0xC;
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x100);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x214;
    PUSH32(esp, 0x36F814);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CBB9:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CBC2:
    ecx = esp + 0x218;
    PUSH32(esp, 0x36F814);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00213580(); /* call 0x00213580 */

loc_0021CBD4:
    edx = esp + 0x20;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021CBE0:
    esi = eax;
    esp = esp + 0x20;
    if (TEST_Z(esi, esi)) goto loc_0021CCD7; /* je: equal / zero */

loc_0021CBED:
    MEM8(esi) = 0;
    eax = 0; /* xor self */

loc_0021CBF2:
    SET_LO8(ecx, MEM8(esp + eax + 8));
    MEM8(esp + eax + 0x108) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021CBF2; /* jne: not equal / not zero */

loc_0021CC02:
    eax = esp + 0x108;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021CC11:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021CC1B; /* je: equal / zero */

loc_0021CC18:
    MEM8(eax) = 0;

loc_0021CC1B:
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36F814);
    edx = esp + 0x210;
    PUSH32(esp, 0x800);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021CC3A:
    esp = esp + 0x10;
    PUSH32(esp, edi);
    edi = esi + 1;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021CC49:
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_0021CC55; /* je: equal / zero */

loc_0021CC52:
    MEM8(esi) = 0;

loc_0021CC55:
    PUSH32(esp, edi);
    PUSH32(esp, 0x37046C);
    edx = esp + 0x214;
    PUSH32(esp, 0x800);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021CC6D:
    esp = esp + 0x10;
    /* test esi, esi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0021CC91; /* je: equal / zero */

loc_0021CC75:
    esi++;
    PUSH32(esp, esi);
    PUSH32(esp, 0x370464);
    PUSH32(esp, 0x800);
    eax = esp + 0x214;
    PUSH32(esp, eax);

loc_0021CC89:
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021CC8E:
    esp = esp + 0x10;

loc_0021CC91:
    ecx = esp + 0x208;
    PUSH32(esp, 0);
    edx = ecx;
    PUSH32(esp, 0x3B14AC);
    PUSH32(esp, edx);
    MEM32(ebx + 0x14) = ecx;
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CCAA:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021CCB3:
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx) = 0x63686174;
    eax = MEM32(ebp + 0x8CC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x8D0), _icall_esp); /* indirect call */
    }

loc_0021CCCB:
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xA00;
    esp += 4; return; /* ret */

loc_0021CCD7:
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36F814);
    PUSH32(esp, 0x800);
    ecx = esp + 0x214;
    PUSH32(esp, ecx);
    goto loc_0021CC89;

}
