#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_0006C280
 * Original: 0x0006C280 - 0x0006C3EE (366 bytes, 97 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned trace_count;
        if (trace_count++ < 32)
            fprintf(stderr,
                    "[B3-FE] 6C280 menu event=%u arg1=%08X arg2=%08X "
                    "object=%08X screen=%08X\n",
                    MEM32(esp + 4), MEM32(esp + 8), MEM32(esp + 12), ecx,
                    MEM32(0x557A70));
    }

loc_0006C280:
    eax = MEM32(esp + 4);
    eax = eax - 2;
    if ((eax == 0)) goto loc_0006C3EB; /* je: equal / zero */

loc_0006C28D:
    eax--;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_0006C2C6; /* je: equal / zero */

loc_0006C291:
    eax = eax - 2;
    if ((eax != 0)) goto loc_0006C3EA; /* jne: not equal / not zero */

loc_0006C29A:
    eax = MEM32(esp + 0x10);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0006C2AC; /* je: equal / zero */

loc_0006C2A3:
    eax = eax - 2;
    if ((eax != 0)) goto loc_0006C3EA; /* jne: not equal / not zero */

loc_0006C2AC:
    PUSH32(esp, 0x60D6B072);
    PUSH32(esp, 0x14065F27);
    PUSH32(esp, 0x567170);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_0006C2C2:
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_0006C2C6:
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 8);
    xmm0.f[0] = MEMF(0x3EC930); /* movss */
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    SET_LO8(edx, MEM8(0x411B4C));
    eax = MEM32(0x411BE0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(edx, LO8(edx) & 0xFB);
    edi = 0; /* xor self */
    /* cmp eax, edi - flags set for next jcc */
    MEM8(0x411B4C) = LO8(edx);
    MEMF(0x4115EC) = xmm0.f[0]; /* movss */
    MEM8(0x40FBAE) = LO8(ebx);
    if (CMP_EQ(eax, edi)) goto loc_0006C3D2; /* je: equal / zero */

loc_0006C30D:
    eax--;
    /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(0x411BE0) = edi;
    if (CMP_A(eax, 4)) goto loc_0006C38A; /* ja: above (unsigned >) */

loc_0006C31A:
    { uint32_t _jt = MEM32(eax * 4 + 0x6C3F0); /* switch: 5 entries, 1 targets */
    if (_jt == 0x0006C321u) goto loc_0006C321;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006C321:
    if (CMP_EQ(MEM32(0x411BDC), 1)) goto loc_0006C38A; /* je: equal / zero */

loc_0006C32A:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00155330(); /* call 0x00155330 */

loc_0006C334:
    if (CMP_EQ(MEM32(0x411BE0), 3)) goto loc_0006C38A; /* je: equal / zero */

loc_0006C33D:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153A20(); /* call 0x00153A20 */

loc_0006C347:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006C359; /* jne: not equal / not zero */

loc_0006C34B:
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_0006C355:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006C365; /* jne: not equal / not zero */

loc_0006C359:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_0006C363:
    SET_LO8(ebx, 1);

loc_0006C365:
    SET_LO8(eax, MEM8(0x4116B8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006C37A; /* je: equal / zero */

loc_0006C36E:
    MEM32(0x411BDC) = 0xB;
    goto loc_0006C38A;

loc_0006C37A:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153230(); /* call 0x00153230 */

loc_0006C384:
    MEM32(0x411BDC) = edi;

loc_0006C38A:
    if (CMP_NE(MEM32(0x411BE0), 4)) goto loc_0006C3D1; /* jne: not equal / not zero */

loc_0006C393:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_0006C39D:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0006C3CB; /* jne: not equal / not zero */

loc_0006C3A1:
    SET_LO8(eax, MEM8(0x411B20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006C3C1; /* je: equal / zero */

loc_0006C3AA:
    SET_LO8(eax, MEM8(0x411B4E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006C3C1; /* jne: not equal / not zero */

loc_0006C3B3:
    esi = 0x4115E8;
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_0006C3BD:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006C3CB; /* jne: not equal / not zero */

loc_0006C3C1:
    PUSH32(esp, 0x4115E8);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_0006C3CB:
    MEM32(0x411BDC) = edi;

loc_0006C3D1:
    POP32(esp, esi);

loc_0006C3D2:
    PUSH32(esp, 0x447A0000);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    eax = 0xF90;
    ecx = 0x55CB88;
    PUSH32(esp, 0); sub_00086F70(); /* call 0x00086F70 */

loc_0006C3E9:
    POP32(esp, ebx);

loc_0006C3EA:
    POP32(esp, edi);

loc_0006C3EB:
    esp += 20; return; /* ret 16 */

}
