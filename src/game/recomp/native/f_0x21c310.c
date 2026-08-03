#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C310
 * Original: 0x0021C310 - 0x0021C3DF (207 bytes, 90 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C310:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    ecx = ecx + eax;
    if ((ecx != 0)) goto loc_0021C323; /* jne: not equal / not zero */

loc_0021C31F:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021C323:
    if (TEST_NZ(eax, eax)) goto loc_0021C331; /* jne: not equal / not zero */

loc_0021C327:
    MEM32(esi + 0xC) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021C331:
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    ebp = edi + edx * 4;
    ebx = edi;
    if (CMP_EQ(ebx, ebp)) goto loc_0021C381; /* je: equal / zero */

loc_0021C343:
    eax = MEM32(esi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0021C36A; /* je: equal / zero */

loc_0021C34A:
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    ecx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021C359:
    esp = esp + 0xC;
    if (CMP_G(eax & eax, 0)) goto loc_0021C36A; /* jg: greater (signed >) */

loc_0021C360:
    eax = MEM32(ebx);
    MEM32(ebp) = eax;
    ebp = ebp + 4;
    goto loc_0021C371;

loc_0021C36A:
    ecx = MEM32(ebx);
    MEM32(edi) = ecx;
    edi = edi + 4;

loc_0021C371:
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x40);
    ebx = ebx + 4;
    ecx = eax + edx * 4;
    if (CMP_NE(ebx, ecx)) goto loc_0021C343; /* jne: not equal / not zero */

loc_0021C381:
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x18);
    edx = edi;
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = eax + ecx * 4;
    /* cmp eax, ebp - flags set for next jcc */
    MEM32(esi + 0x14) = edx;
    if (CMP_EQ(eax, ebp)) goto loc_0021C3A6; /* je: equal / zero */

loc_0021C398:
    edx = MEM32(eax);
    MEM32(edi) = edx;
    eax = eax + 4;
    edi = edi + 4;
    if (CMP_NE(eax, ebp)) goto loc_0021C398; /* jne: not equal / not zero */

loc_0021C3A6:
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x30);
    edi = edi - eax;
    edi = (uint32_t)((int32_t)edi >> 2);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0021C3D0; /* je: equal / zero */

loc_0021C3BB:
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x21BFC0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00222AE0(); /* call 0x00222AE0 */

loc_0021C3CD:
    esp = esp + 0x14;

loc_0021C3D0:
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
