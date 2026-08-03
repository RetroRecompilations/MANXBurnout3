#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00022790
 * Original: 0x00022790 - 0x0002298C (508 bytes, 150 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022790:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((eax == 0)) goto loc_00022967; /* je: equal / zero */

loc_000227A1:
    eax--;
    if ((eax == 0)) goto loc_00022935; /* je: equal / zero */

loc_000227A8:
    eax--;
    if ((eax != 0)) goto loc_00022987; /* jne: not equal / not zero */

loc_000227AF:
    eax = MEM32(esp + 0x14);
    if (CMP_A(eax, 0x12)) goto loc_00022987; /* ja: above (unsigned >) */

loc_000227BC:
    { uint32_t _jt = MEM32(eax * 4 + 0x2298C); /* switch: 19 entries, 12 targets */
    if (_jt == 0x000227C3u) goto loc_000227C3;
    if (_jt == 0x000227F5u) goto loc_000227F5;
    if (_jt == 0x0002280Du) goto loc_0002280D;
    if (_jt == 0x0002281Eu) goto loc_0002281E;
    if (_jt == 0x0002282Fu) goto loc_0002282F;
    if (_jt == 0x0002284Du) goto loc_0002284D;
    if (_jt == 0x0002285Eu) goto loc_0002285E;
    if (_jt == 0x00022885u) goto loc_00022885;
    if (_jt == 0x000228BAu) goto loc_000228BA;
    if (_jt == 0x000228EFu) goto loc_000228EF;
    if (_jt == 0x00022924u) goto loc_00022924;
    if (_jt == 0x00022987u) goto loc_00022987;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000227C3:
    PUSH32(esp, 0x30);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_000227CC:
    eax = MEM32(esi + 0x1C);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00022987; /* jne: not equal / not zero */

loc_000227DA:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x73392A6F);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_000227F0:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000227F5:
    PUSH32(esp, 0x31);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_000227FE:
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002280D:
    PUSH32(esp, 0x32);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022816:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002281E:
    PUSH32(esp, 0x33);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022827:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002282F:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x9C8FCA23u);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022845:
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002284D:
    PUSH32(esp, 0x2E);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022856:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002285E:
    PUSH32(esp, 0x2F);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_00022867:
    esp = esp + 4;
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022880:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022885:
    PUSH32(esp, 0x3A);
    edx = 0; /* xor self */
    MEM32(esi + 0x1C) = 1;
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_0002289C:
    esp = esp + 4;
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_000228B5:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000228BA:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    MEM32(esi + 0x1C) = 1;
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_000228DE:
    PUSH32(esp, 0x38);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_000228E7:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000228EF:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    MEM32(esi + 0x1C) = 1;
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_00022913:
    PUSH32(esp, 0x39);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_0002291C:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022924:
    PUSH32(esp, 0x36);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B90(); /* call 0x00018B90 */

loc_0002292D:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022935:
    ecx = MEM32(0x3F9A34);
    if (TEST_Z(ecx, ecx)) goto loc_00022987; /* je: equal / zero */

loc_0002293F:
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    edx = MEM32(0x3F9A38);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00022967:
    PUSH32(esp, 0x93D12267u);
    PUSH32(esp, 0x661960F7);
    PUSH32(esp, 0x3F9A30);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_0002297D:
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = edi;

loc_00022987:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
