#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>

extern uint16_t g_xinput_buttons __attribute__((weak));
extern volatile uint32_t g_xinput_activity_latched __attribute__((weak));

/* Original Burnout 3 controller-button activity test, 0x17790..0x177CF. */
void sub_00017790(void)
{
    int _flags = 0;
    if (getenv("B3_INPUT_TRACE")) {
        static unsigned trace_calls;
        if (trace_calls++ < 32 ||
            (&g_xinput_activity_latched && g_xinput_activity_latched) ||
            (&g_xinput_buttons && g_xinput_buttons))
            fprintf(stderr,
                    "[B3-INPUT] activity entry live=%04X edge=%u esi=%08X esp=%08X\n",
                    &g_xinput_buttons ? g_xinput_buttons : 0,
                    &g_xinput_activity_latched ? g_xinput_activity_latched : 0,
                    esi, esp);
    }
    /* The Xbox XInput object/vtable layer is intentionally absent. The host
     * has already converted native input to the same Burnout pad bits, so
     * preserve this routine's retail meaning: true when a pad has activity. */
    if ((&g_xinput_activity_latched && g_xinput_activity_latched) ||
        (&g_xinput_buttons && g_xinput_buttons)) {
        if (&g_xinput_activity_latched)
            g_xinput_activity_latched = 0;
        MEM8(esi + 0xB38) = 0;
        SET_LO8(eax, 1);
        esp += 4;
        return;
    }
    esp -= 0x10;
    PUSH32(esp, edi);
    edi = esp + 4;
    edx = esi;
    PUSH32(esp, 0); sub_00017BB0();

    SET_LO8(eax, 0);
    POP32(esp, edi);
loc_scan:
    ecx = SX8(LO8(eax));
    ecx = MEM32(esp + ecx * 4);
    if (TEST_Z(ecx, ecx)) goto loc_next;
    if (CMP_NE(MEM16(ecx + 0x40), 0)) goto loc_found;
loc_next:
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_L(LO8(eax), 4)) goto loc_scan;
    SET_LO8(eax, 0);
    esp += 0x10;
    esp += 4;
    return;
loc_found:
    MEM8(esi + 0xB38) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 0x10;
    esp += 4;
}
