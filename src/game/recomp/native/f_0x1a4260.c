#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A4260
 * Original: 0x001A4260 - 0x001A43EA (394 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4260:
    eax = MEM32(0x3F7644);
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001A427D; /* jne: not equal / not zero */

loc_001A4277:
    MEM32(0x3F7644) = ebx;

loc_001A427D:
    eax = MEM32(ebp + 0x374FC);
    eax--;
    edi = 0x17;
    if (CMP_A(eax, edi)) goto loc_001A43C8; /* ja: above (unsigned >) */

loc_001A4291:
    eax = ZX8(MEM8(eax + 0x1A43FC));
    esi = 2;
    { uint32_t _jt = MEM32(eax * 4 + 0x1A43EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001A42A4u) goto loc_001A42A4;
    if (_jt == 0x001A42BCu) goto loc_001A42BC;
    if (_jt == 0x001A437Fu) goto loc_001A437F;
    if (_jt == 0x001A43C8u) goto loc_001A43C8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001A42A4:
    MEM8(ebp + 0x374F1) = LO8(ebx);
    MEM8(ebp + 0x374F0) = LO8(ebx);
    MEM32(ebp + 0x374F4) = ebx;
    MEM32(ebp + 0x374FC) = esi;

loc_001A42BC:
    SET_LO8(eax, MEM8(ebp + 0x374F1));
    if (CMP_GE(LO8(eax), MEM8(ebp + 0x34450))) goto loc_001A43C2; /* jge: greater or equal (signed >=) */

loc_001A42CE:
    ecx = SX8(LO8(eax));
    edx = MEM32(ebp + ecx * 8 + 0x34394);
    eax = MEM32(ebp + ecx * 8 + 0x34390);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x4D2000;
    PUSH32(esp, 0); sub_001572C0(); /* call 0x001572C0 */

loc_001A42EB:
    ecx = MEM32(eax * 8 + 0x4D240C);
    edx = MEM32(eax * 8 + 0x4D2408);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_00157210(); /* call 0x00157210 */

loc_001A4304:
    edi = esp + 0x10;
    edi--;
    /* nop */

loc_001A4310:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001A4310; /* jne: not equal / not zero */

loc_001A4318:
    eax = MEM32(0x3B1100);
    SET_LO8(ecx, MEM8(0x3B1104));
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x374F1);
    MEM32(edi) = eax;
    MEM8(edi + 4) = LO8(ecx);
    eax = ebp + 0x374F0;
    MEM8(eax) = LO8(ebx);
    /* cmp MEM32(0x3FA644), esi - flags set for next jcc */
    ecx = MEM32(0x3FA4EC);
    if (CMP_NE(MEM32(0x3FA644), esi)) ecx = MEM32(0x3FA02C); /* cmovne */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + edx * 4 + 0x343F0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4AEDDC);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_001A4363:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x374F4) = eax;
    MEM32(ebp + 0x374FC) = 3;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_001A437F:
    if (CMP_EQ(MEM8(ebp + 0x374F0), LO8(ebx))) goto loc_001A43DE; /* je: equal / zero */

loc_001A4387:
    if (CMP_EQ(MEM32(ebp + 0x374F4), ebx)) goto loc_001A43A2; /* je: equal / zero */

loc_001A438F:
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x374F1);
    esi = MEM32(ebp + eax * 4 + 0x343F0);
    PUSH32(esp, 0); sub_000310F0(); /* call 0x000310F0 */

loc_001A43A2:
    SET_LO8(edx, MEM8(ebp + 0x374F1));
    SET_LO8(ecx, MEM8(ebp + 0x34450));
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(eax, LO8(edx));
    /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM32(ebp + 0x374F4) = ebx;
    MEM8(ebp + 0x374F1) = LO8(edx);
    if (CMP_NE(LO8(eax), LO8(ecx))) goto loc_001A43D4; /* jne: not equal / not zero */

loc_001A43C2:
    MEM32(ebp + 0x374FC) = edi;

loc_001A43C8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_001A43D4:
    MEM32(ebp + 0x374FC) = 2;

loc_001A43DE:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}
