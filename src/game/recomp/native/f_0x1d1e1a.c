#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1E1A
 * Original: 0x001D1E1A - 0x001D1EE2 (200 bytes, 71 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1E1A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1E1A:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    if (CMP_NE(MEM32(ebp + 8), 0xFDE8)) goto loc_001D1E37; /* jne: not equal / not zero */

loc_001D1E29:
    PUSH32(esp, 0x57);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D1E30:
    eax = 0; /* xor self */
    goto loc_001D1EDE;

loc_001D1E37:
    if (CMP_NE(MEM32(ebp + 8), 0xFDE9)) goto loc_001D1E56; /* jne: not equal / not zero */

loc_001D1E40:
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_001D1CA7(); /* call 0x001D1CA7 */

loc_001D1E51:
    goto loc_001D1EDE;

loc_001D1E56:
    if (CMP_NE(MEM32(ebp + 0x20), 0)) goto loc_001D1E29; /* jne: not equal / not zero */

loc_001D1E5C:
    eax = MEM32(ebp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_001D1E66; /* je: equal / zero */

loc_001D1E63:
    MEM32(eax) = MEM32(eax) & 0;

loc_001D1E66:
    eax = MEM32(ebp + 0x14);
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001D1E79; /* jne: not equal / not zero */

loc_001D1E72:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243F9E(); /* call 0x00243F9E */

loc_001D1E78:
    POP32(esp, ecx);

loc_001D1E79:
    ecx = MEM32(ebp + 0x1C);
    eax++;
    if (TEST_NZ(ecx, ecx)) goto loc_001D1E86; /* jne: not equal / not zero */

loc_001D1E81:
    eax = ZX16(LO16(eax));
    goto loc_001D1EDD;

loc_001D1E86:
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    if (CMP_GE(ecx, edi)) goto loc_001D1E92; /* jge: greater or equal (signed >=) */

loc_001D1E8E:
    PUSH32(esp, 0x7A);
    goto loc_001D1ED5;

loc_001D1E92:
    edx = MEM32(ebp + 0x18);
    MEM16(ebp + -16) = MEM16(ebp + -16) & 0;
    MEM16(ebp + -14) = LO16(ecx);
    ecx = eax + eax + 0xFFFE;
    eax = eax + eax;
    MEM16(ebp + -6) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = esi;
    MEM16(ebp + -8) = LO16(ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8B0), _icall_esp); /* indirect call */
    }

loc_001D1EC5:
    if (TEST_S(eax, eax)) goto loc_001D1ECD; /* jl: less (signed <) */

loc_001D1EC9:
    eax = edi;
    goto loc_001D1EDC;

loc_001D1ECD:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B80C), _icall_esp); /* indirect call */
    }

loc_001D1ED4:
    PUSH32(esp, eax);

loc_001D1ED5:
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D1EDA:
    eax = 0; /* xor self */

loc_001D1EDC:
    POP32(esp, edi);

loc_001D1EDD:
    POP32(esp, esi);

loc_001D1EDE:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}
