#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010EC10
 * Original: 0x0010EC10 - 0x0010ED2B (283 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EC10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0010EC10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    ecx = MEM32(ebx + 0x204);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ecx + 0x30;
    edx = ebx;
    esi = eax;
    PUSH32(esp, 0); sub_0010E610(); /* call 0x0010E610 */

loc_0010EC2D:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0010EC37:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010ED23; /* je: equal / zero */

loc_0010EC3F:
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64B310);
    PUSH32(esp, 0); sub_00115130(); /* call 0x00115130 */

loc_0010EC4E:
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010EC65; /* jne: not equal / not zero */

loc_0010EC55:
    SET_LO8(edx, MEM8(ebx + 0x2429));
    edi = 0x572980;
    PUSH32(esp, 0); sub_0010C5B0(); /* call 0x0010C5B0 */

loc_0010EC65:
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010EC7F; /* je: equal / zero */

loc_0010EC6E:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x10);
    goto loc_0010ECFF;

loc_0010EC7F:
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1750); /* mulss */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0010ECD3; /* jbe: below or equal (unsigned <=) */

loc_0010EC96:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADF0), 16); /* movaps */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 1);
    esi = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x1C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010ECB5:
    SET_LO8(eax, MEM8(ebx + 0x2428));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010ED23; /* je: equal / zero */

loc_0010ECBF:
    esi = MEM32(ebx + 0x2424);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 2);
    goto loc_0010ED01;

loc_0010ECD3:
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1D2C); /* mulss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0010ECF3; /* jbe: below or equal (unsigned <=) */

loc_0010ECE5:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x10);
    goto loc_0010ECFF;

loc_0010ECF3:
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 2);

loc_0010ECFF:
    esi = ebx;

loc_0010ED01:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40ADF0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010ED12:
    SET_LO8(eax, MEM8(ebx + 0x2428));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010ED23; /* je: equal / zero */

loc_0010ED1C:
    eax = ebx;
    PUSH32(esp, 0); sub_00121400(); /* call 0x00121400 */

loc_0010ED23:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
