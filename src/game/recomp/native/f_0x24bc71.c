#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024BC71
 * Original: 0x0024BC71 - 0x0024BD4E (221 bytes, 96 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BC71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0024BC71:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    eax = MEM32(ebp + 0x10);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    eax--;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if ((eax == 0)) goto loc_0024BCBA; /* je: equal / zero */

loc_0024BC8F:
    eax--;
    if ((eax == 0)) goto loc_0024BCB6; /* je: equal / zero */

loc_0024BC92:
    eax--;
    if ((eax == 0)) goto loc_0024BCB2; /* je: equal / zero */

loc_0024BC95:
    eax--;
    if ((eax == 0)) goto loc_0024BCAE; /* je: equal / zero */

loc_0024BC98:
    eax--;
    if ((eax == 0)) goto loc_0024BCBA; /* je: equal / zero */

loc_0024BC9B:
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0024BCA6; /* je: equal / zero */

loc_0024BC9F:
    eax--;
    if ((eax != 0)) goto loc_0024BD16; /* jne: not equal / not zero */

loc_0024BCA2:
    PUSH32(esp, 0x10);
    goto loc_0024BCBC;

loc_0024BCA6:
    MEM32(esi) = 1;
    goto loc_0024BD16;

loc_0024BCAE:
    PUSH32(esp, 0x12);
    goto loc_0024BCBC;

loc_0024BCB2:
    PUSH32(esp, 0x11);
    goto loc_0024BCBC;

loc_0024BCB6:
    PUSH32(esp, 4);
    goto loc_0024BCBC;

loc_0024BCBA:
    PUSH32(esp, 8);

loc_0024BCBC:
    POP32(esp, ebx);
    PUSH32(esp, ecx);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002471A4(); /* call 0x002471A4 */

loc_0024BCC8:
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0024BD16; /* jne: not equal / not zero */

loc_0024BCCF:
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, 0x10)) goto loc_0024BCE8; /* je: equal / zero */

loc_0024BCD7:
    if (CMP_EQ(eax, 0x16)) goto loc_0024BCE8; /* je: equal / zero */

loc_0024BCDC:
    if (CMP_EQ(eax, 0x1D)) goto loc_0024BCE8; /* je: equal / zero */

loc_0024BCE1:
    MEM32(esp + 0x50) = MEM32(esp + 0x50) & 0xFFFFFFFEu;
    goto loc_0024BCFD;

loc_0024BCE8:
    ecx = MEM32(esp + 0x50);
    fp_push(MEMD(esi + 0x10)); /* fld double */
    ecx = ecx & 0xFFFFFFE3u;
    MEMD(esp + 0x40) = fp_top(); fp_popp(); /* fstp */
    ecx = ecx | 3;
    MEM32(esp + 0x50) = ecx;

loc_0024BCFD:
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00246F00(); /* call 0x00246F00 */

loc_0024BD13:
    esp = esp + 0x18;

loc_0024BD16:
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_0024BD24:
    /* cmp MEM32(esi), 8 - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(MEM32(esi), 8)) goto loc_0024BD3F; /* je: equal / zero */

loc_0024BD2B:
    if (CMP_NE(MEM32(0x3C6A88), 0)) goto loc_0024BD3F; /* jne: not equal / not zero */

loc_0024BD34:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024B2C3(); /* call 0x0024B2C3 */

loc_0024BD3A:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0024BD47; /* jne: not equal / not zero */

loc_0024BD3F:
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_00247391(); /* call 0x00247391 */

loc_0024BD46:
    POP32(esp, ecx);

loc_0024BD47:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
