#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0E3C
 * Original: 0x001D0E3C - 0x001D0FC7 (395 bytes, 136 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E3C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0E3C:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x18);
    eax--;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    POP32(esp, ebx);
    if ((eax == 0)) goto loc_001D0E91; /* je: equal / zero */

loc_001D0E50:
    eax--;
    if ((eax == 0)) goto loc_001D0E88; /* je: equal / zero */

loc_001D0E53:
    eax--;
    if ((eax == 0)) goto loc_001D0E83; /* je: equal / zero */

loc_001D0E56:
    eax--;
    if ((eax == 0)) goto loc_001D0E7A; /* je: equal / zero */

loc_001D0E59:
    eax--;
    if ((eax != 0)) goto loc_001D0E6B; /* jne: not equal / not zero */

loc_001D0E5C:
    /* test esi, 0x40000000 - flags set for next jcc */
    MEM32(ebp + 0xC) = 4;
    if (TEST_NZ(esi, 0x40000000)) goto loc_001D0E98; /* jne: not equal / not zero */

loc_001D0E6B:
    PUSH32(esp, 0xC000000Du);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D0E75:
    goto loc_001D0F94;

loc_001D0E7A:
    MEM32(ebp + 0xC) = 3;
    goto loc_001D0E98;

loc_001D0E83:
    MEM32(ebp + 0xC) = ebx;
    goto loc_001D0E98;

loc_001D0E88:
    MEM32(ebp + 0xC) = 5;
    goto loc_001D0E98;

loc_001D0E91:
    MEM32(ebp + 0xC) = 2;

loc_001D0E98:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001D0EA7:
    if (CMP_BE(MEM16(ebp + -12), LO16(ebx))) goto loc_001D0EBD; /* jbe: below or equal (unsigned <=) */

loc_001D0EAD:
    eax = ZX16(MEM16(ebp + -12));
    if (CMP_NE(MEM8(eax + edi + -1), 0x5C)) goto loc_001D0EBD; /* jne: not equal / not zero */

loc_001D0EB8:
    MEM32(ebp + 8) = ebx;
    goto loc_001D0EC1;

loc_001D0EBD:
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;

loc_001D0EC1:
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    eax = ecx;
    eax = eax >> 4;
    edx = 0x8000000;
    eax = eax & edx;
    ebx = ecx;
    ebx = ebx & 0x20000000;
    eax = eax | ebx;
    eax = eax >> 1;
    ebx = ecx;
    ebx = ebx & edx;
    eax = eax | ebx;
    eax = eax >> 8;
    edx = ecx;
    edx = edx & 0x10000000;
    eax = eax | edx;
    eax = eax >> 6;
    edi = ecx;
    edx = ecx;
    edx = edx >> 0x19;
    edi = edi & 0x2000000;
    eax = eax | edi;
    edx = ~edx;
    eax = eax >> 0xB;
    edx = edx & 0x20;
    eax = eax | edx;
    /* test ecx, 0x4000000 - flags set for next jcc */
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    if (TEST_Z(ecx, 0x4000000)) goto loc_001D0F32; /* je: equal / zero */

loc_001D0F27:
    eax = eax | 0x1000;
    esi = esi | 0x10000;

loc_001D0F32:
    ebx = 0; /* xor self */
    /* cmp edi, ebx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(edi, ebx)) goto loc_001D0F3C; /* jne: not equal / not zero */

loc_001D0F39:
    eax = eax | 0x40;

loc_001D0F3C:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ecx & 0x7FA7;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    esi = esi | 0x100080;
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B83C), _icall_esp); /* indirect call */
    }

loc_001D0F64:
    esi = eax;
    if (CMP_GE(esi, ebx)) goto loc_001D0F99; /* jge: greater or equal (signed >=) */

loc_001D0F6A:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D0F70:
    if (CMP_NE(esi, 0xC0000035u)) goto loc_001D0F7C; /* jne: not equal / not zero */

loc_001D0F78:
    PUSH32(esp, 0x50);
    goto loc_001D0F8F;

loc_001D0F7C:
    if (CMP_NE(esi, 0xC00000BAu)) goto loc_001D0F94; /* jne: not equal / not zero */

loc_001D0F84:
    if (CMP_EQ(MEM32(ebp + 8), ebx)) goto loc_001D0F8D; /* je: equal / zero */

loc_001D0F89:
    PUSH32(esp, 3);
    goto loc_001D0F8F;

loc_001D0F8D:
    PUSH32(esp, 5);

loc_001D0F8F:
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D0F94:
    eax = eax | 0xFFFFFFFFu;
    goto loc_001D0FC1;

loc_001D0F99:
    if (CMP_NE(MEM32(ebp + 0x18), 2)) goto loc_001D0FA5; /* jne: not equal / not zero */

loc_001D0F9F:
    if (CMP_EQ(MEM32(ebp + -16), 3)) goto loc_001D0FB1; /* je: equal / zero */

loc_001D0FA5:
    if (CMP_NE(MEM32(ebp + 0x18), 4)) goto loc_001D0FB8; /* jne: not equal / not zero */

loc_001D0FAB:
    if (CMP_NE(MEM32(ebp + -16), 1)) goto loc_001D0FB8; /* jne: not equal / not zero */

loc_001D0FB1:
    PUSH32(esp, 0xB7);
    goto loc_001D0FB9;

loc_001D0FB8:
    PUSH32(esp, ebx);

loc_001D0FB9:
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D0FBE:
    eax = MEM32(ebp + -4);

loc_001D0FC1:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}
