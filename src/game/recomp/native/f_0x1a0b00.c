#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A0B00
 * Original: 0x001A0B00 - 0x001A0B6C (108 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0B00:
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_NZ(MEM8(esi + 0x4B), 4)) goto loc_001A0B6A; /* jne: not equal / not zero */

loc_001A0B09:
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(edi + 0x49));
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_001A0B69; /* jle: less or equal (signed <=) */

loc_001A0B14:
    ecx = (int32_t)MEMF(esi + 0x30); /* cvttss2si */
    edx = ecx + edx + 4;
    PUSH32(esp, ebp);
    edi = edi;

loc_001A0B20:
    ecx = ZX8(MEM8(edi + eax + 0x36));
    ebp = MEM32(ecx * 8 + 0x625BB0);
    /* cmp MEM32(ebp + 4), edx - flags set for next jcc */
    ecx = ecx * 8 + 0x625BAC;
    if (CMP_EQ(MEM32(ebp + 4), edx)) goto loc_001A0B41; /* je: equal / zero */

loc_001A0B38:
    eax++;
    if (CMP_L(eax, ebx)) goto loc_001A0B20; /* jl: less (signed <) */

loc_001A0B3D:
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001A0B41:
    edx = ZX8(MEM8(esi + 0x4D));
    PUSH32(esp, ecx);
    edi = esi + 0x48;
    ebx = esi + 0x4C;
    ecx = esi;
    PUSH32(esp, 0); sub_001A1000(); /* call 0x001A1000 */

loc_001A0B53:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x4B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A0B63; /* je: equal / zero */

loc_001A0B5A:
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax) | 4);
    POP32(esp, ebx);
    MEM8(esi + 0x4B) = LO8(eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001A0B63:
    SET_LO8(eax, LO8(eax) & 0xFB);
    MEM8(esi + 0x4B) = LO8(eax);
    POP32(esp, ebp);

loc_001A0B69:
    POP32(esp, ebx);

loc_001A0B6A:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
