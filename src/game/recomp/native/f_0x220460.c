#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220460
 * Original: 0x00220460 - 0x00220536 (214 bytes, 63 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220460:
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    /* cmp ebx, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    eax = 0xFFFFFFFDu;
    if (CMP_A(ebx, 4)) goto loc_0022052B; /* ja: above (unsigned >) */

loc_00220477:
    { uint32_t _jt = MEM32(ebx * 4 + 0x220538); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0022047Eu) goto loc_0022047E;
    if (_jt == 0x00220484u) goto loc_00220484;
    if (_jt == 0x00220493u) goto loc_00220493;
    if (_jt == 0x0022052Bu) goto loc_0022052B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022047E:
    esi = MEM32(esp + 0x60);
    goto loc_0022049F;

loc_00220484:
    esi = MEM32(esp + 0x60);
    eax = MEM32(esi + 0xF8);
    eax = eax | 8;
    goto loc_002204AA;

loc_00220493:
    esi = MEM32(esp + 0x60);
    if (TEST_Z(esi, esi)) goto loc_00220530; /* je: equal / zero */

loc_0022049F:
    eax = MEM32(esi + 0xF8);
    eax = eax & 0xFBBD73F7u;

loc_002204AA:
    PUSH32(esp, edi);
    PUSH32(esp, 0x37052C);
    MEM32(esi + 0xF8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0x370508);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_002204C5:
    eax = MEM32(ebx * 4 + 0x3C5E9C);
    edi = MEM32(esp + 0x6C);
    esp = esp + 0xC;
    if (CMP_NE(eax, 0x49)) goto loc_002204ED; /* jne: not equal / not zero */

loc_002204D8:
    ecx = MEM32(edi + 0xD64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x21E590);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225FB0(); /* call 0x00225FB0 */

loc_002204EA:
    esp = esp + 0xC;

loc_002204ED:
    if (CMP_NE(MEM32(ebx * 4 + 0x3C5E9C), 0x56)) goto loc_0022050A; /* jne: not equal / not zero */

loc_002204F7:
    edx = MEM32(edi + 0xD64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00225FB0(); /* call 0x00225FB0 */

loc_00220507:
    esp = esp + 0xC;

loc_0022050A:
    eax = MEM32(ebx * 4 + 0x3C5E9C);
    ecx = MEM32(edi + 0xD64);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225D20(); /* call 0x00225D20 */

loc_0022051F:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_0022052B:
    eax = 0xFFFFFFFDu;

loc_00220530:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}
