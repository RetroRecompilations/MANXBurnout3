#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D3C56
 * Original: 0x001D3C56 - 0x001D3CAE (88 bytes, 35 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C56(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3C56:
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x36BF60);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D3C62:
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    if (CMP_EQ(MEM32(ebp + 0x10), ebx)) goto loc_001D3C9D; /* je: equal / zero */

loc_001D3C78:
    if (CMP_EQ(MEM32(ebp + 0x10), ebx)) goto loc_001D3C97; /* je: equal / zero */

loc_001D3C7D:
    SET_LO8(edx, MEM8(ecx));
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001D3C92; /* je: equal / zero */

loc_001D3C83:
    MEM8(eax) = LO8(edx);
    eax++;
    MEM32(ebp + -28) = eax;
    ecx++;
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    goto loc_001D3C78;

loc_001D3C92:
    if (CMP_NE(MEM32(ebp + 0x10), ebx)) goto loc_001D3C9B; /* jne: not equal / not zero */

loc_001D3C97:
    eax--;
    MEM32(ebp + -28) = eax;

loc_001D3C9B:
    MEM8(eax) = LO8(ebx);

loc_001D3C9D:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_001D3CB3(); return; /* tail jmp 0x001D3CB3 */

    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}
