#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD200
 * Original: 0x001CD200 - 0x001CD4C1 (705 bytes, 221 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001CD200:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    MEM32(ebx + 0x288C) = eax;
    ecx = MEM32(esi + 4);
    MEM32(ebx + 0x2880) = ecx;
    PUSH32(esp, edi);
    ebx = ebx + 0x2304;
    MEM32(esp + 0x14) = 0x10;

loc_001CD230:
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi);
    edi = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_001CA790(); /* call 0x001CA790 */

loc_001CD241:
    eax = MEM32(esp + 0x14);
    ebx = ebx + 0x34;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001CD230; /* jne: not equal / not zero */

loc_001CD24F:
    edi = MEM32(ebp + 8);
    edi = edi + 0x2810;
    ebx = 0x18;
    /* nop */

loc_001CD260:
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x36EA4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F8B10(); /* call 0x001F8B10 */

loc_001CD273:
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F8580(); /* call 0x001F8580 */

loc_001CD27C:
    SET_LO8(eax, MEM8(esi + 0x28));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CD2C8; /* je: equal / zero */

loc_001CD286:
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esi + 0x18);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x54) = edx;
    edx = esp + 0x38;
    MEM32(esp + 0x38) = 7;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x6C) = 0xB;
    MEM32(esp + 0x24) = edx;

loc_001CD2C8:
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edx = edx | 0x1000000;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_0020B450(); /* call 0x0020B450 */

loc_001CD2E9:
    MEM32(edi) = eax;
    esp = esp + 0x14;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_001CD260; /* jne: not equal / not zero */

loc_001CD2F8:
    eax = MEM32(ebp + 8);
    edx = MEM32(esi);
    PUSH32(esp, 0x18);
    eax = eax + 0x2810;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FBE70(); /* call 0x001FBE70 */

loc_001CD30B:
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(esi + 0x28));
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x10);
    esp = esp + 0xC;
    /* cmp eax, 0x1E - flags set for next jcc */
    MEM8(esp + 0x34) = LO8(ecx);
    if (CMP_A(eax, 0x1E)) goto loc_001CD34C; /* ja: above (unsigned >) */

loc_001CD323:
    edx = ZX8(MEM8(eax + 0x1CD4DC));
    { uint32_t _jt = MEM32(edx * 4 + 0x1CD4C4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001CD331u) goto loc_001CD331;
    if (_jt == 0x001CD334u) goto loc_001CD334;
    if (_jt == 0x001CD339u) goto loc_001CD339;
    if (_jt == 0x001CD33Cu) goto loc_001CD33C;
    if (_jt == 0x001CD347u) goto loc_001CD347;
    if (_jt == 0x001CD34Cu) goto loc_001CD34C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CD331:
    eax++;
    goto loc_001CD350;

loc_001CD334:
    eax = eax + 3;
    goto loc_001CD350;

loc_001CD339:
    eax--;
    goto loc_001CD350;

loc_001CD33C:
    ecx = 7;
    MEM32(esp + 0x1C) = ecx;
    goto loc_001CD359;

loc_001CD347:
    eax = eax + 0xFFFFFFFDu;
    goto loc_001CD350;

loc_001CD34C:
    eax = MEM32(esp + 0x14);

loc_001CD350:
    MEM32(esp + 0x1C) = eax;
    ecx = 7;

loc_001CD359:
    eax = MEM32(esi + 0x14);
    if (CMP_A(eax, 0x1E)) goto loc_001CD385; /* ja: above (unsigned >) */

loc_001CD361:
    edx = ZX8(MEM8(eax + 0x1CD514));
    { uint32_t _jt = MEM32(edx * 4 + 0x1CD4FC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001CD36Fu) goto loc_001CD36F;
    if (_jt == 0x001CD372u) goto loc_001CD372;
    if (_jt == 0x001CD377u) goto loc_001CD377;
    if (_jt == 0x001CD37Au) goto loc_001CD37A;
    if (_jt == 0x001CD380u) goto loc_001CD380;
    if (_jt == 0x001CD385u) goto loc_001CD385;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CD36F:
    eax++;
    goto loc_001CD389;

loc_001CD372:
    eax = eax + 3;
    goto loc_001CD389;

loc_001CD377:
    eax--;
    goto loc_001CD389;

loc_001CD37A:
    MEM32(esp + 0x20) = ecx;
    goto loc_001CD38D;

loc_001CD380:
    eax = eax + 0xFFFFFFFDu;
    goto loc_001CD389;

loc_001CD385:
    eax = MEM32(esp + 0x14);

loc_001CD389:
    MEM32(esp + 0x20) = eax;

loc_001CD38D:
    eax = MEM32(esi + 0x20);
    if (CMP_A(eax, 0x1E)) goto loc_001CD3B9; /* ja: above (unsigned >) */

loc_001CD395:
    edx = ZX8(MEM8(eax + 0x1CD54C));
    { uint32_t _jt = MEM32(edx * 4 + 0x1CD534); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001CD3A3u) goto loc_001CD3A3;
    if (_jt == 0x001CD3A6u) goto loc_001CD3A6;
    if (_jt == 0x001CD3ABu) goto loc_001CD3AB;
    if (_jt == 0x001CD3AEu) goto loc_001CD3AE;
    if (_jt == 0x001CD3B4u) goto loc_001CD3B4;
    if (_jt == 0x001CD3B9u) goto loc_001CD3B9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CD3A3:
    eax++;
    goto loc_001CD3BD;

loc_001CD3A6:
    eax = eax + 3;
    goto loc_001CD3BD;

loc_001CD3AB:
    eax--;
    goto loc_001CD3BD;

loc_001CD3AE:
    MEM32(esp + 0x2C) = ecx;
    goto loc_001CD3C1;

loc_001CD3B4:
    eax = eax + 0xFFFFFFFDu;
    goto loc_001CD3BD;

loc_001CD3B9:
    eax = MEM32(esp + 0x14);

loc_001CD3BD:
    MEM32(esp + 0x2C) = eax;

loc_001CD3C1:
    eax = MEM32(esi + 0x24);
    if (CMP_A(eax, 0x1E)) goto loc_001CD3ED; /* ja: above (unsigned >) */

loc_001CD3C9:
    edx = ZX8(MEM8(eax + 0x1CD584));
    { uint32_t _jt = MEM32(edx * 4 + 0x1CD56C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001CD3D7u) goto loc_001CD3D7;
    if (_jt == 0x001CD3DAu) goto loc_001CD3DA;
    if (_jt == 0x001CD3DFu) goto loc_001CD3DF;
    if (_jt == 0x001CD3E2u) goto loc_001CD3E2;
    if (_jt == 0x001CD3E8u) goto loc_001CD3E8;
    if (_jt == 0x001CD3EDu) goto loc_001CD3ED;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CD3D7:
    eax++;
    goto loc_001CD3F1;

loc_001CD3DA:
    eax = eax + 3;
    goto loc_001CD3F1;

loc_001CD3DF:
    eax--;
    goto loc_001CD3F1;

loc_001CD3E2:
    MEM32(esp + 0x30) = ecx;
    goto loc_001CD3F5;

loc_001CD3E8:
    eax = eax + 0xFFFFFFFDu;
    goto loc_001CD3F1;

loc_001CD3ED:
    eax = MEM32(esp + 0x14);

loc_001CD3F1:
    MEM32(esp + 0x30) = eax;

loc_001CD3F5:
    eax = MEM32(esi + 0x18);
    if (CMP_A(eax, 0x1E)) goto loc_001CD421; /* ja: above (unsigned >) */

loc_001CD3FD:
    edx = ZX8(MEM8(eax + 0x1CD5BC));
    { uint32_t _jt = MEM32(edx * 4 + 0x1CD5A4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001CD40Bu) goto loc_001CD40B;
    if (_jt == 0x001CD40Eu) goto loc_001CD40E;
    if (_jt == 0x001CD413u) goto loc_001CD413;
    if (_jt == 0x001CD416u) goto loc_001CD416;
    if (_jt == 0x001CD41Cu) goto loc_001CD41C;
    if (_jt == 0x001CD421u) goto loc_001CD421;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CD40B:
    eax++;
    goto loc_001CD425;

loc_001CD40E:
    eax = eax + 3;
    goto loc_001CD425;

loc_001CD413:
    eax--;
    goto loc_001CD425;

loc_001CD416:
    MEM32(esp + 0x24) = ecx;
    goto loc_001CD429;

loc_001CD41C:
    eax = eax + 0xFFFFFFFDu;
    goto loc_001CD425;

loc_001CD421:
    eax = MEM32(esp + 0x14);

loc_001CD425:
    MEM32(esp + 0x24) = eax;

loc_001CD429:
    esi = MEM32(esi + 0x1C);
    if (CMP_A(esi, 0x1E)) goto loc_001CD459; /* ja: above (unsigned >) */

loc_001CD431:
    eax = ZX8(MEM8(esi + 0x1CD5F4));
    { uint32_t _jt = MEM32(eax * 4 + 0x1CD5DC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001CD43Fu) goto loc_001CD43F;
    if (_jt == 0x001CD444u) goto loc_001CD444;
    if (_jt == 0x001CD449u) goto loc_001CD449;
    if (_jt == 0x001CD44Eu) goto loc_001CD44E;
    if (_jt == 0x001CD454u) goto loc_001CD454;
    if (_jt == 0x001CD459u) goto loc_001CD459;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CD43F:
    eax = esi + 1;
    goto loc_001CD45D;

loc_001CD444:
    eax = esi + 3;
    goto loc_001CD45D;

loc_001CD449:
    eax = esi + -1;
    goto loc_001CD45D;

loc_001CD44E:
    MEM32(esp + 0x28) = ecx;
    goto loc_001CD461;

loc_001CD454:
    eax = esi + -3;
    goto loc_001CD45D;

loc_001CD459:
    eax = MEM32(esp + 0x14);

loc_001CD45D:
    MEM32(esp + 0x28) = eax;

loc_001CD461:
    esi = MEM32(ebp + 8);
    esi = esi + 4;
    ebx = 0x8C;
    /* nop */

loc_001CD470:
    edi = esp + 0x18;
    eax = esi;
    PUSH32(esp, 0); sub_001CC2C0(); /* call 0x001CC2C0 */

loc_001CD47B:
    esi = esi + 0x40;
    ebx--;
    if ((ebx != 0)) goto loc_001CD470; /* jne: not equal / not zero */

loc_001CD481:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = 0; /* xor self */
    goto loc_001CD490;

    /* nop */

loc_001CD490:
    MEMF(eax + 0x4A1BE8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4A1BEC) = xmm0.f[0]; /* movss */
    eax = eax + 8;
    if (CMP_B(eax, 0x80)) goto loc_001CD490; /* jb: below (unsigned <) */

loc_001CD4AA:
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_001CD620(); /* call 0x001CD620 */

loc_001CD4BB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
