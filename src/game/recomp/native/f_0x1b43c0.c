#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B43C0
 * Original: 0x001B43C0 - 0x001B444F (143 bytes, 26 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B43C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B43C0:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B43C5:
    if (CMP_A(eax, 0x7B)) goto loc_001B443E; /* ja: above (unsigned >) */

loc_001B43CA:
    eax = ZX8(MEM8(eax + 0x1B446C));
    { uint32_t _jt = MEM32(eax * 4 + 0x1B4450); /* switch: 7 entries, 7 targets */
    if (_jt == 0x001B43D8u) goto loc_001B43D8;
    if (_jt == 0x001B43E9u) goto loc_001B43E9;
    if (_jt == 0x001B43FAu) goto loc_001B43FA;
    if (_jt == 0x001B440Bu) goto loc_001B440B;
    if (_jt == 0x001B441Cu) goto loc_001B441C;
    if (_jt == 0x001B442Du) goto loc_001B442D;
    if (_jt == 0x001B443Eu) goto loc_001B443E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B43D8:
    MEM32(esi + 0xC00) = 1;
    eax = MEM32(esi + 0xC00);
    esp += 4; return; /* ret */

loc_001B43E9:
    MEM32(esi + 0xC00) = 5;
    eax = MEM32(esi + 0xC00);
    esp += 4; return; /* ret */

loc_001B43FA:
    MEM32(esi + 0xC00) = 9;
    eax = MEM32(esi + 0xC00);
    esp += 4; return; /* ret */

loc_001B440B:
    MEM32(esi + 0xC00) = 0xA;
    eax = MEM32(esi + 0xC00);
    esp += 4; return; /* ret */

loc_001B441C:
    MEM32(esi + 0xC00) = 0xB;
    eax = MEM32(esi + 0xC00);
    esp += 4; return; /* ret */

loc_001B442D:
    MEM32(esi + 0xC00) = 0;
    eax = MEM32(esi + 0xC00);
    esp += 4; return; /* ret */

loc_001B443E:
    MEM32(esi + 0xC00) = 0xD;
    eax = MEM32(esi + 0xC00);
    esp += 4; return; /* ret */

}
