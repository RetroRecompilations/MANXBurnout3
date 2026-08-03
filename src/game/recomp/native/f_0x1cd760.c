#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD760
 * Original: 0x001CD760 - 0x001CD7F6 (150 bytes, 61 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD760(void)
{
    const uint32_t entry_esp = esp;
    const uint32_t base = MEM32(entry_esp + 4);
    const uint32_t caller_ebx = ebx;
    const uint32_t caller_esi = esi;
    const uint32_t caller_edi = edi;
    const uint32_t caller_seh_ebp = g_seh_ebp;

    /* Preserve the XBE algorithm while keeping its callee-saved loop state
     * in host locals. Some translated RW leaves still leak ESI/EDI/EBX. */
    for (uint32_t i = 0, item = base + 0x2324; i < 0x10; i++, item += 0x34) {
        uint32_t resource = MEM32(item - 0xC);
        PUSH32(esp, 0); PUSH32(esp, resource);
        PUSH32(esp, 0); sub_0020BCE0();
        PUSH32(esp, 0); PUSH32(esp, resource);
        PUSH32(esp, 0); sub_0020BEB0();
        esp += 0x10;

        resource = MEM32(item);
        if (resource != 0) {
            PUSH32(esp, 0); PUSH32(esp, resource);
            PUSH32(esp, 0); sub_0020BCE0();
            PUSH32(esp, 0); PUSH32(esp, resource);
            PUSH32(esp, 0); sub_0020BEB0();
            esp += 0x10;
        }
        MEM8(item + 0xE) = 0;
        MEM8(item + 0x11) &= 1;
    }

    for (uint32_t i = 0, item = base + 0x10; i < 0x8C; i++, item += 0x40) {
        uint32_t resource = MEM32(item);
        PUSH32(esp, 0); PUSH32(esp, resource);
        PUSH32(esp, 0); sub_001FB100();
        PUSH32(esp, 0); PUSH32(esp, resource);
        PUSH32(esp, 0); sub_001FB140();
        MEM8(item + 0x28) = 0;
        MEMF(item + 0x24) = 0.0f;
        MEM8(item + 0x2B) &= 1;
        esp += 0x10;
    }

    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    esp = entry_esp + 8; /* ret 4 */
    return;

#if 0 /* scanner translation retained for opcode-level comparison */
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CD760:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x2324;
    edi = 0x10;
    ebx = 0; /* xor self */

loc_001CD775:
    eax = MEM32(esi + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CD77F:
    ecx = MEM32(esi + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CD789:
    eax = MEM32(esi);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_001CD7A5; /* je: equal / zero */

loc_001CD792:
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CD799:
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CD7A2:
    esp = esp + 0x10;

loc_001CD7A5:
    SET_LO8(edx, MEM8(esi + 0x11));
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0xE) = LO8(ebx);
    MEM8(esi + 0x11) = LO8(edx);
    esi = esi + 0x34;
    edi--;
    if ((edi != 0)) goto loc_001CD775; /* jne: not equal / not zero */

loc_001CD7B7:
    esi = ebp + 0x10;
    edi = 0x8C;
    /* nop */

loc_001CD7C0:
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_001CD7C9:
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_001CD7D2:
    SET_LO8(edx, MEM8(esi + 0x2B));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0x28) = LO8(ebx);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x2B) = LO8(edx);
    esp = esp + 0x10;
    esi = esi + 0x40;
    edi--;
    if ((edi != 0)) goto loc_001CD7C0; /* jne: not equal / not zero */

loc_001CD7EF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

#endif
}
