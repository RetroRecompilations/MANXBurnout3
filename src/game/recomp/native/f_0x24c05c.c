#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024C05C
 * Original: 0x0024C05C - 0x0024C0DD (129 bytes, 51 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C05C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024C05C:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_0024BDDD(); /* call 0x0024BDDD */

loc_0024C078:
    edi = edi | 0xFFFFFFFFu;
    /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(eax, edi)) goto loc_0024C08D; /* jne: not equal / not zero */

loc_0024C080:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024C085:
    MEM32(eax) = 9;
    goto loc_0024C0B4;

loc_0024C08D:
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_0024C09D:
    /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(eax, edi)) goto loc_0024C0BA; /* jne: not equal / not zero */

loc_0024C0A4:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_0024C0A9:
    if (TEST_Z(eax, eax)) goto loc_0024C0BA; /* je: equal / zero */

loc_0024C0AD:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024A0C0(); /* call 0x0024A0C0 */

loc_0024C0B3:
    POP32(esp, ecx);

loc_0024C0B4:
    eax = edi;
    edx = edi;
    goto loc_0024C0D9;

loc_0024C0BA:
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 5);
    eax = MEM32(eax * 4 + 0x76B820);
    esi = esi & 0x1F;
    ecx = esi + esi * 4;
    eax = eax + ecx * 8 + 4;
    MEM8(eax) = MEM8(eax) & 0xFD;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);

loc_0024C0D9:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
