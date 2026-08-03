#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020BEB0
 * Original: 0x0020BEB0 - 0x0020C272 (962 bytes, 294 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020BEB0:
    esp = esp - 0xD0;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xD8);
    eax = MEM32(ebx + 0xA4);
    ebx = ebx + 0x28;
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_0020BED9; /* je: equal / zero */

loc_0020BECD:
    eax = MEM32(ebx);
    eax = eax & 0xFFFFBFFFu;
    MEM32(ebx + 0x7C) = ecx;
    MEM32(ebx) = eax;

loc_0020BED9:
    eax = MEM32(esp + 0xDC);
    if (CMP_EQ(eax, ecx)) goto loc_0020C25E; /* je: equal / zero */

loc_0020BEE8:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x54);
    edi = edi >> 1;
    ebp = ebx + 0x94;
    esi = eax + 0x2C;
    eax = MEM32(ebp);
    edi = edi & 1;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x28) = edi;
    if (CMP_EQ(eax, ecx)) goto loc_0020BF33; /* je: equal / zero */

loc_0020BF0B:
    eax = MEM32(ebx);
    eax = eax >> 5;
    eax = eax & 1;
    if (CMP_EQ(edi, eax)) goto loc_0020BF33; /* je: equal / zero */

loc_0020BF17:
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx;
    PUSH32(esp, 0); sub_0020B590(); /* call 0x0020B590 */

loc_0020BF20:
    ecx = MEM32(ebp);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F4217(); /* call 0x002F4217 */

loc_0020BF2C:
    MEM32(ebp) = 0;

loc_0020BF33:
    if (CMP_NE(MEM32(ebp), 0)) goto loc_0020C02B; /* jne: not equal / not zero */

loc_0020BF3D:
    eax = MEM32(ebx + 0x90);
    ecx = MEM32(ebx);
    edx = MEM32(eax + 0x40);
    ecx = ecx >> 0x18;
    edx = edx & 1;
    ecx = ~ecx;
    PUSH32(esp, edx);
    ecx = ecx & 1;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, 1);
    edx = edi;
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_0020BDF0(); /* call 0x0020BDF0 */

loc_0020BF65:
    ecx = MEM32(ebx);
    eax = 0; /* xor self */
    esp = esp + 0xC;
    /* test ecx, 0x1000000 - flags set for next jcc */
    MEM32(esp + 0x48) = eax;
    if (TEST_Z(ecx, 0x1000000)) goto loc_0020BF7E; /* je: equal / zero */

loc_0020BF78:
    MEM32(esp + 0x44) = eax;
    goto loc_0020BF8E;

loc_0020BF7E:
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x20010;
    MEM32(esp + 0x44) = ecx;

loc_0020BF8E:
    PUSH32(esp, eax);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, ebp);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x90);
    edx = esp + 0x64;
    MEM32(esp + 0x4C) = 0x18;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x58) = 0x3C3878;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7128(); /* call 0x002F7128 */

loc_0020BFC0:
    if (CMP_GE(eax & eax, 0)) goto loc_0020BFFE; /* jge: greater or equal (signed >=) */

loc_0020BFC4:
    edx = MEM32(0x41CB0C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x6C;
    PUSH32(esp, 0x36EAF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0020BFDC:
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, 0x36EAE4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0020BFF0:
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

loc_0020BFFE:
    MEM32(0x41CB0C) = MEM32(0x41CB0C) + 1;
    eax = MEM32(ebx + 0x90);
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(eax + 0x48);
    eax = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F6750(); /* call 0x002F6750 */

loc_0020C01B:
    if (TEST_S(eax, eax)) goto loc_0020C16D; /* jl: less (signed <) */

loc_0020C023:
    MEM32(esp + 0x10) = 1;

loc_0020C02B:
    SET_LO8(edx, MEM8(esi + 0xD));
    if (CMP_NE(LO8(edx), MEM8(ebx + 0x179))) goto loc_0020C05A; /* jne: not equal / not zero */

loc_0020C036:
    eax = MEM32(esi + 4);
    if (CMP_NE(eax, MEM32(ebx + 0x170))) goto loc_0020C05A; /* jne: not equal / not zero */

loc_0020C041:
    SET_LO8(ecx, MEM8(esi + 0xC));
    if (CMP_NE(LO8(ecx), MEM8(ebx + 0x178))) goto loc_0020C05A; /* jne: not equal / not zero */

loc_0020C04C:
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0020C18E; /* je: equal / zero */

loc_0020C058:
    goto loc_0020C06E;

loc_0020C05A:
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0020C06E; /* jne: not equal / not zero */

loc_0020C062:
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx;
    PUSH32(esp, 0); sub_0020B590(); /* call 0x0020B590 */

loc_0020C06B:
    esp = esp + 4;

loc_0020C06E:
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x36DC18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_0020C07C:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0020C0F4; /* jne: not equal / not zero */

loc_0020C083:
    SET_LO16(eax, ZX8(MEM8(esi + 0xD)));
    ecx = MEM32(esi);
    MEM16(esp + 0x2E) = LO16(eax);
    MEM32(esp + 0x30) = ecx;
    MEM16(esp + 0x2C) = 0x69;
    MEM16(esp + 0x3A) = 4;
    MEM16(esp + 0x3C) = 2;
    eax = eax + eax * 8;
    eax = eax << 2;
    MEM16(esp + 0x38) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 6;
    MEM32(esp + 0x34) = eax;
    MEM16(esp + 0x3E) = 0x40;
    ecx = esp + 0x2C;

loc_0020C0CB:
    edx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F6734(); /* call 0x002F6734 */

loc_0020C0D5:
    if (CMP_GE(eax & eax, 0)) goto loc_0020C14A; /* jge: greater or equal (signed >=) */

loc_0020C0D9:
    eax = MEM32(ebp);
    PUSH32(esp, eax);

loc_0020C0DD:
    PUSH32(esp, 0); sub_002F4217(); /* call 0x002F4217 */

loc_0020C0E2:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

loc_0020C0F4:
    SET_LO16(eax, ZX8(MEM8(esi + 0xC)));
    SET_LO16(edx, ZX8(MEM8(esi + 0xD)));
    ecx = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM16(esp + 0x22) = LO16(eax);
    SET_LO16(eax, LO16(eax) >> 3);
    MEM16(esp + 0x24) = LO16(ecx);
    ecx = MEM32(esi);
    MEM32(esp + 0x18) = ecx;
    MEM16(esp + 0x16) = LO16(edx);
    MEM16(esp + 0x14) = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x16));
    MEM16(esp + 0x20) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esp + 0x1C) = eax;
    ecx = esp + 0x14;
    goto loc_0020C0CB;

loc_0020C14A:
    eax = MEM32(ebx);
    if (TEST_Z(eax, 0x10000)) goto loc_0020C176; /* je: equal / zero */

loc_0020C153:
    ecx = MEM32(ebx + 0x188);
    edx = MEM32(ecx + 0xBC);
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F6054(); /* call 0x002F6054 */

loc_0020C169:
    if (CMP_GE(eax & eax, 0)) goto loc_0020C17D; /* jge: greater or equal (signed >=) */

loc_0020C16D:
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    goto loc_0020C0DD;

loc_0020C176:
    eax = eax | 0x800000;
    MEM32(ebx) = eax;

loc_0020C17D:
    ecx = 7;
    edi = ebx + 0x16C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x28);

loc_0020C18E:
    MEM32(ebx) = MEM32(ebx) | 0x800000;
    edx = MEM32(esp + 0xE8);
    eax = MEM32(edx + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020DFD0(); /* call 0x0020DFD0 */

loc_0020C1A4:
    ecx = MEM32(ebx + 0x90);
    edx = MEM32(ecx + 0x48);
    esi = MEM32(esp + 0xEC);
    eax = eax - edx;
    edx = MEM32(esi + 0x34);
    esp = esp + 4;
    esi = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F60F0(); /* call 0x002F60F0 */

loc_0020C1CA:
    if (TEST_S(eax, eax)) goto loc_0020C255; /* jl: less (signed <) */

loc_0020C1D2:
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F56D4(); /* call 0x002F56D4 */

loc_0020C1E1:
    if (TEST_S(eax, eax)) goto loc_0020C255; /* jl: less (signed <) */

loc_0020C1E5:
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F5730(); /* call 0x002F5730 */

loc_0020C1F0:
    if (TEST_S(eax, eax)) goto loc_0020C255; /* jl: less (signed <) */

loc_0020C1F4:
    if (TEST_Z(MEM32(ebx), 0x400000)) goto loc_0020C204; /* je: equal / zero */

loc_0020C1FC:
    eax = MEM32(ebx + 0x190);
    goto loc_0020C21C;

loc_0020C204:
    if (TEST_Z(edi, edi)) goto loc_0020C213; /* je: equal / zero */

loc_0020C208:
    ecx = MEM32(ebx + 0x90);
    eax = MEM32(ecx + 0x50);
    goto loc_0020C21C;

loc_0020C213:
    edx = MEM32(ebx + 0x90);
    eax = MEM32(edx + 0x54);

loc_0020C21C:
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F563C(); /* call 0x002F563C */

loc_0020C226:
    if (TEST_S(eax, eax)) goto loc_0020C255; /* jl: less (signed <) */

loc_0020C22A:
    eax = edi;
    esi = ebx;
    PUSH32(esp, 0); sub_0020B4B0(); /* call 0x0020B4B0 */

loc_0020C233:
    if (TEST_Z(eax, eax)) goto loc_0020C255; /* je: equal / zero */

loc_0020C237:
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0xE8);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0x4000;
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    MEM32(ebx + 0x7C) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

loc_0020C255:
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    goto loc_0020C0DD;

loc_0020C25E:
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx;
    PUSH32(esp, 0); sub_0020B590(); /* call 0x0020B590 */

loc_0020C267:
    esp = esp + 4;
    POP32(esp, ebx);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

}
