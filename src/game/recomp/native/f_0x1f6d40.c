#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6D40
 * Original: 0x001F6D40 - 0x001F6E38 (248 bytes, 84 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6D40:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 2;
    if (TEST_NZ(esi, esi)) goto loc_001F6D5F; /* jne: not equal / not zero */

loc_001F6D50:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6C40(); /* call 0x001F6C40 */

loc_001F6D56:
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_001F6D64; /* je: equal / zero */

loc_001F6D5F:
    if (CMP_EQ(MEM32(esi + 0x2C), edi)) goto loc_001F6D7C; /* je: equal / zero */

loc_001F6D64:
    PUSH32(esp, 0); sub_001DEEB0(); /* call 0x001DEEB0 */

loc_001F6D69:
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x36DB98);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001F6D76:
    esp = esp + 8;
    MEM32(esi + 4) = eax;

loc_001F6D7C:
    ebp = MEM32(esi + 4);
    if (TEST_Z(ebp, ebp)) goto loc_001F6E32; /* je: equal / zero */

loc_001F6D87:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41B404), _icall_esp); /* indirect call */
    }

loc_001F6D90:
    esp = esp + 8;
    if (CMP_EQ(eax, 1)) goto loc_001F6DA1; /* je: equal / zero */

loc_001F6D98:
    MEM32(esi + 0x2C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F6DA1:
    edi = MEM32(esp + 0x14);
    /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(edi, edi)) goto loc_001F6DCC; /* jne: not equal / not zero */

loc_001F6DAA:
    PUSH32(esp, 0x30808);
    PUSH32(esp, 0x800);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001F6DB9:
    esp = esp + 8;
    edi = eax;
    ebx = 0x800;
    MEM32(esi + 0x18) = 0x10;
    goto loc_001F6DED;

loc_001F6DCC:
    ebx = MEM32(esp + 0x1C);
    if (CMP_AE(ebx, 0x800)) goto loc_001F6DE6; /* jae: above or equal (unsigned >=) */

loc_001F6DD8:
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 0x2000;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F6DE6:
    MEM32(esi + 0x18) = 0x20;

loc_001F6DED:
    PUSH32(esp, 0); sub_001DEEB0(); /* call 0x001DEEB0 */

loc_001F6DF2:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x800);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001F6DFE:
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x3C);
    esp = esp + 0x10;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x2C) = 0x30;
    MEM32(esi + 0x24) = 0x800;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x44) = 3;
    POP32(esp, ebx);

loc_001F6E32:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
