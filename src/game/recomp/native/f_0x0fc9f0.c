#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FC9F0
 * Original: 0x000FC9F0 - 0x000FCB2D (317 bytes, 90 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC9F0:
    eax = MEM32(edi + 0x91B8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002425D0(); /* call 0x002425D0 */

loc_000FC9FD:
    ebp = 0; /* xor self */
    MEM32(edi + 0x91B8) = ebp;
    eax = MEM32(edi + 0x30E1C);
    esp = esp + 4;
    if (CMP_EQ(eax, ebp)) goto loc_000FCA21; /* je: equal / zero */

loc_000FCA12:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214820(); /* call 0x00214820 */

loc_000FCA18:
    esp = esp + 4;
    MEM32(edi + 0x30E1C) = ebp;

loc_000FCA21:
    eax = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(eax, ebp)) goto loc_000FCA46; /* jle: less or equal (signed <=) */

loc_000FCA2C:
    esi = edi + 8;
    /* nop */

loc_000FCA30:
    ecx = MEM32(esi);
    if (CMP_EQ(ecx, ebp)) goto loc_000FCA3B; /* je: equal / zero */

loc_000FCA36:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000FCA3B:
    eax = MEM32(edi + 0x28);
    ebx++;
    esi = esi + 4;
    if (CMP_L(ebx, eax)) goto loc_000FCA30; /* jl: less (signed <) */

loc_000FCA46:
    esi = edi + 0x4E0;
    /* nop */

loc_000FCA50:
    MEM32(edi + 0x7C) = ebp;
    MEM32(edi + 0x94) = ebp;
    PUSH32(esp, 0); sub_001B6A90(); /* call 0x001B6A90 */

loc_000FCA5E:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000FCA66; /* jne: not equal / not zero */

loc_000FCA62:
    SET_LO8(ebx, 0); /* xor self */
    goto loc_000FCA6E;

loc_000FCA66:
    MEM32(edi) = 0x18;
    SET_LO8(ebx, 1);

loc_000FCA6E:
    eax = MEM32(0x35FB48);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    MEM32(eax + 0x1DC0) = ebp;
    PUSH32(esp, 6);
    eax = eax + 0x1DBC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8EC), _icall_esp); /* indirect call */
    }

loc_000FCA8B:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000FCA50; /* je: equal / zero */

loc_000FCA8F:
    SET_LO8(eax, MEM8(edi + 0x996D));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FCAEA; /* je: equal / zero */

loc_000FCA9B:
    SET_LO8(eax, MEM8(edi + 0x996C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FCAC0; /* je: equal / zero */

loc_000FCAA5:
    eax = MEM32(edi + 0x9964);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00211BC0(); /* call 0x00211BC0 */

loc_000FCAB1:
    ecx = MEM32(edi + 0x9964);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00212910(); /* call 0x00212910 */

loc_000FCABD:
    esp = esp + 8;

loc_000FCAC0:
    edx = MEM32(edi + 0x9964);
    PUSH32(esp, edx);
    MEM8(edi + 0x996D) = 0;
    MEM8(edi + 0x9918) = 0;
    MEM8(edi + 0x996C) = 0;
    PUSH32(esp, 0); sub_00211BE0(); /* call 0x00211BE0 */

loc_000FCAE1:
    esp = esp + 4;
    MEM32(edi + 0x9964) = ebp;

loc_000FCAEA:
    eax = MEM32(edi + 0x937C);
    ecx = edi + 0x937C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_000FCAF9:
    edx = MEM32(edi + 0x92A8);
    ecx = edi + 0x92A8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000FCB07:
    MEM32(edi + 0x30E08) = ebp;
    MEM32(edi + 0x30E0C) = ebp;
    MEM8(edi + 0x30E02) = 0;
    MEM8(edi + 0x30E03) = 0;
    MEM32(edi + 0x30A84) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
