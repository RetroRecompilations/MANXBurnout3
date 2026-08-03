#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00022040
 * Original: 0x00022040 - 0x000222AB (619 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022040:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, esi);
    esi = ecx;
    if ((eax == 0)) goto loc_00022201; /* je: equal / zero */

loc_00022050:
    eax--;
    if ((eax != 0)) goto loc_000222A7; /* jne: not equal / not zero */

loc_00022057:
    eax = MEM32(esi + 0x1C);
    eax--;
    if (CMP_A(eax, 3)) goto loc_000222A7; /* ja: above (unsigned >) */

loc_00022064:
    { uint32_t _jt = MEM32(eax * 4 + 0x222AC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0002206Bu) goto loc_0002206B;
    if (_jt == 0x000220EBu) goto loc_000220EB;
    if (_jt == 0x0002213Fu) goto loc_0002213F;
    if (_jt == 0x00022187u) goto loc_00022187;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002206B:
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_0002207C:
    if (CMP_EQ(eax, 0xA)) goto loc_000222A7; /* je: equal / zero */

loc_00022085:
    if (CMP_NE(eax, 0xD)) goto loc_000220AC; /* jne: not equal / not zero */

loc_0002208A:
    if (CMP_EQ(MEM32(0x4D1FC0), 9)) goto loc_000220B4; /* je: equal / zero */

loc_00022093:
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_000220A1:
    MEM32(esi + 0x1C) = 5;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000220AC:
    if (TEST_NZ(eax, eax)) goto loc_000222A7; /* jne: not equal / not zero */

loc_000220B4:
    eax = MEM32(0x44CB08);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00021BE0(); /* call 0x00021BE0 */

loc_000220C0:
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D13C0);
    PUSH32(esp, 0); sub_001B47F0(); /* call 0x001B47F0 */

loc_000220CB:
    if (TEST_NZ(eax, eax)) goto loc_000222A0; /* jne: not equal / not zero */

loc_000220D3:
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_000220E0:
    MEM32(esi + 0x1C) = 5;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000220EB:
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_000220FC:
    if (CMP_EQ(eax, 4)) goto loc_000222A7; /* je: equal / zero */

loc_00022105:
    if (CMP_EQ(eax, 0xD)) goto loc_00022093; /* je: equal / zero */

loc_0002210A:
    if (TEST_NZ(eax, eax)) goto loc_000222A7; /* jne: not equal / not zero */

loc_00022112:
    eax = MEM32(0x44CB08);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4B60(); /* call 0x001B4B60 */

loc_0002212B:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00022093; /* je: equal / zero */

loc_00022134:
    MEM32(esi + 0x1C) = 2;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002213F:
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00022150:
    if (CMP_EQ(eax, 8)) goto loc_000222A7; /* je: equal / zero */

loc_00022159:
    if (CMP_EQ(eax, 0xD)) goto loc_00022093; /* je: equal / zero */

loc_00022162:
    if (TEST_NZ(eax, eax)) goto loc_000222A7; /* jne: not equal / not zero */

loc_0002216A:
    eax = 0x4D13C0;
    PUSH32(esp, 0); sub_001B49C0(); /* call 0x001B49C0 */

loc_00022174:
    if (TEST_Z(eax, eax)) goto loc_00022093; /* je: equal / zero */

loc_0002217C:
    MEM32(esi + 0x1C) = 3;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022187:
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00022198:
    if (CMP_EQ(eax, 5)) goto loc_000222A7; /* je: equal / zero */

loc_000221A1:
    if (CMP_EQ(eax, 0xD)) goto loc_00022093; /* je: equal / zero */

loc_000221AA:
    if (TEST_NZ(eax, eax)) goto loc_000222A7; /* jne: not equal / not zero */

loc_000221B2:
    eax = MEM32(0x44CB08);
    ecx = MEM32(0x44CB04);
    eax = eax + 0x14;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x44CB08) = eax;
    if (CMP_B(eax, ecx)) goto loc_000222A7; /* jb: below (unsigned <) */

loc_000221CD:
    eax = MEM32(0x44CAAC);
    PUSH32(esp, 0x420C88);
    PUSH32(esp, 0); sub_00018440(); /* call 0x00018440 */

loc_000221DC:
    edx = MEM32(0x44CAAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    ecx = 0x3F9BA0;
    MEM32(0x44CAA8) = edx;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_000221F6:
    MEM32(esi + 0x1C) = 6;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022201:
    eax = MEM32(0x4D13C0);
    if (TEST_Z(eax, eax)) goto loc_00022220; /* je: equal / zero */

loc_0002220A:
    if (CMP_EQ(eax, 0xD)) goto loc_00022220; /* je: equal / zero */

loc_0002220F:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00022220:
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x4D1FBC);
    edx = esp + 8;
    MEM32(ecx + 0x134) = 0;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00022248:
    eax = MEM32(esi + 0x18);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x44CB08);
    if (TEST_Z(eax, eax)) goto loc_00022264; /* je: equal / zero */

loc_00022254:
    PUSH32(esp, 0); sub_00021BE0(); /* call 0x00021BE0 */

loc_00022259:
    MEM32(esi + 0x1C) = 4;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022264:
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00021BE0(); /* call 0x00021BE0 */

loc_0002226B:
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D13C0);
    PUSH32(esp, 0); sub_001B47F0(); /* call 0x001B47F0 */

loc_00022276:
    if (TEST_NZ(eax, eax)) goto loc_000222A0; /* jne: not equal / not zero */

loc_0002227A:
    ecx = MEM32(0x3F9BA4);
    if (TEST_Z(ecx, ecx)) goto loc_00022295; /* je: equal / zero */

loc_00022284:
    edx = MEM32(0x3F9BA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00022295:
    MEM32(esi + 0x1C) = 5;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000222A0:
    MEM32(esi + 0x1C) = 1;

loc_000222A7:
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
