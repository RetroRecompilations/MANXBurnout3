#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1F4E
 * Original: 0x001D1F4E - 0x001D205B (269 bytes, 92 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1F4E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1F4E:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x16C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001D1F66:
    edx = MEM32(ebp + -4);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    eax = ZX16(MEM16(ebp + -8));
    edi = 0; /* xor self */
    /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    if (CMP_BE(eax, edi)) goto loc_001D1F91; /* jbe: below or equal (unsigned <=) */

loc_001D1F87:
    if (CMP_EQ(MEM8(edx + eax + -1), 0x5C)) goto loc_001D1F91; /* je: equal / zero */

loc_001D1F8E:
    eax--;
    if ((eax != 0)) goto loc_001D1F87; /* jne: not equal / not zero */

loc_001D1F91:
    ecx = MEM32(ebp + -8);
    ecx = ecx - eax;
    edx = edx + eax;
    /* cmp LO16(eax), LO16(edi) - flags set for next jcc */
    MEM16(ebp + -16) = LO16(ecx);
    MEM16(ebp + -14) = LO16(ecx);
    MEM32(ebp + -12) = edx;
    MEM16(ebp + -8) = LO16(eax);
    MEM16(ebp + -6) = LO16(eax);
    if (CMP_EQ(LO16(eax), LO16(edi))) goto loc_001D204B; /* je: equal / zero */

loc_001D1FB4:
    if (CMP_EQ(LO16(ecx), LO16(edi))) goto loc_001D204B; /* je: equal / zero */

loc_001D1FBD:
    if (CMP_NE(LO16(ecx), 3)) goto loc_001D1FD8; /* jne: not equal / not zero */

loc_001D1FC3:
    if (CMP_NE(MEM8(edx), 0x2A)) goto loc_001D1FD8; /* jne: not equal / not zero */

loc_001D1FC8:
    if (CMP_NE(MEM8(edx + 1), 0x2E)) goto loc_001D1FD8; /* jne: not equal / not zero */

loc_001D1FCE:
    if (CMP_NE(MEM8(edx + 2), 0x2A)) goto loc_001D1FD8; /* jne: not equal / not zero */

loc_001D1FD4:
    MEM16(ebp + -16) = LO16(edi);

loc_001D1FD8:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E8), _icall_esp); /* indirect call */
    }

loc_001D1FF6:
    if (CMP_GE(eax, edi)) goto loc_001D1FFD; /* jge: greater or equal (signed >=) */

loc_001D1FFA:
    PUSH32(esp, eax);
    goto loc_001D2030;

loc_001D1FFD:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x148);
    eax = ebp + -364;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8A8), _icall_esp); /* indirect call */
    }

loc_001D2020:
    esi = eax;
    if (CMP_GE(esi, edi)) goto loc_001D2037; /* jge: greater or equal (signed >=) */

loc_001D2026:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001D202F:
    PUSH32(esp, esi);

loc_001D2030:
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D2035:
    goto loc_001D2052;

loc_001D2037:
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -364;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1EE2(); /* call 0x001D1EE2 */

loc_001D2046:
    eax = MEM32(ebp + 8);
    goto loc_001D2055;

loc_001D204B:
    PUSH32(esp, 0x57);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D2052:
    eax = eax | 0xFFFFFFFFu;

loc_001D2055:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
