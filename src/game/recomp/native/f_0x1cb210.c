#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB210
 * Original: 0x001CB210 - 0x001CB23F (47 bytes, 18 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB210:
    eax = ZX8(MEM8(ecx + 0x2E));
    if (CMP_A(eax, 3)) goto loc_001CB23C; /* ja: above (unsigned >) */

loc_001CB219:
    { uint32_t _jt = MEM32(eax * 4 + 0x1CB240); /* switch: 4 entries, 2 targets */
    if (_jt == 0x001CB220u) goto loc_001CB220;
    if (_jt == 0x001CB233u) goto loc_001CB233;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CB220:
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BD20(); /* call 0x0020BD20 */

loc_001CB229:
    esp = esp + 4;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

loc_001CB233:
    SET_LO8(eax, MEM8(ecx + 0x31));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

loc_001CB23C:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
