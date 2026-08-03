#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014E960
 * Original: 0x0014E960 - 0x0014EA70 (272 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0014E960:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    SET_LO8(edx, MEM8(ecx));
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    ecx = SX8(LO8(edx));
    /* cmp ecx, 6 - flags set for next jcc */
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    if (CMP_A(ecx, 6)) goto loc_0014EA6A; /* ja: above (unsigned >) */

loc_0014E986:
    ecx = ZX8(MEM8(ecx + 0x14EA78));
    { uint32_t _jt = MEM32(ecx * 4 + 0x14EA70); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0014E994u) goto loc_0014E994;
    if (_jt == 0x0014E9BEu) goto loc_0014E9BE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014E994:
    ecx = MEM32(esi + 0x28);
    edi = (uint32_t)(int32_t)SMEM8(ecx);
    if (CMP_A(edi, 7)) goto loc_0014EA6A; /* ja: above (unsigned >) */

loc_0014E9A3:
    { uint32_t _jt = MEM32(edi * 4 + 0x14EA80); /* switch: 16 entries, 4 targets */
    if (_jt == 0x0014E9AAu) goto loc_0014E9AA;
    if (_jt == 0x0014E9D6u) goto loc_0014E9D6;
    if (_jt == 0x0014E9EAu) goto loc_0014E9EA;
    if (_jt == 0x0014EA1Fu) goto loc_0014EA1F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014E9AA:
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    edi = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0014E7D0(); /* call 0x0014E7D0 */

loc_0014E9B8:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0014E9BE:
    ecx = MEM32(esi + 0x28);
    SET_LO8(edx, MEM8(ecx));
    edi = SX8(LO8(edx));
    if (CMP_A(edi, 7)) goto loc_0014EA6A; /* ja: above (unsigned >) */

loc_0014E9CF:
    { uint32_t _jt = MEM32(edi * 4 + 0x14EAA0); /* switch: 8 entries, 3 targets */
    if (_jt == 0x0014E9D6u) goto loc_0014E9D6;
    if (_jt == 0x0014E9EAu) goto loc_0014E9EA;
    if (_jt == 0x0014EA1Fu) goto loc_0014EA1F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014E9D6:
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    edi = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0014E7D0(); /* call 0x0014E7D0 */

loc_0014E9E4:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0014E9EA:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0014EA6A; /* je: equal / zero */

loc_0014E9EE:
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x220);
    if (TEST_Z(ecx, ecx)) goto loc_0014EA6A; /* je: equal / zero */

loc_0014E9FB:
    edx = MEM32(esi + 0x20);
    ecx = ZX8(MEM8(ecx + 2));
    PUSH32(esp, edx);
    edx = MEM32(0x73767C);
    ecx = ZX8(MEM8(ecx + edx));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0014E510(); /* call 0x0014E510 */

loc_0014EA19:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0014EA1F:
    ecx = MEM32(ecx + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x2BA));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0014EA4A; /* jne: not equal / not zero */

loc_0014EA2C:
    edx = MEM32(ecx + 0x204);
    xmm0.f[0] = MEMF(ecx + 0x194); /* movss */
    edx = edx + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00150480(); /* call 0x00150480 */

loc_0014EA44:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0014EA4A:
    edx = MEM32(ecx + 0x194);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x204);
    edx = edx + 0x30;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x2B8);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0014E780(); /* call 0x0014E780 */

loc_0014EA6A:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
