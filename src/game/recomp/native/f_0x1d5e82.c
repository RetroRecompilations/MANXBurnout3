#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D5E82
 * Original: 0x001D5E82 - 0x001D6060 (478 bytes, 157 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5E82(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5E82:
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x36BFB8);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D5E8E:
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -36) = ebx;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -26) = 1;
    edi = MEM32(ebp + 0x10);
    if (TEST_NZ(edi, edi)) goto loc_001D5EAC; /* jne: not equal / not zero */

loc_001D5EA5:
    SET_LO8(eax, 1);
    goto loc_001D6058;

loc_001D5EAC:
    MEM32(ebp + -108) = edi;
    MEM32(ebp + -104) = MEM32(ebp + -104) & 0;
    MEM32(ebp + -100) = MEM32(ebp + -100) & 0;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x250);
    if (TEST_Z(eax, eax)) goto loc_001D5ED0; /* je: equal / zero */

loc_001D5EC7:
    ecx = ebp + -108;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_001D5ED0:
    eax = MEM32(ebp + 0xC);
    eax = eax | MEM32(esi + 0x18);
    edi = edi + 0xFFFFFFF0u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001D5EF1; /* jne: not equal / not zero */

loc_001D5EE1:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_001D5EED:
    MEM8(ebp + -25) = 1;

loc_001D5EF1:
    if (TEST_NZ(MEM8(edi + 5), 8)) goto loc_001D5FFE; /* jne: not equal / not zero */

loc_001D5EFB:
    eax = ZX16(MEM16(edi));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D451D(); /* call 0x001D451D */

loc_001D5F0E:
    MEM32(ebp + -48) = eax;
    ecx = MEM32(ebp + -32);
    if (CMP_AE(ecx, 0x80)) goto loc_001D5F82; /* jae: above or equal (unsigned >=) */

loc_001D5F1C:
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 5));
    ecx = ecx & 0x10;
    MEM8(eax + 5) = LO8(ecx);
    ecx = ZX16(MEM16(ebp + -32));
    edx = esi + ecx * 8 + 0x180;
    MEM32(ebp + -52) = edx;
    if (CMP_NE(MEM32(edx), edx)) goto loc_001D5F61; /* jne: not equal / not zero */

loc_001D5F39:
    ecx = ZX16(MEM16(eax));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -56) = edi;
    ecx = ecx & 7;
    ebx = 0; /* xor self */
    ebx++;
    ebx = ebx << LO8(ecx);
    MEM32(ebp + -60) = ebx;
    edi = edi + esi + 0x160;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi));
    ecx = ecx | ebx;
    MEM8(edi) = LO8(ecx);
    ebx = MEM32(ebp + -36);

loc_001D5F61:
    MEM32(ebp + -64) = edx;
    edi = MEM32(edx + 4);
    MEM32(ebp + -68) = edi;
    ecx = eax + 8;
    MEM32(ecx) = edx;
    MEM32(eax + 0xC) = edi;
    MEM32(edi) = ecx;
    MEM32(edx + 4) = ecx;
    eax = MEM32(ebp + -32);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + eax;
    goto loc_001D604C;

loc_001D5F82:
    if (CMP_B(ecx, MEM32(esi + 0x28))) goto loc_001D5F9E; /* jb: below (unsigned <) */

loc_001D5F87:
    edx = MEM32(esi + 0x30);
    edx = edx + ecx;
    if (CMP_B(edx, MEM32(esi + 0x2C))) goto loc_001D5F9E; /* jb: below (unsigned <) */

loc_001D5F91:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D5039(); /* call 0x001D5039 */

loc_001D5F99:
    goto loc_001D604C;

loc_001D5F9E:
    if (CMP_A(ecx, 0xFF00)) goto loc_001D5FF4; /* ja: above (unsigned >) */

loc_001D5FA6:
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 5));
    ecx = ecx & 0x10;
    MEM8(eax + 5) = LO8(ecx);
    esi = esi + 0x180;
    MEM32(ebp + -72) = esi;
    ecx = MEM32(esi);

loc_001D5FBC:
    MEM32(ebp + -40) = ecx;
    if (CMP_EQ(esi, ecx)) goto loc_001D5FD6; /* je: equal / zero */

loc_001D5FC3:
    edx = ecx + -8;
    MEM32(ebp + -76) = edx;
    SET_LO16(edi, MEM16(ebp + -32));
    if (CMP_BE(LO16(edi), MEM16(edx))) goto loc_001D5FD6; /* jbe: below or equal (unsigned <=) */

loc_001D5FD2:
    ecx = MEM32(ecx);
    goto loc_001D5FBC;

loc_001D5FD6:
    MEM32(ebp + -80) = ecx;
    esi = MEM32(ecx + 4);
    MEM32(ebp + -84) = esi;
    edx = eax + 8;
    MEM32(edx) = ecx;
    MEM32(eax + 0xC) = esi;
    MEM32(esi) = edx;
    MEM32(ecx + 4) = edx;
    eax = MEM32(ebp + -32);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001D604C;

loc_001D5FF4:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D47C2(); /* call 0x001D47C2 */

loc_001D5FFC:
    goto loc_001D604C;

loc_001D5FFE:
    eax = edi + -32;
    MEM32(ebp + -44) = eax;
    ecx = MEM32(eax);
    MEM32(ebp + -88) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebp + -92) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(MEM8(ebp + -25), 0)) goto loc_001D602A; /* je: equal / zero */

loc_001D601A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_001D6026:
    MEM8(ebp + -25) = 0;

loc_001D602A:
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B904), _icall_esp); /* indirect call */
    }

loc_001D6041:
    MEM32(ebp + -96) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_001D604C; /* jge: greater or equal (signed >=) */

loc_001D6048:
    MEM8(ebp + -26) = 0;

loc_001D604C:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001D6063(); /* call 0x001D6063 */

loc_001D6055:
    SET_LO8(eax, MEM8(ebp + -26));

loc_001D6058:
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D605D:
    esp += 16; return; /* ret 12 */

}
