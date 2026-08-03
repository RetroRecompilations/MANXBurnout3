#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001F7C0
 * Original: 0x0001F7C0 - 0x00020191 (2513 bytes, 829 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F7C0:
    eax = MEM32(0x3C83E4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x3C8410);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AAC20);
    ebp = ebx;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001F7E7:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3C8414;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001F806:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001F80E:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001F81B; /* jne: not equal / not zero */

loc_0001F812:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001F819:
    goto loc_0001F821;

loc_0001F81B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001F821:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8418);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83E4);
    eax = 0; /* xor self */
    edx = 0x3AAC00;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F84B:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C83E4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C841C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AABEC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F875:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83E4);
    edx = edx + 0x10;
    PUSH32(esp, 0x3C8420);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AABD8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F8A0:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8424);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83E8);
    eax = 0; /* xor self */
    edx = 0x3AABAC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F8CA:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C83E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8428);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AAB7C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F8F4:
    ecx = MEM32(0x3C83EC);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AAB54);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001F918:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3C842C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001F937:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001F93F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001F94C; /* jne: not equal / not zero */

loc_0001F943:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001F94A:
    goto loc_0001F952;

loc_0001F94C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001F952:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8430);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83EC);
    eax = 0; /* xor self */
    edx = 0x3AAB34;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F97C:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C83EC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8434);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AAB20;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F9A6:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83EC);
    edx = edx + 0x10;
    PUSH32(esp, 0x3C8438);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AAB0C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001F9D1:
    ecx = MEM32(0x3C83F0);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AAAE8);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001F9F5:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x4A1CA0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001FA14:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001FA1C:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001FA29; /* jne: not equal / not zero */

loc_0001FA20:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001FA27:
    goto loc_0001FA2F;

loc_0001FA29:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001FA2F:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C843C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83F0);
    eax = 0; /* xor self */
    edx = 0x3AAAC8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FA59:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C83F0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8440);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AAAB4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FA83:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83F0);
    edx = edx + 0x10;
    PUSH32(esp, 0x4A1CA4);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AAAA0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FAAE:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8444);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83F4);
    eax = 0; /* xor self */
    edx = 0x3AAA80;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FAD8:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C83F4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8448);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AAA60;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FB02:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83F4);
    edx = edx + 0x10;
    PUSH32(esp, 0x3C844C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AAA38;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FB2D:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8450);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83F4);
    eax = 0; /* xor self */
    edx = 0x3AAA14;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FB57:
    edx = MEM32(0x3C83F8);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AA9F0);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001FB7B:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x4A1CA8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0001FB9A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0001FBA2:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001FBAF; /* jne: not equal / not zero */

loc_0001FBA6:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0001FBAD:
    goto loc_0001FBB5;

loc_0001FBAF:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001FBB5:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83F8);
    edx = edx + 0x10;
    PUSH32(esp, 0x3C8454);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AA9C8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FBE0:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8458);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83F8);
    eax = 0; /* xor self */
    edx = 0x3AA9B0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FC0A:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C83F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x4A1CAC);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AA998;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FC34:
    ecx = MEM32(0x3C83FC);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AA974);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001FC58:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3C845C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001FC77:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001FC7F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001FC8C; /* jne: not equal / not zero */

loc_0001FC83:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001FC8A:
    goto loc_0001FC92;

loc_0001FC8C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001FC92:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8460);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83FC);
    eax = 0; /* xor self */
    edx = 0x3AA954;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FCBC:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C83FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8464);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AA940;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FCE6:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C83FC);
    edx = edx + 0x10;
    PUSH32(esp, 0x3C8468);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AA92C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FD11:
    ecx = MEM32(0x3C8400);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AA904);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001FD35:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x4A1CB0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001FD54:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001FD5C:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001FD69; /* jne: not equal / not zero */

loc_0001FD60:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001FD67:
    goto loc_0001FD6F;

loc_0001FD69:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001FD6F:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C846C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8400);
    eax = 0; /* xor self */
    edx = 0x3AA8E0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FD99:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C8400);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8470);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AA8C4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FDC3:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8400);
    edx = edx + 0x10;
    PUSH32(esp, 0x4A1CB4);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AA8A8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FDEE:
    ecx = MEM32(0x3C8404);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AA87C);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001FE12:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x4A1CB8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001FE31:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001FE39:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001FE46; /* jne: not equal / not zero */

loc_0001FE3D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001FE44:
    goto loc_0001FE4C;

loc_0001FE46:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001FE4C:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8474);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8404);
    eax = 0; /* xor self */
    edx = 0x3AA854;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FE76:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C8404);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8478);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AA834;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FEA0:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8404);
    edx = edx + 0x10;
    PUSH32(esp, 0x4A1CBC);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AA814;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FECB:
    ecx = MEM32(0x3C8404);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AA7E4);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001FEEF:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x4A1CC0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001FF0E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001FF16:
    if (CMP_NE(LO8(eax), 1)) goto loc_0001FF23; /* jne: not equal / not zero */

loc_0001FF1A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001FF21:
    goto loc_0001FF29;

loc_0001FF23:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0001FF29:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C847C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8404);
    eax = 0; /* xor self */
    edx = 0x3AA7B4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FF53:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C8404);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8480);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AA790;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FF7D:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8404);
    edx = edx + 0x10;
    PUSH32(esp, 0x4A1CC4);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AA76C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0001FFA8:
    ecx = MEM32(0x3C8408);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AA740);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0001FFCC:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x4A1CC8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0001FFEB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001FFF3:
    if (CMP_NE(LO8(eax), 1)) goto loc_00020000; /* jne: not equal / not zero */

loc_0001FFF7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001FFFE:
    goto loc_00020006;

loc_00020000:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00020006:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8484);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8408);
    eax = 0; /* xor self */
    edx = 0x3AA718;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00020030:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C8408);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8488);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AA6FC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0002005A:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8408);
    edx = edx + 0x10;
    PUSH32(esp, 0x4A1CCC);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AA6E0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00020085:
    ecx = MEM32(0x3C8408);
    eax = MEM32(0x3C8410);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AA6AC);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_000200A9:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3C848C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_000200C8:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_000200D0:
    if (CMP_NE(LO8(eax), 1)) goto loc_000200DD; /* jne: not equal / not zero */

loc_000200D4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000200DB:
    goto loc_000200E3;

loc_000200DD:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_000200E3:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8490);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8408);
    eax = 0; /* xor self */
    edx = 0x3AA67C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0002010D:
    edx = MEM32(0x3C8410);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3C8408);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3C8494);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AA658;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00020137:
    ecx = MEM32(0x3C8410);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C8408);
    edx = edx + 0x10;
    PUSH32(esp, 0x4A1CD0);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AA634;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00020162:
    eax = MEM32(0x3C8410);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3C8498);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C840C);
    eax = 0; /* xor self */
    edx = 0x3AA61C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0002018C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
