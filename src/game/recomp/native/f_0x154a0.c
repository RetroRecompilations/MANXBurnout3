#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>

/* Retail media-resource teardown, implemented at the native service boundary.
 * The original function drains two XDK XMV packets and destroys their decoder.
 * manx_fmv owns those host objects, so only publish the same completed/stopped
 * guest state here; no Xbox packet or decoder implementation is required. */
void sub_000154A0(void)
{
    uint32_t media = edi + 0x1D0;

    MEM8(media + 0x60) = 1;
    MEM8(media + 0x63) = 1;
    MEM32(media + 0x4C) = 0x17;
    MEM32(media + 0x50) = 0;
    MEM32(edi + 0x220) = 0;
    MEM8(edi + 0x231) = 1;
    MEM32(edi + 0x23C) = 0x18;

    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr,
                "[B3-VIDEO] native media stop active=%08X state=%u\n",
                edi, MEM32(edi + 0x23C));
    esp += 4;
}
