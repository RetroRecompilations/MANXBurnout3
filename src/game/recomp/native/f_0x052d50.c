#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00052D50
 * Original: 0x00052D50 - 0x000532BD (1389 bytes, 379 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00052D50:
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x174);
    eax--;
    /* cmp eax, 0xE - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_A(eax, 0xE)) goto loc_000532B9; /* ja: above (unsigned >) */

loc_00052D63:
    { uint32_t _jt = MEM32(eax * 4 + 0x532C0); /* switch: 15 entries, 11 targets */
    if (_jt == 0x00052D6Au) goto loc_00052D6A;
    if (_jt == 0x00052D80u) goto loc_00052D80;
    if (_jt == 0x00052DF8u) goto loc_00052DF8;
    if (_jt == 0x00052E7Au) goto loc_00052E7A;
    if (_jt == 0x00052F07u) goto loc_00052F07;
    if (_jt == 0x00052F86u) goto loc_00052F86;
    if (_jt == 0x00053022u) goto loc_00053022;
    if (_jt == 0x00053038u) goto loc_00053038;
    if (_jt == 0x00053071u) goto loc_00053071;
    if (_jt == 0x000530DFu) goto loc_000530DF;
    if (_jt == 0x000531F5u) goto loc_000531F5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00052D6A:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    esi = 0x3FE460;
    PUSH32(esp, 0); sub_0005A390(); /* call 0x0005A390 */

loc_00052D80:
    PUSH32(esp, 0);
    edx = 0xEF;
    eax = 1;
    ecx = 0; /* xor self */
    esi = 0x3FDC00;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_00052D98:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_00052DAE:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0);
    ecx = eax;
    ebx = 0x3FD4A0;
    PUSH32(esp, 0); sub_00053ED0(); /* call 0x00053ED0 */

loc_00052DC7:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00052DE6:
    SET_LO8(eax, MEM8(0x73A198));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000532B9; /* jne: not equal / not zero */

loc_00052DF3:
    goto loc_00052FFD;

loc_00052DF8:
    PUSH32(esp, 0);
    edx = 0xEF;
    eax = 1;
    ecx = 0; /* xor self */
    esi = 0x3FDC00;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_00052E10:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_00052E26:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = 1;
    PUSH32(esp, 0);
    ecx = eax;
    ebx = 0x3FD4A0;
    PUSH32(esp, 0); sub_00053ED0(); /* call 0x00053ED0 */

loc_00052E3F:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FD4F8);
    eax = 1;
    ecx = 7;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00051650(); /* call 0x00051650 */

loc_00052E57:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00052E76:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00052E7A:
    edx = 1;
    PUSH32(esp, 0);
    eax = edx;
    ecx = 0; /* xor self */
    esi = 0x3FDC00;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_00052E8F:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_00052EA5:
    eax = 1;
    PUSH32(esp, 0);
    ecx = eax;
    edx = 0; /* xor self */
    esi = 0x3FDE70;
    PUSH32(esp, 0); sub_00059D20(); /* call 0x00059D20 */

loc_00052EBA:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00052ED9:
    ecx = 0x4A71A0;
    PUSH32(esp, 0); sub_00017370(); /* call 0x00017370 */

loc_00052EE3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000532B9; /* je: equal / zero */

loc_00052EEB:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 7;
    edx = 0; /* xor self */
    esi = 0x3FDFA8;
    PUSH32(esp, 0); sub_0005A3F0(); /* call 0x0005A3F0 */

loc_00052F03:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00052F07:
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    eax = 1;
    ecx = 0; /* xor self */
    esi = 0x3FDC00;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_00052F1C:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    MEM8(0x3FE250) = 0;
    MEM32(0x3FE254) = 1;
    MEM32(0x3FE258) = 1;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00052F56:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_00052F6C:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    esi = 0x3FE460;
    PUSH32(esp, 0); sub_0005A390(); /* call 0x0005A390 */

loc_00052F82:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00052F86:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00052FA5:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_00052FBB:
    ecx = 0x4A71A0;
    PUSH32(esp, 0); sub_00017370(); /* call 0x00017370 */

loc_00052FC5:
    edx = 0; /* xor self */
    esi = 0x3FDD98;
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0); sub_00051C70(); /* call 0x00051C70 */

loc_00052FDB:
    eax = MEM32(edi + 0x174);
    ecx = 0; /* xor self */
    /* cmp eax, 4 - flags set for next jcc */
    esi = 0x3FDC00;
    edx = 0xEF;
    PUSH32(esp, ecx);
    eax = 1;
    if (CMP_NE(eax, 4)) goto loc_00053019; /* jne: not equal / not zero */

loc_00052FF8:
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_00052FFD:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FD4F8);
    eax = 1;
    ecx = 7;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00051650(); /* call 0x00051650 */

loc_00053015:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00053019:
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_0005301E:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00053022:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    esi = 0x3FE460;
    PUSH32(esp, 0); sub_0005A390(); /* call 0x0005A390 */

loc_00053038:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00053057:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_0005306D:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00053071:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00053090:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_000530A6:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = 1;
    ecx = 3;
    ebx = 0x3FE6A0;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_000530C5:
    PUSH32(esp, 1);
    eax = 1;
    ecx = 5;
    ebx = 0x3FEE98;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_000530DB:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000530DF:
    PUSH32(esp, 0);
    edx = 0x1E;
    eax = 1;
    ecx = 0; /* xor self */
    esi = 0x3FDC00;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_000530F7:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_00053116:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_0005312C:
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0);
    ecx = eax;
    ebx = 0x3FD4A0;
    PUSH32(esp, 0); sub_00053ED0(); /* call 0x00053ED0 */

loc_00053145:
    SET_LO8(eax, MEM8(0x73A198));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00053166; /* jne: not equal / not zero */

loc_0005314E:
    PUSH32(esp, 1);
    PUSH32(esp, 0x3FD4F8);
    eax = 1;
    ecx = 7;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00051650(); /* call 0x00051650 */

loc_00053166:
    PUSH32(esp, 1);
    edx = 0x1E;
    eax = 1;
    ecx = 0; /* xor self */
    esi = 0x3FED50;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_0005317E:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = 1;
    ecx = 3;
    ebx = 0x3FE6A0;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_0005319D:
    PUSH32(esp, 1);
    eax = 1;
    ecx = 5;
    ebx = 0x3FEE98;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_000531B3:
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 1);
    ecx = eax;
    ebx = 0x3FE5F0;
    PUSH32(esp, 0); sub_00053ED0(); /* call 0x00053ED0 */

loc_000531CC:
    SET_LO8(eax, MEM8(0x73A198));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000532B9; /* jne: not equal / not zero */

loc_000531D9:
    PUSH32(esp, 1);
    eax = 1;
    PUSH32(esp, 0x3FE648);
    ecx = 7;
    edx = eax;
    PUSH32(esp, 0); sub_00051650(); /* call 0x00051650 */

loc_000531F1:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000531F5:
    PUSH32(esp, 0);
    edx = 0x10;
    eax = 1;
    ecx = 0; /* xor self */
    esi = 0x3FDC00;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_0005320D:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 1;
    ecx = 3;
    ebx = 0x3FD550;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_0005322C:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 5;
    ebx = 0x3FDD48;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_00053242:
    eax = 1;
    PUSH32(esp, 0);
    ecx = eax;
    edx = 0; /* xor self */
    esi = 0x3FDE70;
    PUSH32(esp, 0); sub_00059D20(); /* call 0x00059D20 */

loc_00053257:
    PUSH32(esp, 1);
    edx = 0x10;
    eax = 1;
    ecx = 0; /* xor self */
    esi = 0x3FED50;
    PUSH32(esp, 0); sub_00056DB0(); /* call 0x00056DB0 */

loc_0005326F:
    PUSH32(esp, 0x3FF2C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = 1;
    ecx = 3;
    ebx = 0x3FE6A0;
    PUSH32(esp, 0); sub_0004BFC0(); /* call 0x0004BFC0 */

loc_0005328E:
    PUSH32(esp, 1);
    eax = 1;
    ecx = 5;
    ebx = 0x3FEE98;
    PUSH32(esp, 0); sub_00059850(); /* call 0x00059850 */

loc_000532A4:
    eax = 1;
    PUSH32(esp, 0);
    ecx = eax;
    edx = eax;
    esi = 0x3FEEE8;
    PUSH32(esp, 0); sub_00059D20(); /* call 0x00059D20 */

loc_000532B9:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
