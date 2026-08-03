#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BF760
 * Original: 0x001BF760 - 0x001C042D (3277 bytes, 610 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF760:
    PUSH32(esp, ecx);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_001BF779:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_001BF77F:
    esp = esp + 8;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(0x75DB70) = ecx;
    MEM32(0x75DB74) = ecx;
    MEM32(0x75DB78) = ecx;
    MEM32(0x75DB7C) = ecx;
    ecx = 1;
    esi = 0x14;
    PUSH32(esp, ebp);
    /* nop */

loc_001BF7B0:
    if (CMP_NE(MEM32(eax * 4 + 0x75DA20), edi)) goto loc_001BF7DD; /* jne: not equal / not zero */

loc_001BF7B9:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75DA20) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 0xC;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF7DD:
    /* cmp MEM32(eax * 4 + 0x75DA60), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D800) = ecx;
    if (CMP_NE(MEM32(eax * 4 + 0x75DA60), edi)) goto loc_001BF811; /* jne: not equal / not zero */

loc_001BF7ED:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75DA60) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 0x10;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF811:
    /* cmp MEM32(eax * 4 + 0x75D960), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D840) = ecx;
    if (CMP_NE(MEM32(eax * 4 + 0x75D960), edi)) goto loc_001BF841; /* jne: not equal / not zero */

loc_001BF821:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D960) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = edi;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF841:
    /* cmp MEM32(eax * 4 + 0x75D970), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D740) = ecx;
    if (CMP_NE(MEM32(eax * 4 + 0x75D970), edi)) goto loc_001BF871; /* jne: not equal / not zero */

loc_001BF851:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D970) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = ecx;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF871:
    /* cmp MEM32(eax * 4 + 0x75D980), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D750) = ecx;
    if (CMP_NE(MEM32(eax * 4 + 0x75D980), edi)) goto loc_001BF8A5; /* jne: not equal / not zero */

loc_001BF881:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D980) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 2;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF8A5:
    /* cmp MEM32(eax * 4 + 0x75D990), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D760) = ecx;
    if (CMP_NE(MEM32(eax * 4 + 0x75D990), edi)) goto loc_001BF8D9; /* jne: not equal / not zero */

loc_001BF8B5:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D990) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 3;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF8D9:
    /* cmp MEM32(eax * 4 + 0x75D9A0), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D770) = 2;
    if (CMP_NE(MEM32(eax * 4 + 0x75D9A0), edi)) goto loc_001BF911; /* jne: not equal / not zero */

loc_001BF8ED:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D9A0) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 4;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF911:
    /* cmp MEM32(eax * 4 + 0x75D9B0), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D780) = 2;
    if (CMP_NE(MEM32(eax * 4 + 0x75D9B0), edi)) goto loc_001BF949; /* jne: not equal / not zero */

loc_001BF925:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D9B0) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 5;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF949:
    /* cmp MEM32(eax * 4 + 0x75D9C0), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D790) = ecx;
    if (CMP_NE(MEM32(eax * 4 + 0x75D9C0), edi)) goto loc_001BF97D; /* jne: not equal / not zero */

loc_001BF959:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D9C0) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 6;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF97D:
    /* cmp MEM32(eax * 4 + 0x75D9D0), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D7A0) = edi;
    if (CMP_NE(MEM32(eax * 4 + 0x75D9D0), edi)) goto loc_001BF9B1; /* jne: not equal / not zero */

loc_001BF98D:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D9D0) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 7;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF9B1:
    /* cmp MEM32(eax * 4 + 0x75D9F0), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D7B0) = edi;
    if (CMP_NE(MEM32(eax * 4 + 0x75D9F0), edi)) goto loc_001BF9E5; /* jne: not equal / not zero */

loc_001BF9C1:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75D9F0) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 9;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BF9E5:
    /* cmp MEM32(eax * 4 + 0x75DA00), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D7D0) = edi;
    if (CMP_NE(MEM32(eax * 4 + 0x75DA00), edi)) goto loc_001BFA19; /* jne: not equal / not zero */

loc_001BF9F5:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75DA00) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 0xA;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BFA19:
    /* cmp MEM32(eax * 4 + 0x75DA10), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D7E0) = edi;
    if (CMP_NE(MEM32(eax * 4 + 0x75DA10), edi)) goto loc_001BFA4D; /* jne: not equal / not zero */

loc_001BFA29:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75DA10) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 0xB;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BFA4D:
    /* cmp MEM32(eax * 4 + 0x75DAB0), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D7F0) = edi;
    if (CMP_NE(MEM32(eax * 4 + 0x75DAB0), edi)) goto loc_001BFA81; /* jne: not equal / not zero */

loc_001BFA5D:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75DAB0) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = 0x15;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BFA81:
    /* cmp MEM32(eax * 4 + 0x75DAA0), edi - flags set for next jcc */
    MEM32(eax * 4 + 0x75D890) = edi;
    if (CMP_NE(MEM32(eax * 4 + 0x75DAA0), edi)) goto loc_001BFAB1; /* jne: not equal / not zero */

loc_001BFA91:
    edx = MEM32(eax * 4 + 0x75D940);
    ebp = eax + edx * 4;
    edx++;
    MEM32(eax * 4 + 0x75DAA0) = ecx;
    MEM32(ebp * 4 + 0x75D2A0) = esi;
    MEM32(eax * 4 + 0x75D940) = edx;

loc_001BFAB1:
    MEM32(eax * 4 + 0x75D880) = ecx;
    eax++;
    if (CMP_B(eax, 4)) goto loc_001BF7B0; /* jb: below (unsigned <) */

loc_001BFAC2:
    /* cmp MEM32(0x75DC64), edi - flags set for next jcc */
    eax = MEM32(0x75DB60);
    if (CMP_NE(MEM32(0x75DC64), edi)) goto loc_001BFAE6; /* jne: not equal / not zero */

loc_001BFACF:
    MEM32(eax * 4 + 0x75DE20) = 0x39;
    eax++;
    MEM32(0x75DC64) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFAE6:
    /* cmp MEM32(0x75DC78), edi - flags set for next jcc */
    MEM32(0x75D584) = 0x203;
    if (CMP_NE(MEM32(0x75DC78), edi)) goto loc_001BFB0F; /* jne: not equal / not zero */

loc_001BFAF8:
    MEM32(eax * 4 + 0x75DE20) = 0x3E;
    eax++;
    MEM32(0x75DC78) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFB0F:
    /* cmp MEM32(0x75DC7C), edi - flags set for next jcc */
    MEM32(0x75D598) = 0x302;
    if (CMP_NE(MEM32(0x75DC7C), edi)) goto loc_001BFB38; /* jne: not equal / not zero */

loc_001BFB21:
    MEM32(eax * 4 + 0x75DE20) = 0x3F;
    eax++;
    MEM32(0x75DC7C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFB38:
    /* cmp MEM32(0x75DC84), edi - flags set for next jcc */
    MEM32(0x75D59C) = 0x303;
    if (CMP_NE(MEM32(0x75DC84), edi)) goto loc_001BFB61; /* jne: not equal / not zero */

loc_001BFB4A:
    MEM32(eax * 4 + 0x75DE20) = 0x41;
    eax++;
    MEM32(0x75DC84) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFB61:
    /* cmp MEM32(0x75DC88), edi - flags set for next jcc */
    MEM32(0x75D5A4) = edi;
    if (CMP_NE(MEM32(0x75DC88), edi)) goto loc_001BFB86; /* jne: not equal / not zero */

loc_001BFB6F:
    MEM32(eax * 4 + 0x75DE20) = 0x42;
    eax++;
    MEM32(0x75DC88) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFB86:
    /* cmp MEM32(0x75DC8C), edi - flags set for next jcc */
    MEM32(0x75D5A8) = 0x1D01;
    if (CMP_NE(MEM32(0x75DC8C), edi)) goto loc_001BFBAF; /* jne: not equal / not zero */

loc_001BFB98:
    MEM32(eax * 4 + 0x75DE20) = 0x43;
    eax++;
    MEM32(0x75DC8C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFBAF:
    /* cmp MEM32(0x75DCA8), edi - flags set for next jcc */
    MEM32(0x75D5AC) = 0x10101;
    if (CMP_NE(MEM32(0x75DCA8), edi)) goto loc_001BFBD8; /* jne: not equal / not zero */

loc_001BFBC1:
    MEM32(eax * 4 + 0x75DE20) = 0x4A;
    eax++;
    MEM32(0x75DCA8) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFBD8:
    /* cmp MEM32(0x75DCB0), edi - flags set for next jcc */
    MEM32(0x75D5C8) = 0x8006;
    if (CMP_NE(MEM32(0x75DCB0), edi)) goto loc_001BFC01; /* jne: not equal / not zero */

loc_001BFBEA:
    MEM32(eax * 4 + 0x75DE20) = 0x4C;
    eax++;
    MEM32(0x75DCB0) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFC01:
    /* cmp MEM32(0x75DCB4), edi - flags set for next jcc */
    MEM32(0x75D5D0) = 4;
    if (CMP_NE(MEM32(0x75DCB4), edi)) goto loc_001BFC2A; /* jne: not equal / not zero */

loc_001BFC13:
    MEM32(eax * 4 + 0x75DE20) = 0x4D;
    eax++;
    MEM32(0x75DCB4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFC2A:
    /* cmp MEM32(0x75DCB8), edi - flags set for next jcc */
    MEM32(0x75D5D4) = edi;
    if (CMP_NE(MEM32(0x75DCB8), edi)) goto loc_001BFC4F; /* jne: not equal / not zero */

loc_001BFC38:
    MEM32(eax * 4 + 0x75DE20) = 0x4E;
    eax++;
    MEM32(0x75DCB8) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFC4F:
    /* cmp MEM32(0x75DCBC), edi - flags set for next jcc */
    MEM32(0x75D5D8) = edi;
    if (CMP_NE(MEM32(0x75DCBC), edi)) goto loc_001BFC74; /* jne: not equal / not zero */

loc_001BFC5D:
    MEM32(eax * 4 + 0x75DE20) = 0x4F;
    eax++;
    MEM32(0x75DCBC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFC74:
    /* cmp MEM32(0x75DCC0), edi - flags set for next jcc */
    MEM32(0x75D5DC) = edi;
    if (CMP_NE(MEM32(0x75DCC0), edi)) goto loc_001BFC99; /* jne: not equal / not zero */

loc_001BFC82:
    MEM32(eax * 4 + 0x75DE20) = 0x50;
    eax++;
    MEM32(0x75DCC0) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFC99:
    /* cmp MEM32(0x75DCC4), edi - flags set for next jcc */
    MEM32(0x75D5E0) = edi;
    if (CMP_NE(MEM32(0x75DCC4), edi)) goto loc_001BFCBE; /* jne: not equal / not zero */

loc_001BFCA7:
    MEM32(eax * 4 + 0x75DE20) = 0x51;
    eax++;
    MEM32(0x75DCC4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFCBE:
    /* cmp MEM32(0x75DCC8), edi - flags set for next jcc */
    MEM32(0x75D5E4) = edi;
    if (CMP_NE(MEM32(0x75DCC8), edi)) goto loc_001BFCE3; /* jne: not equal / not zero */

loc_001BFCCC:
    MEM32(eax * 4 + 0x75DE20) = 0x52;
    eax++;
    MEM32(0x75DCC8) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFCE3:
    /* cmp MEM32(0x75DCCC), edi - flags set for next jcc */
    MEM32(0x75D5E8) = ecx;
    if (CMP_NE(MEM32(0x75DCCC), edi)) goto loc_001BFD08; /* jne: not equal / not zero */

loc_001BFCF1:
    MEM32(eax * 4 + 0x75DE20) = 0x53;
    eax++;
    MEM32(0x75DCCC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFD08:
    /* cmp MEM32(0x75DCF0), edi - flags set for next jcc */
    MEM32(0x75D5EC) = edi;
    if (CMP_NE(MEM32(0x75DCF0), edi)) goto loc_001BFD2D; /* jne: not equal / not zero */

loc_001BFD16:
    MEM32(eax * 4 + 0x75DE20) = 0x5C;
    eax++;
    MEM32(0x75DCF0) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFD2D:
    /* cmp MEM32(0x75DCF4), edi - flags set for next jcc */
    MEM32(0x75D610) = edi;
    if (CMP_NE(MEM32(0x75DCF4), edi)) goto loc_001BFD52; /* jne: not equal / not zero */

loc_001BFD3B:
    MEM32(eax * 4 + 0x75DE20) = 0x5D;
    eax++;
    MEM32(0x75DCF4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFD52:
    /* cmp MEM32(0x75DD00), edi - flags set for next jcc */
    MEM32(0x75D614) = 3;
    if (CMP_NE(MEM32(0x75DD00), edi)) goto loc_001BFD7B; /* jne: not equal / not zero */

loc_001BFD64:
    MEM32(eax * 4 + 0x75DE20) = 0x60;
    eax++;
    MEM32(0x75DD00) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFD7B:
    /* cmp MEM32(0x75DD04), edi - flags set for next jcc */
    esi = MEM32(esp + 0xC);
    MEM32(0x75D620) = esi;
    if (CMP_NE(MEM32(0x75DD04), edi)) goto loc_001BFDA4; /* jne: not equal / not zero */

loc_001BFD8D:
    MEM32(eax * 4 + 0x75DE20) = 0x61;
    eax++;
    MEM32(0x75DD04) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFDA4:
    /* cmp MEM32(0x75DD08), edi - flags set for next jcc */
    MEM32(0x75D624) = edi;
    if (CMP_NE(MEM32(0x75DD08), edi)) goto loc_001BFDC9; /* jne: not equal / not zero */

loc_001BFDB2:
    MEM32(eax * 4 + 0x75DE20) = 0x62;
    eax++;
    MEM32(0x75DD08) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFDC9:
    /* cmp MEM32(0x75DD0C), edi - flags set for next jcc */
    MEM32(0x75D628) = edi;
    if (CMP_NE(MEM32(0x75DD0C), edi)) goto loc_001BFDEE; /* jne: not equal / not zero */

loc_001BFDD7:
    MEM32(eax * 4 + 0x75DE20) = 0x63;
    eax++;
    MEM32(0x75DD0C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFDEE:
    /* cmp MEM32(0x75DD10), edi - flags set for next jcc */
    MEM32(0x75D62C) = edi;
    if (CMP_NE(MEM32(0x75DD10), edi)) goto loc_001BFE13; /* jne: not equal / not zero */

loc_001BFDFC:
    MEM32(eax * 4 + 0x75DE20) = 0x64;
    eax++;
    MEM32(0x75DD10) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFE13:
    /* cmp MEM32(0x75DD14), edi - flags set for next jcc */
    MEM32(0x75D630) = edi;
    if (CMP_NE(MEM32(0x75DD14), edi)) goto loc_001BFE38; /* jne: not equal / not zero */

loc_001BFE21:
    MEM32(eax * 4 + 0x75DE20) = 0x65;
    eax++;
    MEM32(0x75DD14) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFE38:
    /* cmp MEM32(0x75DD18), edi - flags set for next jcc */
    MEM32(0x75D634) = edi;
    if (CMP_NE(MEM32(0x75DD18), edi)) goto loc_001BFE5D; /* jne: not equal / not zero */

loc_001BFE46:
    MEM32(eax * 4 + 0x75DE20) = 0x66;
    eax++;
    MEM32(0x75DD18) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFE5D:
    /* cmp MEM32(0x75DD1C), edi - flags set for next jcc */
    MEM32(0x75D638) = edi;
    if (CMP_NE(MEM32(0x75DD1C), edi)) goto loc_001BFE82; /* jne: not equal / not zero */

loc_001BFE6B:
    MEM32(eax * 4 + 0x75DE20) = 0x67;
    eax++;
    MEM32(0x75DD1C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFE82:
    /* cmp MEM32(0x75DD20), edi - flags set for next jcc */
    MEM32(0x75D63C) = edi;
    if (CMP_NE(MEM32(0x75DD20), edi)) goto loc_001BFEA7; /* jne: not equal / not zero */

loc_001BFE90:
    MEM32(eax * 4 + 0x75DE20) = 0x68;
    eax++;
    MEM32(0x75DD20) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFEA7:
    /* cmp MEM32(0x75DD24), edi - flags set for next jcc */
    MEM32(0x75D640) = ecx;
    if (CMP_NE(MEM32(0x75DD24), edi)) goto loc_001BFECC; /* jne: not equal / not zero */

loc_001BFEB5:
    MEM32(eax * 4 + 0x75DE20) = 0x69;
    eax++;
    MEM32(0x75DD24) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFECC:
    /* cmp MEM32(0x75DD28), edi - flags set for next jcc */
    MEM32(0x75D644) = ecx;
    if (CMP_NE(MEM32(0x75DD28), edi)) goto loc_001BFEF1; /* jne: not equal / not zero */

loc_001BFEDA:
    MEM32(eax * 4 + 0x75DE20) = 0x6A;
    eax++;
    MEM32(0x75DD28) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFEF1:
    /* cmp MEM32(0x75DD2C), edi - flags set for next jcc */
    edx = 2;
    MEM32(0x75D648) = edx;
    if (CMP_NE(MEM32(0x75DD2C), edi)) goto loc_001BFF1B; /* jne: not equal / not zero */

loc_001BFF04:
    MEM32(eax * 4 + 0x75DE20) = 0x6B;
    eax++;
    MEM32(0x75DD2C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFF1B:
    /* cmp MEM32(0x75DD30), edi - flags set for next jcc */
    MEM32(0x75D64C) = ecx;
    if (CMP_NE(MEM32(0x75DD30), edi)) goto loc_001BFF40; /* jne: not equal / not zero */

loc_001BFF29:
    MEM32(eax * 4 + 0x75DE20) = 0x6C;
    eax++;
    MEM32(0x75DD30) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFF40:
    /* cmp MEM32(0x75DD34), edi - flags set for next jcc */
    MEM32(0x75D650) = edx;
    if (CMP_NE(MEM32(0x75DD34), edi)) goto loc_001BFF65; /* jne: not equal / not zero */

loc_001BFF4E:
    MEM32(eax * 4 + 0x75DE20) = 0x6D;
    eax++;
    MEM32(0x75DD34) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFF65:
    /* cmp MEM32(0x75DD38), edi - flags set for next jcc */
    MEM32(0x75D654) = edi;
    if (CMP_NE(MEM32(0x75DD38), edi)) goto loc_001BFF8A; /* jne: not equal / not zero */

loc_001BFF73:
    MEM32(eax * 4 + 0x75DE20) = 0x6E;
    eax++;
    MEM32(0x75DD38) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFF8A:
    /* cmp MEM32(0x75DD3C), edi - flags set for next jcc */
    MEM32(0x75D658) = edx;
    if (CMP_NE(MEM32(0x75DD3C), edi)) goto loc_001BFFAF; /* jne: not equal / not zero */

loc_001BFF98:
    MEM32(eax * 4 + 0x75DE20) = 0x6F;
    eax++;
    MEM32(0x75DD3C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFFAF:
    /* cmp MEM32(0x75DD40), edi - flags set for next jcc */
    MEM32(0x75D65C) = ecx;
    if (CMP_NE(MEM32(0x75DD40), edi)) goto loc_001BFFD4; /* jne: not equal / not zero */

loc_001BFFBD:
    MEM32(eax * 4 + 0x75DE20) = 0x70;
    eax++;
    MEM32(0x75DD40) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFFD4:
    MEM32(0x75D660) = edx;
    if (CMP_NE(MEM32(0x75DD44), edi)) goto loc_001BFFF9; /* jne: not equal / not zero */

loc_001BFFE2:
    MEM32(eax * 4 + 0x75DE20) = 0x71;
    eax++;
    MEM32(0x75DD44) = ecx;
    MEM32(0x75DB60) = eax;

loc_001BFFF9:
    /* cmp MEM32(0x75DD48), edi - flags set for next jcc */
    MEM32(0x75D664) = edi;
    if (CMP_NE(MEM32(0x75DD48), edi)) goto loc_001C001E; /* jne: not equal / not zero */

loc_001C0007:
    MEM32(eax * 4 + 0x75DE20) = 0x72;
    eax++;
    MEM32(0x75DD48) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C001E:
    /* cmp MEM32(0x75DD4C), edi - flags set for next jcc */
    MEM32(0x75D668) = edi;
    if (CMP_NE(MEM32(0x75DD4C), edi)) goto loc_001C0043; /* jne: not equal / not zero */

loc_001C002C:
    MEM32(eax * 4 + 0x75DE20) = 0x73;
    eax++;
    MEM32(0x75DD4C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0043:
    /* cmp MEM32(0x75DD58), edi - flags set for next jcc */
    MEM32(0x75D66C) = edi;
    if (CMP_NE(MEM32(0x75DD58), edi)) goto loc_001C0068; /* jne: not equal / not zero */

loc_001C0051:
    MEM32(eax * 4 + 0x75DE20) = 0x76;
    eax++;
    MEM32(0x75DD58) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0068:
    /* cmp MEM32(0x75DDA4), edi - flags set for next jcc */
    MEM32(0x75D678) = edi;
    if (CMP_NE(MEM32(0x75DDA4), edi)) goto loc_001C008D; /* jne: not equal / not zero */

loc_001C0076:
    MEM32(eax * 4 + 0x75DE20) = 0x89;
    eax++;
    MEM32(0x75DDA4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C008D:
    /* cmp MEM32(0x75DDA8), edi - flags set for next jcc */
    MEM32(0x75D6C4) = edi;
    if (CMP_NE(MEM32(0x75DDA8), edi)) goto loc_001C00B2; /* jne: not equal / not zero */

loc_001C009B:
    MEM32(eax * 4 + 0x75DE20) = 0x8A;
    eax++;
    MEM32(0x75DDA8) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C00B2:
    /* cmp MEM32(0x75DDAC), edi - flags set for next jcc */
    MEM32(0x75D6C8) = edi;
    if (CMP_NE(MEM32(0x75DDAC), edi)) goto loc_001C00D7; /* jne: not equal / not zero */

loc_001C00C0:
    MEM32(eax * 4 + 0x75DE20) = 0x8B;
    eax++;
    MEM32(0x75DDAC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C00D7:
    ebp = MEM32(0x75DDB0);
    edx = 0x1B02;
    /* cmp ebp, edi - flags set for next jcc */
    MEM32(0x75D6CC) = edx;
    POP32(esp, ebp);
    if (CMP_NE(ebp, edi)) goto loc_001C0104; /* jne: not equal / not zero */

loc_001C00ED:
    MEM32(eax * 4 + 0x75DE20) = 0x8C;
    eax++;
    MEM32(0x75DDB0) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0104:
    MEM32(0x75D6D0) = edx;
    if (CMP_NE(MEM32(0x75DDB4), edi)) goto loc_001C0129; /* jne: not equal / not zero */

loc_001C0112:
    MEM32(eax * 4 + 0x75DE20) = 0x8D;
    eax++;
    MEM32(0x75DDB4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0129:
    /* cmp MEM32(0x75DDB8), edi - flags set for next jcc */
    MEM32(0x75D6D4) = edi;
    if (CMP_NE(MEM32(0x75DDB8), edi)) goto loc_001C014E; /* jne: not equal / not zero */

loc_001C0137:
    MEM32(eax * 4 + 0x75DE20) = 0x8E;
    eax++;
    MEM32(0x75DDB8) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C014E:
    /* cmp MEM32(0x75DDBC), edi - flags set for next jcc */
    MEM32(0x75D6D8) = edi;
    if (CMP_NE(MEM32(0x75DDBC), edi)) goto loc_001C0173; /* jne: not equal / not zero */

loc_001C015C:
    MEM32(eax * 4 + 0x75DE20) = 0x8F;
    eax++;
    MEM32(0x75DDBC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0173:
    /* cmp MEM32(0x75DDC0), edi - flags set for next jcc */
    MEM32(0x75D6DC) = ecx;
    if (CMP_NE(MEM32(0x75DDC0), edi)) goto loc_001C0198; /* jne: not equal / not zero */

loc_001C0181:
    MEM32(eax * 4 + 0x75DE20) = 0x90;
    eax++;
    MEM32(0x75DDC0) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0198:
    /* cmp MEM32(0x75DDC8), edi - flags set for next jcc */
    MEM32(0x75D6E0) = edi;
    if (CMP_NE(MEM32(0x75DDC8), edi)) goto loc_001C01BD; /* jne: not equal / not zero */

loc_001C01A6:
    MEM32(eax * 4 + 0x75DE20) = 0x92;
    eax++;
    MEM32(0x75DDC8) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C01BD:
    /* cmp MEM32(0x75DDCC), edi - flags set for next jcc */
    MEM32(0x75D6E8) = 0x901;
    if (CMP_NE(MEM32(0x75DDCC), edi)) goto loc_001C01E6; /* jne: not equal / not zero */

loc_001C01CF:
    MEM32(eax * 4 + 0x75DE20) = 0x93;
    eax++;
    MEM32(0x75DDCC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C01E6:
    /* cmp MEM32(0x75DDD4), edi - flags set for next jcc */
    MEM32(0x75D6EC) = 0x900;
    if (CMP_NE(MEM32(0x75DDD4), edi)) goto loc_001C020F; /* jne: not equal / not zero */

loc_001C01F8:
    MEM32(eax * 4 + 0x75DE20) = 0x95;
    eax++;
    MEM32(0x75DDD4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C020F:
    /* cmp MEM32(0x75DDD8), edi - flags set for next jcc */
    MEM32(0x75D6F4) = edi;
    if (CMP_NE(MEM32(0x75DDD8), edi)) goto loc_001C0234; /* jne: not equal / not zero */

loc_001C021D:
    MEM32(eax * 4 + 0x75DE20) = 0x96;
    eax++;
    MEM32(0x75DDD8) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0234:
    /* cmp MEM32(0x75DDDC), edi - flags set for next jcc */
    MEM32(0x75D6F8) = edi;
    if (CMP_NE(MEM32(0x75DDDC), edi)) goto loc_001C0259; /* jne: not equal / not zero */

loc_001C0242:
    MEM32(eax * 4 + 0x75DE20) = 0x97;
    eax++;
    MEM32(0x75DDDC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0259:
    /* cmp MEM32(0x75DDE0), edi - flags set for next jcc */
    MEM32(0x75D6FC) = edi;
    if (CMP_NE(MEM32(0x75DDE0), edi)) goto loc_001C027E; /* jne: not equal / not zero */

loc_001C0267:
    MEM32(eax * 4 + 0x75DE20) = 0x98;
    eax++;
    MEM32(0x75DDE0) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C027E:
    /* cmp MEM32(0x75DDE4), edi - flags set for next jcc */
    MEM32(0x75D700) = ecx;
    if (CMP_NE(MEM32(0x75DDE4), edi)) goto loc_001C02A3; /* jne: not equal / not zero */

loc_001C028C:
    MEM32(eax * 4 + 0x75DE20) = 0x99;
    eax++;
    MEM32(0x75DDE4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C02A3:
    /* cmp MEM32(0x75DDEC), edi - flags set for next jcc */
    MEM32(0x75D704) = 0xFFFFFFFFu;
    if (CMP_NE(MEM32(0x75DDEC), edi)) goto loc_001C02CC; /* jne: not equal / not zero */

loc_001C02B5:
    MEM32(eax * 4 + 0x75DE20) = 0x9B;
    eax++;
    MEM32(0x75DDEC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C02CC:
    /* cmp MEM32(0x75DDF0), edi - flags set for next jcc */
    MEM32(0x75D70C) = edi;
    if (CMP_NE(MEM32(0x75DDF0), edi)) goto loc_001C02F1; /* jne: not equal / not zero */

loc_001C02DA:
    MEM32(eax * 4 + 0x75DE20) = 0x9C;
    eax++;
    MEM32(0x75DDF0) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C02F1:
    /* cmp MEM32(0x75DDF4), edi - flags set for next jcc */
    MEM32(0x75D710) = 0x200;
    if (CMP_NE(MEM32(0x75DDF4), edi)) goto loc_001C031A; /* jne: not equal / not zero */

loc_001C0303:
    MEM32(eax * 4 + 0x75DE20) = 0x9D;
    eax++;
    MEM32(0x75DDF4) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C031A:
    /* cmp MEM32(0x75DDFC), edi - flags set for next jcc */
    MEM32(0x75D714) = esi;
    if (CMP_NE(MEM32(0x75DDFC), edi)) goto loc_001C033F; /* jne: not equal / not zero */

loc_001C0328:
    MEM32(eax * 4 + 0x75DE20) = 0x9F;
    eax++;
    MEM32(0x75DDFC) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C033F:
    /* cmp MEM32(0x75DE00), edi - flags set for next jcc */
    MEM32(0x75D71C) = ecx;
    if (CMP_NE(MEM32(0x75DE00), edi)) goto loc_001C0364; /* jne: not equal / not zero */

loc_001C034D:
    MEM32(eax * 4 + 0x75DE20) = 0xA0;
    eax++;
    MEM32(0x75DE00) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0364:
    /* cmp MEM32(0x75DE04), edi - flags set for next jcc */
    MEM32(0x75D720) = edi;
    if (CMP_NE(MEM32(0x75DE04), edi)) goto loc_001C0389; /* jne: not equal / not zero */

loc_001C0372:
    MEM32(eax * 4 + 0x75DE20) = 0xA1;
    eax++;
    MEM32(0x75DE04) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C0389:
    /* cmp MEM32(0x75DE08), edi - flags set for next jcc */
    MEM32(0x75D724) = ecx;
    if (CMP_NE(MEM32(0x75DE08), edi)) goto loc_001C03AE; /* jne: not equal / not zero */

loc_001C0397:
    MEM32(eax * 4 + 0x75DE20) = 0xA2;
    eax++;
    MEM32(0x75DE08) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C03AE:
    /* cmp MEM32(0x75DE0C), edi - flags set for next jcc */
    MEM32(0x75D728) = ecx;
    if (CMP_NE(MEM32(0x75DE0C), edi)) goto loc_001C03D3; /* jne: not equal / not zero */

loc_001C03BC:
    MEM32(eax * 4 + 0x75DE20) = 0xA3;
    eax++;
    MEM32(0x75DE0C) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C03D3:
    /* cmp MEM32(0x75DE10), edi - flags set for next jcc */
    MEM32(0x75D72C) = edi;
    if (CMP_NE(MEM32(0x75DE10), edi)) goto loc_001C03F8; /* jne: not equal / not zero */

loc_001C03E1:
    MEM32(eax * 4 + 0x75DE20) = 0xA4;
    eax++;
    MEM32(0x75DE10) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C03F8:
    /* cmp MEM32(0x75DE14), edi - flags set for next jcc */
    MEM32(0x75D730) = edi;
    if (CMP_NE(MEM32(0x75DE14), edi)) goto loc_001C041D; /* jne: not equal / not zero */

loc_001C0406:
    MEM32(eax * 4 + 0x75DE20) = 0xA5;
    eax++;
    MEM32(0x75DE14) = ecx;
    MEM32(0x75DB60) = eax;

loc_001C041D:
    MEM32(0x75D734) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_001D7040(); return; /* tail jmp 0x001D7040 */

}
