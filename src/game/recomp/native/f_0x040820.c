#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00040820
 * Original: 0x00040820 - 0x00040AD3 (691 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040820:
    esp = esp - 0x90;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x9C);
    PUSH32(esp, esi);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3AAFD8);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_00040841:
    MEM32(ebp) = eax;
    ebp = ebp + 4;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x14) = ebp;
    goto loc_00040860;

loc_00040855:
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_00040860:
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3AAFC8);
    ecx = esp + 0x68;
    edi = 0x80;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0); sub_00243816(); /* call 0x00243816 */

loc_00040883:
    esi = MEM32(0x4AED9C);
    esp = esp + 0x10;
    PUSH32(esp, 1);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_00040898:
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    edx = edi;
    eax = edi;
    PUSH32(esp, 0); sub_00352560(); /* call 0x00352560 */

loc_000408BB:
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_000408C9:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00040910; /* je: equal / zero */

loc_000408CF:
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_000408DA:
    if (TEST_NZ(eax, eax)) goto loc_000408ED; /* jne: not equal / not zero */

loc_000408DE:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_000408E9:
    esi = 0; /* xor self */
    goto loc_00040910;

loc_000408ED:
    edx = MEM32(esp + 0x30);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 0;

loc_00040910:
    MEM32(ebp) = esi;
    edi = MEM32(ebp);
    esi = esp + 0x44;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_003521F0(); /* call 0x003521F0 */

loc_00040921:
    esi = MEM32(ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_00351B50(); /* call 0x00351B50 */

loc_0004092B:
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00352290(); /* call 0x00352290 */

loc_0004094C:
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0004095F:
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0); sub_003613E0(); /* call 0x003613E0 */

loc_00040968:
    esi = MEM32(esp + 0x58);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x5C));
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00243872(); /* call 0x00243872 */

loc_0004097E:
    ecx = esi;
    edx = ecx;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    ecx = ecx >> 2;
    esi = edi;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ecx = edx;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, 0);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00361454(); /* call 0x00361454 */

loc_000409B7:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024386D(); /* call 0x0024386D */

loc_000409BD:
    esp = esp + 4;
    ebx = 1;
    goto loc_000409D0;

loc_000409C7:
    ebp = MEM32(esp + 0x14);
    goto loc_000409D0;

    /* nop */

loc_000409D0:
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edi = MEM32(ebp);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esp + 0x44;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_003521F0(); /* call 0x003521F0 */

loc_000409F0:
    esi = MEM32(ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_00351B50(); /* call 0x00351B50 */

loc_000409FA:
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00352290(); /* call 0x00352290 */

loc_00040A1C:
    edx = MEM32(esp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    edx = edx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00040A36:
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0); sub_003613E0(); /* call 0x003613E0 */

loc_00040A3F:
    esi = MEM32(esp + 0x58);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x5C));
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00243872(); /* call 0x00243872 */

loc_00040A55:
    edx = MEM32(esp + 0x60);
    ebp = eax;
    ecx = esi;
    eax = ecx;
    ecx = ecx >> 2;
    esi = edi;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp + 4;
    ecx = eax;
    eax = MEM32(esp + 0x58);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00361454(); /* call 0x00361454 */

loc_00040A8E:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0024386D(); /* call 0x0024386D */

loc_00040A94:
    esp = esp + 4;
    ebx++;
    if (CMP_L(ebx, 3)) goto loc_000409C7; /* jl: less (signed <) */

loc_00040AA1:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00040AAA:
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    eax++;
    edx = edx + 4;
    /* cmp eax, 0x11 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(eax, 0x11)) goto loc_00040855; /* jl: less (signed <) */

loc_00040AC7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x90;

}
