#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001544C0
 * Original: 0x001544C0 - 0x001547DD (797 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001544C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001544C0:
    /* cmp MEM32(0x4D4248), 0x1A - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_L(MEM32(0x4D4248), 0x1A)) goto loc_001547D9; /* jl: less (signed <) */

loc_001544D2:
    eax = MEM32(ebp + 0x5FC);
    /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 4)) goto loc_001544FB; /* ja: above (unsigned >) */

loc_001544E0:
    { uint32_t _jt = MEM32(eax * 4 + 0x1547E0); /* switch: 5 entries, 2 targets */
    if (_jt == 0x001544E7u) goto loc_001544E7;
    if (_jt == 0x00154548u) goto loc_00154548;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001544E7:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_001544ED:
    MEM32(ebp + 0x618) = MEM32(ebp + 0x618) & 0xFFFFFFFDu;
    MEM8(ebp + 0x62D) = 0;

loc_001544FB:
    SET_LO8(eax, MEM8(ebp + 0x62D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154524; /* jne: not equal / not zero */

loc_00154505:
    ecx = MEM32(ebp + 0x618);

loc_0015450B:
    ecx = ecx & 0xFFFFFFFDu;
    PUSH32(esp, ebp);
    MEM32(ebp + 0x618) = ecx;
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_0015451A:
    MEM32(ebp + 0x604) = 0xFFFFFFFFu;

loc_00154524:
    eax = MEM32(ebp + 0x5F4);
    eax = eax - 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((eax == 0)) goto loc_0015473B; /* je: equal / zero */

loc_00154536:
    eax--;
    if ((eax == 0)) goto loc_0015475C; /* je: equal / zero */

loc_0015453D:
    eax--;
    if ((eax == 0)) goto loc_001547A1; /* je: equal / zero */

loc_00154544:
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00154548:
    SET_LO8(eax, MEM8(ebp + 0x56C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154585; /* jne: not equal / not zero */

loc_00154552:
    eax = 0x54FFA0;
    PUSH32(esp, 0); sub_000E2780(); /* call 0x000E2780 */

loc_0015455C:
    ecx = ebp + 0x56C;
    PUSH32(esp, ecx);
    esi = eax;
    eax = ebp + 0x60C;
    edi = ebp + 0x608;
    PUSH32(esp, ebp);
    ebx = edx;
    PUSH32(esp, 0); sub_00155630(); /* call 0x00155630 */

loc_00154579:
    MEM32(ebp + 0x5D8) = esi;
    MEM32(ebp + 0x5DC) = ebx;

loc_00154585:
    eax = MEM32(0x463AF4);
    if (TEST_NZ(eax, eax)) goto loc_001544FB; /* jne: not equal / not zero */

loc_00154592:
    SET_LO8(edx, MEM8(ebp + 0x62C));
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001544FB; /* je: equal / zero */

loc_001545A5:
    SET_LO8(eax, MEM8(ebp + 0x62D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154524; /* jne: not equal / not zero */

loc_001545B3:
    eax = MEM32(ebp + 0x5E0);
    if (TEST_NZ(eax, eax)) goto loc_001545CD; /* jne: not equal / not zero */

loc_001545BD:
    esi = 0x40B318;
    PUSH32(esp, 0); sub_001CE140(); /* call 0x001CE140 */

loc_001545C7:
    MEM32(ebp + 0x5E0) = eax;

loc_001545CD:
    eax = MEM32(ebp + 0x5E0);
    if (TEST_Z(eax, eax)) goto loc_00154524; /* je: equal / zero */

loc_001545DB:
    ecx = MEM32(ebp + 0x618);
    if (TEST_NZ(LO8(ecx), 2)) goto loc_00154729; /* jne: not equal / not zero */

loc_001545EA:
    ecx = ebp + 0x56C;
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0); sub_001CE500(); /* call 0x001CE500 */

loc_001545F8:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154691; /* je: equal / zero */

loc_00154600:
    eax = MEM32(ebp + 0x5E0);
    ecx = MEM32(eax + 0x24C);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ebp + 0x60C);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + 0x604) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00154625; /* jne: not equal / not zero */

loc_0015461F:
    MEM32(ebp + 0x60C) = eax;

loc_00154625:
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x615);
    esi = MEM32(ebp + 0x608);
    ecx = MEM32(ebp + 0x60C);
    ecx = ecx - esi;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x26;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ebx = MEM32(ebp + 0x600);
    edi = SX8(LO8(edx));
    MEM8(ebp + 0x615) = LO8(edx);
    eax = ZX8(MEM8(edi + ebp + 0x5AC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx + esi;
    /* cmp ebx, eax - flags set for next jcc */
    MEM32(ebp + 0x600) = eax;
    if (CMP_NE(ebx, eax)) goto loc_00154691; /* jne: not equal / not zero */

loc_0015466A:
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x26;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM8(ebp + 0x615) = LO8(edx);
    edx = SX8(LO8(edx));
    eax = ZX8(MEM8(edx + ebp + 0x5AC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + esi;
    MEM32(ebp + 0x600) = edx;

loc_00154691:
    eax = MEM32(ebp + 0x604);
    if (CMP_LE(eax & eax, 0)) goto loc_00154524; /* jle: less or equal (signed <=) */

loc_0015469F:
    eax = MEM32(ebp + 0x600);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp + 0x56C;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x5E0);
    PUSH32(esp, 0); sub_001CE6A0(); /* call 0x001CE6A0 */

loc_001546BA:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154524; /* je: equal / zero */

loc_001546C2:
    edi = MEM32(ebp + 0x618);
    esi = MEM32(ebp + 0x5E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, 0);
    edi = edi | 2;
    PUSH32(esp, 0x3F800000);
    MEM32(ebp + 0x618) = edi;
    PUSH32(esp, 0); sub_001CEDB0(); /* call 0x001CEDB0 */

loc_001546EA:
    esi = MEM32(ebp + 0x5E0);
    PUSH32(esp, 0); sub_001CE9F0(); /* call 0x001CE9F0 */

loc_001546F5:
    xmm0.f[0] = MEMF(ebp + 0x620); /* movss */
    ecx = MEM32(ebp + 0x5E0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC95C); /* mulss */
    MEMF(ecx + 0x21C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x5E0);
    MEM8(edx + 0x2E) = 0xE;
    MEM8(ebp + 0x62D) = 1;
    goto loc_00154524;

loc_00154729:
    PUSH32(esp, 0); sub_001CED90(); /* call 0x001CED90 */

loc_0015472E:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154524; /* je: equal / zero */

loc_00154736:
    goto loc_0015450B;

loc_0015473B:
    SET_LO8(eax, MEM8(ebp + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154752; /* je: equal / zero */

loc_00154745:
    if (CMP_NE(MEM32(ebp + 0x544), 2)) goto loc_001547D9; /* jne: not equal / not zero */

loc_00154752:
    MEM32(ebp + 0x5F4) = 1;

loc_0015475C:
    SET_LO8(eax, MEM8(ebp + 0x618));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ebp;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0015477A; /* jns: not sign (positive) */

loc_00154768:
    PUSH32(esp, 0); sub_00153500(); /* call 0x00153500 */

loc_0015476D:
    eax = MEM32(ebp + 0x618);
    eax = eax & 0xFFFFFF7Fu;
    goto loc_00154788;

loc_0015477A:
    PUSH32(esp, 0); sub_001532D0(); /* call 0x001532D0 */

loc_0015477F:
    eax = MEM32(ebp + 0x618);
    eax = eax & 0xFFFFFFBFu;

loc_00154788:
    MEM32(ebp + 0x618) = eax;
    eax = eax | 1;
    MEM32(ebp + 0x618) = eax;
    MEM32(ebp + 0x5F4) = 2;

loc_001547A1:
    SET_LO8(eax, MEM8(ebp + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001547B4; /* je: equal / zero */

loc_001547AB:
    /* test MEM8(ebp + 0x564), 1 - flags set for next jcc */
    goto loc_001547D0;

loc_001547B4:
    eax = MEM32(ebp + 0xC8);
    if (CMP_EQ(eax, 4)) goto loc_001547D9; /* je: equal / zero */

loc_001547BF:
    if (CMP_EQ(eax, 2)) goto loc_001547D9; /* je: equal / zero */

loc_001547C4:
    if (CMP_NE(eax, 1)) goto loc_001547D2; /* jne: not equal / not zero */

loc_001547C9:
    /* test MEM8(ebp + 0xCC), 0x20 - flags set for next jcc */

loc_001547D0:
    if (TEST_NZ(MEM8(ebp + 0xCC), 0x20)) goto loc_001547D9; /* jne: not equal / not zero */

loc_001547D2:
    eax = ebp;
    PUSH32(esp, 0); sub_001532D0(); /* call 0x001532D0 */

loc_001547D9:
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
