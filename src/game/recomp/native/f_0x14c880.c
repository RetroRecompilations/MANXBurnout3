#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014C880
 * Original: 0x0014C880 - 0x0014CDF0 (1392 bytes, 364 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0014C880:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE8;
    SET_LO8(eax, MEM8(ebx + 0x8C5));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(0x4D5370);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0xB) = 0;
    MEM8(esp + 0xA) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C8B5; /* je: equal / zero */

loc_0014C8AD:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C5) = LO8(eax);

loc_0014C8B5:
    SET_LO8(eax, MEM8(ebx + 0x8C6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C8C7; /* je: equal / zero */

loc_0014C8BF:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C6) = LO8(eax);

loc_0014C8C7:
    SET_LO8(eax, MEM8(ebx + 0x8C7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C8D9; /* je: equal / zero */

loc_0014C8D1:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C7) = LO8(eax);

loc_0014C8D9:
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C8EB; /* je: equal / zero */

loc_0014C8E3:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C8) = LO8(eax);

loc_0014C8EB:
    SET_LO8(eax, MEM8(ebx + 0x8C9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C8FD; /* je: equal / zero */

loc_0014C8F5:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C9) = LO8(eax);

loc_0014C8FD:
    SET_LO8(eax, MEM8(ebx + 0x8CA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C90F; /* je: equal / zero */

loc_0014C907:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8CA) = LO8(eax);

loc_0014C90F:
    SET_LO8(eax, MEM8(ebx + 0x8CB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C921; /* je: equal / zero */

loc_0014C919:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8CB) = LO8(eax);

loc_0014C921:
    SET_LO8(eax, MEM8(ebx + 0x8CC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C933; /* je: equal / zero */

loc_0014C92B:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8CC) = LO8(eax);

loc_0014C933:
    SET_LO8(eax, MEM8(ebx + 0x8CD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C945; /* je: equal / zero */

loc_0014C93D:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8CD) = LO8(eax);

loc_0014C945:
    SET_LO8(eax, MEM8(ebx + 0x8C3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C957; /* je: equal / zero */

loc_0014C94F:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C3) = LO8(eax);

loc_0014C957:
    SET_LO8(eax, MEM8(ebx + 0x8C4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C969; /* je: equal / zero */

loc_0014C961:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C4) = LO8(eax);

loc_0014C969:
    SET_LO8(eax, MEM8(ebx + 0x8CE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C97B; /* je: equal / zero */

loc_0014C973:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8CE) = LO8(eax);

loc_0014C97B:
    SET_LO8(eax, MEM8(ebx + 0x8CF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C98D; /* je: equal / zero */

loc_0014C985:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8CF) = LO8(eax);

loc_0014C98D:
    SET_LO8(eax, MEM8(ebx + 0x8C2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C99F; /* je: equal / zero */

loc_0014C997:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8C2) = LO8(eax);

loc_0014C99F:
    SET_LO8(eax, MEM8(ebx + 0x8D0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C9B1; /* je: equal / zero */

loc_0014C9A9:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x8D0) = LO8(eax);

loc_0014C9B1:
    SET_LO8(eax, MEM8(ebx + 0x514));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C9C3; /* je: equal / zero */

loc_0014C9BB:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x514) = LO8(eax);

loc_0014C9C3:
    SET_LO8(eax, MEM8(ebx + 0x515));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C9D5; /* je: equal / zero */

loc_0014C9CD:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x515) = LO8(eax);

loc_0014C9D5:
    SET_LO8(eax, MEM8(ebx + 0x516));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C9E7; /* je: equal / zero */

loc_0014C9DF:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x516) = LO8(eax);

loc_0014C9E7:
    SET_LO8(eax, MEM8(ebx + 0x517));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C9F9; /* je: equal / zero */

loc_0014C9F1:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x517) = LO8(eax);

loc_0014C9F9:
    SET_LO8(eax, MEM8(ebx + 0x518));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CA0B; /* je: equal / zero */

loc_0014CA03:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x518) = LO8(eax);

loc_0014CA0B:
    SET_LO8(eax, MEM8(ebx + 0x519));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CA1D; /* je: equal / zero */

loc_0014CA15:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x519) = LO8(eax);

loc_0014CA1D:
    SET_LO8(eax, MEM8(ebx + 0x51A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CA2F; /* je: equal / zero */

loc_0014CA27:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x51A) = LO8(eax);

loc_0014CA2F:
    SET_LO8(eax, MEM8(ebx + 0x51B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CA41; /* je: equal / zero */

loc_0014CA39:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0x51B) = LO8(eax);

loc_0014CA41:
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_0014CA68; /* je: equal / zero */

loc_0014CA47:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    if (CMP_EQ(ecx, edi)) goto loc_0014CA68; /* je: equal / zero */

loc_0014CA56:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_0014CA5E:
    if (CMP_NE(eax, 3)) goto loc_0014CA68; /* jne: not equal / not zero */

loc_0014CA63:
    MEM8(esp + 0xB) = 1;

loc_0014CA68:
    /* cmp MEM32(0x73A1C0), edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(MEM32(0x73A1C0), edi)) goto loc_0014CB80; /* jle: less or equal (signed <=) */

loc_0014CA78:
    esi = 0x4CFD90;
    eax = 0x73B894;
    ecx = ebx + 0x270;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    goto loc_0014CAA0;

loc_0014CA96:
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    edi = edi;

loc_0014CAA0:
    SET_LO8(ecx, MEM8(eax + 0x236));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0014CAAF; /* je: equal / zero */

loc_0014CAAA:
    MEM8(esp + 0xC) = 1;

loc_0014CAAF:
    SET_LO8(ecx, MEM8(esp + 0xB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0014CAC9; /* je: equal / zero */

loc_0014CAB7:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(eax) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(eax))) goto loc_0014CAC9; /* jb: below (unsigned <) */

loc_0014CABF:
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0xA) = 1;

loc_0014CAC9:
    eax = esp + 0x20;
    edx = esi;
    PUSH32(esp, 0); sub_00013D10(); /* call 0x00013D10 */

loc_0014CAD4:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    eax = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    ecx = 0x10;
    esi = esp + 0x70;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    memcpy((void *)XBOX_PTR(eax + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    eax = eax + 0x40;
    ecx++;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x73A1C0);
    edi = edi + 0x27E0;
    esi = esi + 0xC50;
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(ecx, eax)) goto loc_0014CA96; /* jl: less (signed <) */

loc_0014CB7E:
    edi = 0; /* xor self */

loc_0014CB80:
    /* cmp MEM32(0x60EA18), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(0x60EA18), 1)) ? 1 : 0); /* setne */
    esi = ebx;
    MEM8(ebx + 0x8DF) = LO8(edx);
    PUSH32(esp, 0); sub_00151990(); /* call 0x00151990 */

loc_0014CB97:
    SET_LO8(eax, MEM8(esp + 0xA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CC56; /* je: equal / zero */

loc_0014CBA3:
    esi = MEM32(ebx + 0x864);
    if (CMP_EQ(esi, edi)) goto loc_0014CBDE; /* je: equal / zero */

loc_0014CBAD:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014CBB7:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014CBC1:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = 0;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(ebx + 0x864) = edi;

loc_0014CBDE:
    esi = MEM32(ebx + 0x860);
    if (CMP_EQ(esi, edi)) goto loc_0014CC19; /* je: equal / zero */

loc_0014CBE8:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014CBF2:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014CBFC:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = 0;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(ebx + 0x860) = edi;

loc_0014CC19:
    esi = MEM32(ebx + 0x878);
    if (CMP_EQ(esi, edi)) goto loc_0014CC68; /* je: equal / zero */

loc_0014CC23:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014CC2D:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014CC37:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = 0;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(ebx + 0x878) = edi;
    goto loc_0014CC68;

loc_0014CC56:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00150670(); /* call 0x00150670 */

loc_0014CC5C:
    esi = ebx;
    PUSH32(esp, 0); sub_00151B70(); /* call 0x00151B70 */

loc_0014CC63:
    PUSH32(esp, 0); sub_00151D30(); /* call 0x00151D30 */

loc_0014CC68:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00150B90(); /* call 0x00150B90 */

loc_0014CC6E:
    esi = ebx;
    PUSH32(esp, 0); sub_001520D0(); /* call 0x001520D0 */

loc_0014CC75:
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CD75; /* je: equal / zero */

loc_0014CC81:
    if (CMP_NE(MEM32(0x73A1C0), 1)) goto loc_0014CD8D; /* jne: not equal / not zero */

loc_0014CC8E:
    eax = MEM32(ebx + 0x874);
    if (CMP_EQ(eax, edi)) goto loc_0014CD6D; /* je: equal / zero */

loc_0014CC9C:
    ecx = MEM32(eax + 0x14);
    if (CMP_NE(ecx, MEM32(ebx + 0x8AC))) goto loc_0014CD6D; /* jne: not equal / not zero */

loc_0014CCAB:
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_0014CCB0:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CD6D; /* je: equal / zero */

loc_0014CCB8:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    eax = MEM32(ebx + 0x874);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x73A210); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x73A214); /* movss */
    MEM32(esp + 0x38) = edi;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x73A218); /* movss */
    edi = esp + 0x20;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    MEM8(esp + 0x64) = 0;
    MEM8(esp + 0x65) = 0;
    MEM8(esp + 0x66) = 0;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_0014CD6B:
    goto loc_0014CD8D;

loc_0014CD6D:
    MEM32(ebx + 0x874) = edi;
    goto loc_0014CD8D;

loc_0014CD75:
    SET_LO8(eax, MEM8(ebx + 0x8D6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CD8D; /* je: equal / zero */

loc_0014CD7F:
    MEM8(ebx + 0x8D6) = 0;
    MEM8(ebx + 0x8DA) = 0;

loc_0014CD8D:
    esi = ebx + 0x10;
    edi = 6;

loc_0014CD95:
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_00152290(); /* call 0x00152290 */

loc_0014CDA0:
    esi = esi + 0x40;
    edi--;
    if ((edi != 0)) goto loc_0014CD95; /* jne: not equal / not zero */

loc_0014CDA6:
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014CDD0; /* jne: not equal / not zero */

loc_0014CDAE:
    SET_LO8(eax, MEM8(ebx + 0x8E0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CDDF; /* je: equal / zero */

loc_0014CDB8:
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM8(ebx + 0x8E0) = 0;
    PUSH32(esp, 0); sub_00150E80(); /* call 0x00150E80 */

loc_0014CDCA:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0014CDD0:
    SET_LO8(eax, MEM8(ebx + 0x8DD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CDDF; /* je: equal / zero */

loc_0014CDDA:
    MEM8(esp + 0xC) = 0;

loc_0014CDDF:
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00150E80(); /* call 0x00150E80 */

loc_0014CDEA:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
