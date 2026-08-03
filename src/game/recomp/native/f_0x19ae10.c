#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019AE10
 * Original: 0x0019AE10 - 0x0019B0D5 (709 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019AE10:
    esp = esp - 0x114;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x11C);
    eax = MEM32(ebp + 8);
    eax--;
    /* cmp eax, 0x17 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x17)) goto loc_0019B039; /* ja: above (unsigned >) */

loc_0019AE2C:
    eax = ZX8(MEM8(eax + 0x19B0F0));
    { uint32_t _jt = MEM32(eax * 4 + 0x19B0D8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0019AE3Au) goto loc_0019AE3A;
    if (_jt == 0x0019AF52u) goto loc_0019AF52;
    if (_jt == 0x0019B039u) goto loc_0019B039;
    if (_jt == 0x0019B046u) goto loc_0019B046;
    if (_jt == 0x0019B060u) goto loc_0019B060;
    if (_jt == 0x0019B08Eu) goto loc_0019B08E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019AE3A:
    eax = MEM32(ebp + 0xC);
    if (CMP_A(eax & eax, 0)) goto loc_0019B0C8; /* ja: above (unsigned >) */

loc_0019AE45:
    if (CMP_EQ(MEM8(ebp), 1)) goto loc_0019B0C8; /* je: equal / zero */

loc_0019AE4F:
    ecx = MEM32(0x73A194);
    edx = MEM32(0x73A190);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001AED30(); /* call 0x001AED30 */

loc_0019AE66:
    eax = MEM32(0x3F762C);
    edx = 0x4A1E30;
    esp = esp + 8;
    edx = edx - eax;

loc_0019AE75:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019AE75; /* jne: not equal / not zero */

loc_0019AE7F:
    eax = esp + 8;
    edx = eax;

loc_0019AE85:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019AE85; /* jne: not equal / not zero */

loc_0019AE8C:
    edi = 0x4A1E30;
    eax = eax - edx;
    edi--;

loc_0019AE94:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0019AE94; /* jne: not equal / not zero */

loc_0019AE9C:
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = 0x4A1E30;
    edi--;

loc_0019AEB3:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019AEB3; /* jne: not equal / not zero */

loc_0019AEBB:
    eax = MEM32(0x3AAEDC);
    SET_LO8(ecx, MEM8(0x3AAEE0));
    edx = MEM32(0x4A1E94);
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    MEM32(edi) = eax;
    PUSH32(esp, 0);
    eax = ebp + 0x10;
    PUSH32(esp, 0x4A1E30);
    MEM8(edi + 4) = LO8(ecx);
    PUSH32(esp, eax);
    edx = edx + 0x10;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, edx);
    esi = ebp + 0x14;
    eax = 2;
    ecx = 0x3B10BC;
    edx = 0x3B10B0;
    MEMF(esi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0019AF16:
    eax = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4A1E30);
    eax = eax + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 2;
    ecx = 0x3B10BC;
    edx = 0x3B10A4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0019AF42:
    MEM8(ebp + 1) = 0;
    MEM8(ebp) = 0;
    MEM32(ebp + 8) = 2;
    POP32(esp, esi);

loc_0019AF52:
    edx = MEM32(0x3FA644);
    if (TEST_NZ(edx, edx)) goto loc_0019AF63; /* jne: not equal / not zero */

loc_0019AF5C:
    ecx = 0x3FA5F4;
    goto loc_0019AF74;

loc_0019AF63:
    if (CMP_NE(edx, 2)) goto loc_0019AF6F; /* jne: not equal / not zero */

loc_0019AF68:
    ecx = 0x3FA154;
    goto loc_0019AF74;

loc_0019AF6F:
    ecx = 0x3F9E34;

loc_0019AF74:
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0019AF79:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0019B039; /* je: equal / zero */

loc_0019AF84:
    eax = MEM32(0x73A190);
    ecx = MEM32(0x73A194);
    edx = eax;
    edx = edx | ecx;
    if ((edx != 0)) goto loc_0019AFA1; /* jne: not equal / not zero */

loc_0019AF95:
    PUSH32(esp, 0xC4BD5916u);
    PUSH32(esp, 0x359D4000);
    goto loc_0019AFBD;

loc_0019AFA1:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x4D3000;
    PUSH32(esp, 0); sub_001575F0(); /* call 0x001575F0 */

loc_0019AFAD:
    ecx = MEM32(eax * 8 + 0x4D340C);
    edx = MEM32(eax * 8 + 0x4D3408);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0019AFBD:
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_001574F0(); /* call 0x001574F0 */

loc_0019AFC6:
    edi = esp + 0x1C;
    edi--;
    goto loc_0019AFD0;

    /* nop */

loc_0019AFD0:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019AFD0; /* jne: not equal / not zero */

loc_0019AFD8:
    eax = MEM32(0x3B1098);
    ecx = MEM32(0x3B109C);
    SET_LO16(edx, MEM16(0x3B10A0));
    MEM32(edi) = eax;
    SET_LO8(eax, MEM8(0x3B10A2));
    MEM32(edi + 4) = ecx;
    MEM16(edi + 8) = LO16(edx);
    MEM8(edi + 0xA) = LO8(eax);
    eax = MEM32(0x3FA644);
    if (TEST_NZ(eax, eax)) goto loc_0019B00B; /* jne: not equal / not zero */

loc_0019B004:
    eax = MEM32(0x3FA5FC);
    goto loc_0019B01A;

loc_0019B00B:
    /* cmp eax, 2 - flags set for next jcc */
    eax = MEM32(0x3FA15C);
    if (CMP_EQ(eax, 2)) goto loc_0019B01A; /* je: equal / zero */

loc_0019B015:
    eax = MEM32(0x3F9E3C);

loc_0019B01A:
    ecx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4AEDDC);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_0019B02F:
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = 3;

loc_0019B039:
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

loc_0019B046:
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_0019B039; /* je: equal / zero */

loc_0019B04C:
    POP32(esp, edi);
    MEM32(ebp + 8) = 0x16;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

loc_0019B060:
    SET_LO8(eax, MEM8(ebp + 1));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp + 0xC) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019B07A; /* jne: not equal / not zero */

loc_0019B06E:
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_0019B4E0(); /* call 0x0019B4E0 */

loc_0019B076:
    MEM8(ebp + 1) = 1;

loc_0019B07A:
    POP32(esp, edi);
    MEM32(ebp + 8) = 0x17;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

loc_0019B08E:
    ecx = MEM32(ebp + 4);
    eax = 0; /* xor self */
    if (CMP_LE(MEM16(ecx + 0xE), LO16(eax))) goto loc_0019B0C8; /* jle: less or equal (signed <=) */

loc_0019B099:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* nop */

loc_0019B0A0:
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(edx + eax * 2);
    ecx = MEM32(ecx + 8);
    edx = edx + edx * 4;
    ecx = ecx + edx * 8;
    MEM8(ecx + 0x10) = 0;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0xE);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0019B0A0; /* jl: less (signed <) */

loc_0019B0C8:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

}
