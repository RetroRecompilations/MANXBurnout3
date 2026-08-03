#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010DAC0
 * Original: 0x0010DAC0 - 0x0010DC7A (442 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0010DAC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edi--;
    if (CMP_A(edi, 5)) goto loc_0010DC6F; /* ja: above (unsigned >) */

loc_0010DAE2:
    { uint32_t _jt = MEM32(edi * 4 + 0x10DC7C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0010DAE9u) goto loc_0010DAE9;
    if (_jt == 0x0010DB1Fu) goto loc_0010DB1F;
    if (_jt == 0x0010DB55u) goto loc_0010DB55;
    if (_jt == 0x0010DB88u) goto loc_0010DB88;
    if (_jt == 0x0010DBC0u) goto loc_0010DBC0;
    if (_jt == 0x0010DBF8u) goto loc_0010DBF8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010DAE9:
    eax = MEM32(eax + 0x57C);
    edi = eax;
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    ecx = ecx | 1;
    eax = esi;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010DB02:
    ecx = MEM32(esi + 0x204);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010DB14:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010DB1F:
    edx = MEM32(eax + 0x580);
    PUSH32(esp, 0);
    edi = edx;
    PUSH32(esp, edi);
    ecx = ecx | 2;
    eax = esi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010DB38:
    eax = MEM32(esi + 0x204);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010DB4A:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010DB55:
    edx = MEM32(eax + 0x584);
    PUSH32(esp, 0);
    edi = edx;
    PUSH32(esp, edi);
    eax = esi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010DB6B:
    eax = MEM32(esi + 0x204);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010DB7D:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010DB88:
    ecx = MEM32(eax + 0x588);
    edi = ecx;
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edi);
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010DBA3:
    edx = MEM32(esi + 0x204);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010DBB5:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010DBC0:
    eax = MEM32(eax + 0x58C);
    edi = eax;
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    ecx = 2;
    eax = esi;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010DBDB:
    ecx = MEM32(esi + 0x204);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010DBED:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010DBF8:
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x10); /* subss */
    xmm1.f[0] = MEMF(edx + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x14); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x38;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0010DC45:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    ebx = ebx + 0x20;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00125490(); /* call 0x00125490 */

loc_0010DC64:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010DC6F:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
