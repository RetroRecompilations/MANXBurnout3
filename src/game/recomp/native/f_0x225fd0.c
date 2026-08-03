#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225FD0
 * Original: 0x00225FD0 - 0x0022623E (622 bytes, 224 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00225FD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xBC;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_00226115; /* jle: less or equal (signed <=) */

loc_00225FF2:
    esi = edx + 4;
    MEM32(esp + 0xC) = esi;
    /* nop */

loc_00226000:
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(edx & edx, 0)) goto loc_00226033; /* jle: less or equal (signed <=) */

loc_0022600F:
    ecx = ecx + 4;

loc_00226012:
    edx = MEM32(ecx);
    if (CMP_NE(edx, MEM32(esi))) goto loc_00226020; /* jne: not equal / not zero */

loc_00226018:
    edx = MEM32(ecx + 4);
    if (CMP_EQ(edx, MEM32(esi + 4))) goto loc_0022602E; /* je: equal / zero */

loc_00226020:
    edx = MEM32(esp + 0x14);
    eax++;
    ecx = ecx + 0x56;
    if (CMP_L(eax, edx)) goto loc_00226012; /* jl: less (signed <) */

loc_0022602C:
    goto loc_00226033;

loc_0022602E:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00226064; /* jne: not equal / not zero */

loc_00226033:
    edx = MEM32(esi + 0x1C);
    ecx = 0x15;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x14);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ecx;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    ecx = MEM32(esp + 0x8C);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x10) = 0x41;
    edx = esp + 0x7C;
    goto loc_002260A2;

loc_00226064:
    ecx = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    ecx = MEM32(eax + ecx + 0x20);
    eax = MEM32(esi + 0x1C);
    if (CMP_EQ(ecx, eax)) goto loc_002260B6; /* je: equal / zero */

loc_00226075:
    eax = eax ^ ecx;
    edx = eax;
    ecx = 0x15;
    edi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x14);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ecx;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x10) = 0x43;
    edx = esp + 0x24;

loc_002260A2:
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_002260AE:
    esi = MEM32(esp + 0x18);
    esp = esp + 0xC;
    ebx++;

loc_002260B6:
    if (CMP_L(ebx, 0x19)) goto loc_002260F8; /* jl: less (signed <) */

loc_002260BB:
    edi = MEM32(ebp + 8);
    eax = edi + 0x4354;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00225830(); /* call 0x00225830 */

loc_002260D0:
    eax = MEM32(edi + 0x4630);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002260F6; /* je: equal / zero */

loc_002260DD:
    ecx = MEM32(edi + 0x462C);
    edx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi + 0x4354;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002260F3:
    esp = esp + 0x14;

loc_002260F6:
    ebx = 0; /* xor self */

loc_002260F8:
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(edx);
    eax++;
    esi = esi + 0x56;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = esi;
    if (CMP_L(eax, ecx)) goto loc_00226000; /* jl: less (signed <) */

loc_00226115:
    esi = MEM32(ebp + 0xC);
    /* cmp MEM32(esi), 0 - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(MEM32(esi), 0)) goto loc_00226201; /* jle: less or equal (signed <=) */

loc_00226129:
    esi = esi + 4;
    MEM32(esp + 0xC) = esi;

loc_00226130:
    eax = MEM32(edx);
    ecx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00226161; /* jle: less or equal (signed <=) */

loc_0022613C:
    eax = edx + 4;
    /* nop */

loc_00226140:
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(esi))) goto loc_0022614E; /* jne: not equal / not zero */

loc_00226146:
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, MEM32(esi + 4))) goto loc_0022615C; /* je: equal / zero */

loc_0022614E:
    edx = MEM32(esp + 0x14);
    ecx++;
    eax = eax + 0x56;
    if (CMP_L(ecx, edx)) goto loc_00226140; /* jl: less (signed <) */

loc_0022615A:
    goto loc_00226161;

loc_0022615C:
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_002261A1; /* jne: not equal / not zero */

loc_00226161:
    edx = MEM32(esi + 0x1C);
    ecx = 0x15;
    edi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x14);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ecx;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0x10);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax + 0x10) = 0x44;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_00226199:
    esi = MEM32(esp + 0x18);
    esp = esp + 0xC;
    ebx++;

loc_002261A1:
    if (CMP_L(ebx, 0x19)) goto loc_002261E1; /* jl: less (signed <) */

loc_002261A6:
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    esi = edi + 0x4354;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00225830(); /* call 0x00225830 */

loc_002261BB:
    eax = MEM32(edi + 0x4630);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002261DB; /* je: equal / zero */

loc_002261C8:
    ecx = MEM32(edi + 0x462C);
    edx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002261D8:
    esp = esp + 0x14;

loc_002261DB:
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */

loc_002261E1:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    eax++;
    esi = esi + 0x56;
    /* cmp eax, edx - flags set for next jcc */
    edx = MEM32(ebp + 0x10);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = esi;
    if (CMP_L(eax, edx)) goto loc_00226130; /* jl: less (signed <) */

loc_00226201:
    if (TEST_Z(ebx, ebx)) goto loc_00226237; /* je: equal / zero */

loc_00226205:
    esi = MEM32(ebp + 8);
    edi = esi + 0x4354;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00225830(); /* call 0x00225830 */

loc_00226217:
    eax = MEM32(esi + 0x4630);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00226237; /* je: equal / zero */

loc_00226224:
    edx = MEM32(esi + 0x462C);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00226234:
    esp = esp + 0x14;

loc_00226237:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
