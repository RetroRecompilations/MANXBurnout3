#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBCA0
 * Original: 0x001CBCA0 - 0x001CBD4E (174 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CBCA0:
    PUSH32(esp, ecx);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_001CBCB0; /* jne: not equal / not zero */

loc_001CBCA6:
    eax = MEM32(edi + 0x140);
    ecx = 0; /* xor self */
    goto loc_001CBCB3;

loc_001CBCB0:
    eax = ecx + 1;

loc_001CBCB3:
    if (CMP_GE(ecx, eax)) goto loc_001CBD4A; /* jge: greater or equal (signed >=) */

loc_001CBCBB:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = eax - ecx;
    PUSH32(esp, esi);
    ebx = edi + ecx * 4 + 0x14C;
    MEM32(esp + 0xC) = eax;
    /* nop */

loc_001CBCD0:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x174);
    esi = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CBCE4:
    edx = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x178);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CBCF6:
    ecx = MEM32(edi + 0x17C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CBD04:
    edx = MEM32(edi + 0x180);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CBD12:
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(edi + 0x184);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CBD24:
    edx = MEM32(esp + 0x5C);
    eax = MEM32(edi + 0x188);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CBD36:
    eax = MEM32(esp + 0x54);
    esp = esp + 0x48;
    ebx = ebx + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_001CBCD0; /* jne: not equal / not zero */

loc_001CBD47:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001CBD4A:
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}
