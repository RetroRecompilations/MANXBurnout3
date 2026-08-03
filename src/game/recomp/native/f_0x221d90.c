#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221D90
 * Original: 0x00221D90 - 0x00221E7E (238 bytes, 85 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221D90:
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00221DAA; /* je: equal / zero */

loc_00221DA1:
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_00221DAA:
    eax = MEM32(esi + 0x7C);
    if (CMP_EQ(eax, ebx)) goto loc_00221DBD; /* je: equal / zero */

loc_00221DB1:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00221DB7:
    esp = esp + 4;
    MEM32(esi + 0x7C) = ebx;

loc_00221DBD:
    eax = esi + 4;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM16(eax) = 2;
    eax = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0033A280(); /* call 0x0033A280 */

loc_00221DDE:
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0033A271(); /* call 0x0033A271 */

loc_00221DEB:
    MEM16(esi + 6) = LO16(eax);
    eax = MEM32(esp + 0x64);
    if (CMP_EQ(eax, ebx)) goto loc_00221E09; /* je: equal / zero */

loc_00221DF7:
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_00221E03:
    esp = esp + 0xC;
    MEM8(esi + 0x5B) = LO8(ebx);

loc_00221E09:
    /* cmp MEM16(esi + 0x8E), LO16(ebx) - flags set for next jcc */
    MEM32(esi + 0x5C) = 2;
    MEM32(esi + 0x60) = ebx;
    MEM16(esi + 0x8C) = LO16(ebx);
    if (CMP_EQ(MEM16(esi + 0x8E), LO16(ebx))) goto loc_00221E76; /* je: equal / zero */

loc_00221E23:
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002262F0(); /* call 0x002262F0 */

loc_00221E39:
    esp = esp + 0xC;
    if (CMP_LE(eax & eax, 0)) goto loc_00221E6F; /* jle: less or equal (signed <=) */

loc_00221E40:
    PUSH32(esp, 0x34);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F746963);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00221B40(); /* call 0x00221B40 */

loc_00221E53:
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    esi = esi + 0xE4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00226330(); /* call 0x00226330 */

loc_00221E64:
    esp = esp + 0x1C;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_00221E6F:
    MEM16(esi + 0x8E) = LO16(ebx);

loc_00221E76:
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}
