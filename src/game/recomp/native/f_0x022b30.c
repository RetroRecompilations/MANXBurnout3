#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00022B30
 * Original: 0x00022B30 - 0x00022CE4 (436 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022B30:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((eax == 0)) goto loc_00022CC6; /* je: equal / zero */

loc_00022B41:
    eax--;
    if ((eax == 0)) goto loc_00022C94; /* je: equal / zero */

loc_00022B48:
    eax--;
    if ((eax != 0)) goto loc_00022CDF; /* jne: not equal / not zero */

loc_00022B4F:
    eax = MEM32(esp + 0x14);
    if (CMP_A(eax, 0x12)) goto loc_00022CDF; /* ja: above (unsigned >) */

loc_00022B5C:
    { uint32_t _jt = MEM32(eax * 4 + 0x22CE4); /* switch: 19 entries, 13 targets */
    if (_jt == 0x00022B63u) goto loc_00022B63;
    if (_jt == 0x00022B95u) goto loc_00022B95;
    if (_jt == 0x00022BADu) goto loc_00022BAD;
    if (_jt == 0x00022BBEu) goto loc_00022BBE;
    if (_jt == 0x00022BCFu) goto loc_00022BCF;
    if (_jt == 0x00022BEAu) goto loc_00022BEA;
    if (_jt == 0x00022C11u) goto loc_00022C11;
    if (_jt == 0x00022C38u) goto loc_00022C38;
    if (_jt == 0x00022C5Fu) goto loc_00022C5F;
    if (_jt == 0x00022C71u) goto loc_00022C71;
    if (_jt == 0x00022C86u) goto loc_00022C86;
    if (_jt == 0x00022C8Du) goto loc_00022C8D;
    if (_jt == 0x00022CDFu) goto loc_00022CDF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00022B63:
    PUSH32(esp, 0x30);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022B6C:
    eax = MEM32(esi + 0x18);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00022CDF; /* jne: not equal / not zero */

loc_00022B7A:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x73392A6F);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022B90:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022B95:
    PUSH32(esp, 0x31);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022B9E:
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022BAD:
    PUSH32(esp, 0x32);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022BB6:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022BBE:
    PUSH32(esp, 0x33);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022BC7:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022BCF:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x9C8FCA23u);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022BE5:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022BEA:
    PUSH32(esp, 0x2E);

loc_00022BEC:
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022BF3:
    esp = esp + 4;
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022C0C:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022C11:
    PUSH32(esp, 0x2F);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022C1A:
    esp = esp + 4;
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022C33:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022C38:
    PUSH32(esp, 0x3A);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022C41:
    esp = esp + 4;
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022C5A:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022C5F:
    PUSH32(esp, 0x38);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022C68:
    MEM32(esi + 0x18) = 1;
    goto loc_00022BF3;

loc_00022C71:
    PUSH32(esp, 0x39);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022C7A:
    MEM32(esi + 0x18) = 1;
    goto loc_00022BF3;

loc_00022C86:
    PUSH32(esp, 0x3A);
    goto loc_00022BEC;

loc_00022C8D:
    PUSH32(esp, 0x36);
    goto loc_00022BEC;

loc_00022C94:
    ecx = MEM32(0x3F9A34);
    if (TEST_Z(ecx, ecx)) goto loc_00022CDF; /* je: equal / zero */

loc_00022C9E:
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    edx = MEM32(0x3F9A38);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00022CC6:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022CDC:
    MEM32(esi + 0x18) = edi;

loc_00022CDF:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
