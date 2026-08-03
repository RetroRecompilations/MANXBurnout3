#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBE00
 * Original: 0x001CBE00 - 0x001CBEF8 (248 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CBE00:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1A0);
    eax = eax + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001CBE1C:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(ebp + 0x2C) = eax;
    PUSH32(esp, edi);
    eax = 0x10;
    ebx = 0x198;
    esi = ebp;
    PUSH32(esp, 0); sub_001BEF30(); /* call 0x001BEF30 */

loc_001CBE37:
    /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0x14) = ebp;
    MEM32(ebp + 0x18) = 0;
    if (CMP_LE(edi & edi, 0)) goto loc_001CBE93; /* jle: less or equal (signed <=) */

loc_001CBE45:
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x1C));
    MEM32(esp + 0x14) = edi;

loc_001CBE50:
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001CBE7F; /* je: equal / zero */

loc_001CBE5A:
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001CBE6C; /* je: equal / zero */

loc_001CBE65:
    MEM32(ecx + 4) = 0;

loc_001CBE6C:
    ecx = MEM32(ebp + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_001CBE77; /* jne: not equal / not zero */

loc_001CBE73:
    MEM32(eax) = ecx;
    goto loc_001CBE7C;

loc_001CBE77:
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;

loc_001CBE7C:
    MEM32(ebp + 0x18) = eax;

loc_001CBE7F:
    esi = eax + 8;
    eax = MEM32(esp + 0x18);
    ecx = ebx;
    PUSH32(esp, 0); sub_001CB480(); /* call 0x001CB480 */

loc_001CBE8D:
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_001CBE50; /* jne: not equal / not zero */

loc_001CBE93:
    MEM32(ebp + 0x1C) = edi;
    edi = edi << 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001CBEA2:
    ecx = MEM32(ebp + 0x1C);
    ecx = ecx << 3;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    MEM32(ebp + 0x24) = edi;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = MEM32(ebp + 0x18);
    esi = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(ecx, esi)) goto loc_001CBEEE; /* je: equal / zero */

loc_001CBEC9:
    /* cmp MEM32(ecx), esi - flags set for next jcc */
    eax = ecx;
    if (CMP_EQ(MEM32(ecx), esi)) goto loc_001CBED6; /* je: equal / zero */

loc_001CBECF:
    /* nop */

loc_001CBED0:
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), esi)) goto loc_001CBED0; /* jne: not equal / not zero */

loc_001CBED6:
    edx = MEM32(ebp + 0x14);
    edx = MEM32(edx + 0x10);
    /* cmp edx, esi - flags set for next jcc */
    MEM32(eax) = edx;
    if (CMP_EQ(edx, esi)) goto loc_001CBEE5; /* je: equal / zero */

loc_001CBEE2:
    MEM32(edx + 4) = eax;

loc_001CBEE5:
    eax = MEM32(ebp + 0x14);
    MEM32(eax + 0x10) = ecx;
    MEM32(ebp + 0x18) = esi;

loc_001CBEEE:
    POP32(esp, edi);
    MEM32(ebp + 0x30) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
