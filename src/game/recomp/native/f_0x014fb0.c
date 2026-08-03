#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Native media boundary for the retail frontend.
 *
 * The XBE's sub_001C92C0 is not menu code.  It constructs an XDK XMV
 * decoder, allocates two Xbox media packets and polls them until one is
 * complete.  The portable runtime already provides that service through
 * manx_fmv (FFmpeg video plus 48 kHz stereo audio), so entering the XDK
 * implementation here would duplicate a platform backend and make an
 * Android build depend on emulated Xbox media objects.
 *
 * Keep the small guest-visible contract instead.  The retail frontend only
 * waits for this object to reach state 0x17 before it builds its real menu;
 * movie open/update/upload is owned by the host media bridge.  Known fields
 * are initialised to the values the XMV path exposes at completion so later
 * XBE cleanup and state checks remain deterministic.
 */
static uint8_t b3_native_video_resource_ready(uint32_t object,
                                               uint32_t stream_buffer,
                                               uint32_t flags,
                                               uint32_t source,
                                               uint32_t frame_period_bits)
{
    (void)stream_buffer;

    /* XMVCreateDecoder publishes the decoded surface dimensions in the
     * frontend media object. The retail UI's sub_001C57C0 reads these fields
     * to build the movie-background quad; leaving them zero turns its exact
     * self-normalisation into 0/0 and poisons every following vertex. The
     * native decoder targets the same 640x480 surface used by manx_fmv and
     * the D3D8 backend. */
    MEM32(object + 0x18) = 640;
    MEM32(object + 0x1C) = 480;
    MEM32(object + 0x40) = 0;                 /* current packet */
    MEM32(object + 0x44) = frame_period_bits;
    MEM32(object + 0x48) = flags;
    MEM32(object + 0x4C) = 0x17;              /* portable backend ready */
    MEM32(object + 0x50) = 0;                 /* no guest XMV handle */
    MEM32(object + 0x54) = MEM32(0x3B16C0);   /* retail initial clock */
    MEM32(object + 0x58) = 0;
    MEM32(object + 0x5C) = 0;
    MEM8(object + 0x60) = 0;
    MEM8(object + 0x61) = 0;
    MEM8(object + 0x62) = 0;
    MEM8(object + 0x63) = 1;                  /* completion observed */

    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr,
                "[B3-VIDEO] native media backend ready object=%08X "
                "source=%08X flags=%08X frame-period=%08X\n",
                object, source, flags, frame_period_bits);
    return 1;
}

/* Frontend resource readiness selected by the retail menu callback. */
void sub_00014FB0(void)
{
    int _flags = 0;
    recomp_xmm_t xmm0, xmm1, xmm2;

    eax = MEM32(0x411BE0);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr,
                "[B3-FE] 14FB0 active=%08X audio=%u kind=%u render=%u aux=%08X/%08X\n",
                ebx, eax, MEM32(ebx + 0x240), MEM32(ebx + 0x23C),
                MEM32(ebx + 0x254), MEM32(ebx + 0x258));
    /* The portable bootstrap deliberately replaces the Xbox DirectSound
     * graph with the host decoder/mixer.  Retail frontend kind 2 waits on
     * that removed two-entry XAudio stream pool before it will create the
     * menu.  The host backend is already live here, so report that specific
     * hardware-only dependency ready; all non-audio resource kinds continue
     * through the original XBE checks below. */
    if (MEM32(ebx + 0x240) == 2 && MEM32(0x40B318 + 0x4D8) == 0) {
        if (getenv("B3_FRONTEND_TRACE"))
            fprintf(stderr, "[B3-AUDIO] native stream backend satisfies retail frontend readiness\n");
        goto loc_true;
    }
    /* Kind 0 is the main-menu resource set.  Every path below for it
     * creates and polls an XDK audio stream (menu music) on the removed
     * Xbox DirectSound graph — sub_001CBF30/sub_001CE140 against the audio
     * base at 0x40B318 — so it can never come ready natively.  The host
     * backend owns music playback; report the hardware-only dependency
     * ready and keep all non-audio kinds on the original XBE checks. */
    if (MEM32(ebx + 0x240) == 0 && MEM32(0x40B318 + 0x4D8) == 0) {
        if (getenv("B3_FRONTEND_TRACE")) {
            static unsigned kind0_logged;
            if (!kind0_logged++)
                fprintf(stderr, "[B3-AUDIO] native stream backend satisfies menu (kind 0) readiness\n");
        }
        goto loc_true;
    }
    if (TEST_Z(eax, eax)) goto loc_00014FC3;
    if (CMP_NE(eax, 3)) goto loc_true;

loc_00014FC3:
    eax = MEM32(ebx + 0x258);
    if (TEST_Z(eax, eax)) goto loc_00014FDC;
    if (CMP_NE(MEM32(eax + 0x170), 6)) goto loc_00014FDC;

loc_true:
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8;
    return;

loc_00014FDC:
    ecx = MEM32(ebx + 0x240);
    ecx = MEM32(ecx * 4 + 0x383808);
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, 0x24)) goto loc_000151BF;
    if (CMP_NE(ecx, 0x22)) goto loc_0001500F;
    if (TEST_NZ(eax, eax)) goto loc_0001502B;
    PUSH32(esp, eax);
    ecx = 0x40E0D4;
    PUSH32(esp, 0); sub_001CBF30();
    MEM32(ebx + 0x258) = eax;
    goto loc_0001502B;

loc_0001500F:
    eax = MEM32(ebx + 0x254);
    if (TEST_NZ(eax, eax)) goto loc_0001502B;
    PUSH32(esp, esi);
    esi = 0x40B318;
    PUSH32(esp, 0); sub_001CE140();
    MEM32(ebx + 0x254) = eax;
    POP32(esp, esi);

loc_0001502B:
    eax = MEM32(ebx + 0x240) << 2;
    eax = MEM32(eax + 0x383808);
    if (TEST_Z(MEM8(eax + 0x383A10), 2)) goto loc_00015086;
    if (CMP_NE(eax, 0x22)) goto loc_00015068;
    ecx = MEM32(0x3C837C);
    eax = MEM32(ebx + 0x258);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    edi = 0;
    PUSH32(esp, 0); sub_001CB6C0();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00015096;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8;
    return;

loc_00015068:
    edx = MEM32(0x3C8378);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
loc_00015072:
    eax = MEM32(ebx + 0x254);
    PUSH32(esp, 0); sub_001CE6A0();
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00015096;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8;
    return;

loc_00015086:
    if (CMP_EQ(eax, 0x22)) {
        ecx = MEM32(0x3C837C);
        eax = MEM32(ebx + 0x258);
        PUSH32(esp, 4);
        PUSH32(esp, 0);
        edi = 0;
        PUSH32(esp, 0); sub_001CB6C0();
        if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00015096;
        POP32(esp, edi);
        POP32(esp, ebx);
        esp += 8;
        return;
    }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(0x3C8378);
    PUSH32(esp, eax);
    goto loc_00015072;

loc_00015096:
    ecx = (uint32_t)(int32_t)SMEM8(0x4AE1D5);
    edx = (uint32_t)(int32_t)SMEM8(0x4AE1D4);
    xmm2.f[0] = MEMF(0x3A7ED8);
    eax = MEM32(ebx + 0x254);
    xmm0.f[0] = (float)(int32_t)ecx * xmm2.f[0];
    xmm1.f[0] = (float)(int32_t)edx * xmm2.f[0];
    if (xmm0.f[0] <= xmm1.f[0]) goto loc_00015121;
    if (TEST_Z(eax, eax)) goto loc_000150F8;
    ecx = MEM32(ebx + 0x240);
    xmm1.f[0] = MEMF(0x3C8380) * xmm0.f[0];
    if (TEST_NZ(ecx, ecx)) xmm1.f[0] *= MEMF(0x3B17D8);
    POP32(esp, edi);
    MEMF(eax + 0x21C) = xmm1.f[0];
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8;
    return;

loc_000150F8:
    ebx = MEM32(ebx + 0x258);
    if (TEST_Z(ebx, ebx)) goto loc_000151C9;
    xmm1.f[0] = MEMF(0x3C8380) * xmm0.f[0];
    POP32(esp, edi);
    MEMF(ebx + 0x15C) = xmm1.f[0];
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8;
    return;

loc_00015121:
    if (TEST_Z(eax, eax)) goto loc_0001519A;
    ebx = MEM32(ebx + 0x240);
    xmm0.f[0] = MEMF(0x3C8380) * xmm1.f[0];
    if (ebx > 9) xmm0.f[0] *= MEMF(0x3B17D8);
    POP32(esp, edi);
    MEMF(eax + 0x21C) = xmm0.f[0];
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8;
    return;

loc_0001519A:
    ebx = MEM32(ebx + 0x258);
    if (TEST_Z(ebx, ebx)) goto loc_000151C9;
    xmm0.f[0] = MEMF(0x3C8380) * xmm1.f[0];
    POP32(esp, edi);
    MEMF(ebx + 0x15C) = xmm0.f[0];
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8;
    return;

loc_000151BF:
    MEM32(ebx + 0x258) = 0;
loc_000151C9:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8;
}

/* Frontend render-resource state bootstrap paired with sub_00014FB0. */
void sub_000151D0(void)
{
    uint32_t call_esp;
    int _flags = 0;

    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x23C) - 2;
    PUSH32(esp, edi);
    if (eax == 0) goto loc_00015239;
    eax -= 0x16;
    if (eax != 0) goto loc_000152D0;

    ecx = MEM32(0x3FA62C);
    edi = MEM32(esi + 0x25C);
    edx = ecx;
    ecx >>= 2;
    eax = 0;
    { uint32_t i; for (i = 0; i < ecx; i++) MEM32(edi + i * 4) = eax; }
    edi += ecx * 4;
    ecx = edx & 3;
    memset((void *)XBOX_PTR(edi), (uint8_t)eax, ecx);
    ecx = MEM32(0x3FA62C);
    eax = MEM32(esi + 0x25C);
    MEM32(esi + 0x26C) = eax;
    MEM32(esi + 0x270) = eax + ecx;
    MEM32(esi + 0x274) = eax;
    MEM8(esi + 0x264) = 1;
    MEM32(esi + 0x23C) = 2;

loc_00015239:
    eax = MEM32(esi + 0x240);
    MEM32(esp + 4) = (eax >= 0x52) ? 0x90 : MEM32(eax * 4 + 0x383C18);
    eax = MEM32(eax * 4 + 0x383600);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x420C64);
    PUSH32(esp, 0); sub_00243215();
    ecx = MEM32(esi + 0x240);
    ecx = MEM32(ecx * 4 + 0x383A10);
    esp += 0xC;
    PUSH32(esp, 0x3D08AB86);
    PUSH32(esp, 0x420C64);
    eax = esi + 0x264;
    edi = esi + 0x1D0;
    call_esp = g_esp;
    eax = b3_native_video_resource_ready(
        edi, eax, ecx, MEM32(call_esp), MEM32(call_esp + 4));
    /* sub_001C92C0 is stdcall and would pop its two guest arguments. */
    esp = call_esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) MEM32(esi + 0x23C) = 0x17;
    else {
        POP32(esp, edi);
        POP32(esp, ecx);
        esp += 4;
        return;
    }

loc_000152D0:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4;
}
