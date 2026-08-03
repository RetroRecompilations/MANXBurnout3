#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244A20
 * Original: 0x00244A20 - 0x00244A95 (117 bytes, 44 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A20(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00244A20:
    PUSH32(esp, ebx);
    eax = MEM32(esp + 0x14);
    eax = eax | eax;
    if ((eax != 0)) goto loc_00244A41; /* jne: not equal / not zero */

loc_00244A29:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    edx = 0; /* xor self */
    goto loc_00244A91;

loc_00244A41:
    ecx = eax;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);

loc_00244A4F:
    ecx = ecx >> 1;
    /* TODO: rcr ebx, 1 */
    edx = edx >> 1;
    /* TODO: rcr eax, 1 */
    ecx = ecx | ecx;
    if ((ecx != 0)) goto loc_00244A4F; /* jne: not equal / not zero */

loc_00244A5B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ecx = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    if ((edx < (uint32_t)ecx)) goto loc_00244A7A; /* jb: below (unsigned <) */

loc_00244A6C:
    if (CMP_A(edx, MEM32(esp + 0xC))) goto loc_00244A7A; /* ja: above (unsigned >) */

loc_00244A72:
    if (CMP_B(edx, MEM32(esp + 0xC))) goto loc_00244A82; /* jb: below (unsigned <) */

loc_00244A74:
    if (CMP_BE(eax, MEM32(esp + 8))) goto loc_00244A82; /* jbe: below or equal (unsigned <=) */

loc_00244A7A:
    eax = eax - MEM32(esp + 0x10);
    edx = edx - MEM32(esp + 0x14) - _cf; /* sbb */

loc_00244A82:
    eax = eax - MEM32(esp + 8);
    edx = edx - MEM32(esp + 0xC) - _cf; /* sbb */
    edx = (uint32_t)(-(int32_t)edx);
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx - 0 - _cf; /* sbb */

loc_00244A91:
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
