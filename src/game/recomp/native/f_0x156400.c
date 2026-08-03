#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_00156400
 * Original: 0x00156400 - 0x00156507 (263 bytes, 65 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156400(void)
{
    uint32_t ebp;
    uint32_t stack_before;
    int _flags = 0; /* fallback flag var */

loc_00156400:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0); sub_00243F09(); /* call 0x00243F09 */

loc_00156417:
    PUSH32(esp, 0x3000000);
    PUSH32(esp, 0x1000000);
    PUSH32(esp, 0); sub_00243F09(); /* call 0x00243F09 */

loc_00156426:
    esp = esp + 0x10;
    PUSH32(esp, 0x4A71A0);
    MEM32(0x360A00) = 0x200000;
    MEM32(0x3609FC) = 0x80000;
    PUSH32(esp, 0); sub_00015A60(); /* call 0x00015A60 */

loc_00156447:
    stack_before = esp;
    PUSH32(esp, 0x4A71A0);
    PUSH32(esp, 0); sub_00015F10(); /* call 0x00015F10 */
    if (getenv("B3_STACK_TRACE") && esp != stack_before) {
        static int traced_initial_15f10;
        if (!traced_initial_15f10) {
        fprintf(stderr, "[B3-STACK] initial 15F10: before=%08X after=%08X\n",
                stack_before, esp);
            traced_initial_15f10 = 1;
        }
    }

loc_00156451:
    ebx = 0; /* xor self */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015648F; /* jne: not equal / not zero */

loc_00156457:
    goto loc_00156460;

    /* nop */

loc_00156460:
    /* The user-facing native path starts at Burnout's frontend. 0x2F650 is
     * the retail loading/logo render pass repeated while 0x15F10 advances;
     * it does not own any init state. Omit only that pass in fast-menu mode
     * and continue calling the original initializer below. */
    if (!getenv("B3_SKIP_BOOT_DRAWS")) {
        PUSH32(esp, 0xBF800000u);
        PUSH32(esp, 0); sub_0002F650(); /* call 0x0002F650 */
    }

loc_0015646A:
    eax = MEM32(0x4D64D8);
    stack_before = esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(0x4D6B30) = LO8(ebx);
    PUSH32(esp, 0); sub_001D9420(); /* call 0x001D9420 */
    if (getenv("B3_STACK_TRACE") && esp != stack_before - 0xCu) {
        static int traced_1d9420;
        if (!traced_1d9420) {
        fprintf(stderr, "[B3-STACK] 1D9420: before=%08X expected=%08X after=%08X\n",
                stack_before, stack_before - 0xCu, esp);
            traced_1d9420 = 1;
        }
    }

loc_0015647E:
    esp = esp + 0xC;
    stack_before = esp;
    PUSH32(esp, 0x4A71A0);
    PUSH32(esp, 0); sub_00015F10(); /* call 0x00015F10 */
    if (getenv("B3_STACK_TRACE") && esp != stack_before) {
        static int traced_loop_15f10;
        if (!traced_loop_15f10) {
        fprintf(stderr, "[B3-STACK] loop 15F10: before=%08X after=%08X\n",
                stack_before, esp);
            traced_loop_15f10 = 1;
        }
    }

loc_0015648B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00156460; /* je: equal / zero */

loc_0015648F:
    /* EBX was zeroed before the initializer and is callee-saved in the
     * original x86. A few translated constructors still leak their scratch
     * EBX value, which made a clear quit flag (0) compare unequal and skipped
     * the retail frontend loop entirely. Keep the original invariant at this
     * long-lived call boundary. */
    ebx = 0;
    if (CMP_NE(MEM8(0x4D5378), 0)) goto loc_001564B2; /* jne: not equal / not zero */

loc_00156497:
    goto loc_001564A0;

    /* nop */

loc_001564A0:
    PUSH32(esp, 0x4A71A0);
    PUSH32(esp, 0); sub_000165F0(); /* call 0x000165F0 */

loc_001564AA:
    ebx = 0;
    if (CMP_EQ(MEM8(0x4D5378), 0)) goto loc_001564A0; /* je: equal / zero */

loc_001564B2:
    PUSH32(esp, 0); sub_00192320(); /* call 0x00192320 */

loc_001564B7:
    PUSH32(esp, 0); sub_0017A320(); /* call 0x0017A320 */

loc_001564BC:
    PUSH32(esp, 0); sub_000201A0(); /* call 0x000201A0 */

loc_001564C1:
    edi = 0x572980;
    PUSH32(esp, 0); sub_000FC9F0(); /* call 0x000FC9F0 */

loc_001564CB:
    eax = 0x40B310;
    PUSH32(esp, 0); sub_00135500(); /* call 0x00135500 */

loc_001564D5:
    eax = 2;
    edi = 0x4A71A0;
    MEM32(0x3F9CD4) = eax;
    MEM32(0x4D539C) = ebx;
    MEM32(0x4D53A0) = ebx;
    MEM32(0x4D53B8) = eax;
    MEM32(0x4D53B4) = eax;
    PUSH32(esp, 0); sub_00016D00(); /* call 0x00016D00 */

loc_001564FF:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
