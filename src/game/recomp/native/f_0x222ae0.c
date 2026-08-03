#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00222AE0
 * Original: 0x00222AE0 - 0x00222E56 (886 bytes, 266 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00222AE0:
    eax = 0x1C28;
    PUSH32(esp, 0); sub_00244C10(); /* call 0x00244C10 */

loc_00222AEA:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C38);
    if (CMP_L(esi, 2)) goto loc_00222E4E; /* jl: less (signed <) */

loc_00222AFB:
    /* cmp esi, 0x200 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_GE(esi, 0x200)) goto loc_00222B27; /* jge: greater or equal (signed >=) */

loc_00222B04:
    edi = esp + 0x430;
    eax = esp + 0xC30;
    ecx = esp + 0x1430;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00222B53;

loc_00222B27:
    edi = esi * 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00222B34:
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00222B3E:
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00222B48:
    edi = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    MEM32(esp + 0x1C) = eax;

loc_00222B53:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C48);
    if (CMP_G(ebp, 0x400)) goto loc_00222B6E; /* jg: greater (signed >) */

loc_00222B64:
    edx = esp + 0x38;
    MEM32(esp + 0x1C) = edx;
    goto loc_00222B7B;

loc_00222B6E:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00222B74:
    esp = esp + 4;
    MEM32(esp + 0x1C) = eax;

loc_00222B7B:
    ebx = MEM32(esp + 0x1C40);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    eax = MEM32(esp + 0x20);
    esi = esi + ebx;
    MEM32(eax) = ebx;
    ebx = ebx + ebp;
    /* cmp ebx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    ebp = edi;
    MEM32(edi) = 1;
    if (CMP_EQ(ebx, esi)) goto loc_00222BE7; /* je: equal / zero */

loc_00222B9F:
    /* nop */

loc_00222BA0:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x1C3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x1C58), _icall_esp); /* indirect call */
    }

loc_00222BB7:
    esp = esp + 0xC;
    if (CMP_G(eax & eax, 0)) goto loc_00222BC3; /* jg: greater (signed >) */

loc_00222BBE:
    MEM32(ebp) = MEM32(ebp) + 1;
    goto loc_00222BCD;

loc_00222BC3:
    ebp = ebp + 4;
    MEM32(ebp) = 1;

loc_00222BCD:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C48);
    eax = eax + 4;
    MEM32(eax) = ebx;
    ebx = ebx + ecx;
    /* cmp ebx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(ebx, esi)) goto loc_00222BA0; /* jne: not equal / not zero */

loc_00222BE7:
    ebp = ebp + 4;
    eax = 0; /* xor self */
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = eax;
    ecx = MEM32(edi + 4);
    /* cmp ecx, eax - flags set for next jcc */
    ebp = edi + 4;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00222E0E; /* je: equal / zero */

loc_00222C04:
    goto loc_00222C10;

loc_00222C06:
    edi = MEM32(esp + 0x18);
    /* nop */

loc_00222C10:
    ebx = MEM32(edi);
    ecx = eax;
    ecx = ~ecx;
    eax = eax & 1;
    esi = MEM32(esp + eax * 4 + 0x20);
    ecx = ecx & 1;
    ecx = MEM32(esp + ecx * 4 + 0x20);
    eax = esi + ebx * 4;
    edx = edi;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebp);
    MEM32(esp + 0x30) = eax;
    edi = eax;
    ebp = ebp + 4;
    /* test ebx, ebx - flags set for next jcc */
    eax = eax + ecx * 4;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00222D07; /* je: equal / zero */

loc_00222C50:
    goto loc_00222C56;

loc_00222C52:
    eax = MEM32(esp + 0x10);

loc_00222C56:
    if (CMP_NE(esi, MEM32(esp + 0x30))) goto loc_00222C74; /* jne: not equal / not zero */

loc_00222C5C:
    if (CMP_EQ(edi, eax)) goto loc_00222CCC; /* je: equal / zero */

loc_00222C60:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    MEM32(ecx) = edx;
    ecx = ecx + 4;
    MEM32(esp + 0x14) = ecx;
    edi = edi + 4;
    goto loc_00222C56;

loc_00222C74:
    if (CMP_NE(edi, eax)) goto loc_00222C8C; /* jne: not equal / not zero */

loc_00222C78:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    ecx = ecx + 4;
    MEM32(esp + 0x14) = ecx;
    esi = esi + 4;
    goto loc_00222C56;

loc_00222C8C:
    eax = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x1C3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x1C58), _icall_esp); /* indirect call */
    }

loc_00222CA1:
    esp = esp + 0xC;
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    if (CMP_G(eax & eax, 0)) goto loc_00222CBC; /* jg: greater (signed >) */

loc_00222CAC:
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    eax = eax + 4;
    MEM32(esp + 0x14) = eax;
    esi = esi + 4;
    goto loc_00222C52;

loc_00222CBC:
    edx = MEM32(edi);
    MEM32(eax) = edx;
    eax = eax + 4;
    MEM32(esp + 0x14) = eax;
    edi = edi + 4;
    goto loc_00222C52;

loc_00222CCC:
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x2C);
    ecx = ecx + ebx;
    MEM32(edx) = ecx;
    ebx = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    ebp = ebp + 4;
    edi = eax + ebx * 4;
    edx = edx + 4;
    esi = eax;
    ebp = ebp + 4;
    /* test ebx, ebx - flags set for next jcc */
    eax = edi + ecx * 4;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_00222C52; /* jne: not equal / not zero */

loc_00222D07:
    ebp = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    MEM32(edx) = 0;
    ebp = ebp + 4;
    MEM32(edx + 4) = 0;
    ecx = MEM32(ebp);
    eax++;
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00222C06; /* jne: not equal / not zero */

loc_00222D2F:
    if (TEST_Z(eax, eax)) goto loc_00222E0A; /* je: equal / zero */

loc_00222D37:
    eax = eax & 1;
    ebx = MEM32(esp + eax * 4 + 0x20);
    eax = MEM32(esp + 0x1C44);
    ebp = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(eax & eax, 0)) goto loc_00222E0A; /* jle: less or equal (signed <=) */

loc_00222D53:
    esi = MEM32(ebx + ebp * 4);
    if (TEST_Z(esi, esi)) goto loc_00222DF6; /* je: equal / zero */

loc_00222D5E:
    ecx = MEM32(esp + 0x1C48);
    edi = MEM32(esp + 0x1C);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(esp + 0x1C40);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + ebp * 4);
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x1C48)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x1C48))); }
    if (CMP_EQ(eax, MEM32(esp + 0x10))) goto loc_00222DCF; /* je: equal / zero */

loc_00222D91:
    esi = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x1C48);
    edi = MEM32(ebx + ebp * 4);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(esp + 0x1C40);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + ebp * 4) = 0;
    ebp = eax;
    eax = MEM32(ebx + eax * 4);
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x1C48)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x1C48))); }
    if (CMP_NE(eax, MEM32(esp + 0x10))) goto loc_00222D91; /* jne: not equal / not zero */

loc_00222DCF:
    ecx = MEM32(esp + 0x1C48);
    edi = MEM32(ebx + ebp * 4);
    esi = MEM32(esp + 0x1C);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + ebp * 4) = 0;
    ebp = MEM32(esp + 0x10);

loc_00222DF6:
    eax = MEM32(esp + 0x1C44);
    ebp++;
    /* cmp ebp, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(ebp, eax)) goto loc_00222D53; /* jl: less (signed <) */

loc_00222E0A:
    edi = MEM32(esp + 0x18);

loc_00222E0E:
    ecx = esp + 0x438;
    /* cmp edi, ecx - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(edi, ecx)) goto loc_00222E38; /* je: equal / zero */

loc_00222E1B:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_00222E21:
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_00222E2B:
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_00222E35:
    esp = esp + 0xC;

loc_00222E38:
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x30;
    /* cmp eax, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(eax, ecx)) goto loc_00222E4E; /* je: equal / zero */

loc_00222E45:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B9050(); /* call 0x001B9050 */

loc_00222E4B:
    esp = esp + 4;

loc_00222E4E:
    POP32(esp, esi);
    esp = esp + 0x1C28;
    esp += 4; return; /* ret */

}
