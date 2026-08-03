#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1D5F
 * Original: 0x001D1D5F - 0x001D1E1A (187 bytes, 70 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D5F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1D5F:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    if (CMP_NE(MEM32(ebp + 8), 0xFDE8)) goto loc_001D1D7C; /* jne: not equal / not zero */

loc_001D1D6E:
    PUSH32(esp, 0x57);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D1D75:
    eax = 0; /* xor self */
    goto loc_001D1E16;

loc_001D1D7C:
    if (CMP_NE(MEM32(ebp + 8), 0xFDE9)) goto loc_001D1D98; /* jne: not equal / not zero */

loc_001D1D85:
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_001D1B51(); /* call 0x001D1B51 */

loc_001D1D96:
    goto loc_001D1E16;

loc_001D1D98:
    eax = MEM32(ebp + 0x14);
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001D1DB2; /* jne: not equal / not zero */

loc_001D1DA4:
    eax = edi;
    edx = eax + 1;

loc_001D1DA9:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D1DA9; /* jne: not equal / not zero */

loc_001D1DB0:
    eax = eax - edx;

loc_001D1DB2:
    edx = MEM32(ebp + 0x1C);
    eax++;
    if (TEST_NZ(edx, edx)) goto loc_001D1DBF; /* jne: not equal / not zero */

loc_001D1DBA:
    eax = ZX16(LO16(eax));
    goto loc_001D1E15;

loc_001D1DBF:
    PUSH32(esp, esi);
    esi = ZX16(LO16(eax));
    if (CMP_GE(edx, esi)) goto loc_001D1DCB; /* jge: greater or equal (signed >=) */

loc_001D1DC7:
    PUSH32(esp, 0x7A);
    goto loc_001D1E0D;

loc_001D1DCB:
    ecx = eax + -1;
    MEM16(ebp + -6) = LO16(eax);
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -12) = eax;
    eax = ecx + ecx;
    MEM16(ebp + -16) = LO16(eax);
    eax = edx + edx;
    MEM16(ebp + -14) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    MEM16(ebp + -8) = LO16(ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8AC), _icall_esp); /* indirect call */
    }

loc_001D1DFD:
    if (TEST_S(eax, eax)) goto loc_001D1E05; /* jl: less (signed <) */

loc_001D1E01:
    eax = esi;
    goto loc_001D1E14;

loc_001D1E05:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B80C), _icall_esp); /* indirect call */
    }

loc_001D1E0C:
    PUSH32(esp, eax);

loc_001D1E0D:
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D1E12:
    eax = 0; /* xor self */

loc_001D1E14:
    POP32(esp, esi);

loc_001D1E15:
    POP32(esp, edi);

loc_001D1E16:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}
