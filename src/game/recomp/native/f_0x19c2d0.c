#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019C2D0
 * Original: 0x0019C2D0 - 0x0019C3A7 (215 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019C2D0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp;
    edi = eax;
    PUSH32(esp, 0); sub_0019C250(); /* call 0x0019C250 */

loc_0019C2E1:
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0019C2F0; /* jne: not equal / not zero */

loc_0019C2E7:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0019C2F0:
    eax = MEM32(edi);
    ecx = MEM32(eax + ebp * 4 + 0x18);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + ebp * 4 + 0x28);
    eax = (int32_t)MEMF(esi + 0x30); /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = ecx;
    if (CMP_G(eax, ecx)) goto loc_0019C39D; /* jg: greater (signed >) */

loc_0019C310:
    SET_LO8(ebx, 4);

loc_0019C312:
    if (CMP_L(eax, MEM32(esp + 0x18))) goto loc_0019C39D; /* jl: less (signed <) */

loc_0019C31C:
    if (TEST_NZ(MEM8(esi + 0x4B), LO8(ebx))) goto loc_0019C356; /* jne: not equal / not zero */

loc_0019C321:
    if (CMP_NE(ebp, 3)) goto loc_0019C374; /* jne: not equal / not zero */

loc_0019C326:
    edi = 0; /* xor self */

loc_0019C328:
    SET_LO8(eax, MEM8(esi + 0x41));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019C333; /* jne: not equal / not zero */

loc_0019C32F:
    eax = 0; /* xor self */
    goto loc_0019C33E;

loc_0019C333:
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;

loc_0019C33E:
    edx = edi;
    PUSH32(esp, 0); sub_001A0B00(); /* call 0x001A0B00 */

loc_0019C345:
    SET_LO8(eax, MEM8(esi + 0x4B));
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_0019C356; /* jne: not equal / not zero */

loc_0019C34C:
    edi++;
    if (CMP_L(edi, 8)) goto loc_0019C328; /* jl: less (signed <) */

loc_0019C352:
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0019C374; /* je: equal / zero */

loc_0019C356:
    SET_LO8(eax, MEM8(esp + 0x1C));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C370; /* je: equal / zero */

loc_0019C361:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C374; /* je: equal / zero */

loc_0019C365:
    SET_LO8(eax, MEM8(esi + 0x49));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0019C370:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C365; /* je: equal / zero */

loc_0019C374:
    SET_LO8(eax, MEM8(esi + 0x45));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C39D; /* je: equal / zero */

loc_0019C37B:
    eax = ZX8(LO8(eax));
    esi = eax + eax * 4;
    esi = esi << 4;
    esi = esi + 0x63DCB0;
    if ((esi == 0)) goto loc_0019C39D; /* je: equal / zero */

loc_0019C38C:
    ecx = MEM32(esp + 0x10);
    eax = (int32_t)MEMF(esi + 0x30); /* cvttss2si */
    if (CMP_LE(eax, ecx)) goto loc_0019C312; /* jle: less or equal (signed <=) */

loc_0019C39D:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
