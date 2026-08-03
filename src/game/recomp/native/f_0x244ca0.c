#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244CA0
 * Original: 0x00244CA0 - 0x00244D08 (104 bytes, 43 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244CA0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x18);
    eax = eax | eax;
    if ((eax != 0)) goto loc_00244CC2; /* jne: not equal / not zero */

loc_00244CAA:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0xC);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    goto loc_00244D03;

loc_00244CC2:
    ecx = eax;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);

loc_00244CD0:
    ecx = ecx >> 1;
    /* TODO: rcr ebx, 1 */
    edx = edx >> 1;
    /* TODO: rcr eax, 1 */
    ecx = ecx | ecx;
    if ((ecx != 0)) goto loc_00244CD0; /* jne: not equal / not zero */

loc_00244CDC:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x14);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    if ((edx < (uint32_t)ecx)) goto loc_00244CFE; /* jb: below (unsigned <) */

loc_00244CF0:
    if (CMP_A(edx, MEM32(esp + 0x10))) goto loc_00244CFE; /* ja: above (unsigned >) */

loc_00244CF6:
    if (CMP_B(edx, MEM32(esp + 0x10))) goto loc_00244CFF; /* jb: below (unsigned <) */

loc_00244CF8:
    if (CMP_BE(eax, MEM32(esp + 0xC))) goto loc_00244CFF; /* jbe: below or equal (unsigned <=) */

loc_00244CFE:
    esi--;

loc_00244CFF:
    edx = 0; /* xor self */
    eax = esi;

loc_00244D03:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
