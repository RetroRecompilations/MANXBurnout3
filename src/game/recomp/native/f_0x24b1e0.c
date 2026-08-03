#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B1E0
 * Original: 0x0024B1E0 - 0x0024B275 (149 bytes, 58 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B1E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0024B1E0:
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x14);
    eax = eax | eax;
    if ((eax != 0)) goto loc_0024B211; /* jne: not equal / not zero */

loc_0024B1E9:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    eax = ebx;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    goto loc_0024B258;

loc_0024B211:
    ecx = eax;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);

loc_0024B21F:
    ecx = ecx >> 1;
    /* TODO: rcr ebx, 1 */
    edx = edx >> 1;
    /* TODO: rcr eax, 1 */
    ecx = ecx | ecx;
    if ((ecx != 0)) goto loc_0024B21F; /* jne: not equal / not zero */

loc_0024B22B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    if ((edx < (uint32_t)ecx)) goto loc_0024B24D; /* jb: below (unsigned <) */

loc_0024B23F:
    if (CMP_A(edx, MEM32(esp + 0xC))) goto loc_0024B24D; /* ja: above (unsigned >) */

loc_0024B245:
    if (CMP_B(edx, MEM32(esp + 0xC))) goto loc_0024B256; /* jb: below (unsigned <) */

loc_0024B247:
    if (CMP_BE(eax, MEM32(esp + 8))) goto loc_0024B256; /* jbe: below or equal (unsigned <=) */

loc_0024B24D:
    esi--;
    eax = eax - MEM32(esp + 0x10);
    edx = edx - MEM32(esp + 0x14) - _cf; /* sbb */

loc_0024B256:
    ebx = 0; /* xor self */

loc_0024B258:
    eax = eax - MEM32(esp + 8);
    edx = edx - MEM32(esp + 0xC) - _cf; /* sbb */
    edx = (uint32_t)(-(int32_t)edx);
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx - 0 - _cf; /* sbb */
    ecx = edx;
    edx = ebx;
    ebx = ecx;
    ecx = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
