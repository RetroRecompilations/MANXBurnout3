#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9C80
 * Original: 0x001C9C80 - 0x001C9DDC (348 bytes, 128 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9C80(void)
{
    const uint32_t entry_esp = esp;
    const uint32_t caller_ebx = ebx;
    const uint32_t caller_esi = esi;
    const uint32_t caller_edi = edi;
    const uint32_t caller_seh_ebp = g_seh_ebp;
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

    /* Portable streamed-audio resource boundary.
     *
     * Keep Criterion's retail pool ownership, linked lists, name lookup and
     * reference count, but mark a newly acquired descriptor ready without
     * constructing an Xbox DirectSound stream.  Actual media is decoded by
     * MANX's native backend.  The returned address is the same
     * descriptor payload (pool node + 8) used by the original routine. */
    {
        const uint32_t manager = MEM32(entry_esp + 4);
        const uint32_t name = MEM32(entry_esp + 8);
        const uint8_t stream_flag = MEM8(entry_esp + 12);
        uint32_t node = MEM32(manager + 0x34);

        while (node != 0) {
            const uint32_t payload = node + 8;
            uint32_t i = 0;
            while (i < 0x40 && MEM8(payload + 0x370 + i) == MEM8(name + i)) {
                if (MEM8(name + i) == 0) {
                    MEM8(payload + 0x3A8)++;
                    eax = payload;
                    goto portable_return;
                }
                i++;
            }
            node = MEM32(node);
        }

        {
            const uint32_t free_list = MEM32(manager + 0x30);
            node = free_list ? MEM32(free_list + 0x10) : 0;
            if (node == 0) {
                eax = 0;
                goto portable_return;
            }

            const uint32_t next = MEM32(node);
            MEM32(free_list + 0x10) = next;
            if (next != 0)
                MEM32(next + 4) = 0;

            const uint32_t used = MEM32(manager + 0x34);
            MEM32(node) = used;
            MEM32(node + 4) = 0;
            if (used != 0)
                MEM32(used + 4) = node;
            MEM32(manager + 0x34) = node;

            const uint32_t payload = node + 8;
            uint32_t i = 0;
            while (i < 0x3F && MEM8(name + i) != 0) {
                MEM8(payload + 0x370 + i) = MEM8(name + i);
                i++;
            }
            MEM8(payload + 0x370 + i) = 0;
            MEM32(payload + 0x3A4) = 0x100;
            MEM8(payload + 0x3A8) = 0;
            MEM8(payload + 0x3AA) = stream_flag;
            MEM8(payload + 0x3AB) = 1;
            eax = payload;
        }
    }

portable_return:
    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    esp = entry_esp + 20; /* ret 16 */
    return;

#if 0
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9C80:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = edi;
    edx = eax + 1;

loc_001C9C91:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C9C91; /* jne: not equal / not zero */

loc_001C9C98:
    eax = eax - edx;
    ecx = edi;
    if ((eax == 0)) goto loc_001C9CAC; /* je: equal / zero */

loc_001C9C9E:
    edi = edi;

loc_001C9CA0:
    if (CMP_NE(MEM8(ecx), 0x2F)) goto loc_001C9CA8; /* jne: not equal / not zero */

loc_001C9CA5:
    MEM8(ecx) = 0x5C;

loc_001C9CA8:
    ecx++;
    eax--;
    if ((eax != 0)) goto loc_001C9CA0; /* jne: not equal / not zero */

loc_001C9CAC:
    ebx = MEM32(ebp + 0x34);
    if (TEST_Z(ebx, ebx)) goto loc_001C9CD0; /* je: equal / zero */

loc_001C9CB3:
    esi = ebx + 8;
    eax = esi + 0x370;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_001C9CC3:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C9D29; /* je: equal / zero */

loc_001C9CCA:
    ebx = MEM32(ebx);
    if (TEST_NZ(ebx, ebx)) goto loc_001C9CB3; /* jne: not equal / not zero */

loc_001C9CD0:
    eax = MEM32(ebp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_001C9CF7; /* je: equal / zero */

loc_001C9CD7:
    ecx = 0x100;
    /* nop */

loc_001C9CE0:
    edx = MEM32(eax + 0x3AC);
    /* test ecx, edx - flags set for next jcc */
    esi = eax + 8;
    if (TEST_Z(ecx, edx)) goto loc_001C9D95; /* je: equal / zero */

loc_001C9CF1:
    eax = MEM32(eax);
    if (TEST_NZ(eax, eax)) goto loc_001C9CE0; /* jne: not equal / not zero */

loc_001C9CF7:
    eax = MEM32(ebp + 0x30);
    ebx = MEM32(eax + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_001C9DD3; /* je: equal / zero */

loc_001C9D05:
    ecx = MEM32(ebx);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_001C9D17; /* je: equal / zero */

loc_001C9D10:
    MEM32(eax + 4) = 0;

loc_001C9D17:
    eax = MEM32(ebp + 0x34);
    if (TEST_NZ(eax, eax)) goto loc_001C9DAC; /* jne: not equal / not zero */

loc_001C9D22:
    MEM32(ebx) = eax;
    goto loc_001C9DB1;

loc_001C9D29:
    if (TEST_Z(esi, esi)) goto loc_001C9CD0; /* je: equal / zero */

loc_001C9D2D:
    SET_LO8(eax, MEM8(esi + 0x3AB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9D4E; /* je: equal / zero */

loc_001C9D37:
    SET_LO8(eax, MEM8(esi + 0x3A8));
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, edi);
    MEM8(esi + 0x3A8) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001C9D4E:
    if (CMP_NE(MEM32(esi + 0x3A4), 0x100)) goto loc_001C9D63; /* jne: not equal / not zero */

loc_001C9D5A:
    MEM8(esi + 0x3AB) = 1;
    goto loc_001C9D78;

loc_001C9D63:
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_001C9660(); /* call 0x001C9660 */

loc_001C9D72:
    MEM8(esi + 0x3AB) = LO8(eax);

loc_001C9D78:
    SET_LO8(eax, MEM8(esi + 0x3AB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9DD3; /* je: equal / zero */

loc_001C9D82:
    SET_LO8(edx, MEM8(esp + 0x1C));
    POP32(esp, edi);
    MEM8(esi + 0x3AA) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001C9D95:
    ebx = MEM32(ebp);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_001C9660(); /* call 0x001C9660 */

loc_001C9DA3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001C9DAC:
    MEM32(ebx) = eax;
    MEM32(eax + 4) = ebx;

loc_001C9DB1:
    edi = MEM32(esp + 0x20);
    esi = ebp;
    MEM32(ebp + 0x34) = ebx;
    PUSH32(esp, 0); sub_001C9E90(); /* call 0x001C9E90 */

loc_001C9DBF:
    edx = edi;
    edi = MEM32(esp + 0x18);
    esi = ebx + 8;
    ebx = MEM32(ebp);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0); sub_001C9660(); /* call 0x001C9660 */

loc_001C9DD3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
#endif

}
