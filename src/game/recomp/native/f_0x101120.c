#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00101120
 * Original: 0x00101120 - 0x0010128A (362 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00101120:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x3C;
    eax = MEM32(esi + 0x6F0);
    MEM8(eax + 0x1A23) = 1;
    ecx = MEM32(esi + 0x6F0);
    PUSH32(esp, ebx);
    MEM8(ecx + 0x1A95) = 1;
    edx = MEM32(esi + 0x6F0);
    ebx = 0; /* xor self */
    MEM8(edx + 0x1A94) = LO8(ebx);
    eax = MEM32(esi + 0x6F0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = eax + 0x1A20;
    PUSH32(esp, ecx);
    edx = eax + 0x1A10;
    ecx = eax + 0x1A00;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = eax + 0x19C0;
    PUSH32(esp, 0); sub_00103FB0(); /* call 0x00103FB0 */

loc_00101181:
    edx = MEM32(esi + 0x6F0);
    SET_LO8(eax, MEM8(esp + 0x25));
    MEM8(edx + 0x1A25) = LO8(eax);
    ecx = MEM32(esi + 0x6F0);
    SET_LO8(edx, MEM8(esp + 0x26));
    MEM8(ecx + 0x1A26) = LO8(edx);
    eax = MEM32(esi + 0x6F0);
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x1A28) = ecx;
    edx = MEM32(esi + 0x6F0);
    MEM8(edx + 0x11EE) = LO8(ebx);
    eax = MEM32(esi + 0x6F0);
    if (TEST_Z(MEM8(eax + 0x1A22), 8)) goto loc_001011D3; /* je: equal / zero */

loc_001011CC:
    MEM8(eax + 0x11EE) = 1;

loc_001011D3:
    if (CMP_EQ(MEM32(esi + 0x6F4), ebx)) goto loc_001011E6; /* je: equal / zero */

loc_001011DB:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00102810(); /* call 0x00102810 */

loc_001011E6:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_001011FA:
    if (CMP_A(eax, 5)) goto loc_00101285; /* ja: above (unsigned >) */

loc_00101203:
    { uint32_t _jt = MEM32(eax * 4 + 0x10128C); /* switch: 6 entries, 3 targets */
    if (_jt == 0x0010120Au) goto loc_0010120A;
    if (_jt == 0x0010122Bu) goto loc_0010122B;
    if (_jt == 0x00101285u) goto loc_00101285;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010120A:
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    eax = MEM32(esi + 0x6F0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    MEMF(eax + 0x16C4) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010122B:
    ecx = MEM32(esi + 0x6F0);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    SET_LO8(eax, MEM8(esp + 0x18));
    /* test LO8(eax), 1 - flags set for next jcc */
    MEMF(ecx + 0x16C4) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x6F0);
    MEM8(edx + 0x1172) = LO8(ebx);
    if (TEST_Z(LO8(eax), 1)) goto loc_00101268; /* je: equal / zero */

loc_0010125B:
    ecx = MEM32(esi + 0x6F0);
    MEM8(ecx + 0x1172) = 1;

loc_00101268:
    /* test LO8(eax), 2 - flags set for next jcc */
    edx = MEM32(esi + 0x6F0);
    MEM8(edx + 0x1171) = LO8(ebx);
    if (TEST_Z(LO8(eax), 2)) goto loc_00101285; /* je: equal / zero */

loc_00101278:
    eax = MEM32(esi + 0x6F0);
    MEM8(eax + 0x1171) = 1;

loc_00101285:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
