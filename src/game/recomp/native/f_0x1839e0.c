#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001839E0
 * Original: 0x001839E0 - 0x00183BA2 (450 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001839E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001839E0:
    PUSH32(esp, ecx);
    eax = MEM32(0x734FA0);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00183A21; /* je: equal / zero */

loc_001839EC:
    esi = 0x731FC4;
    edi = eax;

loc_001839F3:
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00183A1B; /* je: equal / zero */

loc_001839FA:
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00183A1B; /* jne: not equal / not zero */

loc_00183A03:
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183A1B; /* jne: not equal / not zero */

loc_00183A0D:
    eax = MEM32(esp + 0x10);
    edx = esi + -36;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00183BD0(); /* call 0x00183BD0 */

loc_00183A1B:
    esi = esi + 0x30;
    edi--;
    if ((edi != 0)) goto loc_001839F3; /* jne: not equal / not zero */

loc_00183A21:
    eax = MEM32(0x667E80);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 0x64B380;
    if (TEST_Z(eax, eax)) goto loc_00183B76; /* je: equal / zero */

loc_00183A34:
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ebx);
    /* nop */

loc_00183A40:
    SET_LO8(eax, MEM8(ebp));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00183A5F; /* je: equal / zero */

loc_00183A47:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00183A5F; /* je: equal / zero */

loc_00183A4B:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00183A5F; /* je: equal / zero */

loc_00183A4F:
    if (CMP_EQ(LO8(eax), 4)) goto loc_00183A5F; /* je: equal / zero */

loc_00183A53:
    if (CMP_EQ(LO8(eax), 6)) goto loc_00183A5F; /* je: equal / zero */

loc_00183A57:
    if (CMP_NE(LO8(eax), 7)) goto loc_00183B63; /* jne: not equal / not zero */

loc_00183A5F:
    SET_LO8(ecx, MEM8(ebp + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00183B63; /* jne: not equal / not zero */

loc_00183A6A:
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x198);
    if (TEST_Z(ecx, ecx)) goto loc_00183B51; /* je: equal / zero */

loc_00183A7B:
    eax = SX8(LO8(eax));
    if (CMP_A(eax, 7)) goto loc_00183B51; /* ja: above (unsigned >) */

loc_00183A87:
    { uint32_t _jt = MEM32(eax * 4 + 0x183BA4); /* switch: 8 entries, 6 targets */
    if (_jt == 0x00183A8Eu) goto loc_00183A8E;
    if (_jt == 0x00183A9Fu) goto loc_00183A9F;
    if (_jt == 0x00183AB0u) goto loc_00183AB0;
    if (_jt == 0x00183ABFu) goto loc_00183ABF;
    if (_jt == 0x00183AE1u) goto loc_00183AE1;
    if (_jt == 0x00183B51u) goto loc_00183B51;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00183A8E:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00185360(); /* call 0x00185360 */

loc_00183A9A:
    goto loc_00183B51;

loc_00183A9F:
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00185360(); /* call 0x00185360 */

loc_00183AAB:
    goto loc_00183B51;

loc_00183AB0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_00186030(); /* call 0x00186030 */

loc_00183ABA:
    goto loc_00183B51;

loc_00183ABF:
    eax = MEM32(ebx + 0x220);
    ecx = ZX8(MEM8(eax + 2));
    edx = MEM32(0x73767C);
    eax = MEM32(esp + 0x18);
    esi = ZX8(MEM8(ecx + edx));
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_00186BB0(); /* call 0x00186BB0 */

loc_00183ADF:
    goto loc_00183B51;

loc_00183AE1:
    SET_LO8(eax, MEM8(ebx + 0x2BA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183B0A; /* jne: not equal / not zero */

loc_00183AEB:
    edx = MEM32(ebx + 0x204);
    xmm0.f[0] = MEMF(ebx + 0x194); /* movss */
    edx = edx + 0x30;
    PUSH32(esp, 1);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_00150480(); /* call 0x00150480 */

loc_00183B08:
    goto loc_00183B51;

loc_00183B0A:
    if (CMP_NE(LO8(eax), 2)) goto loc_00183B23; /* jne: not equal / not zero */

loc_00183B0E:
    xmm0.f[0] = MEMF(ebx + 0x194); /* movss */
    PUSH32(esp, ebx);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014DDF0(); /* call 0x0014DDF0 */

loc_00183B21:
    goto loc_00183B47;

loc_00183B23:
    ecx = MEM32(ebx + 0x194);
    edx = MEM32(ebx + 0x204);
    PUSH32(esp, ecx);
    edx = edx + 0x30;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2B8);
    PUSH32(esp, 0x40F270);
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_0014E780(); /* call 0x0014E780 */

loc_00183B47:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_001868A0(); /* call 0x001868A0 */

loc_00183B51:
    if (CMP_NE(MEM8(ebp), 7)) goto loc_00183B63; /* jne: not equal / not zero */

loc_00183B57:
    eax = MEM32(ebp + 0xC);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_00186C20(); /* call 0x00186C20 */

loc_00183B63:
    eax = MEM32(esp + 0x10);
    ebp = ebp + 0x30;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_00183A40; /* jne: not equal / not zero */

loc_00183B75:
    POP32(esp, ebx);

loc_00183B76:
    esi = 0x734FC9;
    edi = 0x14;
    POP32(esp, ebp);

loc_00183B81:
    if (CMP_EQ(MEM8(esi), 0)) goto loc_00183B96; /* je: equal / zero */

loc_00183B86:
    eax = MEM32(esp + 0x10);
    ecx = esi + -9;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00186E70(); /* call 0x00186E70 */

loc_00183B93:
    MEM8(esi) = 0;

loc_00183B96:
    esi = esi + 0x10;
    edi--;
    if ((edi != 0)) goto loc_00183B81; /* jne: not equal / not zero */

loc_00183B9C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
