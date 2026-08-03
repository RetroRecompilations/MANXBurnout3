#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004DD00
 * Original: 0x0004DD00 - 0x0004E0ED (1005 bytes, 321 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DD00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DD00:
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_0004DD10:
    ebx = edi + 1;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, 0x3AB278);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0004DD23:
    esi = MEM32(0x4D1FE0);
    esp = esp + 0xC;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0004DD36:
    MEM32(edi * 4 + 0x4607C8) = eax;
    edi = ebx;
    if (CMP_L(edi, 0x1E)) goto loc_0004DD10; /* jl: less (signed <) */

loc_0004DD44:
    edi = 0; /* xor self */

loc_0004DD46:
    ebx = edi + 1;
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, 0x3AB264);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0004DD59:
    esi = MEM32(0x4D1FE0);
    esp = esp + 0xC;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0004DD6C:
    MEM32(edi * 4 + 0x460848) = eax;
    edi = ebx;
    if (CMP_L(edi, 0x29)) goto loc_0004DD46; /* jl: less (signed <) */

loc_0004DD7A:
    MEM32(esp + 0x10) = 0;

loc_0004DD82:
    eax = MEM32(esp + 0x10);
    eax++;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x3AB250);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0004DD9B:
    eax = MEM32(0x4D1FE0);
    ecx = MEM32(eax + 8);
    ebx = eax + 8;
    esp = esp + 0xC;
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004DDE9; /* jle: less or equal (signed <=) */

loc_0004DDAF:
    eax = eax + 0xC;
    MEM32(esp + 0x14) = eax;
    edi = 0; /* xor self */
    goto loc_0004DDC0;

    /* nop */

loc_0004DDC0:
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    ebp = MEM32(edi + eax + 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = ebp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004DDD8:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004DDEB; /* je: equal / zero */

loc_0004DDDF:
    eax = MEM32(ebx);
    esi++;
    edi = edi + 0x10;
    if (CMP_L(esi, eax)) goto loc_0004DDC0; /* jl: less (signed <) */

loc_0004DDE9:
    ebp = 0; /* xor self */

loc_0004DDEB:
    eax = MEM32(esp + 0x10);
    MEM32(eax * 4 + 0x460770) = ebp;
    eax = MEM32(esp + 0x18);
    /* cmp eax, 0x14 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 0x14)) goto loc_0004DD82; /* jl: less (signed <) */

loc_0004DE07:
    eax = MEM32(0x4D1FE0);
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004DE4B; /* jle: less or equal (signed <=) */

loc_0004DE18:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */

loc_0004DE21:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    edi = MEM32(edx + esi + 8);
    eax = edi + 0x48;
    PUSH32(esp, 0x3AB244);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004DE39:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004DE4D; /* je: equal / zero */

loc_0004DE40:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004DE21; /* jl: less (signed <) */

loc_0004DE4B:
    edi = 0; /* xor self */

loc_0004DE4D:
    eax = MEM32(0x4D1FE0);
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x460938) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004DE9A; /* jle: less or equal (signed <=) */

loc_0004DE64:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */
    /* nop */

loc_0004DE70:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    edi = MEM32(edx + esi + 8);
    eax = edi + 0x48;
    PUSH32(esp, 0x3AB234);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004DE88:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004DE9C; /* je: equal / zero */

loc_0004DE8F:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004DE70; /* jl: less (signed <) */

loc_0004DE9A:
    edi = 0; /* xor self */

loc_0004DE9C:
    MEM32(0x4607C4) = edi;
    edi = 0; /* xor self */
    goto loc_0004DEB0;

    /* nop */
    /* nop */

loc_0004DEB0:
    ecx = MEM32(edi + 0x388560);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0004DEC2:
    MEM32(edi + 0x4608F0) = eax;
    edi = edi + 4;
    if (CMP_L(edi, 0x44)) goto loc_0004DEB0; /* jl: less (signed <) */

loc_0004DED0:
    eax = MEM32(0x4D1FE0);
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004DF23; /* jle: less or equal (signed <=) */

loc_0004DEE1:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */
    /* nop */

loc_0004DEF0:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edi = MEM32(esi + eax + 8);
    ecx = edi + 0x48;
    PUSH32(esp, 0x3AB2D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004DF08:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004E0BB; /* je: equal / zero */

loc_0004DF13:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004DEF0; /* jl: less (signed <) */

loc_0004DF1E:
    eax = MEM32(0x4D1FE0);

loc_0004DF23:
    edi = 0; /* xor self */

loc_0004DF25:
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x460934) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004DF73; /* jle: less or equal (signed <=) */

loc_0004DF37:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */

loc_0004DF40:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edi = MEM32(esi + eax + 8);
    ecx = edi + 0x48;
    PUSH32(esp, 0x3AB2C4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004DF58:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004E0C5; /* je: equal / zero */

loc_0004DF63:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004DF40; /* jl: less (signed <) */

loc_0004DF6E:
    eax = MEM32(0x4D1FE0);

loc_0004DF73:
    edi = 0; /* xor self */

loc_0004DF75:
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x460844) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004DFC3; /* jle: less or equal (signed <=) */

loc_0004DF87:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */

loc_0004DF90:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edi = MEM32(esi + eax + 8);
    ecx = edi + 0x48;
    PUSH32(esp, 0x3AB2B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004DFA8:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004E0CF; /* je: equal / zero */

loc_0004DFB3:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004DF90; /* jl: less (signed <) */

loc_0004DFBE:
    eax = MEM32(0x4D1FE0);

loc_0004DFC3:
    edi = 0; /* xor self */

loc_0004DFC5:
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x460840) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004E013; /* jle: less or equal (signed <=) */

loc_0004DFD7:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */

loc_0004DFE0:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edi = MEM32(esi + eax + 8);
    ecx = edi + 0x48;
    PUSH32(esp, 0x3AB29C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004DFF8:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004E0D9; /* je: equal / zero */

loc_0004E003:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004DFE0; /* jl: less (signed <) */

loc_0004E00E:
    eax = MEM32(0x4D1FE0);

loc_0004E013:
    edi = 0; /* xor self */

loc_0004E015:
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x4607C0) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004E063; /* jle: less or equal (signed <=) */

loc_0004E027:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */

loc_0004E030:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edi = MEM32(esi + eax + 8);
    ecx = edi + 0x48;
    PUSH32(esp, 0x3AB2A8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004E048:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0004E0E3; /* je: equal / zero */

loc_0004E053:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004E030; /* jl: less (signed <) */

loc_0004E05E:
    eax = MEM32(0x4D1FE0);

loc_0004E063:
    edi = 0; /* xor self */

loc_0004E065:
    ecx = MEM32(eax + 8);
    ebp = eax + 8;
    ebx = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x46093C) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0004E0AA; /* jle: less or equal (signed <=) */

loc_0004E077:
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */

loc_0004E080:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edi = MEM32(esi + eax + 8);
    ecx = edi + 0x48;
    PUSH32(esp, 0x3AB28C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0004E098:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0004E0ED(); return; } /* je: equal / zero */

loc_0004E09F:
    eax = MEM32(ebp);
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, eax)) goto loc_0004E080; /* jl: less (signed <) */

loc_0004E0AA:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    MEM32(0x460940) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0004E0BB:
    eax = MEM32(0x4D1FE0);
    goto loc_0004DF25;

loc_0004E0C5:
    eax = MEM32(0x4D1FE0);
    goto loc_0004DF75;

loc_0004E0CF:
    eax = MEM32(0x4D1FE0);
    goto loc_0004DFC5;

loc_0004E0D9:
    eax = MEM32(0x4D1FE0);
    goto loc_0004E015;

loc_0004E0E3:
    eax = MEM32(0x4D1FE0);
    goto loc_0004E065;

}
