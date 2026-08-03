#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0A32
 * Original: 0x001D0A32 - 0x001D0C95 (611 bytes, 204 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A32(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0A32:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x258;
    eax = MEM32(ebp + 8);
    edx = ebp + -296;
    edx = edx - eax;

loc_001D0A46:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D0A46; /* jne: not equal / not zero */

loc_001D0A50:
    eax = ebp + -296;
    edx = eax + 1;

loc_001D0A59:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D0A59; /* jne: not equal / not zero */

loc_001D0A60:
    eax = eax - edx;
    ecx = 0xF7;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    eax = ebp + eax + -296;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_001D05F8(); /* call 0x001D05F8 */

loc_001D0A7A:
    eax = ebp + -296;
    ecx = eax + 1;

loc_001D0A83:
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001D0A83; /* jne: not equal / not zero */

loc_001D0A8A:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax - ecx;
    /* cmp MEM32(ebp + 0x10), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(MEM32(ebp + 0x10), 3)) goto loc_001D0ACD; /* jne: not equal / not zero */

loc_001D0A97:
    esi = ebp + edi + -296;
    eax = 0x36BC18;
    edx = esi;
    edx = edx - eax;

loc_001D0AA7:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D0AA7; /* jne: not equal / not zero */

loc_001D0AB1:
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0956(); /* call 0x001D0956 */

loc_001D0AC0:
    /* test eax, eax - flags set for next jcc */
    MEM8(esi) = 0;
    if (TEST_Z(eax, eax)) goto loc_001D0C45; /* je: equal / zero */

loc_001D0ACB:
    goto loc_001D0B42;

loc_001D0ACD:
    PUSH32(esp, 0);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D3CF9(); /* call 0x001D3CF9 */

loc_001D0ADB:
    if (TEST_NZ(eax, eax)) goto loc_001D0B4E; /* jne: not equal / not zero */

loc_001D0ADF:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001D0AE4:
    /* cmp eax, 0xB7 - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    ebx = 0x491;
    if (CMP_NE(eax, 0xB7)) goto loc_001D0B31; /* jne: not equal / not zero */

loc_001D0AF3:
    esi = ebp + edi + -296;
    eax = 0x36BC18;
    edx = esi;
    edx = edx - eax;

loc_001D0B03:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D0B03; /* jne: not equal / not zero */

loc_001D0B0D:
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0956(); /* call 0x001D0956 */

loc_001D0B1C:
    ebx = eax;
    /* test ebx, ebx - flags set for next jcc */
    MEM8(esi) = 0;
    if (TEST_NZ(ebx, ebx)) goto loc_001D0B49; /* jne: not equal / not zero */

loc_001D0B25:
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D09D6(); /* call 0x001D09D6 */

loc_001D0B31:
    if (CMP_EQ(MEM32(ebp + 0x10), 1)) goto loc_001D0B3F; /* je: equal / zero */

loc_001D0B37:
    if (TEST_Z(ebx, ebx)) goto loc_001D0C45; /* je: equal / zero */

loc_001D0B3F:
    eax = MEM32(ebp + 0x14);

loc_001D0B42:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

loc_001D0B49:
    PUSH32(esp, 0x52);
    POP32(esp, eax);
    goto loc_001D0B42;

loc_001D0B4E:
    esi = ebp + edi + -296;
    eax = 0x36BC18;
    edx = esi;
    edx = edx - eax;

loc_001D0B5E:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D0B5E; /* jne: not equal / not zero */

loc_001D0B68:
    eax = ebp + -296;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001D0B79:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -28;
    MEM32(ebp + -16) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0xC0100000u);
    eax = ebp + 8;
    ebx++;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B83C), _icall_esp); /* indirect call */
    }

loc_001D0BBA:
    /* test eax, eax - flags set for next jcc */
    MEM8(esi) = 0;
    if (CMP_GE(eax & eax, 0)) goto loc_001D0BCF; /* jge: greater or equal (signed >=) */

loc_001D0BC1:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B80C), _icall_esp); /* indirect call */
    }

loc_001D0BC8:
    esi = eax;
    goto loc_001D0C82;

loc_001D0BCF:
    /* test MEM8(ebp + 0x14), LO8(ebx) - flags set for next jcc */
    eax = 0x36BD18;
    if (TEST_NZ(MEM8(ebp + 0x14), LO8(ebx))) goto loc_001D0BDE; /* jne: not equal / not zero */

loc_001D0BD9:
    eax = 0x36BCF8;

loc_001D0BDE:
    PUSH32(esp, 0x36BCD8);
    PUSH32(esp, 0x36BCD0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x36BC80);
    PUSH32(esp, 0xFEFF);
    PUSH32(esp, eax);
    eax = ebp + -600;
    PUSH32(esp, 0x98);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244B25(); /* call 0x00244B25 */

loc_001D0C09:
    eax = ebp + -600;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243F9E(); /* call 0x00243F9E */

loc_001D0C15:
    esi = eax;
    esp = esp + 0x28;
    esi = esi << 1;
    if ((esi == 0)) goto loc_001D0C3D; /* je: equal / zero */

loc_001D0C1E:
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -600;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D10B4(); /* call 0x001D10B4 */

loc_001D0C34:
    if (TEST_Z(eax, eax)) goto loc_001D0C73; /* je: equal / zero */

loc_001D0C38:
    esi = esi - MEM32(ebp + 0xC);
    if ((esi != 0)) goto loc_001D0C1E; /* jne: not equal / not zero */

loc_001D0C3D:
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D0C45:
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_001D0C6C; /* je: equal / zero */

loc_001D0C4C:
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D3C56(); /* call 0x001D3C56 */

loc_001D0C5D:
    ebx--;
    if (CMP_AE(edi, ebx)) goto loc_001D0C6C; /* jae: above or equal (unsigned >=) */

loc_001D0C62:
    eax = edi + esi;
    MEM8(eax) = 0x5C;
    MEM8(eax + 1) = 0;

loc_001D0C6C:
    eax = 0; /* xor self */
    goto loc_001D0B42;

loc_001D0C73:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001D0C78:
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D0C82:
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D3D65(); /* call 0x001D3D65 */

loc_001D0C8E:
    eax = esi;
    goto loc_001D0B42;

}
