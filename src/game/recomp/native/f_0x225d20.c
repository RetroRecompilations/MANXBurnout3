#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225D20
 * Original: 0x00225D20 - 0x00225EDD (445 bytes, 153 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00225D20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x64;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = SX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3710AC);
    esi = ebx;
    edi = edi | 0xFFFFFFFFu;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_00225D55:
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ebp + 0xC);
    ecx++;
    ecx = ecx & 0x80000001u;
    PUSH32(esp, eax);
    if (((int32_t)ecx >= 0)) goto loc_00225D6B; /* jns: not sign (positive) */

loc_00225D66:
    ecx--;
    ecx = ecx | 0xFFFFFFFEu;
    ecx++;

loc_00225D6B:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x219C);
    edx = ecx + ebx + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00225710(); /* call 0x00225710 */

loc_00225D7B:
    esi = eax;
    esp = esp + 0x18;
    if (TEST_NZ(esi, esi)) goto loc_00225D8E; /* jne: not equal / not zero */

loc_00225D84:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00225D8E:
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFBBu;
    if (CMP_A(eax, 0x11)) goto loc_00225EA7; /* ja: above (unsigned >) */

loc_00225D9D:
    eax = ZX8(MEM8(eax + 0x225EFC));
    { uint32_t _jt = MEM32(eax * 4 + 0x225EE0); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00225DABu) goto loc_00225DAB;
    if (_jt == 0x00225E1Bu) goto loc_00225E1B;
    if (_jt == 0x00225E48u) goto loc_00225E48;
    if (_jt == 0x00225E61u) goto loc_00225E61;
    if (_jt == 0x00225E78u) goto loc_00225E78;
    if (_jt == 0x00225E8Fu) goto loc_00225E8F;
    if (_jt == 0x00225EA7u) goto loc_00225EA7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00225DAB:
    if (TEST_NZ(MEM32(esi + 0x1C), 0x4000000)) goto loc_00225EBB; /* jne: not equal / not zero */

loc_00225DB8:
    ecx = MEM32(ebx + 0x4650);
    PUSH32(esp, 0x37101C);
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    MEM8(ebx + 0x464C) = 0x45;
    MEM8(ebx + 0x464D) = 0x41;
    MEM8(ebx + 0x464E) = 0x43;
    edx = MEM32(ebx + 0x464C);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031AAE7(); /* call 0x0031AAE7 */

loc_00225DEB:
    edx = MEM32(ebx + 0x464C);
    ecx = 0x15;
    edi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x4650);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_0031AB90(); /* call 0x0031AB90 */

loc_00225E14:
    edi = eax;
    goto loc_00225EBB;

loc_00225E1B:
    edx = MEM32(ebx + 0x464C);
    ecx = 0x15;
    edi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x4650);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_0031ABB1(); /* call 0x0031ABB1 */

loc_00225E44:
    edi = eax;
    goto loc_00225EBB;

loc_00225E48:
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031ABDD(); /* call 0x0031ABDD */

loc_00225E52:
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00225E5D; /* je: equal / zero */

loc_00225E58:
    if (CMP_NE(edi, 1)) goto loc_00225EBB; /* jne: not equal / not zero */

loc_00225E5D:
    edi = 0; /* xor self */
    goto loc_00225EBB;

loc_00225E61:
    if (CMP_BE(MEM32(esi + 0x1C) & 0x8000000, 0)) goto loc_00225EBB; /* jbe: below or equal (unsigned <=) */

loc_00225E6A:
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031ABDD(); /* call 0x0031ABDD */

loc_00225E74:
    edi = eax;
    goto loc_00225EBB;

loc_00225E78:
    if (CMP_BE(MEM32(esi + 0x1C) & 0x8000000, 0)) goto loc_00225EBB; /* jbe: below or equal (unsigned <=) */

loc_00225E81:
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031ABDD(); /* call 0x0031ABDD */

loc_00225E8B:
    edi = eax;
    goto loc_00225EBB;

loc_00225E8F:
    if (CMP_BE(MEM8(esi + 0x1C) & 0x10, 0)) goto loc_00225EBB; /* jbe: below or equal (unsigned <=) */

loc_00225E95:
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031ABE8(); /* call 0x0031ABE8 */

loc_00225E9D:
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_00225EBB; /* jl: less (signed <) */

loc_00225EA3:
    edi = 0; /* xor self */
    goto loc_00225EBB;

loc_00225EA7:
    PUSH32(esp, 0x37102C);
    esi = ebx;
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_00225EB3:
    esp = esp + 4;
    edi = 0xFFFFFFFEu;

loc_00225EBB:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x371080);
    esi = ebx;
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_00225ED1:
    esp = esp + 0x10;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
