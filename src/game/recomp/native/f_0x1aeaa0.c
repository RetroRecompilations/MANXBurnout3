#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AEAA0
 * Original: 0x001AEAA0 - 0x001AECBB (539 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEAA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEAA0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = eax;
    ebp = 0; /* xor self */
    /* nop */

loc_001AEAB0:
    SET_LO8(ebx, MEM8(edi + ebp));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001AEC8F; /* je: equal / zero */

loc_001AEABB:
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001AEAC6:
    /* cmp LO8(ebx), 0x5F - flags set for next jcc */
    ecx = eax;
    esi = edx;
    if (CMP_NE(LO8(ebx), 0x5F)) goto loc_001AEAD4; /* jne: not equal / not zero */

loc_001AEACF:
    ecx = ecx + 0x27;
    goto loc_001AEB1C;

loc_001AEAD4:
    if (CMP_L(LO8(ebx), 0x61)) goto loc_001AEAE6; /* jl: less (signed <) */

loc_001AEAD9:
    eax = SX8(LO8(ebx));
    eax = eax - 0x54;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEB1F;

loc_001AEAE6:
    if (CMP_L(LO8(ebx), 0x41)) goto loc_001AEAF8; /* jl: less (signed <) */

loc_001AEAEB:
    eax = SX8(LO8(ebx));
    eax = eax - 0x34;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEB1F;

loc_001AEAF8:
    if (CMP_L(LO8(ebx), 0x30)) goto loc_001AEB0A; /* jl: less (signed <) */

loc_001AEAFD:
    eax = SX8(LO8(ebx));
    eax = eax - 0x2D;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEB1F;

loc_001AEB0A:
    if (CMP_NE(LO8(ebx), 0x2F)) goto loc_001AEB14; /* jne: not equal / not zero */

loc_001AEB0F:
    ecx = ecx + 2;
    goto loc_001AEB1C;

loc_001AEB14:
    if (CMP_NE(LO8(ebx), 0x2D)) goto loc_001AEB1F; /* jne: not equal / not zero */

loc_001AEB19:
    ecx = ecx + 1;

loc_001AEB1C:
    esi = esi + 0 + _cf; /* adc */

loc_001AEB1F:
    SET_LO8(ebx, MEM8(edi + ebp + 1));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001AEC84; /* je: equal / zero */

loc_001AEB2B:
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001AEB36:
    /* cmp LO8(ebx), 0x5F - flags set for next jcc */
    ecx = eax;
    esi = edx;
    if (CMP_NE(LO8(ebx), 0x5F)) goto loc_001AEB44; /* jne: not equal / not zero */

loc_001AEB3F:
    ecx = ecx + 0x27;
    goto loc_001AEB8C;

loc_001AEB44:
    if (CMP_L(LO8(ebx), 0x61)) goto loc_001AEB56; /* jl: less (signed <) */

loc_001AEB49:
    eax = SX8(LO8(ebx));
    eax = eax - 0x54;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEB8F;

loc_001AEB56:
    if (CMP_L(LO8(ebx), 0x41)) goto loc_001AEB68; /* jl: less (signed <) */

loc_001AEB5B:
    eax = SX8(LO8(ebx));
    eax = eax - 0x34;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEB8F;

loc_001AEB68:
    if (CMP_L(LO8(ebx), 0x30)) goto loc_001AEB7A; /* jl: less (signed <) */

loc_001AEB6D:
    eax = SX8(LO8(ebx));
    eax = eax - 0x2D;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEB8F;

loc_001AEB7A:
    if (CMP_NE(LO8(ebx), 0x2F)) goto loc_001AEB84; /* jne: not equal / not zero */

loc_001AEB7F:
    ecx = ecx + 2;
    goto loc_001AEB8C;

loc_001AEB84:
    if (CMP_NE(LO8(ebx), 0x2D)) goto loc_001AEB8F; /* jne: not equal / not zero */

loc_001AEB89:
    ecx = ecx + 1;

loc_001AEB8C:
    esi = esi + 0 + _cf; /* adc */

loc_001AEB8F:
    SET_LO8(ebx, MEM8(edi + ebp + 2));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001AEC87; /* je: equal / zero */

loc_001AEB9B:
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001AEBA6:
    /* cmp LO8(ebx), 0x5F - flags set for next jcc */
    ecx = eax;
    esi = edx;
    if (CMP_NE(LO8(ebx), 0x5F)) goto loc_001AEBB4; /* jne: not equal / not zero */

loc_001AEBAF:
    ecx = ecx + 0x27;
    goto loc_001AEBFC;

loc_001AEBB4:
    if (CMP_L(LO8(ebx), 0x61)) goto loc_001AEBC6; /* jl: less (signed <) */

loc_001AEBB9:
    eax = SX8(LO8(ebx));
    eax = eax - 0x54;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEBFF;

loc_001AEBC6:
    if (CMP_L(LO8(ebx), 0x41)) goto loc_001AEBD8; /* jl: less (signed <) */

loc_001AEBCB:
    eax = SX8(LO8(ebx));
    eax = eax - 0x34;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEBFF;

loc_001AEBD8:
    if (CMP_L(LO8(ebx), 0x30)) goto loc_001AEBEA; /* jl: less (signed <) */

loc_001AEBDD:
    eax = SX8(LO8(ebx));
    eax = eax - 0x2D;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEBFF;

loc_001AEBEA:
    if (CMP_NE(LO8(ebx), 0x2F)) goto loc_001AEBF4; /* jne: not equal / not zero */

loc_001AEBEF:
    ecx = ecx + 2;
    goto loc_001AEBFC;

loc_001AEBF4:
    if (CMP_NE(LO8(ebx), 0x2D)) goto loc_001AEBFF; /* jne: not equal / not zero */

loc_001AEBF9:
    ecx = ecx + 1;

loc_001AEBFC:
    esi = esi + 0 + _cf; /* adc */

loc_001AEBFF:
    SET_LO8(ebx, MEM8(edi + ebp + 3));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001AEC8C; /* je: equal / zero */

loc_001AEC0B:
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001AEC16:
    /* cmp LO8(ebx), 0x5F - flags set for next jcc */
    ecx = eax;
    esi = edx;
    if (CMP_NE(LO8(ebx), 0x5F)) goto loc_001AEC24; /* jne: not equal / not zero */

loc_001AEC1F:
    ecx = ecx + 0x27;
    goto loc_001AEC6C;

loc_001AEC24:
    if (CMP_L(LO8(ebx), 0x61)) goto loc_001AEC36; /* jl: less (signed <) */

loc_001AEC29:
    eax = SX8(LO8(ebx));
    eax = eax - 0x54;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEC6F;

loc_001AEC36:
    if (CMP_L(LO8(ebx), 0x41)) goto loc_001AEC48; /* jl: less (signed <) */

loc_001AEC3B:
    eax = SX8(LO8(ebx));
    eax = eax - 0x34;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEC6F;

loc_001AEC48:
    if (CMP_L(LO8(ebx), 0x30)) goto loc_001AEC5A; /* jl: less (signed <) */

loc_001AEC4D:
    eax = SX8(LO8(ebx));
    eax = eax - 0x2D;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    esi = esi + edx + _cf; /* adc */
    goto loc_001AEC6F;

loc_001AEC5A:
    if (CMP_NE(LO8(ebx), 0x2F)) goto loc_001AEC64; /* jne: not equal / not zero */

loc_001AEC5F:
    ecx = ecx + 2;
    goto loc_001AEC6C;

loc_001AEC64:
    if (CMP_NE(LO8(ebx), 0x2D)) goto loc_001AEC6F; /* jne: not equal / not zero */

loc_001AEC69:
    ecx = ecx + 1;

loc_001AEC6C:
    esi = esi + 0 + _cf; /* adc */

loc_001AEC6F:
    ebp = ebp + 4;
    if (CMP_L(ebp, 0xC)) goto loc_001AEAB0; /* jl: less (signed <) */

loc_001AEC7B:
    POP32(esp, edi);
    edx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001AEC84:
    ebp++;
    goto loc_001AEC8F;

loc_001AEC87:
    ebp = ebp + 2;
    goto loc_001AEC8F;

loc_001AEC8C:
    ebp = ebp + 3;

loc_001AEC8F:
    if (CMP_GE(ebp, 0xC)) goto loc_001AECB2; /* jge: greater or equal (signed >=) */

loc_001AEC94:
    edi = 0xC;
    edi = edi - ebp;
    goto loc_001AECA0;

    /* nop */

loc_001AECA0:
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001AECAB:
    edi--;
    ecx = eax;
    esi = edx;
    if ((edi != 0)) goto loc_001AECA0; /* jne: not equal / not zero */

loc_001AECB2:
    POP32(esp, edi);
    edx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
