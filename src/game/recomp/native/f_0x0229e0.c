#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000229E0
 * Original: 0x000229E0 - 0x00022B00 (288 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000229E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000229E0:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_00022AE4; /* je: equal / zero */

loc_000229EE:
    eax--;
    if ((eax == 0)) goto loc_00022AB4; /* je: equal / zero */

loc_000229F5:
    eax--;
    if ((eax != 0)) goto loc_00022AFC; /* jne: not equal / not zero */

loc_000229FC:
    eax = MEM32(esp + 0x10);
    eax--;
    if (CMP_A(eax, 0xD)) goto loc_00022AFC; /* ja: above (unsigned >) */

loc_00022A0A:
    eax = ZX8(MEM8(eax + 0x22B20));
    { uint32_t _jt = MEM32(eax * 4 + 0x22B00); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00022A18u) goto loc_00022A18;
    if (_jt == 0x00022A3Eu) goto loc_00022A3E;
    if (_jt == 0x00022A4Eu) goto loc_00022A4E;
    if (_jt == 0x00022A5Eu) goto loc_00022A5E;
    if (_jt == 0x00022A6Eu) goto loc_00022A6E;
    if (_jt == 0x00022A94u) goto loc_00022A94;
    if (_jt == 0x00022AA4u) goto loc_00022AA4;
    if (_jt == 0x00022AFCu) goto loc_00022AFC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00022A18:
    PUSH32(esp, 0x32);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022A21:
    esp = esp + 4;
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    edi = 0; /* xor self */
    PUSH32(esp, 0x3F9A30);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022A3A:
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00022A3E:
    PUSH32(esp, 0x34);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022A47:
    esp = esp + 4;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00022A4E:
    PUSH32(esp, 0x35);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022A57:
    esp = esp + 4;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00022A5E:
    PUSH32(esp, 0x3C);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022A67:
    esp = esp + 4;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00022A6E:
    PUSH32(esp, 0x3B);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022A77:
    esp = esp + 4;
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    edi = 0; /* xor self */
    PUSH32(esp, 0x3F9A30);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022A90:
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00022A94:
    PUSH32(esp, 0x31);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022A9D:
    esp = esp + 4;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00022AA4:
    PUSH32(esp, 0x32);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022AAD:
    esp = esp + 4;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00022AB4:
    ecx = MEM32(0x3F9A34);
    if (TEST_Z(ecx, ecx)) goto loc_00022AFC; /* je: equal / zero */

loc_00022ABE:
    edx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    eax = MEM32(0x3F9A38);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_00022AE4:
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0xC53B0B63u);
    PUSH32(esp, 0x3F9A30);
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022AFC:
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}
