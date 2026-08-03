#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021DBD0
 * Original: 0x0021DBD0 - 0x0021DD08 (312 bytes, 111 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DBD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DBD0:
    esp = esp - 0x64;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3704C4);
    PUSH32(esp, edi);
    esi = esi | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021DBEC:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021DBF5:
    esp = esp + 8;
    if (CMP_NE(eax, 3)) goto loc_0021DD00; /* jne: not equal / not zero */

loc_0021DC01:
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x64);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36F814);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021DC1B:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021DC24:
    ecx = esp + 0x1C;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021DC30:
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0021DC3A; /* je: equal / zero */

loc_0021DC37:
    MEM8(eax) = 0;

loc_0021DC3A:
    edx = esp + 0xC;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021DC46:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021DC50; /* je: equal / zero */

loc_0021DC4D:
    MEM8(eax) = 0;

loc_0021DC50:
    eax = esp + 0xC;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021DC5C:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021DC66; /* je: equal / zero */

loc_0021DC63:
    MEM8(eax) = 0;

loc_0021DC66:
    edx = MEM32(esp + 0x74);
    eax = 0; /* xor self */
    ecx = edx + 0x9EB;
    PUSH32(esp, ebx);

loc_0021DC73:
    SET_LO8(ebx, MEM8(ecx + -39));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0021DC99; /* je: equal / zero */

loc_0021DC7A:
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0021DC93; /* je: equal / zero */

loc_0021DC7F:
    SET_LO8(ebx, MEM8(ecx + 0x27));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0021DC96; /* je: equal / zero */

loc_0021DC86:
    eax = eax + 3;
    ecx = ecx + 0x75;
    if (CMP_LE(eax, 0x14)) goto loc_0021DC73; /* jle: less or equal (signed <=) */

loc_0021DC91:
    goto loc_0021DC99;

loc_0021DC93:
    eax++;
    goto loc_0021DC99;

loc_0021DC96:
    eax = eax + 2;

loc_0021DC99:
    if (CMP_GE(eax, 0x14)) goto loc_0021DCF6; /* jge: greater or equal (signed >=) */

loc_0021DC9E:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27);
    esi = eax + edx;
    PUSH32(esp, 0x11);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x9C4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021DCB7:
    esp = esp + 0xC;
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x64);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x370464);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021DCD1:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021DCDA:
    PUSH32(esp, 0x10);
    edi = esi + 0x9DA;
    ebx = esi + 0x9D5;
    PUSH32(esp, 4);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0021CAF0(); /* call 0x0021CAF0 */

loc_0021DCF3:
    esp = esp + 0x18;

loc_0021DCF6:
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_0021DD00:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}
