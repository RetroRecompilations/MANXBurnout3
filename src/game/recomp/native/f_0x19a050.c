#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019A050
 * Original: 0x0019A050 - 0x0019A3D9 (905 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A050:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x148);
    ecx = MEM32(ebp + 0xD4);
    xmm0.f[0] = MEMF(eax + 0x10DC); /* movss */
    PUSH32(esp, esi);
    SET_LO8(edx, 0); /* xor self */
    /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(ecx, ebx)) goto loc_0019A08D; /* je: equal / zero */

loc_0019A081:
    if (CMP_EQ(edi, 3)) goto loc_0019A08B; /* je: equal / zero */

loc_0019A086:
    if (CMP_NE(edi, 4)) goto loc_0019A08D; /* jne: not equal / not zero */

loc_0019A08B:
    SET_LO8(edx, 1);

loc_0019A08D:
    esi = MEM32(ebp + 0xE4);
    if (TEST_Z(esi, esi)) goto loc_0019A279; /* je: equal / zero */

loc_0019A09B:
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0019A279; /* jne: not equal / not zero */

loc_0019A0A3:
    if (CMP_EQ(edi, 5)) goto loc_0019A0AE; /* je: equal / zero */

loc_0019A0A8:
    MEM8(ebp + 0xEC) = LO8(edx);

loc_0019A0AE:
    if (CMP_NE(ecx, ebx)) goto loc_0019A0DF; /* jne: not equal / not zero */

loc_0019A0B2:
    if (CMP_NE(MEM32(ebp + 0xF0), ebx)) goto loc_0019A0D5; /* jne: not equal / not zero */

loc_0019A0BA:
    xmm0.f[0] = MEMF(ebp + 0xF4); /* movss */
    /* comiss xmm0.f[0], MEMF(ebp + 0xD8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebp + 0xD8))) goto loc_0019A0D5; /* jbe: below or equal (unsigned <=) */

loc_0019A0CB:
    MEM32(esp + 0x18) = 3;
    goto loc_0019A0E7;

loc_0019A0D5:
    MEM32(esp + 0x18) = 2;
    goto loc_0019A0E7;

loc_0019A0DF:
    MEM32(esp + 0x18) = 4;

loc_0019A0E7:
    xmm0.f[0] = MEMF(ebp + 0xDC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    xmm1.f[0] = MEMF(eax + 0x10DC); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019A240; /* jbe: below or equal (unsigned <=) */

loc_0019A108:
    ecx = MEM32(esp + 0x18);
    if (CMP_NE(esi, ecx)) goto loc_0019A124; /* jne: not equal / not zero */

loc_0019A110:
    MEM32(ebp + 0xE8) = MEM32(ebp + 0xE8) + 1;
    eax = MEM32(eax + 0x10DC);
    MEM32(ebp + 0xDC) = eax;
    goto loc_0019A140;

loc_0019A124:
    MEM32(ebp + 0xE4) = ecx;
    MEM32(ebp + 0xE8) = 1;
    ecx = MEM32(eax + 0x10DC);
    MEM32(ebp + 0xDC) = ecx;

loc_0019A140:
    edx = MEM32(ebp + 0xE8);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_0019A14E:
    SET_LO8(ecx, MEM8(ebp + 0xEC));
    esp = esp + 8;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0019A174; /* je: equal / zero */

loc_0019A15B:
    ecx = MEM32(ebp + 0xE4);
    eax = eax + ecx * 2;
    edi = ZX8(MEM8(eax + 0x3A4AF7));
    ebx = MEM32(eax * 4 + 0x3F7600);
    goto loc_0019A18B;

loc_0019A174:
    edx = MEM32(ebp + 0xE4);
    eax = eax + edx * 2;
    edi = ZX8(MEM8(eax + 0x3A4AEB));
    ebx = MEM32(eax * 4 + 0x3F75D8);

loc_0019A18B:
    if (TEST_Z(edi, edi)) goto loc_0019A1DE; /* je: equal / zero */

loc_0019A18F:
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    eax = eax + ebx;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = ebp;
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_0019A1A1:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    esi = MEM32(ebp + 0x148);
    edx = MEM32(ecx);
    esi = esi + 0x10D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0019A1BE:
    if (TEST_Z(LO8(eax), 1)) goto loc_0019A1DE; /* je: equal / zero */

loc_0019A1C2:
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x4C);
    eax = eax + ebx;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = edx + eax;
    MEM32(esi + 0x4C) = edx;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) + eax;

loc_0019A1DE:
    if (CMP_NE(MEM32(esp + 0x18), 3)) goto loc_0019A234; /* jne: not equal / not zero */

loc_0019A1E5:
    ecx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    ebx = ebx + ecx;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    esi = esi + 0x11F4;
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_0019A1FF:
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_0019A210:
    if (TEST_Z(LO8(eax), 1)) goto loc_0019A234; /* je: equal / zero */

loc_0019A214:
    eax = MEM32(esp + 0x20);
    esi = MEM32(eax + 0x111C);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    esi = esi + ecx;
    MEM32(eax + 0x111C) = esi;
    MEM32(eax + 0x1180) = MEM32(eax + 0x1180) + ecx;

loc_0019A234:
    if (TEST_NZ(edi, edi)) goto loc_0019A391; /* jne: not equal / not zero */

loc_0019A23C:
    edi = MEM32(esp + 0x1C);

loc_0019A240:
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_NE(edi, 5)) goto loc_0019A2A7; /* jne: not equal / not zero */

loc_0019A247:
    SET_LO8(ecx, MEM8(ebp + 4));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0019A255; /* je: equal / zero */

loc_0019A250:
    eax = 1;

loc_0019A255:
    SET_LO8(ecx, MEM8(ebp + 5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0019A25F; /* je: equal / zero */

loc_0019A25C:
    eax = eax + 2;

loc_0019A25F:
    ecx = MEM32(ebp);
    eax = eax + ecx * 4;
    edx = ZX8(MEM8(eax + 0x3A4B28));
    edi = ZX8(MEM8(eax + 0x3A4B18));
    MEM32(esp + 0x18) = edx;
    goto loc_0019A2EA;

loc_0019A279:
    /* cmp edi, 5 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edi, 5)) ? 1 : 0); /* sete */
    MEM32(ebp + 0xE4) = 1;
    MEM32(ebp + 0xE8) = 0;
    MEM8(ebp + 0xEC) = LO8(ecx);
    edx = MEM32(eax + 0x10DC);
    MEM32(ebp + 0xDC) = edx;
    goto loc_0019A240;

loc_0019A2A7:
    eax = MEM32(esp + 0x28);
    ecx = eax + edi * 2;
    edi = ZX8(MEM8(edi + ecx + 0x3A4B04));
    if (CMP_NE(edi, 0x40)) goto loc_0019A2E4; /* jne: not equal / not zero */

loc_0019A2BB:
    edx = MEM32(ebp + 0x148);
    SET_LO8(eax, MEM8(edx + 0x11EE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019A2DA; /* je: equal / zero */

loc_0019A2CB:
    edi = 0x41;
    MEM32(esp + 0x18) = 0x43;
    goto loc_0019A2EE;

loc_0019A2DA:
    MEM32(esp + 0x18) = 0x42;
    goto loc_0019A2EE;

loc_0019A2E4:
    MEM32(esp + 0x18) = edi;
    SET_LO8(ebx, 1);

loc_0019A2EA:
    if (TEST_Z(edi, edi)) goto loc_0019A337; /* je: equal / zero */

loc_0019A2EE:
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = ebp;
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_0019A2FE:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    esi = MEM32(ebp + 0x148);
    edx = MEM32(ecx);
    esi = esi + 0x10D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0019A31B:
    if (TEST_Z(LO8(eax), 1)) goto loc_0019A337; /* je: equal / zero */

loc_0019A31F:
    edx = MEM32(esi + 0x4C);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = edx + eax;
    MEM32(esi + 0x4C) = edx;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) + eax;

loc_0019A337:
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) goto loc_0019A391; /* je: equal / zero */

loc_0019A33F:
    ecx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & ecx;
    PUSH32(esp, ebx);
    esi = esi + 0x11F4;
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_0019A35D:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_0019A36D:
    if (TEST_Z(LO8(eax), 1)) goto loc_0019A391; /* je: equal / zero */

loc_0019A371:
    eax = MEM32(esp + 0x20);
    esi = MEM32(eax + 0x111C);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    esi = esi + ecx;
    MEM32(eax + 0x111C) = esi;
    MEM32(eax + 0x1180) = MEM32(eax + 0x1180) + ecx;

loc_0019A391:
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x148);
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEM32(ebp + 0xE0) = eax;
    eax = MEM32(esp + 0x20);
    MEMF(ebp + 0xD8) = xmm0.f[0]; /* movss */
    MEM32(ebp + 0xD4) = eax;
    POP32(esp, edi);
    MEM32(eax + 0x12E4) = ecx;
    edx = MEM32(ebp + 0x148);
    ecx = MEM32(edx + 0x10DC);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x12E8) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}
