#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221320
 * Original: 0x00221320 - 0x00221420 (256 bytes, 103 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221320:
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x70);
    eax = 0; /* xor self */
    if (CMP_NE(edi, eax)) goto loc_0022134D; /* jne: not equal / not zero */

loc_0022132A:
    MEM32(ebx + 0x64) = eax;
    MEM32(ebx + 0x68) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM32(ebx + 0x6C) = eax;
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_0022133D:
    ecx = MEM32(ebx + 0x64);
    MEM32(ebx + 0x70) = eax;
    eax = MEM32(ebx + 0x6C);
    esp = esp + 4;
    eax = eax - ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0022134D:
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x68);
    ecx = 0; /* xor self */
    /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(eax, ebp)) goto loc_00221386; /* jge: greater or equal (signed >=) */

loc_00221358:
    esi = ebp;
    /* nop */

loc_00221360:
    edx = ZX8(MEM8(edi + eax + 0xA));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(edi + eax + 8));
    SET_LO8(ecx, MEM8(edi + eax + 9));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = ZX8(MEM8(edi + eax + 0xB));
    ecx = ecx << 8;
    ecx = ecx | edx;
    eax = eax + ecx;
    if (CMP_L(eax, esi)) goto loc_00221360; /* jl: less (signed <) */

loc_00221384:
    /* cmp eax, ebp - flags set for next jcc */

loc_00221386:
    if (CMP_LE(eax, ebp)) goto loc_0022138A; /* jle: less or equal (signed <=) */

loc_00221388:
    eax = eax - ecx;

loc_0022138A:
    if (CMP_LE(eax & eax, 0)) goto loc_002213B4; /* jle: less or equal (signed <=) */

loc_0022138E:
    ecx = MEM32(ebx + 0x64);
    ecx = ecx - eax;
    edx = ecx;
    ecx = ecx >> 2;
    esi = edi + eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx = MEM32(ebx + 0x64);
    ecx = MEM32(ebx + 0x68);
    edx = edx - eax;
    ecx = ecx - eax;
    MEM32(ebx + 0x64) = edx;
    MEM32(ebx + 0x68) = ecx;

loc_002213B4:
    ecx = MEM32(ebx + 0x64);
    edx = MEM32(ebx + 0x6C);
    eax = MEM32(esp + 0x10);
    edx = edx - ecx;
    if (CMP_LE(eax, edx)) goto loc_00221417; /* jle: less or equal (signed <=) */

loc_002213C4:
    esi = MEM32(esp + 0x14);
    ecx = ecx + eax;
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_002213D2:
    ebp = eax;
    esp = esp + 4;
    if (TEST_NZ(ebp, ebp)) goto loc_002213DF; /* jne: not equal / not zero */

loc_002213DB:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002213DF:
    ecx = MEM32(ebx + 0x64);
    esi = MEM32(ebx + 0x70);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_002213FE:
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x64);
    eax = ecx + edx;
    edx = MEM32(esp + 0x18);
    esp = esp + 4;
    eax = eax + edx;
    MEM32(ebx + 0x70) = ebp;
    MEM32(ebx + 0x6C) = eax;

loc_00221417:
    eax = MEM32(ebx + 0x6C);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax - ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
