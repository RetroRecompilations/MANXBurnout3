#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021E3A0
 * Original: 0x0021E3A0 - 0x0021E481 (225 bytes, 71 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E3A0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_0021E3B1:
    ebx = MEM32(esp + 0x20);
    esp = esp + 4;
    /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_S(ebx, ebx)) goto loc_0021E3CE; /* jl: less (signed <) */

loc_0021E3C0:
    if (CMP_GE(ebx, 6)) goto loc_0021E3CE; /* jge: greater or equal (signed >=) */

loc_0021E3C5:
    ebp = MEM32(ebx * 4 + 0x3C5E38);
    goto loc_0021E3D4;

loc_0021E3CE:
    ebp = MEM32(0x3C5E38);

loc_0021E3D4:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x370464);
    edi = esi + 0x454;
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    MEM8(edi) = 0;
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021E3F2:
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3704B8);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021E403:
    eax = MEM32(esi + 0x4DC);
    edi = MEM32(esp + 0x34);
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_0021E421; /* jne: not equal / not zero */

loc_0021E414:
    edx = MEM32(esp + 0x20);
    eax = edi + edx;
    MEM32(esi + 0x4DC) = eax;

loc_0021E421:
    eax = MEM32(esi + 0x4E0);
    if (CMP_EQ(eax, ebx)) goto loc_0021E46D; /* je: equal / zero */

loc_0021E42B:
    if (CMP_EQ(eax, 5)) goto loc_0021E435; /* je: equal / zero */

loc_0021E430:
    if (CMP_NE(eax, 6)) goto loc_0021E448; /* jne: not equal / not zero */

loc_0021E435:
    if (CMP_NE(ebx, 1)) goto loc_0021E448; /* jne: not equal / not zero */

loc_0021E43A:
    ecx = MEM32(esi + 0xD64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225AB0(); /* call 0x00225AB0 */

loc_0021E446:
    goto loc_0021E45E;

loc_0021E448:
    if (CMP_EQ(ebx, 5)) goto loc_0021E452; /* je: equal / zero */

loc_0021E44D:
    if (CMP_NE(ebx, 6)) goto loc_0021E461; /* jne: not equal / not zero */

loc_0021E452:
    edx = MEM32(esi + 0xD64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00225AC0(); /* call 0x00225AC0 */

loc_0021E45E:
    esp = esp + 4;

loc_0021E461:
    MEM32(esi + 0x4E0) = ebx;
    MEM32(esi + 0x4DC) = edi;

loc_0021E46D:
    if (CMP_B(edi, MEM32(esi + 0x4DC))) goto loc_0021E47A; /* jb: below (unsigned <) */

loc_0021E475:
    PUSH32(esp, 0); sub_0021D0E0(); /* call 0x0021D0E0 */

loc_0021E47A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
