#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158120
 * Original: 0x00158120 - 0x001581E6 (198 bytes, 76 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158120(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158120:
    eax = MEM32(ecx * 8 + 0x39DF38);
    ecx = MEM32(ecx * 8 + 0x39DF3C);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(ecx & ecx, 0)) goto loc_0015814C; /* ja: above (unsigned >) */

loc_00158139:
    if (CMP_B(ecx & ecx, 0)) goto loc_00158140; /* jb: below (unsigned <) */

loc_0015813B:
    if (CMP_AE(eax, 7)) goto loc_0015814C; /* jae: above or equal (unsigned >=) */

loc_00158140:
    ecx = MEM32(eax * 4 + 0x3ED0F8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);

loc_0015814C:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001582D0(); /* call 0x001582D0 */

loc_00158153:
    esp = esp + 8;
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x25A00000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244CA0(); /* call 0x00244CA0 */

loc_00158164:
    PUSH32(esp, 0);
    PUSH32(esp, 0x61A8000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244A20(); /* call 0x00244A20 */

loc_00158172:
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x25A00000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_00158180:
    ecx = ebx;
    ecx = ecx - 0;
    edi = eax;
    if ((ecx == 0)) goto loc_0015819D; /* je: equal / zero */

loc_00158189:
    ecx--;
    if ((ecx == 0)) goto loc_00158196; /* je: equal / zero */

loc_0015818C:
    ecx--;
    if ((ecx != 0)) goto loc_0015819D; /* jne: not equal / not zero */

loc_0015818F:
    ecx = 0xE;
    goto loc_0015819F;

loc_00158196:
    ecx = 6;
    goto loc_0015819F;

loc_0015819D:
    ecx = 0; /* xor self */

loc_0015819F:
    eax = 0; /* xor self */
    esi = ecx * 8 + 0x39E798;

loc_001581A8:
    ecx = ebx;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_001581C7; /* je: equal / zero */

loc_001581AF:
    ecx--;
    if ((ecx == 0)) goto loc_001581C0; /* je: equal / zero */

loc_001581B2:
    ecx--;
    if ((ecx == 0)) goto loc_001581B9; /* je: equal / zero */

loc_001581B5:
    ecx = 0; /* xor self */
    goto loc_001581CC;

loc_001581B9:
    ecx = 4;
    goto loc_001581CC;

loc_001581C0:
    ecx = 8;
    goto loc_001581CC;

loc_001581C7:
    ecx = 6;

loc_001581CC:
    if (CMP_GE(eax, ecx)) goto loc_001581DF; /* jge: greater or equal (signed >=) */

loc_001581D0:
    if (CMP_NE(edi, MEM32(esi))) goto loc_001581D9; /* jne: not equal / not zero */

loc_001581D4:
    if (CMP_EQ(edx, MEM32(esi + 4))) goto loc_001581E2; /* je: equal / zero */

loc_001581D9:
    eax++;
    esi = esi + 8;
    goto loc_001581A8;

loc_001581DF:
    eax = eax | 0xFFFFFFFFu;

loc_001581E2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
