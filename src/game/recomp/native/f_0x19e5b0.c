#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E5B0
 * Original: 0x0019E5B0 - 0x0019E640 (144 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E5B0:
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(ebp) = 0xFFFFFFFFu;
    SET_LO8(edx, MEM8(ecx + 0x48));
    eax = eax | 0xFFFFFFFFu;
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_BE(LO8(edx) & LO8(edx), 0)) goto loc_0019E621; /* jbe: below or equal (unsigned <=) */

loc_0019E5CE:
    edx = 0xFFFFFFFAu;
    PUSH32(esp, esi);
    edx = edx - ecx;
    PUSH32(esp, edi);
    edi = ecx + 6;
    MEM32(esp + 0x1C) = edx;
    edi = edi;

loc_0019E5E0:
    esi = ZX8(MEM8(edi));
    edx = ZX8(MEM8(edi + 0x18));
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x118);
    ecx = MEM32(ecx + 0x613824);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + edx * 4);
    if (CMP_G(ecx, MEM32(esp + 0x18))) goto loc_0019E60C; /* jg: greater (signed >) */

loc_0019E601:
    if (CMP_LE(ecx, ebx)) goto loc_0019E60C; /* jle: less or equal (signed <=) */

loc_0019E605:
    eax = esi;
    ebx = ecx;
    MEM32(ebp) = edx;

loc_0019E60C:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    ecx = ZX8(MEM8(ecx + 0x48));
    edi++;
    edx = edx + edi;
    if (CMP_L(edx, ecx)) goto loc_0019E5E0; /* jl: less (signed <) */

loc_0019E61F:
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019E621:
    /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(edx) = ebx;
    POP32(esp, ebx);
    if (CMP_GE(eax & eax, 0)) goto loc_0019E632; /* jge: greater or equal (signed >=) */

loc_0019E62D:
    eax = 0; /* xor self */
    esp += 20; return; /* ret 16 */

loc_0019E632:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x118);
    eax = eax + 0x6137E4;
    esp += 20; return; /* ret 16 */

}
