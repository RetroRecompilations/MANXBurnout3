#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5810
 * Original: 0x001F5810 - 0x001F5834 (36 bytes, 8 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5810(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5810:
    /* The original body opens the Xbox RW/NV2A world pipeline and then
     * tail-jumps into GPU push-buffer bookkeeping. Native rendering is
     * already owned by the DXVK-backed RW/D3D interpreter, so executing
     * that second hardware backend spins before the frontend update. Keep
     * the observable begin-frame flag and return to the XBE menu code. */
    MEM32(0x41B41C) = 1;
    esp += 4;
    return;

}
