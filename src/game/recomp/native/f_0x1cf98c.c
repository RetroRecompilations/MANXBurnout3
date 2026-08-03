#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF98C
 * Original: 0x001CF98C - 0x001CFA80 (244 bytes, 91 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF98C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF98C:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001CF99F:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E8), _icall_esp); /* indirect call */
    }

loc_001CF9D1:
    if (CMP_GE(eax & eax, 0)) goto loc_001CF9F3; /* jge: greater or equal (signed >=) */

loc_001CF9D5:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001CF9DB:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001CF9E0:
    if (CMP_NE(eax, 2)) goto loc_001CF9EC; /* jne: not equal / not zero */

loc_001CF9E5:
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001CF9EC:
    eax = 0; /* xor self */
    goto loc_001CFA7C;

loc_001CF9F3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E4), _icall_esp); /* indirect call */
    }

loc_001CFA09:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7E0), _icall_esp); /* indirect call */
    }

loc_001CFA14:
    if (CMP_GE(esi & esi, 0)) goto loc_001CFA22; /* jge: greater or equal (signed >=) */

loc_001CFA18:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001CFA1E:
    eax = 0; /* xor self */
    goto loc_001CFA7B;

loc_001CFA22:
    esi = MEM32(ebp + -36);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001CFA3A:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -48));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + -52));
    MEM32(ebp + -4) = edx;
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001CFA4C:
    ecx = MEM32(ebp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_001CFA5B; /* je: equal / zero */

loc_001CFA53:
    esi = MEM32(ebp + -4);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = esi;

loc_001CFA5B:
    ecx = MEM32(ebp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_001CFA67; /* je: equal / zero */

loc_001CFA62:
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;

loc_001CFA67:
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001CFA76; /* je: equal / zero */

loc_001CFA6E:
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_001CFA76:
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, ebx);

loc_001CFA7B:
    POP32(esp, esi);

loc_001CFA7C:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}
