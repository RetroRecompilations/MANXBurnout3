#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D4EB2
 * Original: 0x001D4EB2 - 0x001D5039 (391 bytes, 150 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4EB2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D4EB2:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ebx + 0xFFF;
    esi = esi >> 0xC;
    eax = esi;
    eax = eax << 0xC;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    MEM8(ebp + -12) = 0x40;
    MEM8(ebp + 0xF) = 0;

loc_001D4EDA:
    ecx = ZX8(MEM8(ebp + 0xF));
    ecx = MEM32(edi + ecx * 4 + 0x60);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001D4F0D; /* je: equal / zero */

loc_001D4EE9:
    if (CMP_A(esi, MEM32(ecx + 0x30))) goto loc_001D4F19; /* ja: above (unsigned >) */

loc_001D4EEE:
    if (CMP_A(eax, MEM32(ecx + 0x1C))) goto loc_001D4F19; /* ja: above (unsigned >) */

loc_001D4EF3:
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D4360(); /* call 0x001D4360 */

loc_001D4F00:
    if (TEST_NZ(eax, eax)) goto loc_001D4FFC; /* jne: not equal / not zero */

loc_001D4F08:
    eax = MEM32(ebp + -8);
    goto loc_001D4F19;

loc_001D4F0D:
    if (CMP_NE(MEM8(ebp + -12), 0x40)) goto loc_001D4F19; /* jne: not equal / not zero */

loc_001D4F13:
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(ebp + -12) = LO8(ecx);

loc_001D4F19:
    MEM8(ebp + 0xF) = MEM8(ebp + 0xF) + 1;
    if (CMP_B(MEM8(ebp + 0xF), 0x40)) goto loc_001D4EDA; /* jb: below (unsigned <) */

loc_001D4F22:
    if (CMP_EQ(MEM8(ebp + -12), 0x40)) goto loc_001D5030; /* je: equal / zero */

loc_001D4F2C:
    if (TEST_Z(MEM8(edi + 0x14), 2)) goto loc_001D5030; /* je: equal / zero */

loc_001D4F36:
    ecx = MEM32(edi + 0x20);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebx + 0x1000;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_A(eax, ecx)) goto loc_001D4F50; /* ja: above (unsigned >) */

loc_001D4F4D:
    MEM32(ebp + 8) = ecx;

loc_001D4F50:
    esi = MEM32(0x36B908);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ebx = 0x2000;
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_001D4F6A:
    if (CMP_GE(eax & eax, 0)) goto loc_001D4F9C; /* jge: greater or equal (signed >=) */

loc_001D4F6E:
    ecx = MEM32(ebp + 0xC);
    if (CMP_EQ(MEM32(ebp + 8), ecx)) goto loc_001D4F94; /* je: equal / zero */

loc_001D4F76:
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    if (CMP_AE(MEM32(ebp + 8), ecx)) goto loc_001D4F81; /* jae: above or equal (unsigned >=) */

loc_001D4F7E:
    MEM32(ebp + 8) = ecx;

loc_001D4F81:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_001D4F90:
    if (TEST_S(eax, eax)) goto loc_001D4F6E; /* jl: less (signed <) */

loc_001D4F94:
    if (TEST_S(eax, eax)) goto loc_001D5030; /* jl: less (signed <) */

loc_001D4F9C:
    eax = MEM32(ebp + 8);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x24);
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_A(ecx, eax)) goto loc_001D4FB2; /* ja: above (unsigned >) */

loc_001D4FAF:
    MEM32(ebp + -16) = eax;

loc_001D4FB2:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_001D4FC5:
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_001D501D; /* jl: less (signed <) */

loc_001D4FCB:
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -16);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D4D94(); /* call 0x001D4D94 */

loc_001D4FE7:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D4FF0; /* jne: not equal / not zero */

loc_001D4FEB:
    esi = 0xC0000017u;

loc_001D4FF0:
    if (TEST_S(esi, esi)) goto loc_001D501D; /* jl: less (signed <) */

loc_001D4FF4:
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x28);
    goto loc_001D5032;

loc_001D4FFC:
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 4;
    PUSH32(esp, 0);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D451D(); /* call 0x001D451D */

loc_001D500D:
    PUSH32(esp, MEM32(ebp + -8));
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D47C2(); /* call 0x001D47C2 */

loc_001D5019:
    eax = esi;
    goto loc_001D5032;

loc_001D501D:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B904), _icall_esp); /* indirect call */
    }

loc_001D5030:
    eax = 0; /* xor self */

loc_001D5032:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
