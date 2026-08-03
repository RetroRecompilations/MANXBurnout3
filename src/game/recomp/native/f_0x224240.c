#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00224240
 * Original: 0x00224240 - 0x002243DA (410 bytes, 123 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224240:
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00222F40(); /* call 0x00222F40 */

loc_00224251:
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002243D7; /* jne: not equal / not zero */

loc_0022425E:
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00220900(); /* call 0x00220900 */

loc_00224268:
    esp = esp + 0xC;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00224279; /* jne: not equal / not zero */

loc_00224271:
    POP32(esp, esi);
    eax = 0xFFFFFFF7u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00224279:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* cmp ebp, ebx - flags set for next jcc */
    ecx = esi + 0x108;
    PUSH32(esp, edi);
    MEM16(ecx) = 2;
    MEM16(esi + 0x10A) = LO16(ebx);
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x110) = ebx;
    MEM32(esi + 0x114) = ebx;
    if (CMP_NE(ebp, ebx)) goto loc_002242AC; /* jne: not equal / not zero */

loc_002242A7:
    ebp = 0x3830E0;

loc_002242AC:
    if (CMP_G(MEM32(esp + 0x24), ebx)) goto loc_002242C8; /* jg: greater (signed >) */

loc_002242B2:
    eax = MEM32(esi + 0x120);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x16B;
    eax = eax + 0x50;
    MEM32(esp + 0x24) = eax;

loc_002242C8:
    SET_LO8(eax, MEM8(ebp));
    edi = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002242EA; /* je: equal / zero */

loc_002242D1:
    if (CMP_EQ(LO8(eax), 0x3A)) goto loc_002242EA; /* je: equal / zero */

loc_002242D5:
    if (CMP_AE(edi, 0xFF)) goto loc_002242EA; /* jae: above or equal (unsigned >=) */

loc_002242DD:
    MEM8(edi + esi + 8) = LO8(eax);
    SET_LO8(eax, MEM8(edi + ebp + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002242D1; /* jne: not equal / not zero */

loc_002242EA:
    MEM8(edi + esi + 8) = LO8(ebx);
    ebx = esi + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00214A30(); /* call 0x00214A30 */

loc_002242F8:
    edx = ZX8(MEM8(esi + 0x10E));
    eax = ZX8(MEM8(esi + 0x10F));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + 0x10C));
    esp = esp + 8;
    SET_LO8(ecx, MEM8(esi + 0x10D));
    ecx = ecx << 8;
    ecx = ecx | edx;
    ecx = ecx << 8;
    ecx = ecx | eax;
    if ((ecx != 0)) goto loc_00224348; /* jne: not equal / not zero */

loc_00224323:
    eax = MEM32(esp + 0x20);
    MEM8(esi + 0x10F) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 0x10E) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 0x10D) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 0x10C) = LO8(eax);

loc_00224348:
    if (CMP_NE(MEM8(edi + ebp), 0x3A)) goto loc_0022436C; /* jne: not equal / not zero */

loc_0022434E:
    edi = edi + ebp + 1;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00243A41(); /* call 0x00243A41 */

loc_00224358:
    eax = (uint32_t)((int32_t)eax >> 8);
    PUSH32(esp, edi);
    MEM8(esi + 0x10A) = LO8(eax);
    PUSH32(esp, 0); sub_00243A41(); /* call 0x00243A41 */

loc_00224367:
    esp = esp + 8;
    goto loc_0022437B;

loc_0022436C:
    eax = MEM32(esp + 0x24);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(esi + 0x10A) = LO8(ecx);

loc_0022437B:
    ecx = ZX8(MEM8(esi + 0x10F));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esi + 0x10C));
    MEM8(esi + 0x10B) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x10E));
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(edx, MEM8(esi + 0x10D));
    edx = edx << 8;
    edx = edx | eax;
    edx = edx << 8;
    edx = edx | ecx;
    if ((edx != 0)) goto loc_002243CB; /* jne: not equal / not zero */

loc_002243AB:
    PUSH32(esp, 0x7530);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00221050(); /* call 0x00221050 */

loc_002243B6:
    esp = esp + 8;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x118) = 1;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002243CB:
    MEM32(esi + 0x118) = 2;
    eax = 0; /* xor self */

loc_002243D7:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
