#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5F30
 * Original: 0x001F5F30 - 0x001F6009 (217 bytes, 88 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5F30:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    eax = MEM32(eax + 0x34);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001F5F4F; /* je: equal / zero */

loc_001F5F3F:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F5F4C:
    esp = esp + 0xC;

loc_001F5F4F:
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001F5F72; /* je: equal / zero */

loc_001F5F56:
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x18);
    MEM32(edx + 4) = eax;
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x14) = 0;

loc_001F5F72:
    eax = MEM32(esi + 0xC);
    edx = esi + 0xC;
    if (CMP_EQ(eax, edx)) goto loc_001F5F95; /* je: equal / zero */

loc_001F5F7C:
    /* nop */

loc_001F5F80:
    ecx = MEM32(eax);
    /* cmp ecx, edx - flags set for next jcc */
    edi = MEM32(eax + 4);
    MEM32(edi) = ecx;
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    eax = ecx;
    if (CMP_NE(ecx, edx)) goto loc_001F5F80; /* jne: not equal / not zero */

loc_001F5F95:
    if (TEST_Z(MEM8(esi + 0x1C), 1)) goto loc_001F5FE2; /* je: equal / zero */

loc_001F5F9B:
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x4C);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(edx + 0xC));
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_001F5FC1; /* jbe: below or equal (unsigned <=) */

loc_001F5FAB:
    goto loc_001F5FB0;

    /* nop */

loc_001F5FB0:
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5D40(); /* call 0x001F5D40 */

loc_001F5FB9:
    esp = esp + 0xC;
    edi++;
    if (CMP_B(edi, ebx)) goto loc_001F5FB0; /* jb: below (unsigned <) */

loc_001F5FC1:
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x4C);
    ebx = ZX16(MEM16(ecx + 0xE));
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_001F5FE1; /* jbe: below or equal (unsigned <=) */

loc_001F5FD0:
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5D40(); /* call 0x001F5D40 */

loc_001F5FD9:
    esp = esp + 0xC;
    edi++;
    if (CMP_B(edi, ebx)) goto loc_001F5FD0; /* jb: below (unsigned <) */

loc_001F5FE1:
    POP32(esp, ebx);

loc_001F5FE2:
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    MEM32(edx) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F8690(); /* call 0x001F8690 */

loc_001F6003:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
