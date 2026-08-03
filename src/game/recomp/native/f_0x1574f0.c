#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001574F0
 * Original: 0x001574F0 - 0x00157590 (160 bytes, 61 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001574F0(void)
{
    const uint32_t entry_esp = esp;
    const uint32_t out_va = eax;
    const uint32_t caller_ebx = ebx;
    const uint32_t caller_esi = esi;
    const uint32_t caller_edi = edi;
    const uint32_t caller_seh_ebp = g_seh_ebp;
    uint64_t packed = ((uint64_t)MEM32(entry_esp + 8) << 32) |
                      MEM32(entry_esp + 4);
    char ident[13];
    char *out = (char *)XBOX_PTR(out_va);
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_path_args;
        if (traced_path_args++ < 4)
            fprintf(stderr, "[B3-FE] 1574F0 out=%08X low=%08X high=%08X esp=%08X\n",
                    out_va, MEM32(entry_esp + 4), MEM32(entry_esp + 8), entry_esp);
    }

    /* 0x1AECC0 decodes Criterion's 64-bit base-40 identifier. The original
     * 0x1574F0 then rearranges US_C5_V1 into tracks/US/C5_V1/. Keeping that
     * work local avoids stack-local corruption in the translated strncat
     * helpers while preserving every retail track identifier. */
    for (int i = 11; i >= 0; i--) {
        uint32_t digit = (uint32_t)(packed % 40u);
        packed /= 40u;
        if (digit == 0) ident[i] = ' ';
        else if (digit == 1) ident[i] = '-';
        else if (digit == 2) ident[i] = '/';
        else if (digit < 13) ident[i] = (char)(digit + 0x2D);
        else if (digit < 39) ident[i] = (char)(digit + 0x34);
        else ident[i] = '_';
    }
    ident[12] = '\0';
    for (int i = 11; i >= 0 && ident[i] == ' '; i--) ident[i] = '\0';
    if (ident[0] && ident[1] && ident[2] == '_' && ident[3])
        snprintf(out, 64, "tracks/%c%c/%s/", ident[0], ident[1], ident + 3);
    else
        snprintf(out, 64, "tracks/%s/", ident);

    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    eax = out_va;
    /* The original epilogue is ret 8; 0x1888F0 intentionally performs no
     * caller cleanup before addressing the output buffer at esp+0x20. */
    esp = entry_esp + 12;
    return;

#if 0 /* scanner translation retained for opcode-level comparison */
    int _flags = 0; /* fallback flag var */

loc_001574F0:
    edx = MEM32(esp + 8);
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x3AF28C);
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x3AF290);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0x10;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_0015751A:
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_00157525:
    edi = esi;
    esp = esp + 0x14;
    edi--;
    goto loc_00157530;

    /* nop */

loc_00157530:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00157530; /* jne: not equal / not zero */

loc_00157538:
    SET_LO16(edx, MEM16(0x3AF294));
    PUSH32(esp, 2);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM16(edi) = LO16(edx);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_0015754F:
    edi = esi;
    esp = esp + 0xC;
    edi--;

loc_00157555:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00157555; /* jne: not equal / not zero */

loc_0015755D:
    SET_LO16(ecx, MEM16(0x3AE168));
    PUSH32(esp, 2);
    edx = esp + 0x12;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM16(edi) = LO16(ecx);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_00157574:
    esp = esp + 0xC;
    esi--;

loc_00157578:
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00157578; /* jne: not equal / not zero */

loc_00157580:
    SET_LO16(eax, MEM16(0x3AF294));
    edi = esi;
    MEM16(edi) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;

#endif
}
