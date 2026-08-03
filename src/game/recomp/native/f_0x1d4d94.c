#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D4D94
 * Original: 0x001D4D94 - 0x001D4EB2 (286 bytes, 107 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D94(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D4D94:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x20);
    eax = eax - MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    ecx = ebx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x57;
    edi = edi & 0xFFFFFFF0u;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(ebp + 0x18))) goto loc_001D4DCA; /* jne: not equal / not zero */

loc_001D4DC1:
    SET_LO16(eax, MEM16(eax));
    MEM16(ebp + -4) = LO16(eax);
    goto loc_001D4DCE;

loc_001D4DCA:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_001D4DCE:
    ecx = MEM32(ebp + 0x1C);
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 4);
    MEM32(ebp + -12) = eax;
    eax = edi + 0x10;
    if (CMP_B(eax, ecx)) goto loc_001D4E18; /* jb: below (unsigned <) */

loc_001D4DE2:
    if (CMP_AE(eax, MEM32(ebp + 0x20))) goto loc_001D4E08; /* jae: above or equal (unsigned >=) */

loc_001D4DE7:
    eax = edi;
    eax = eax - ecx;
    eax = eax + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B908), _icall_esp); /* indirect call */
    }

loc_001D4E04:
    if (CMP_GE(eax & eax, 0)) goto loc_001D4E0F; /* jge: greater or equal (signed >=) */

loc_001D4E08:
    SET_LO8(eax, 0); /* xor self */
    goto loc_001D4EAB;

loc_001D4E0F:
    ecx = MEM32(ebp + 0x1C);
    ecx = ecx + MEM32(ebp + 0xC);
    MEM32(ebp + 0x1C) = ecx;

loc_001D4E18:
    eax = MEM32(ebp + 0x20);
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO16(edx, MEM16(ebp + -4));
    SET_LO8(ebx, MEM8(ebp + 0x10));
    MEM16(esi + 2) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -12));
    MEM16(esi) = LO16(edx);
    edx = MEM32(ebp + 0x14);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(ebp + -8);
    edx = edx << 0xC;
    edx = edx + MEM32(ebp + 0x18);
    MEM8(esi + 5) = 1;
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(ebp + -8);
    MEM8(esi + 4) = LO8(ebx);
    MEM32(esi + 0x10) = 0xFFEEFFEEu;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x24) = edx;
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x30) = eax;
    if (TEST_Z(eax, eax)) goto loc_001D4E81; /* je: equal / zero */

loc_001D4E73:
    eax = eax << 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D42CD(); /* call 0x001D42CD */

loc_001D4E7E:
    ecx = MEM32(ebp + 0x1C);

loc_001D4E81:
    edx = MEM32(ebp + 8);
    eax = ZX8(LO8(ebx));
    ecx = ecx - edi;
    MEM32(edx + eax * 4 + 0x60) = esi;
    SET_LO16(eax, MEM16(esi));
    ecx = (uint32_t)((int32_t)ecx >> 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM8(edi + 5) = 0x10;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, edx);
    MEM16(edi + 2) = LO16(eax);
    MEM8(edi + 4) = LO8(ebx);
    PUSH32(esp, 0); sub_001D47C2(); /* call 0x001D47C2 */

loc_001D4EA9:
    SET_LO8(eax, 1);

loc_001D4EAB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}
