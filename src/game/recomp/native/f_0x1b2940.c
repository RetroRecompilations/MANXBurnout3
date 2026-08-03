#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B2940
 * Original: 0x001B2940 - 0x001B2A8F (335 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001B2940:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ebx + 0xD));
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x14) = eax;
    eax = ZX8(MEM8(ebx + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = 0; /* xor self */
    eax = eax + esi;
    /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC) = edx;
    if (CMP_AE(esi, eax)) goto loc_001B2A7B; /* jae: above or equal (unsigned >=) */

loc_001B2984:
    eax = MEM32(esp + 0xC);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_001B29CB; /* jne: not equal / not zero */

loc_001B298D:
    edx = ZX8(MEM8(esi));
    eax = esp + 0xC4;
    PUSH32(esp, 0); sub_001B0F00(); /* call 0x001B0F00 */

loc_001B299C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    edx = ZX8(MEM8(esi + 1));
    PUSH32(esp, ebx);
    eax = esp + 0xD4;
    PUSH32(esp, 0); sub_001B0F00(); /* call 0x001B0F00 */

loc_001B29B5:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    edx = ZX8(MEM8(esi + 2));
    PUSH32(esp, ebx);
    eax = esp + 0xA4;
    goto loc_001B29E0;

loc_001B29CB:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x74), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    edx = ZX8(MEM8(esi + 3));
    eax = esp + 0xB4;

loc_001B29E0:
    PUSH32(esp, 0); sub_001B0F00(); /* call 0x001B0F00 */

loc_001B29E5:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = esp + 0x78;
    ecx = esp + 0x68;
    memcpy((void *)XBOX_PTR(esp + 0x78), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001B1050(); /* call 0x001B1050 */

loc_001B2A04:
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B2A4D; /* je: equal / zero */

loc_001B2A0B:
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(esp + 0x98) = esi;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0x9C) = 0;
    memcpy((void *)XBOX_PTR(esp + 0x48), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_001B2A3E:
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B2A86; /* je: equal / zero */

loc_001B2A45:
    MEM32(esp + 0x10) = 1;

loc_001B2A4D:
    if (CMP_AE(MEM8(esi + 3), 0xFF)) goto loc_001B2A65; /* jae: above or equal (unsigned >=) */

loc_001B2A53:
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_001B2A65; /* jne: not equal / not zero */

loc_001B2A5B:
    MEM32(esp + 0xC) = 1;
    goto loc_001B2A71;

loc_001B2A65:
    esi = esi + MEM32(esp + 0x18);
    MEM32(esp + 0xC) = 0;

loc_001B2A71:
    if (CMP_B(esi, MEM32(esp + 0x1C))) goto loc_001B2984; /* jb: below (unsigned <) */

loc_001B2A7B:
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B2A86:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
