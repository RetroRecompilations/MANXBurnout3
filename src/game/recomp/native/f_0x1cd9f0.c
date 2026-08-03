#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD9F0
 * Original: 0x001CD9F0 - 0x001CDB6A (378 bytes, 114 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001CD9F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(ecx + 0x45));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CDAD1; /* jne: not equal / not zero */

loc_001CDA0C:
    xmm0.f[0] = MEMF(ecx + 0x1C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CDAC3; /* jnp: not parity */

loc_001CDA22:
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 8);
    if (TEST_Z(MEM8(edx + 0x54), 2)) goto loc_001CDAD1; /* je: equal / zero */

loc_001CDA32:
    xmm0.f[0] = MEMF(ecx); /* movss */
    edx = MEM32(edi + 0x2880);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA270(); /* call 0x001CA270 */

loc_001CDA61:
    eax = MEM32(eax + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00038BC0(); /* call 0x00038BC0 */

loc_001CDABA:
    /* comiss xmm0.f[0], MEMF(0x395D58) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x395D58))) goto loc_001CDACE; /* jbe: below or equal (unsigned <=) */

loc_001CDAC3:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001CDACE:
    ecx = MEM32(ebp + 8);

loc_001CDAD1:
    eax = MEM32(edi + 0x2888);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_001CDB5F; /* jbe: below or equal (unsigned <=) */

loc_001CDAE1:
    eax--;
    MEM32(edi + 0x2888) = eax;
    edx = ZX8(MEM8(eax + edi + 0x2870));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    eax = MEM32(edx + edi + 0x231C);
    esi = edx + edi + 0x2304;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x2C));
    ebx = ZX8(LO8(eax));
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_001CDB2C; /* jle: less or equal (signed <=) */

loc_001CDB11:
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CDB21:
    esp = esp + 0xC;
    edi++;
    if (CMP_L(edi, ebx)) goto loc_001CDB11; /* jl: less (signed <) */

loc_001CDB29:
    ecx = MEM32(ebp + 8);

loc_001CDB2C:
    SET_LO8(eax, MEM8(esi + 0x2D));
    edx = MEM32(esi + 0x24);
    ebx = ZX8(LO8(eax));
    edi = 0; /* xor self */
    /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(ebx & ebx, 0)) goto loc_001CDB58; /* jle: less or equal (signed <=) */

loc_001CDB3F:
    /* nop */

loc_001CDB40:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CDB4D:
    esp = esp + 0xC;
    edi++;
    if (CMP_L(edi, ebx)) goto loc_001CDB40; /* jl: less (signed <) */

loc_001CDB55:
    ecx = MEM32(ebp + 8);

loc_001CDB58:
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001CAE30(); /* call 0x001CAE30 */

loc_001CDB5F:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
