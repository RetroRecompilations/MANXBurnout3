#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002445E0
 * Original: 0x002445E0 - 0x0024468A (170 bytes, 70 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_002445E0:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    eax = MEM32(esp + 0x14);
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00244601; /* jge: greater or equal (signed >=) */

loc_002445ED:
    edi++;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(-(int32_t)eax);
    edx = (uint32_t)(-(int32_t)edx);
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;

loc_00244601:
    eax = MEM32(esp + 0x1C);
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_0024461D; /* jge: greater or equal (signed >=) */

loc_00244609:
    edi++;
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)(-(int32_t)eax);
    edx = (uint32_t)(-(int32_t)edx);
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;

loc_0024461D:
    eax = eax | eax;
    if ((eax != 0)) goto loc_00244639; /* jne: not equal / not zero */

loc_00244621:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    goto loc_0024467A;

loc_00244639:
    ebx = eax;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_00244647:
    ebx = ebx >> 1;
    /* TODO: rcr ecx, 1 */
    edx = edx >> 1;
    /* TODO: rcr eax, 1 */
    ebx = ebx | ebx;
    if ((ebx != 0)) goto loc_00244647; /* jne: not equal / not zero */

loc_00244653:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x1C);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x18);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    if ((edx < (uint32_t)ecx)) goto loc_00244675; /* jb: below (unsigned <) */

loc_00244667:
    if (CMP_A(edx, MEM32(esp + 0x14))) goto loc_00244675; /* ja: above (unsigned >) */

loc_0024466D:
    if (CMP_B(edx, MEM32(esp + 0x14))) goto loc_00244676; /* jb: below (unsigned <) */

loc_0024466F:
    if (CMP_BE(eax, MEM32(esp + 0x10))) goto loc_00244676; /* jbe: below or equal (unsigned <=) */

loc_00244675:
    esi--;

loc_00244676:
    edx = 0; /* xor self */
    eax = esi;

loc_0024467A:
    edi--;
    if ((edi != 0)) goto loc_00244684; /* jne: not equal / not zero */

loc_0024467D:
    edx = (uint32_t)(-(int32_t)edx);
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx - 0 - _cf; /* sbb */

loc_00244684:
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}
