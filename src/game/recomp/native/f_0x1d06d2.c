#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D06D2
 * Original: 0x001D06D2 - 0x001D0855 (387 bytes, 135 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D06D2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D06D2:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x130;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = 0; /* xor self */
    MEM32(ebp + -16) = esi;
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); sub_00243F9E(); /* call 0x00243F9E */

loc_001D06FB:
    POP32(esp, ecx);
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -24) = LO16(esi);

loc_001D0703:
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + -8), ebx)) goto loc_001D072F; /* jne: not equal / not zero */

loc_001D070A:
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D0FC7(); /* call 0x001D0FC7 */

loc_001D071E:
    if (TEST_Z(eax, eax)) goto loc_001D084B; /* je: equal / zero */

loc_001D0726:
    if (CMP_EQ(MEM32(ebp + -12), ebx)) goto loc_001D084B; /* je: equal / zero */

loc_001D072F:
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    ecx = ebp + -304;
    eax = edi;
    eax = eax - ecx;
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 1);
    /* test esi, esi - flags set for next jcc */
    ebx = ecx + eax * 2;
    eax = ebp + -304;
    if (TEST_Z(esi, esi)) goto loc_001D07AA; /* je: equal / zero */

loc_001D074F:
    PUSH32(esp, 0x36BCD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244A95(); /* call 0x00244A95 */

loc_001D075A:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    if (TEST_Z(eax, eax)) goto loc_001D0703; /* je: equal / zero */

loc_001D076D:
    ecx = edi;
    eax = eax - ecx;
    eax = eax + 4;
    if (CMP_AE(eax, ebx)) goto loc_001D07A3; /* jae: above or equal (unsigned >=) */

loc_001D0778:
    ebx = ebx - eax;
    esi = ebx;
    eax = ebp + eax + -304;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002442A0(); /* call 0x002442A0 */

loc_001D078D:
    edi = ebp + esi + -304;
    esi = esi >> 1;
    eax = 0x8C;
    esp = esp + 0xC;
    eax = eax - esi;
    MEM32(ebp + -4) = eax;

loc_001D07A3:
    esi = 0; /* xor self */
    goto loc_001D0703;

loc_001D07AA:
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244A95(); /* call 0x00244A95 */

loc_001D07B3:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_001D07F2; /* je: equal / zero */

loc_001D07B9:
    ecx = MEM32(ebp + -20);
    ecx = ecx + ecx;
    if (CMP_NE(MEM16(ecx + eax), 0x3D)) goto loc_001D07F2; /* jne: not equal / not zero */

loc_001D07C5:
    edi = eax + ecx + 2;
    PUSH32(esp, 0x36BCD0);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_00244A95(); /* call 0x00244A95 */

loc_001D07D7:
    esi = eax;
    /* test esi, esi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(esi, esi)) goto loc_001D07FF; /* jne: not equal / not zero */

loc_001D07DF:
    esi++;
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    goto loc_001D0703;

loc_001D07F2:
    eax = 0; /* xor self */
    eax++;
    esi = eax;
    MEM32(ebp + -8) = eax;
    goto loc_001D0703;

loc_001D07FF:
    eax = esi;
    eax = eax - edi;
    edi = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax >> 1);
    edi--;
    if (CMP_L(edi, eax)) goto loc_001D080F; /* jl: less (signed <) */

loc_001D080D:
    edi = eax;

loc_001D080F:
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_002449B6(); /* call 0x002449B6 */

loc_001D081B:
    eax = MEM32(ebp + 0x10);
    MEM16(eax + edi * 2) = MEM16(eax + edi * 2) & 0;
    eax = ebp + -304;
    esi = esi - eax;
    esi = esi + 4;
    esp = esp + 0xC;
    if (CMP_AE(esi, ebx)) goto loc_001D0844; /* jae: above or equal (unsigned >=) */

loc_001D0835:
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = esi - ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001D0844:
    MEM32(ebp + -16) = 1;

loc_001D084B:
    eax = MEM32(ebp + -16);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}
