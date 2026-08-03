#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214AB0
 * Original: 0x00214AB0 - 0x00214BE8 (312 bytes, 142 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00214AB0:
    eax = MEM32(esp + 0xC);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    if (CMP_LE(eax & eax, 0)) goto loc_00214AC7; /* jle: less or equal (signed <=) */

loc_00214ABF:
    if (CMP_GE(eax, 0x10)) goto loc_00214ACB; /* jge: greater or equal (signed >=) */

loc_00214AC4:
    MEM8(edi) = 0;

loc_00214AC7:
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00214ACB:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(esi + 4));
    if (CMP_LE(eax, 0x63)) goto loc_00214AFA; /* jle: less or equal (signed <=) */

loc_00214ADA:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = 0xA;
    ecx = edi + 1;
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(edi) = LO8(eax);
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214AFA:
    if (CMP_LE(eax, 9)) goto loc_00214B0E; /* jle: less or equal (signed <=) */

loc_00214AFF:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214B0E:
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    MEM8(ecx) = 0x2E;
    eax = ZX8(MEM8(esi + 5));
    ecx++;
    if (CMP_LE(eax, 0x63)) goto loc_00214B3E; /* jle: less or equal (signed <=) */

loc_00214B20:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = 0xA;
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx++;
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214B3E:
    if (CMP_LE(eax, 9)) goto loc_00214B52; /* jle: less or equal (signed <=) */

loc_00214B43:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214B52:
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    MEM8(ecx) = 0x2E;
    eax = ZX8(MEM8(esi + 6));
    ecx++;
    if (CMP_LE(eax, 0x63)) goto loc_00214B82; /* jle: less or equal (signed <=) */

loc_00214B64:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = 0xA;
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx++;
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214B82:
    if (CMP_LE(eax, 9)) goto loc_00214B96; /* jle: less or equal (signed <=) */

loc_00214B87:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214B96:
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    MEM8(ecx) = 0x2E;
    eax = ZX8(MEM8(esi + 7));
    ecx++;
    if (CMP_LE(eax, 0x63)) goto loc_00214BC6; /* jle: less or equal (signed <=) */

loc_00214BA8:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = 0xA;
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx++;
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214BC6:
    if (CMP_LE(eax, 9)) goto loc_00214BDA; /* jle: less or equal (signed <=) */

loc_00214BCB:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_LO8(eax, LO8(eax) + 0x30);
    MEM8(ecx) = LO8(eax);
    ecx++;
    eax = edx;

loc_00214BDA:
    SET_LO8(eax, LO8(eax) + 0x30);
    POP32(esp, esi);
    MEM8(ecx) = LO8(eax);
    POP32(esp, ebx);
    eax = edi;
    MEM8(ecx + 1) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
