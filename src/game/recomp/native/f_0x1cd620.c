#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD620
 * Original: 0x001CD620 - 0x001CD742 (290 bytes, 87 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CD620:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    MEMF(0x4A1EEC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, esi);
    MEMF(0x4A1EF0) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x2888) = ebp;
    SET_LO8(ebx, 0); /* xor self */
    esi = edi + 0x2324;
    /* nop */

loc_001CD650:
    eax = esi + -32;
    PUSH32(esp, 0); sub_001CAD10(); /* call 0x001CAD10 */

loc_001CD658:
    eax = ZX8(MEM8(esi + 0xE));
    if (CMP_A(eax, 3)) goto loc_001CD67D; /* ja: above (unsigned >) */

loc_001CD661:
    { uint32_t _jt = MEM32(eax * 4 + 0x1CD744); /* switch: 4 entries, 2 targets */
    if (_jt == 0x001CD668u) goto loc_001CD668;
    if (_jt == 0x001CD739u) goto loc_001CD739;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CD668:
    eax = MEM32(esi + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BD20(); /* call 0x0020BD20 */

loc_001CD671:
    esp = esp + 4;
    /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */

loc_001CD67B:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CD6D3; /* jne: not equal / not zero */

loc_001CD67D:
    if (CMP_A(MEM8(esi + 0x11) & 1, 0)) goto loc_001CD6D3; /* ja: above (unsigned >) */

loc_001CD683:
    ecx = MEM32(esi + -12);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CD68D:
    edx = MEM32(esi + -12);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CD697:
    eax = MEM32(esi);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebp)) goto loc_001CD6B3; /* je: equal / zero */

loc_001CD6A0:
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CD6A7:
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CD6B0:
    esp = esp + 0x10;

loc_001CD6B3:
    SET_LO8(ecx, MEM8(esi + 0x11));
    SET_LO8(ecx, LO8(ecx) & 1);
    MEM8(esi + 0xE) = 0;
    MEM8(esi + 0x11) = LO8(ecx);
    ecx = MEM32(edi + 0x2888);
    MEM8(edi + ecx + 0x2870) = LO8(ebx);
    MEM32(edi + 0x2888) = MEM32(edi + 0x2888) + 1;

loc_001CD6D3:
    SET_LO8(ebx, LO8(ebx) + 1);
    esi = esi + 0x34;
    if (CMP_B(LO8(ebx), 0x10)) goto loc_001CD650; /* jb: below (unsigned <) */

loc_001CD6E1:
    MEM32(edi + 0x2884) = ebp;
    ebp = MEM32(esp + 0x18);
    SET_LO8(ebx, 0); /* xor self */
    esi = edi + 4;

loc_001CD6F0:
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_001CC700(); /* call 0x001CC700 */

loc_001CD6F8:
    eax = esi;
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001CD6FF:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CD71C; /* jne: not equal / not zero */

loc_001CD703:
    if (CMP_A(MEM8(esi + 0x37) & 1, 0)) goto loc_001CD71C; /* ja: above (unsigned >) */

loc_001CD709:
    edx = MEM32(edi + 0x2884);
    MEM8(edx + edi + 0x2784) = LO8(ebx);
    MEM32(edi + 0x2884) = MEM32(edi + 0x2884) + 1;

loc_001CD71C:
    SET_LO8(ebx, LO8(ebx) + 1);
    esi = esi + 0x40;
    if (CMP_B(LO8(ebx), 0x8C)) goto loc_001CD6F0; /* jb: below (unsigned <) */

loc_001CD726:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    eax = edi;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_001CD733:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001CD739:
    /* test MEM8(esi + 0x11), 8 - flags set for next jcc */
    goto loc_001CD67B;

}
