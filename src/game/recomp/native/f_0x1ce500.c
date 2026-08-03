#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE500
 * Original: 0x001CE500 - 0x001CE66E (366 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE500:
    eax = MEM32(edi + 0x24);
    /* cmp eax, 0x10 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_A(eax, 0x10)) goto loc_001CE667; /* ja: above (unsigned >) */

loc_001CE512:
    eax = ZX8(MEM8(eax + 0x1CE68C));
    { uint32_t _jt = MEM32(eax * 4 + 0x1CE670); /* switch: 7 entries, 7 targets */
    if (_jt == 0x001CE520u) goto loc_001CE520;
    if (_jt == 0x001CE566u) goto loc_001CE566;
    if (_jt == 0x001CE597u) goto loc_001CE597;
    if (_jt == 0x001CE5C9u) goto loc_001CE5C9;
    if (_jt == 0x001CE629u) goto loc_001CE629;
    if (_jt == 0x001CE660u) goto loc_001CE660;
    if (_jt == 0x001CE667u) goto loc_001CE667;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CE520:
    eax = MEM32(edi + 0x260);
    if (TEST_Z(eax, eax)) goto loc_001CE540; /* je: equal / zero */

loc_001CE52A:
    ecx = MEM32(eax);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_001CE535:
    if (TEST_Z(MEM8(esp + 0xC), 2)) goto loc_001CE667; /* je: equal / zero */

loc_001CE540:
    ecx = MEM32(edi + 0x244);
    if (TEST_Z(ecx, ecx)) goto loc_001CE558; /* je: equal / zero */

loc_001CE54A:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001CE54F:
    if (CMP_EQ(eax, 2)) goto loc_001CE667; /* je: equal / zero */

loc_001CE558:
    esi = edi;
    PUSH32(esp, 0); sub_001CED10(); /* call 0x001CED10 */

loc_001CE55F:
    MEM32(edi + 0x24) = 0x10;

loc_001CE566:
    esi = edi + 0x11C;
    edx = esi;
    eax = ebp;
    edx = edx - ebp;

loc_001CE572:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001CE572; /* jne: not equal / not zero */

loc_001CE57C:
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x240);
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_001CE58A:
    MEM32(edi + 0x244) = eax;
    MEM32(edi + 0x24) = 1;

loc_001CE597:
    ecx = MEM32(edi + 0x244);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_001CE5A2:
    if (CMP_EQ(eax, 2)) goto loc_001CE667; /* je: equal / zero */

loc_001CE5AB:
    ecx = MEM32(edi + 0x244);
    edx = MEM32(edi + 0x250);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001CE5C2:
    MEM32(edi + 0x24) = 2;

loc_001CE5C9:
    ecx = MEM32(edi + 0x244);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001CE5D4:
    if (CMP_EQ(eax, 2)) goto loc_001CE667; /* je: equal / zero */

loc_001CE5DD:
    esi = MEM32(edi + 0x250);
    ecx = MEM32(esi + 8);
    eax = ecx + esi;
    MEM32(edi + 0x24C) = eax;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(esi + 0x14);
    edx = edx + MEM32(esi + 0x10);
    eax = edx + ecx + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    if (CMP_LE(eax, 0x800)) goto loc_001CE622; /* jle: less or equal (signed <=) */

loc_001CE60A:
    ecx = MEM32(edi + 0x244);
    edx = MEM32(ecx);
    eax = eax + 0xFFFFF800u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = esi + 0x800;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001CE622:
    MEM32(edi + 0x24) = 3;

loc_001CE629:
    ecx = MEM32(edi + 0x244);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001CE634:
    if (CMP_EQ(eax, 2)) goto loc_001CE667; /* je: equal / zero */

loc_001CE639:
    eax = MEM32(edi + 0x250);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(edi + 0x244);
    ecx = ecx + eax;
    MEM32(edi + 0x254) = ecx;
    eax = MEM32(edx + 0x30);
    MEM32(edi + 0x25C) = eax;
    MEM32(edi + 0x24) = 4;

loc_001CE660:
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001CE667:
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
