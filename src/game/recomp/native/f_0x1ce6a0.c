#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE6A0
 * Original: 0x001CE6A0 - 0x001CE8E7 (583 bytes, 171 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE6A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE6A0:
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x24);
    /* cmp eax, 0x10 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x10)) goto loc_001CE8DB; /* ja: above (unsigned >) */

loc_001CE6B9:
    eax = ZX8(MEM8(eax + 0x1CE908));
    ebx = 0; /* xor self */
    { uint32_t _jt = MEM32(eax * 4 + 0x1CE8E8); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001CE6C9u) goto loc_001CE6C9;
    if (_jt == 0x001CE6DDu) goto loc_001CE6DD;
    if (_jt == 0x001CE758u) goto loc_001CE758;
    if (_jt == 0x001CE781u) goto loc_001CE781;
    if (_jt == 0x001CE793u) goto loc_001CE793;
    if (_jt == 0x001CE8BAu) goto loc_001CE8BA;
    if (_jt == 0x001CE8CFu) goto loc_001CE8CF;
    if (_jt == 0x001CE8DBu) goto loc_001CE8DB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CE6C9:
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    edi = esi;
    PUSH32(esp, 0); sub_001CE500(); /* call 0x001CE500 */

loc_001CE6D5:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CE8DB; /* je: equal / zero */

loc_001CE6DD:
    edx = MEM32(esi + 0x24C);
    eax = MEM32(edx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x40));
    ecx = MEM32(esi + 0x254);
    eax = eax + ecx;
    MEM32(esi + 0x258) = eax;
    ecx = MEM32(eax + 0xC);
    if (CMP_L(ebp, ecx)) goto loc_001CE706; /* jl: less (signed <) */

loc_001CE700:
    ebp = ecx + -10240;

loc_001CE706:
    edx = MEM32(esi + 0x250);
    ecx = MEM32(edx + 0x20);
    edx = MEM32(eax + 8);
    /* cmp ebp, ebx - flags set for next jcc */
    if (CMP_L(ebp, ebx)) ebp = ebx; /* cmovl */
    ecx = ecx + edx;
    eax = ebp + 0x7FF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 0xB);
    eax = eax << 0xB;
    eax = eax + ecx;
    MEM32(esi + 0x22C) = ecx;
    ecx = MEM32(esi + 0x244);
    MEM32(esi + 0x230) = eax;
    eax = MEM32(esi + 0x22C);
    edi = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0x10), _icall_esp); /* indirect call */
    }

loc_001CE751:
    MEM32(esi + 0x24) = 5;

loc_001CE758:
    ecx = MEM32(esi + 0x244);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001CE763:
    if (CMP_EQ(eax, 2)) goto loc_001CE8DB; /* je: equal / zero */

loc_001CE76C:
    MEM32(esi + 0x24) = 6;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi) = ebx;
    MEM8(esi + 0x2D) = LO8(ebx);

loc_001CE781:
    PUSH32(esp, 0); sub_001CEFC0(); /* call 0x001CEFC0 */

loc_001CE786:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CE8DB; /* je: equal / zero */

loc_001CE78E:
    PUSH32(esp, 0); sub_001CECE0(); /* call 0x001CECE0 */

loc_001CE793:
    eax = MEM32(esi + 0x260);
    ecx = 0; /* xor self */
    MEM32(esp + 0x12) = ecx;
    MEM32(esp + 0x16) = ecx;
    MEM32(esp + 0x1A) = ecx;
    MEM16(esp + 0x10) = LO16(ebx);
    MEM32(esp + 0x1E) = ecx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x24), _icall_esp); /* indirect call */
    }

loc_001CE7B6:
    eax = MEM32(esi + 0x260);
    ecx = MEM32(eax);
    edx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_001CE7C7:
    if (TEST_Z(MEM8(esp + 0x44), 2)) goto loc_001CE8DB; /* je: equal / zero */

loc_001CE7D2:
    eax = 0; /* xor self */
    MEM32(esi + 0x24) = 8;
    ecx = 0x20;
    edi = esi + 0x9C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x234) = ebx;
    PUSH32(esp, 0); sub_001CE980(); /* call 0x001CE980 */

loc_001CE7F8:
    eax = MEM32(esi + 0x260);
    ecx = MEM32(eax);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x28), _icall_esp); /* indirect call */
    }

loc_001CE809:
    ecx = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    eax = 0x1F4000;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esp + 0x14) = ecx;
    MEM16(esp + 0x10) = 1;
    MEM16(esp + 0x1E) = 0x10;
    MEM32(esi + 0x238) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(esi + 0x23C) = eax;
    eax = MEM32(esp + 0x2C);
    MEM16(esp + 0x12) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = eax << 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    edx = ZX16(LO16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esi + 0x248);
    MEM16(esp + 0x1C) = LO16(eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_002F6770(); /* call 0x002F6770 */

loc_001CE870:
    eax = esi;
    PUSH32(esp, 0); sub_001CEF70(); /* call 0x001CEF70 */

loc_001CE877:
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F353F7D);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_001CEDB0(); /* call 0x001CEDB0 */

loc_001CE88C:
    edx = MEM32(esi + 0x248);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F5751(); /* call 0x002F5751 */

loc_001CE899:
    /* test MEM8(esi + 0x28), 8 - flags set for next jcc */
    MEM8(esi + 0x2C) = LO8(ebx);
    if (TEST_Z(MEM8(esi + 0x28), 8)) goto loc_001CE8B3; /* je: equal / zero */

loc_001CE8A2:
    PUSH32(esp, 0); sub_001CEA80(); /* call 0x001CEA80 */

loc_001CE8A7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

loc_001CE8B3:
    MEM32(esi + 0x24) = 9;

loc_001CE8BA:
    eax = esi;
    MEM32(esi + 0x4C) = ebx;
    PUSH32(esp, 0); sub_001CEB10(); /* call 0x001CEB10 */

loc_001CE8C4:
    if (TEST_NZ(eax, eax)) goto loc_001CE8DB; /* jne: not equal / not zero */

loc_001CE8C8:
    MEM32(esi + 0x24) = 0xA;

loc_001CE8CF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

loc_001CE8DB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

}
