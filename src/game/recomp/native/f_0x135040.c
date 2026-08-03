#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_00135040
 * Original: 0x00135040 - 0x00135237 (503 bytes, 125 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

    /* Portable audio bootstrap.
     *
     * The retail routine builds the Xbox/RenderWare streaming graph. Its
     * pipeline search calls the untransformed callback at 0x1F8860; treating
     * that callback as absent recursively walks a cyclic graph until the host
     * stack overflows. FMV and game audio are decoded by the native backend,
     * so retain the XBE-visible state while bypassing only that hardware graph. */
    if (edi >= 0x10000u && edi < 0x04000000u) {
        const uint32_t audio_base = edi;
        MEM8(edi + 4) = 0;
        MEM32(edi + 0x520) = 0x411E80;
        MEM32(edi + 0x524) = 0x411E9C;
        MEM32(edi + 0x528) = 1;
        MEM32(edi + 0x6B50) = 0;
        MEM32(edi + 0x6B54) = 0;
        MEM32(edi + 0x6B58) = 0;
        MEM32(edi + 0x6B5C) = 0;
        MEM32(edi + 0x6B60) = 1;
        MEM32(0x411E88) = 0;
        MEM32(0x411E90) = 0;
        MEM32(0x411EA4) = 0;
        MEM32(0x411EAC) = 0;
        /* sub_001CA350 normally constructs this generic stream-resource pool
         * as part of the Xbox DirectSound graph.  The frontend still uses the
         * pool for its streamed-audio object even when samples are decoded by
         * the host backend, so retain the retail 11-entry pool construction. */
        if (MEM32(audio_base + 0x4E4 + 0x30) == 0) {
            /* sub_001E1070 installs these retail defaults.  Some native boot
             * routes reach audio setup before its generated call site, so do
             * the same null-only initialization before asking for storage. */
            if (MEM32(0x7593D4) == 0) {
                MEM32(0x7593D4) = 0x1FEDE0;
                MEM32(0x7593D8) = 0x2440A5;
                MEM32(0x7593DC) = 0x1E0DC0;
                MEM32(0x7593E0) = 0x1E0DE0;
            }
            edi = audio_base + 0x4E4;
            eax = 0xB;
            edx = 0x3EBFE0;
            ecx = MEM32(audio_base + 0x2DFC);
            PUSH32(esp, 0);
            sub_001C9B30();
            edi = audio_base;
            if (getenv("B3_FRONTEND_TRACE"))
                fprintf(stderr,
                        "[B3-FE] audio stream pool count=%u storage=%08X free=%08X used=%08X event=%08X\n",
                        MEM32(audio_base + 0x4E4 + 0x14),
                        MEM32(audio_base + 0x4E4 + 0x18),
                        MEM32(audio_base + 0x4E4 + 0x30),
                        MEM32(audio_base + 0x4E4 + 0x34),
                        MEM32(audio_base + 0x4E4));
        }
        /* 0x73A190/0x73A194 are the selected track's encoded ID, not
         * members of the audio object.  Leave them untouched here; the
         * frontend loader deliberately uses its retail US_C5_V1 fallback
         * while no track has been selected. */
    }
    esp += 4;
    return;

    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135040:
    SET_LO8(eax, MEM8(edi + 0x2E04));
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(edi + 4) = LO8(ebx);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0013505C; /* jne: not equal / not zero */

loc_00135055:
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0013505C:
    eax = MEM32(edi + 0x2DFC);
    ebp = 2;
    esi = edi + 0x6910;
    MEM32(esp + 0xC) = 0xB;
    MEM32(esp + 0x10) = 0x3EBFE0;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0); sub_001526A0(); /* call 0x001526A0 */

loc_0013508E:
    eax = MEM32(0x3FA6A0);
    /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(ecx, MEM8(edi + 4));
    edx = MEM32(0x4AED9C);
    MEM32(esp + 0x34) = 0x47A064;
    MEM32(esp + 0x38) = ebp;
    MEM8(esp + 0x54) = LO8(ecx);
    MEM32(esp + 0x3C) = 0x13;
    MEM32(esp + 0x40) = 0x14;
    MEM32(esp + 0x4C) = 0x17;
    MEM32(esp + 0x50) = 0x18;
    MEM32(esp + 0x44) = 0x15;
    MEM32(esp + 0x48) = 0x16;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_L(eax, ebx)) goto loc_001350F4; /* jl: less (signed <) */

loc_001350E8:
    if (CMP_EQ(eax, MEM32(0x3FA644))) goto loc_001350F4; /* je: equal / zero */

loc_001350F0:
    eax = 0; /* xor self */
    goto loc_0013510F;

loc_001350F4:
    if (CMP_EQ(MEM32(0x3FA69C), ebx)) goto loc_00135100; /* je: equal / zero */

loc_001350FC:
    eax = 0; /* xor self */
    goto loc_0013510F;

loc_00135100:
    eax = MEM32(0x3FA6A8);
    MEM32(0x3FA69C) = 0xFFFFFFFFu;

loc_0013510F:
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x3FA6A4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    esi = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_001CA350(); /* call 0x001CA350 */

loc_00135128:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F7150(); /* call 0x001F7150 */

loc_00135132:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    MEM32(0x411E88) = eax;
    MEMF(0x411E84) = xmm0.f[0]; /* movss */
    MEM32(0x411E90) = ebx;
    PUSH32(esp, 0); sub_001F7150(); /* call 0x001F7150 */

loc_00135152:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(0x411EA4) = eax;
    MEMF(0x411EA0) = xmm0.f[0]; /* movss */
    MEM32(0x411EAC) = ebx;
    MEM32(edi + 0x520) = 0x411E80;
    edx = MEM32(0x411E88);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F77C0(); /* call 0x001F77C0 */

loc_0013517E:
    eax = MEM32(0x411E88);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F7810(); /* call 0x001F7810 */

loc_00135189:
    MEM32(edi + 0x524) = 0x411E9C;
    ecx = MEM32(0x411EA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F77C0(); /* call 0x001F77C0 */

loc_0013519F:
    ebp = 1;
    MEM32(edi + 0x528) = ebp;
    ecx = MEM32(edi + 0x520);
    edx = MEM32(ecx);
    esp = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001351B9:
    if (CMP_NE(MEM32(edi + 0x528), ebp)) goto loc_001351C5; /* jne: not equal / not zero */

loc_001351C1:
    PUSH32(esp, 2);
    goto loc_001351C7;

loc_001351C5:
    PUSH32(esp, 3);

loc_001351C7:
    PUSH32(esp, 0); sub_001F7800(); /* call 0x001F7800 */

loc_001351CC:
    esp = esp + 4;
    ebx = edi + 0x2E10;
    PUSH32(esp, 0); sub_0013E980(); /* call 0x0013E980 */

loc_001351DA:
    PUSH32(esp, 0x3F800000);
    esi = edi;
    PUSH32(esp, 0); sub_00135740(); /* call 0x00135740 */

loc_001351E6:
    eax = MEM32(0x3EBFD4);
    ecx = MEM32(0x4A1E94);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EBFCC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EBFD8);
    eax = 0; /* xor self */
    edx = 0x3AD1A4;
    MEM32(edi + 0x6B50) = esi;
    MEM32(edi + 0x6B54) = esi;
    MEM32(edi + 0x6B58) = esi;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00135224:
    MEM32(edi + 0x6B5C) = esi;
    POP32(esp, esi);
    MEM32(edi + 0x6B60) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}
