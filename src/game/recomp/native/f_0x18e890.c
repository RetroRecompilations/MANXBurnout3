#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018E890
 * Original: 0x0018E890 - 0x0018EA50 (448 bytes, 133 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E890:
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    eax = MEM32(ebp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_0018EA34; /* jne: not equal / not zero */

loc_0018E8A3:
    PUSH32(esp, ebx);
    ebx = MEM32(0x73A19C);
    /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0018E8C1; /* jle: less or equal (signed <=) */

loc_0018E8B4:
    ecx = ebx;
    esi = 0x73A1A8;
    edi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0018E8C1:
    PUSH32(esp, 0x18E860);
    PUSH32(esp, 4);
    eax = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002434C0(); /* call 0x002434C0 */

loc_0018E8D3:
    esp = esp + 0x10;
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0018E8F3; /* jle: less or equal (signed <=) */

loc_0018E8DC:
    /* nop */

loc_0018E8E0:
    edx = MEM32(esp + eax * 4 + 0x1C);
    ecx = eax + 1;
    eax++;
    /* cmp eax, ebx - flags set for next jcc */
    MEM16(edx + 0x10D0) = LO16(ecx);
    if (CMP_L(eax, ebx)) goto loc_0018E8E0; /* jl: less (signed <) */

loc_0018E8F3:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_0018E9E6; /* je: equal / zero */

loc_0018E900:
    ecx = MEM32(eax + 0x1B8);
    if (TEST_Z(ecx, ecx)) goto loc_0018E9E6; /* je: equal / zero */

loc_0018E90E:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xB0), _icall_esp); /* indirect call */
    }

loc_0018E916:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018E9E6; /* je: equal / zero */

loc_0018E91E:
    eax = 0; /* xor self */
    /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0018E9C8; /* jle: less or equal (signed <=) */

loc_0018E92C:
    /* nop */

loc_0018E930:
    ecx = MEM32(eax * 4 + 0x73A1A8);
    MEM32(esp + 0x10) = 1;
    ebp = 0; /* xor self */

loc_0018E941:
    eax = MEM32(ebp * 4 + 0x73A1A8);
    if (CMP_EQ(eax, ecx)) goto loc_0018E9A2; /* je: equal / zero */

loc_0018E94C:
    ebx = MEM32(eax + 0x1198);
    edi = MEM32(ecx + 0x1198);
    SET_LO8(edx, MEM8(ebx + 0x19A8));
    if (CMP_NE(LO8(edx), MEM8(edi + 0x19A8))) goto loc_0018E99A; /* jne: not equal / not zero */

loc_0018E966:
    edx = MEM32(ecx + 0x1138);
    esi = MEM32(eax + 0x1138);
    if (CMP_G(esi, edx)) goto loc_0018E99E; /* jg: greater (signed >) */

loc_0018E976:
    if (CMP_L(esi, edx)) goto loc_0018E9A2; /* jl: less (signed <) */

loc_0018E978:
    edx = MEM32(ecx + 0x116C);
    eax = MEM32(eax + 0x116C);
    if (CMP_L(eax, edx)) goto loc_0018E99E; /* jl: less (signed <) */

loc_0018E988:
    if (CMP_G(eax, edx)) goto loc_0018E9A2; /* jg: greater (signed >) */

loc_0018E98A:
    SET_LO8(edx, MEM8(ebx + 0x19BC));
    if (CMP_G(LO8(edx), MEM8(edi + 0x19BC))) goto loc_0018E99E; /* jg: greater (signed >) */

loc_0018E998:
    goto loc_0018E9A2;

loc_0018E99A:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0018E9A2; /* je: equal / zero */

loc_0018E99E:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_0018E9A2:
    ebx = MEM32(esp + 0x18);
    ebp++;
    if (CMP_L(ebp, ebx)) goto loc_0018E941; /* jl: less (signed <) */

loc_0018E9AB:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + eax * 4 + 0x1C) = ecx;
    eax++;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ebx)) goto loc_0018E930; /* jl: less (signed <) */

loc_0018E9C4:
    ebp = MEM32(esp + 0x38);

loc_0018E9C8:
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0018E9E6; /* jle: less or equal (signed <=) */

loc_0018E9CE:
    edi = edi;

loc_0018E9D0:
    edx = MEM32(eax * 4 + 0x73A1A8);
    ecx = MEM32(esp + eax * 4 + 0x1C);
    eax++;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edx + 0x10D4) = ecx;
    if (CMP_L(eax, ebx)) goto loc_0018E9D0; /* jl: less (signed <) */

loc_0018E9E6:
    esi = MEM32(0x73A19C);
    eax = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    edx = esi;
    if (CMP_LE(esi & esi, 0)) goto loc_0018EA31; /* jle: less or equal (signed <=) */

loc_0018E9F4:
    goto loc_0018EA00;

    /* nop */
    /* nop */

loc_0018EA00:
    ecx = MEM32(eax * 4 + 0x73A1A8);
    edi = MEM32(ecx + 0x1920);
    if (TEST_NZ(edi, edi)) goto loc_0018EA2C; /* jne: not equal / not zero */

loc_0018EA11:
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x10D0);
    if (CMP_GE(edi, edx)) goto loc_0018EA2C; /* jge: greater or equal (signed >=) */

loc_0018EA1C:
    MEM32(ebp + 0x1C) = eax;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x10D0);
    esi = MEM32(0x73A19C);

loc_0018EA2C:
    eax++;
    if (CMP_L(eax, esi)) goto loc_0018EA00; /* jl: less (signed <) */

loc_0018EA31:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0018EA34:
    ecx = MEM32(ebp + 0x18);
    ecx++;
    eax = ecx;
    /* cmp eax, 0x1E - flags set for next jcc */
    MEM32(ebp + 0x18) = ecx;
    if (CMP_L(eax, 0x1E)) goto loc_0018EA49; /* jl: less (signed <) */

loc_0018EA42:
    MEM32(ebp + 0x18) = 0;

loc_0018EA49:
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}
