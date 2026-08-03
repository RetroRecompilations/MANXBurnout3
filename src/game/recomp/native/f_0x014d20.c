#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>

/* Exact retail frontend vtable render method, 0x14D20..0x14D7B. */
void sub_00014D20(void)
{
    int _flags = 0;

    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034C2E0();

    eax = MEM32(0x557A70);
    MEM8(0x4D6B30) = 1;
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned count;
        if (count < 12) {
            fprintf(stderr, "[B3-FE] retail render=%u screen=%08X phase=%d\n",
                    count, eax, (int)SMEM8(0x55609E));
            count++;
        }
    }
    if (eax == 0x559648 || eax == 0x55A408 || eax == 0x55CB60 ||
        (eax == 0x55A118 && MEM8(0x55A11C))) {
        eax = (uint32_t)(int32_t)SMEM8(0x55609E);
        PUSH32(esp, eax);
        PUSH32(esp, 0x60EA00);
        {
            uint32_t s = g_esp;
            PUSH32(esp, 0);
            RECOMP_ICALL_SAFE(0x001AE6F0, s);
        }
    }
    esp += 4;
}
