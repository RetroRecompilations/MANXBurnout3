#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CEB10
 * Original: 0x001CEB10 - 0x001CECD3 (451 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEB10:
    esp = esp - 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x260);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x24), _icall_esp); /* indirect call */
    }

loc_001CEB22:
    eax = MEM32(esi + 0x260);
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001CEB33:
    if (TEST_Z(MEM8(esp + 0xC), 2)) goto loc_001CEBC3; /* je: equal / zero */

loc_001CEB3E:
    eax = MEM32(esi + 0x248);
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001CEB4F:
    eax = MEM32(esi + 0x28);
    if (TEST_Z(LO8(eax), 1)) goto loc_001CEB7E; /* je: equal / zero */

loc_001CEB56:
    if (TEST_NZ(MEM32(esp + 4), 0x10000)) goto loc_001CEBC3; /* jne: not equal / not zero */

loc_001CEB60:
    eax = eax & 0xFFFFFFFEu;
    /* test LO8(eax), 2 - flags set for next jcc */
    MEM32(esi + 0x28) = eax;
    if (TEST_Z(LO8(eax), 2)) goto loc_001CEB77; /* je: equal / zero */

loc_001CEB6A:
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0); sub_001CE9F0(); /* call 0x001CE9F0 */

loc_001CEB75:
    goto loc_001CEB7E;

loc_001CEB77:
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001CE980(); /* call 0x001CE980 */

loc_001CEB7E:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    goto loc_001CEB90;

    /* nop */

loc_001CEB90:
    edi = 0; /* xor self */
    eax = esi + 0x9C;

loc_001CEB98:
    if (CMP_NE(MEM32(eax), 0x8000000Au)) goto loc_001CEBCF; /* jne: not equal / not zero */

loc_001CEBA0:
    edi++;
    eax = eax + 4;
    if (CMP_L(edi, 0x20)) goto loc_001CEB98; /* jl: less (signed <) */

loc_001CEBA9:
    /* cmp MEM8(esi + 0x2C), LO8(ebx) - flags set for next jcc */

loc_001CEBAC:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(esi + 0x2C), LO8(ebx))) goto loc_001CEBC3; /* je: equal / zero */

loc_001CEBB1:
    if (TEST_NZ(MEM8(esi + 0x28), 1)) goto loc_001CEBC3; /* jne: not equal / not zero */

loc_001CEBB7:
    eax = MEM32(esi + 0x248);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_001CEBC3:
    ecx = esi;
    PUSH32(esp, 0); sub_001CEAD0(); /* call 0x001CEAD0 */

loc_001CEBCA:
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_001CEBCF:
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_001CEBA9; /* je: equal / zero */

loc_001CEBD6:
    if (CMP_NE(MEM8(esi + 0x2C), LO8(ebx))) goto loc_001CEBAC; /* jne: not equal / not zero */

loc_001CEBDB:
    if (CMP_NE(MEM8(esi + 0x2D), LO8(ebx))) goto loc_001CEBA9; /* jne: not equal / not zero */

loc_001CEBE0:
    if (CMP_GE(MEM32(esp + 0x14), 8)) goto loc_001CEBA9; /* jge: greater or equal (signed >=) */

loc_001CEBE7:
    ebp = MEM32(esi + 0x264);
    edx = 0; /* xor self */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = edx;
    eax = edi;
    eax = eax << 0xD;
    eax = eax + ebp;
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x260);
    ebp = esi + 0x220;
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = 0x2000;
    MEM32(esp + 0x2C) = ebp;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_001CEC36:
    eax = esi + edi * 4 + 0x9C;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ebp);
    /* cmp eax, 0x2000 - flags set for next jcc */
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(eax, 0x2000)) goto loc_001CEC64; /* jne: not equal / not zero */

loc_001CEC57:
    ecx = MEM32(esi + 0x258);
    edx = MEM32(ecx + 0xC);
    if (CMP_A(edx, MEM32(esi))) goto loc_001CEC70; /* ja: above (unsigned >) */

loc_001CEC64:
    MEM8(esi + 0x2C) = 1;
    MEM32(esp + 0x2C) = 1;

loc_001CEC70:
    if (CMP_NE(eax, ebx)) goto loc_001CEC89; /* jne: not equal / not zero */

loc_001CEC74:
    edi = MEM32(esp + 0x1C);
    ecx = 0x800;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esp + 0x20) = 0x2000;

loc_001CEC89:
    if (TEST_NZ(MEM8(esi + 0x28), 1)) goto loc_001CECA4; /* jne: not equal / not zero */

loc_001CEC8F:
    eax = MEM32(esi + 0x248);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_001CECA1:
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) + 1;

loc_001CECA4:
    eax = MEM32(esi + 0x25C);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001CECB4:
    eax = eax - MEM32(esi + 0x22C);
    MEM32(esi + 0x234) = eax;
    eax = MEM32(esi + 0x248);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

}
