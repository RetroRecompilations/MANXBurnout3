#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000214B0
 * Original: 0x000214B0 - 0x0002175C (684 bytes, 163 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000214B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm2, xmm3;

loc_000214B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x418;
    xmm0.f[0] = MEMF(0x3B17D8); /* movss */
    eax = MEM32(0x45B9BC);
    eax = eax + 0xFFFFFFFDu;
    /* cmp eax, 8 - flags set for next jcc */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_A(eax, 8)) goto loc_000215DD; /* ja: above (unsigned >) */

loc_000214F7:
    { uint32_t _jt = MEM32(eax * 4 + 0x21760); /* switch: 9 entries, 7 targets */
    if (_jt == 0x000214FEu) goto loc_000214FE;
    if (_jt == 0x0002151Cu) goto loc_0002151C;
    if (_jt == 0x00021547u) goto loc_00021547;
    if (_jt == 0x00021572u) goto loc_00021572;
    if (_jt == 0x0002158Du) goto loc_0002158D;
    if (_jt == 0x000215B5u) goto loc_000215B5;
    if (_jt == 0x000215DDu) goto loc_000215DD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000214FE:
    PUSH32(esp, 0x384BDC);
    eax = esp + 0x24;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_00021512:
    PUSH32(esp, 0x384C10);
    goto loc_000215F6;

loc_0002151C:
    PUSH32(esp, 0x384C44);
    edx = esp + 0x24;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_00021530:
    PUSH32(esp, 0x384C70);
    PUSH32(esp, 0x3AADBC);
    eax = esp + 0x234;
    PUSH32(esp, eax);
    goto loc_00021603;

loc_00021547:
    PUSH32(esp, 0x384CE4);
    ecx = esp + 0x24;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_0002155B:
    PUSH32(esp, 0x384D14);
    PUSH32(esp, 0x3AADBC);
    edx = esp + 0x234;
    PUSH32(esp, edx);
    goto loc_00021603;

loc_00021572:
    PUSH32(esp, 0x384C94);
    eax = esp + 0x24;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_00021586:
    PUSH32(esp, 0x384CBC);
    goto loc_000215F6;

loc_0002158D:
    PUSH32(esp, 0x384D30);
    edx = esp + 0x24;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_000215A1:
    PUSH32(esp, 0x384D64);
    PUSH32(esp, 0x3AADBC);
    eax = esp + 0x234;
    PUSH32(esp, eax);
    goto loc_00021603;

loc_000215B5:
    PUSH32(esp, 0x384B94);
    ecx = esp + 0x24;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_000215C9:
    PUSH32(esp, 0x384BB8);
    PUSH32(esp, 0x3AADBC);
    edx = esp + 0x234;
    PUSH32(esp, edx);
    goto loc_00021603;

loc_000215DD:
    PUSH32(esp, 0x384B48);
    eax = esp + 0x24;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_000215F1:
    PUSH32(esp, 0x384B78);

loc_000215F6:
    ecx = esp + 0x230;
    PUSH32(esp, 0x3AADBC);
    PUSH32(esp, ecx);

loc_00021603:
    PUSH32(esp, 0); sub_001CF979(); /* call 0x001CF979 */

loc_00021608:
    esp = esp + 0x18;
    goto loc_00021610;

    /* nop */

loc_00021610:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034C2E0(); /* call 0x0034C2E0 */

loc_00021627:
    edi = 0; /* xor self */
    esi = 0x4D6170;
    MEM8(0x4D6B30) = 1;
    PUSH32(esp, 0); sub_0003D9E0(); /* call 0x0003D9E0 */

loc_0002163A:
    PUSH32(esp, 0); sub_001C72F0(); /* call 0x001C72F0 */

loc_0002163F:
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_001C82E0(); /* call 0x001C82E0 */

loc_00021646:
    ecx = MEM32(0x4D6B24);
    eax = MEM32(0x4D652C);
    edi = MEM32(0x4D6B20);
    xmm2.f[0] = MEMF(0x3B1684); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = eax - ecx;
    eax = eax - edi;
    edi = MEM32(0x4D6180);
    PUSH32(esp, 0x41F00000);
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x43480000);
    edx = esp + 0x2C;
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, 0); sub_001C0F50(); /* call 0x001C0F50 */

loc_00021689:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7964); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001C1250(); /* call 0x001C1250 */

loc_000216AA:
    ecx = MEM32(0x4D6B24);
    eax = MEM32(0x4D652C);
    edi = MEM32(0x4D6B20);
    xmm2.f[0] = MEMF(0x3B1684); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = eax - ecx;
    eax = eax - edi;
    edi = MEM32(0x4D6180);
    PUSH32(esp, 0x41F00000);
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x43700000);
    edx = esp + 0x22C;
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, 0); sub_001C0F50(); /* call 0x001C0F50 */

loc_000216F0:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7964); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    ecx = esp + 0x230;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001C1250(); /* call 0x001C1250 */

loc_00021714:
    if (CMP_BE(MEM32(0x4A1B9C), esi)) goto loc_00021721; /* jbe: below or equal (unsigned <=) */

loc_0002171C:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_00021721:
    PUSH32(esp, 0); sub_001C6F30(); /* call 0x001C6F30 */

loc_00021726:
    edx = MEM32(0x4D6520);
    eax = MEM32(edx + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D9280(); /* call 0x001D9280 */

loc_00021735:
    ecx = MEM32(0x4D64D8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(0x4D6520) = esi;
    MEM32(0x4D6524) = esi;
    MEM8(0x4D6B30) = 0;
    PUSH32(esp, 0); sub_001D9420(); /* call 0x001D9420 */

loc_00021757:
    esp = esp + 0x10;

}
