#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00146360
 * Original: 0x00146360 - 0x0014647E (286 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00146360:
    esp = esp - 0x14;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00146373; /* je: equal / zero */

loc_00146367:
    eax = 0xAF0A9F27u;
    ecx = 0xBEADD71Au;
    goto loc_0014637D;

loc_00146373:
    eax = 0xE82A9F25u;
    ecx = 0xBEC06656u;

loc_0014637D:
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_00146389:
    SET_LO8(eax, MEM8(esp + 0x1B));
    esp = esp + 8;
    /* cmp LO8(eax), 0x20 - flags set for next jcc */
    ecx = esp + 0x13;
    POP32(esp, edi);
    if (CMP_NE(LO8(eax), 0x20)) goto loc_001463B7; /* jne: not equal / not zero */

loc_00146399:
    /* nop */

loc_001463A0:
    edx = esp + 4;
    if (CMP_B(ecx, edx)) goto loc_001463B7; /* jb: below (unsigned <) */

loc_001463A8:
    MEM8(ecx) = 0;
    SET_LO8(eax, MEM8(ecx + -1));
    ecx--;
    /* cmp LO8(eax), 0x20 - flags set for next jcc */
    SET_LO8(eax, MEM8(esp + 0xF));
    if (CMP_EQ(LO8(eax), 0x20)) goto loc_001463A0; /* je: equal / zero */

loc_001463B7:
    if (CMP_L(LO8(eax), 0x41)) goto loc_001463C5; /* jl: less (signed <) */

loc_001463BB:
    if (CMP_G(LO8(eax), 0x5A)) goto loc_001463C5; /* jg: greater (signed >) */

loc_001463BF:
    SET_LO8(eax, LO8(eax) - 0x37);
    SET_LO8(ecx, LO8(eax));
    goto loc_001463E5;

loc_001463C5:
    if (CMP_L(LO8(eax), 0x61)) goto loc_001463D3; /* jl: less (signed <) */

loc_001463C9:
    if (CMP_G(LO8(eax), 0x7A)) goto loc_001463D3; /* jg: greater (signed >) */

loc_001463CD:
    SET_LO8(eax, LO8(eax) - 0x57);
    SET_LO8(ecx, LO8(eax));
    goto loc_001463E5;

loc_001463D3:
    if (CMP_L(LO8(eax), 0x30)) goto loc_001463E1; /* jl: less (signed <) */

loc_001463D7:
    if (CMP_G(LO8(eax), 0x39)) goto loc_001463E1; /* jg: greater (signed >) */

loc_001463DB:
    SET_LO8(eax, LO8(eax) - 0x30);
    SET_LO8(ecx, LO8(eax));
    goto loc_001463E5;

loc_001463E1:
    SET_LO8(ecx, MEM8(esp + 3));

loc_001463E5:
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = ZX8(LO8(ecx));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0014641F; /* je: equal / zero */

loc_001463EC:
    SET_LO8(eax, MEM8(esi + 0xD1));
    SET_LO8(eax, LO8(eax) + 1);
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    MEM8(esi + 0xD1) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_B(LO8(eax), 0xA)) goto loc_00146456; /* jb: below (unsigned <) */

loc_00146408:
    if (CMP_AE(LO8(eax), 0x24)) goto loc_00146452; /* jae: above or equal (unsigned >=) */

loc_0014640C:
    SET_LO8(eax, LO8(eax) + 0x37);
    MEM8(esp + 0xE) = LO8(eax);
    eax = esp + 4;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014641B:
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0014641F:
    SET_LO8(edx, MEM8(esi + 0xD2));
    SET_LO8(edx, LO8(edx) + 1);
    eax = ZX8(LO8(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    MEM8(esi + 0xD2) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_B(LO8(eax), 0xA)) goto loc_00146456; /* jb: below (unsigned <) */

loc_0014643B:
    if (CMP_AE(LO8(eax), 0x24)) goto loc_00146452; /* jae: above or equal (unsigned >=) */

loc_0014643F:
    SET_LO8(eax, LO8(eax) + 0x37);
    MEM8(esp + 0xE) = LO8(eax);
    eax = esp + 4;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014644E:
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00146452:
    if (CMP_A(LO8(eax), 0xA)) goto loc_00146469; /* ja: above (unsigned >) */

loc_00146456:
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(esp + 0xE) = LO8(eax);
    eax = esp + 4;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00146465:
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00146469:
    SET_LO8(eax, MEM8(esp + 3));
    MEM8(esp + 0xE) = LO8(eax);
    eax = esp + 4;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014647A:
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
