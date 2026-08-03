#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0FC7
 * Original: 0x001D0FC7 - 0x001D10B4 (237 bytes, 100 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0FC7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001D0FC7:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_001D0FDB; /* je: equal / zero */

loc_001D0FD9:
    MEM32(edi) = ebx;

loc_001D0FDB:
    esi = MEM32(ebp + 0x18);
    if (CMP_EQ(esi, ebx)) goto loc_001D104A; /* je: equal / zero */

loc_001D0FE2:
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ~ecx;
    ecx = ecx & esi;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7F8), _icall_esp); /* indirect call */
    }

loc_001D101C:
    if (CMP_L(eax, ebx)) goto loc_001D1035; /* jl: less (signed <) */

loc_001D1020:
    if (CMP_EQ(eax, edi)) goto loc_001D1035; /* je: equal / zero */

loc_001D1024:
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_001D1030; /* je: equal / zero */

loc_001D102B:
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_001D1030:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D10AD;

loc_001D1035:
    ecx = 0xC0000011u;
    if (CMP_NE(eax, ecx)) goto loc_001D10A5; /* jne: not equal / not zero */

loc_001D103E:
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_001D1047; /* je: equal / zero */

loc_001D1045:
    MEM32(eax) = ebx;

loc_001D1047:
    PUSH32(esp, ecx);
    goto loc_001D10A6;

loc_001D104A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7F8), _icall_esp); /* indirect call */
    }

loc_001D1061:
    if (CMP_NE(eax, 0x103)) goto loc_001D107A; /* jne: not equal / not zero */

loc_001D1068:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B848), _icall_esp); /* indirect call */
    }

loc_001D1073:
    if (CMP_L(eax, ebx)) goto loc_001D1085; /* jl: less (signed <) */

loc_001D1077:
    eax = MEM32(ebp + -8);

loc_001D107A:
    if (CMP_L(eax, ebx)) goto loc_001D1085; /* jl: less (signed <) */

loc_001D107E:
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_001D1030;

loc_001D1085:
    if (CMP_NE(eax, 0xC0000011u)) goto loc_001D1090; /* jne: not equal / not zero */

loc_001D108C:
    MEM32(edi) = ebx;
    goto loc_001D1030;

loc_001D1090:
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    if (CMP_NE(ecx, 0x80000000u)) goto loc_001D10A5; /* jne: not equal / not zero */

loc_001D10A0:
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_001D10A5:
    PUSH32(esp, eax);

loc_001D10A6:
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D10AB:
    eax = 0; /* xor self */

loc_001D10AD:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}
