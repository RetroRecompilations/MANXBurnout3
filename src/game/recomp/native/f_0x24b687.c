#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B687
 * Original: 0x0024B687 - 0x0024B74C (197 bytes, 80 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B687(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024B687:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    /* test MEM8(esi + 0xC), 0x40 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(esi + 0xC), 0x40)) goto loc_0024B727; /* jne: not equal / not zero */

loc_0024B69C:
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024B6BB; /* je: equal / zero */

loc_0024B6A4:
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x76B820);
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_0024B6C0;

loc_0024B6BB:
    eax = 0x3C673C;

loc_0024B6C0:
    if (TEST_Z(MEM8(eax + 4), 0x80)) goto loc_0024B727; /* je: equal / zero */

loc_0024B6C6:
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B1B3(); /* call 0x0024B1B3 */

loc_0024B6D2:
    ebx = eax;
    /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0024B6EC; /* jne: not equal / not zero */

loc_0024B6DB:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024B6E0:
    MEM32(eax) = 0x2A;

loc_0024B6E6:
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    goto loc_0024B747;

loc_0024B6EC:
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0024B721; /* jle: less or equal (signed <=) */

loc_0024B6F2:
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    if (((int32_t)MEM32(esi + 4) < 0)) goto loc_0024B709; /* js: sign (negative) */

loc_0024B6F7:
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(ebp + edi + -8));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esi);
    eax = ZX8(MEM8(ecx));
    ecx++;
    MEM32(esi) = ecx;
    goto loc_0024B717;

loc_0024B709:
    eax = (uint32_t)(int32_t)SMEM8(ebp + edi + -8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_0024B715:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0024B717:
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024B6E6; /* je: equal / zero */

loc_0024B71C:
    edi++;
    if (CMP_L(edi, ebx)) goto loc_0024B6F2; /* jl: less (signed <) */

loc_0024B721:
    SET_LO16(eax, MEM16(ebp + 8));
    goto loc_0024B747;

loc_0024B727:
    MEM32(esi + 4) = MEM32(esi + 4) + 0xFFFFFFFEu;
    if (((int32_t)MEM32(esi + 4) < 0)) goto loc_0024B73A; /* js: sign (negative) */

loc_0024B72D:
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    MEM16(ecx) = LO16(eax);
    MEM32(esi) = MEM32(esi) + 2;
    goto loc_0024B747;

loc_0024B73A:
    eax = ZX16(MEM16(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024C3C8(); /* call 0x0024C3C8 */

loc_0024B745:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0024B747:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
