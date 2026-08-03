#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7040
 * Original: 0x001B7040 - 0x001B7100 (192 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7040:
    ecx = MEM32(ebx + 0x4AC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    esi = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001B70FA; /* jle: less or equal (signed <=) */

loc_001B7059:
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    eax = ebx + 0x26C;

loc_001B7063:
    if (CMP_EQ(edx, MEM32(eax))) goto loc_001B7075; /* je: equal / zero */

loc_001B7067:
    edi++;
    eax = eax + 0x18;
    if (CMP_L(edi, ecx)) goto loc_001B7063; /* jl: less (signed <) */

loc_001B706F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001B7075:
    if (CMP_LE(ebp, 0x10)) goto loc_001B7084; /* jle: less or equal (signed <=) */

loc_001B707A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4A1EC0), _icall_esp); /* indirect call */
    }

loc_001B7081:
    esp = esp + 4;

loc_001B7084:
    /* test MEM8(esi + 2), 1 - flags set for next jcc */
    eax = edi + edi * 2;
    if (TEST_Z(MEM8(esi + 2), 1)) goto loc_001B70A9; /* je: equal / zero */

loc_001B708D:
    ecx = MEM32(ebx + eax * 8 + 0x280);
    eax = ebx + eax * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x278), _icall_esp); /* indirect call */
    }

loc_001B70A0:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001B70A9:
    SET_LO8(edx, MEM8(esi + 3));
    edi = MEM32(ebx + eax * 8 + 0x274);
    SET_LO16(eax, MEM16(edi + 0xC));
    /* cmp LO8(edx), 2 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(LO8(edx), 2)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001B70EA; /* je: equal / zero */

loc_001B70C3:
    SET_LO16(ecx, MEM16(esi + 0xC));
    if (CMP_AE(LO16(ecx), 0x5555)) goto loc_001B70D4; /* jae: above or equal (unsigned >=) */

loc_001B70CE:
    if (CMP_A(LO16(eax), 0xAAAA)) goto loc_001B70EA; /* ja: above (unsigned >) */

loc_001B70D4:
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_001B70E1; /* jae: above or equal (unsigned >=) */

loc_001B70DA:
    if (CMP_A(LO16(ecx), 0xAAAA)) goto loc_001B70E6; /* ja: above (unsigned >) */

loc_001B70E1:
    if (CMP_A(LO16(ecx), LO16(eax))) goto loc_001B70EA; /* ja: above (unsigned >) */

loc_001B70E6:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001B70FA; /* je: equal / zero */

loc_001B70EA:
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_001B70FA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
