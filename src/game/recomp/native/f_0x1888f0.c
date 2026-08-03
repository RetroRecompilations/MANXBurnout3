#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001888F0
 * Original: 0x001888F0 - 0x00188BCF (735 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001888F0(void)
{
    const uint32_t entry_esp = esp;
    const uint32_t caller_ebx = ebx;
    const uint32_t caller_esi = esi;
    const uint32_t caller_edi = edi;
    const uint32_t caller_seh_ebp = g_seh_ebp;
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001888F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x118;
    eax = MEM32(ebx + 0x140);
    eax--;
    /* cmp eax, 0x17 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x17)) goto loc_00188BA1; /* ja: above (unsigned >) */

loc_0018890E:
    eax = ZX8(MEM8(eax + 0x188BE8));
    { uint32_t _jt = MEM32(eax * 4 + 0x188BD4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0018891Cu) goto loc_0018891C;
    if (_jt == 0x00188950u) goto loc_00188950;
    if (_jt == 0x00188A15u) goto loc_00188A15;
    if (_jt == 0x00188A87u) goto loc_00188A87;
    if (_jt == 0x00188BA1u) goto loc_00188BA1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018891C:
    eax = MEM32(ebx + 0x144);
    if (CMP_A(eax & eax, 0)) goto loc_00188BA1; /* ja: above (unsigned >) */

loc_0018892A:
    if (CMP_EQ(MEM8(ebx + 0x14C), 1)) goto loc_00188BA1; /* je: equal / zero */

loc_00188937:
    MEM8(ebx + 0x14C) = 0;
    MEM32(ebx + 0x140) = 2;

loc_00188948:
    SET_LO8(eax, 0); /* xor self */
    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    esp = entry_esp + 4;
    return;

loc_00188950:
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = 0x3F9CC0;
    PUSH32(esp, 0); sub_00023870(); /* call 0x00023870 */

loc_0018895E:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x148) = eax;
    if (TEST_Z(eax, eax)) goto loc_00188948; /* je: equal / zero */

loc_00188968:
    eax = MEM32(0x73A190);
    ecx = MEM32(0x73A194);
    edx = eax;
    edx = edx | ecx;
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_track_key;
        if (traced_track_key++ < 4)
            fprintf(stderr, "[B3-FE] 1888F0 key=%08X:%08X tlist_count=%u\n",
                    ecx, eax, MEM32(0x4D3004));
    }
    if ((edx != 0)) goto loc_00188985; /* jne: not equal / not zero */

loc_00188979:
    PUSH32(esp, 0xC4BD5916u);
    PUSH32(esp, 0x359D4000);
    goto loc_001889A1;

loc_00188985:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x4D3000;
    PUSH32(esp, 0); sub_001575F0(); /* call 0x001575F0 */

loc_00188991:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_track_index;
        if (traced_track_index++ < 4)
            fprintf(stderr, "[B3-FE] 1888F0 tlist index=%d id=%08X:%08X\n",
                    (int32_t)eax, MEM32(eax * 8 + 0x4D340C),
                    MEM32(eax * 8 + 0x4D3408));
    }
    ecx = MEM32(eax * 8 + 0x4D340C);
    edx = MEM32(eax * 8 + 0x4D3408);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_001889A1:
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001574F0(); /* call 0x001574F0 */

loc_001889AA:
    edi = esp + 0x20;
    edi--;
    /* nop */

loc_001889B0:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001889B0; /* jne: not equal / not zero */

loc_001889B8:
    eax = MEM32(0x3B0444);
    ecx = MEM32(0x3B0448);
    SET_LO16(edx, MEM16(0x3B044C));
    MEM32(edi) = eax;
    SET_LO8(eax, MEM8(0x3B044E));
    MEM32(edi + 4) = ecx;
    MEM16(edi + 8) = LO16(edx);
    PUSH32(esp, 4);
    ecx = 0x3F9CC0;
    MEM8(edi + 0xA) = LO8(eax);
    PUSH32(esp, 0); sub_00023B00(); /* call 0x00023B00 */

loc_001889E7:
    ecx = MEM32(ebx + 0x148);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ebx + 0x14C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4AEDDC);
    PUSH32(esp, 0); sub_00011240(); /* call 0x00011240 */

loc_00188A05:
    MEM32(ebx + 0x144) = eax;
    MEM32(ebx + 0x140) = 3;

loc_00188A15:
    SET_LO8(eax, MEM8(ebx + 0x14C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00188948; /* je: equal / zero */

loc_00188A23:
    esi = MEM32(ebx + 0x148);
    MEM32(ebx + 0x144) = 0;
    PUSH32(esp, 0); sub_00188880(); /* call 0x00188880 */

loc_00188A38:
    ecx = MEM32(ebx + 0x148);
    eax = ebx;
    PUSH32(esp, 0); sub_00188C00(); /* call 0x00188C00 */

loc_00188A45:
    edi = 0; /* xor self */
    esi = ebx + 0x80;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    MEM32(ebx + 0x148) = edi;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00188A5D:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D6170); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x90); /* mulss */
    MEMF(ebx + 0x90) = xmm0.f[0]; /* movss */
    MEM32(ebx + 0x140) = 0x16;
    goto loc_00188A89;

loc_00188A87:
    edi = 0; /* xor self */

loc_00188A89:
    ecx = MEM32(ebx + 0x98);
    edx = MEM32(ebx + 0xA0);
    eax = MEM32(ebx + 0x9C);
    MEM32(0x45BC10) = ecx;
    ecx = MEM32(0x73A190);
    /* cmp ecx, 0x31BD4000 - flags set for next jcc */
    MEM32(0x45D118) = edx;
    edx = MEM32(0x73A194);
    MEM32(0x45D11C) = eax;
    if (CMP_NE(ecx, 0x31BD4000)) goto loc_00188AC8; /* jne: not equal / not zero */

loc_00188AC0:
    if (CMP_EQ(edx, 0xC4BDA620u)) goto loc_00188B06; /* je: equal / zero */

loc_00188AC8:
    if (CMP_NE(ecx, 0x31E45000)) goto loc_00188AD8; /* jne: not equal / not zero */

loc_00188AD0:
    if (CMP_EQ(edx, 0xC4BDA620u)) goto loc_00188B06; /* je: equal / zero */

loc_00188AD8:
    if (CMP_NE(ecx, 0xEBD4000)) goto loc_00188AE8; /* jne: not equal / not zero */

loc_00188AE0:
    if (CMP_EQ(edx, 0x67E63A1B)) goto loc_00188B06; /* je: equal / zero */

loc_00188AE8:
    if (CMP_NE(ecx, 0xEE45000)) goto loc_00188AF8; /* jne: not equal / not zero */

loc_00188AF0:
    if (CMP_EQ(edx, 0x67E63A1B)) goto loc_00188B06; /* je: equal / zero */

loc_00188AF8:
    edi = MEM32(ebx + 0xA4);
    if (TEST_NZ(edi, edi)) goto loc_00188BA9; /* jne: not equal / not zero */

loc_00188B06:
    MEM8(ebx + 0x13C) = 0;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x134) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B2034); /* movss */
    MEM32(ebx + 0x98) = edi;
    MEM32(ebx + 0x9C) = edi;
    MEM32(ebx + 0xA0) = edi;
    MEM32(ebx + 0xA4) = edi;
    MEMF(ebx + 0x138) = xmm0.f[0]; /* movss */
    eax = ebx + 0xD4;
    ecx = 2;
    goto loc_00188B50;

    /* nop */

loc_00188B50:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + -36), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + -20), xmm0.b, 16); /* movaps */
    edx = MEM32(ebx + 0x10);
    MEM32(eax + -4) = edx;
    edx = MEM32(ebx + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(ebx + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(ebx + 0x1C);
    MEM32(eax + 8) = edx;
    edx = MEM32(ebx + 0x20);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ebx + 0x24);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ebx + 0x28);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ebx + 0x2C);
    MEM32(eax + 0x18) = edx;
    eax = eax + 0x40;
    ecx--;
    if ((ecx != 0)) goto loc_00188B50; /* jne: not equal / not zero */

loc_00188B97:
    MEM32(ebx + 0x140) = 0x17;

loc_00188BA1:
    SET_LO8(eax, 1);
    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    esp = entry_esp + 4;
    return;

loc_00188BA9:
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3B043C);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_00188BBA:
    ecx = edi;
    PUSH32(esp, 0); sub_00032D80(); /* call 0x00032D80 */

loc_00188BC1:
    esp = esp + 4;
    MEM8(ebx + 0x13C) = 1;
    edi = 0; /* xor self */

}
