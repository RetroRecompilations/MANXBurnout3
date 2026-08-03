#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AA990
 * Original: 0x001AA990 - 0x001AABC1 (561 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA990:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x28));
    ebx = 0; /* xor self */
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(edi + 0x144384) = 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001AA9B3; /* je: equal / zero */

loc_001AA9A9:
    ecx = edi;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_001AA9B0:
    MEM8(edi + 0x28) = LO8(ebx);

loc_001AA9B3:
    eax = MEM32(edi + 0x12B79C);
    esi = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_001AA9DB; /* jle: less or equal (signed <=) */

loc_001AA9BF:
    ebp = edi + 0x12B7A8;

loc_001AA9C5:
    ecx = MEM32(ebp);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001AA9CD:
    eax = MEM32(edi + 0x12B79C);
    esi++;
    ebp = ebp + 4;
    if (CMP_L(esi, eax)) goto loc_001AA9C5; /* jl: less (signed <) */

loc_001AA9DB:
    MEM32(edi + 0x12B7A8) = ebx;
    MEM32(edi + 0x12B7AC) = ebx;
    MEM32(edi + 0x12B7B0) = ebx;
    MEM32(edi + 0x12B7B4) = ebx;
    MEM32(edi + 0x12B7B8) = ebx;
    MEM32(edi + 0x12B7BC) = ebx;
    eax = edi + 0x1265C0;
    MEM32(edi + 0x12B79C) = ebx;
    MEM32(edi + 0x12B7A4) = ebx;
    PUSH32(esp, 0); sub_0018BD60(); /* call 0x0018BD60 */

loc_001AAA16:
    ecx = MEM32(edi + 0x12B790);
    ecx = ecx | MEM32(edi + 0x12B794);
    if ((ecx == 0)) goto loc_001AABBC; /* je: equal / zero */

loc_001AAA28:
    eax = MEM32(edi + 0x12B7C0);
    ebp = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_001AAA56; /* jle: less or equal (signed <=) */

loc_001AAA34:
    esi = 0x4CFB20;
    /* nop */

loc_001AAA40:
    PUSH32(esp, 0); sub_00167AA0(); /* call 0x00167AA0 */

loc_001AAA45:
    eax = MEM32(edi + 0x12B7C0);
    ebp++;
    esi = esi + 0xC50;
    if (CMP_L(ebp, eax)) goto loc_001AAA40; /* jl: less (signed <) */

loc_001AAA56:
    eax = MEM32(0x47A134);
    /* cmp eax, ebx - flags set for next jcc */
    esi = 2;
    if (CMP_EQ(eax, ebx)) goto loc_001AAA80; /* je: equal / zero */

loc_001AAA64:
    eax = eax + 0x2C30;
    PUSH32(esp, 0); sub_00161990(); /* call 0x00161990 */

loc_001AAA6E:
    MEM32(0x3F9D14) = esi;
    MEM32(0x47A12C) = ebx;
    MEM32(0x47A134) = ebx;

loc_001AAA80:
    if (CMP_NE(MEM32(0x3FA644), esi)) goto loc_001AAA90; /* jne: not equal / not zero */

loc_001AAA88:
    MEM32(0x3FA4D4) = esi;
    goto loc_001AAA96;

loc_001AAA90:
    MEM32(0x3FA014) = esi;

loc_001AAA96:
    edx = edi + 0x12ADB0;
    PUSH32(esp, edx);
    MEM32(edi + 0x128C74) = ebx;
    MEM32(edi + 0x128C78) = ebx;
    MEM32(edi + 0x128C7C) = ebx;
    MEM16(edi + 0x128C84) = LO16(ebx);
    MEM8(edi + 0x128C86) = LO8(ebx);
    MEM32(edi + 0x128C80) = ebx;
    MEM32(edi + 0x128C8C) = ebx;
    MEM32(edi + 0x128C88) = ebx;
    PUSH32(esp, 0); sub_0019B110(); /* call 0x0019B110 */

loc_001AAAD3:
    eax = edi + 0x12ADC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019CA30(); /* call 0x0019CA30 */

loc_001AAADF:
    ecx = edi + 0x12AF94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019CA30(); /* call 0x0019CA30 */

loc_001AAAEB:
    esi = edi + 0x12B160;
    PUSH32(esp, 0); sub_0019D990(); /* call 0x0019D990 */

loc_001AAAF6:
    eax = edi + 0x3C910;
    MEM32(edi + 0x12B258) = ebx;
    MEM32(edi + 0x12B25C) = ebx;
    MEM32(edi + 0x12B790) = ebx;
    MEM32(edi + 0x12B794) = ebx;
    MEM8(edi + 0x12B798) = LO8(ebx);
    MEM8(edi + 0x12B799) = LO8(ebx);
    PUSH32(esp, 0); sub_00111140(); /* call 0x00111140 */

loc_001AAB25:
    edx = edi + 0x4DE0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001A1E10(); /* call 0x001A1E10 */

loc_001AAB31:
    eax = MEM32(edi + 0x12B760);
    ecx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_001AAB62; /* jle: less or equal (signed <=) */

loc_001AAB3D:
    eax = edi + 0x275;
    SET_LO8(edx, 0xFF);

loc_001AAB45:
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + -3) = LO8(edx);
    MEM8(eax + -2) = LO8(edx);
    MEM16(eax + -69) = LO16(ebx);
    esi = MEM32(edi + 0x12B760);
    ecx++;
    eax = eax + 0x4C;
    if (CMP_L(ecx, esi)) goto loc_001AAB45; /* jl: less (signed <) */

loc_001AAB62:
    edi = 0x60E040;
    PUSH32(esp, 0); sub_00188CF0(); /* call 0x00188CF0 */

loc_001AAB6C:
    MEM32(0x5B93A4) = ebx;
    MEM32(0x5C74F4) = ebx;
    MEM32(0x5D5644) = ebx;
    MEM32(0x5E3794) = ebx;
    MEM32(0x5E38BC) = ebx;
    MEM32(0x5E39AC) = ebx;
    MEM32(0x5E3A9C) = ebx;
    MEM32(0x5E3B8C) = ebx;
    MEM32(0x5E3C7C) = ebx;
    MEM32(0x5E3D6C) = ebx;
    ebx = 0x54F900;
    PUSH32(esp, 0); sub_00053660(); /* call 0x00053660 */

loc_001AABB2:
    esi = 0x40E120;
    PUSH32(esp, 0); sub_0013F1D0(); /* call 0x0013F1D0 */

loc_001AABBC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
