#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221630
 * Original: 0x00221630 - 0x00221B3C (1292 bytes, 441 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221630:
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    /* cmp MEM32(ebp + 0x5C), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0xFF);
    esi = 4;
    if (CMP_NE(MEM32(ebp + 0x5C), 3)) goto loc_002216A2; /* jne: not equal / not zero */

loc_00221648:
    if (CMP_NE(MEM32(ebp), 0)) goto loc_002216A2; /* jne: not equal / not zero */

loc_0022164E:
    eax = MEM32(ebp + 0x7C);
    if (TEST_Z(eax, eax)) goto loc_0022165E; /* je: equal / zero */

loc_00221655:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_0022165B:
    esp = esp + 4;

loc_0022165E:
    eax = 0xC;
    PUSH32(esp, 0xD);
    MEM32(ebp + 0x74) = eax;
    MEM32(ebp + 0x78) = eax;
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_00221670:
    MEM32(ebp + 0x7C) = eax;
    SET_LO8(ecx, 0xFE);
    MEM8(eax + 3) = LO8(ebx);
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 7) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 9) = 0;
    MEM8(eax + 8) = 0;
    MEM8(eax + 0xB) = 0xC;
    esp = esp + 4;
    MEM32(ebp + 0x5C) = esi;

loc_002216A2:
    /* cmp MEM32(ebp + 0x5C), esi - flags set for next jcc */
    edi = 2;
    if (CMP_NE(MEM32(ebp + 0x5C), esi)) goto loc_002216BD; /* jne: not equal / not zero */

loc_002216AC:
    eax = MEM32(ebp + 0x70);
    if (TEST_Z(eax, eax)) goto loc_002216BD; /* je: equal / zero */

loc_002216B3:
    MEM32(ebp + 0x5C) = edi;
    MEM32(ebp + 0x60) = 0;

loc_002216BD:
    if (CMP_NE(MEM32(ebp + 0x5C), 1)) goto loc_0022175F; /* jne: not equal / not zero */

loc_002216C7:
    edx = MEM32(ebp);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0x10;
    PUSH32(esp, 0); sub_002241B0(); /* call 0x002241B0 */

loc_002216E4:
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_00221B34; /* je: equal / zero */

loc_002216F1:
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_002216FA:
    eax = MEM32(ebp + 0x7C);
    esp = esp + 4;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp) = esi;
    MEM32(ebp + 0x5C) = 3;
    MEM32(ebp + 0x68) = 0;
    if (TEST_Z(eax, eax)) goto loc_0022171E; /* je: equal / zero */

loc_00221715:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_0022171B:
    esp = esp + 4;

loc_0022171E:
    esi = 0xC;
    PUSH32(esp, 0xD);
    MEM32(ebp + 0x74) = esi;
    MEM32(ebp + 0x78) = esi;
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_00221730:
    MEM32(ebp + 0x7C) = eax;
    esp = esp + 4;
    MEM8(eax + 3) = LO8(ebx);
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 7) = LO8(ebx);
    MEM8(eax + 6) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 9) = 0;
    MEM8(eax + 8) = 0;
    MEM8(eax + 0xB) = 0xC;
    goto loc_00221764;

loc_0022175F:
    esi = 0xC;

loc_00221764:
    if (CMP_NE(MEM32(ebp + 0x5C), edi)) goto loc_002218D1; /* jne: not equal / not zero */

loc_0022176D:
    PUSH32(esp, 0); sub_001D2238(); /* call 0x001D2238 */

loc_00221772:
    if (CMP_BE(eax, MEM32(ebp + 0x60))) goto loc_002217F4; /* jbe: below or equal (unsigned <=) */

loc_00221777:
    eax = MEM32(ebp);
    if (TEST_Z(eax, eax)) goto loc_00221787; /* je: equal / zero */

loc_0022177E:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_00221784:
    esp = esp + 4;

loc_00221787:
    PUSH32(esp, 0); sub_00224160(); /* call 0x00224160 */

loc_0022178C:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp) = eax;
    if (TEST_Z(eax, eax)) goto loc_00221B34; /* je: equal / zero */

loc_00221797:
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + 6));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0033A271(); /* call 0x0033A271 */

loc_002217A3:
    edx = ZX16(LO16(eax));
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0033A280(); /* call 0x0033A280 */

loc_002217B0:
    edx = 0; /* xor self */
    /* cmp MEM16(ebp + 0x8C), LO16(edx) - flags set for next jcc */
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    SET_LO8(edx, (CMP_NE(MEM16(ebp + 0x8C), LO16(edx))) ? 1 : 0); /* setne */
    ecx = ebp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224240(); /* call 0x00224240 */

loc_002217CB:
    esp = esp + 0x14;
    if (TEST_S(eax, eax)) goto loc_00221B34; /* jl: less (signed <) */

loc_002217D6:
    PUSH32(esp, 0); sub_001D2238(); /* call 0x001D2238 */

loc_002217DB:
    ecx = ebp + 0xE4;
    eax = eax + 0x7530;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(ebp + 0x60) = eax;
    PUSH32(esp, 0); sub_00226330(); /* call 0x00226330 */

loc_002217F1:
    esp = esp + 8;

loc_002217F4:
    eax = MEM32(ebp);
    if (TEST_Z(eax, eax)) goto loc_00221B34; /* je: equal / zero */

loc_002217FF:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224400(); /* call 0x00224400 */

loc_00221805:
    edx = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x73746174);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00224C50(); /* call 0x00224C50 */

loc_00221817:
    esp = esp + 0x14;
    if (CMP_LE(eax & eax, 0)) goto loc_00221B34; /* jle: less or equal (signed <=) */

loc_00221822:
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_00221840; /* jne: not equal / not zero */

loc_00221829:
    ecx = MEM32(ebp);
    PUSH32(esp, 0x10);
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x70656572);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00224C50(); /* call 0x00224C50 */

loc_0022183D:
    esp = esp + 0x10;

loc_00221840:
    eax = MEM32(ebp);
    PUSH32(esp, 0x10);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62696E64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224C50(); /* call 0x00224C50 */

loc_00221855:
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00221879; /* jne: not equal / not zero */

loc_0022185C:
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0033A280(); /* call 0x0033A280 */

loc_00221866:
    edx = MEM32(esp + 0x12);
    PUSH32(esp, edx);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0); sub_0033A271(); /* call 0x0033A271 */

loc_00221873:
    eax = ZX16(LO16(eax));
    MEM32(ebp + 0x18) = eax;

loc_00221879:
    eax = MEM32(ebp + 0x7C);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x5C) = 3;
    MEM32(ebp + 0x68) = 0;
    if (TEST_Z(eax, eax)) goto loc_00221897; /* je: equal / zero */

loc_0022188E:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00221894:
    esp = esp + 4;

loc_00221897:
    PUSH32(esp, 0xD);
    MEM32(ebp + 0x74) = esi;
    MEM32(ebp + 0x78) = esi;
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_002218A4:
    MEM32(ebp + 0x7C) = eax;
    esp = esp + 4;
    MEM8(eax + 3) = LO8(ebx);
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 7) = LO8(ebx);
    MEM8(eax + 6) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 9) = 0;
    MEM8(eax + 8) = 0;
    MEM8(eax + 0xB) = 0xC;

loc_002218D1:
    eax = MEM32(ebp);
    if (TEST_Z(eax, eax)) goto loc_00221B34; /* je: equal / zero */

loc_002218DC:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224400(); /* call 0x00224400 */

loc_002218E2:
    edx = MEM32(ebp + 0x70);
    edi = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(edx, edi)) goto loc_00221932; /* je: equal / zero */

loc_002218EE:
    ecx = MEM32(ebp + 0x68);
    eax = MEM32(ebp + 0x64);
    if (CMP_EQ(ecx, eax)) goto loc_00221932; /* je: equal / zero */

loc_002218F8:
    eax = eax - ecx;
    PUSH32(esp, eax);
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00224AC0(); /* call 0x00224AC0 */

loc_00221907:
    esp = esp + 0xC;
    /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(eax, edi)) goto loc_00221A8F; /* jl: less (signed <) */

loc_00221916:
    if (CMP_LE(eax, edi)) goto loc_0022191B; /* jle: less or equal (signed <=) */

loc_00221918:
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + eax;

loc_0022191B:
    eax = MEM32(ebp + 0x68);
    if (CMP_NE(eax, MEM32(ebp + 0x64))) goto loc_00221932; /* jne: not equal / not zero */

loc_00221923:
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_0022192C:
    esp = esp + 4;
    MEM32(ebp + 0x70) = edi;

loc_00221932:
    if (CMP_NE(MEM32(ebp + 0x7C), edi)) goto loc_00221A41; /* jne: not equal / not zero */

loc_0022193B:
    edx = MEM32(ebp + 0x74);
    if (CMP_NE(edx, MEM32(ebp + 0x78))) goto loc_00221949; /* jne: not equal / not zero */

loc_00221943:
    MEM32(ebp + 0x74) = esi;
    MEM32(ebp + 0x78) = edi;

loc_00221949:
    eax = MEM32(ebp + 0x78);
    ecx = MEM32(ebp + 0x74);
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    edx = eax + ebp + 0x80;
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224B40(); /* call 0x00224B40 */

loc_00221963:
    esp = esp + 0xC;
    /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(eax, edi)) goto loc_00221985; /* jge: greater or equal (signed >=) */

loc_0022196E:
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_00221977:
    esp = esp + 4;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00221985:
    if (((int32_t)esp <= 0)) goto loc_0022198A; /* jle: less or equal (signed <=) */

loc_00221987:
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + eax;

loc_0022198A:
    edx = MEM32(ebp + 0x78);
    if (CMP_NE(edx, MEM32(ebp + 0x74))) goto loc_00221A41; /* jne: not equal / not zero */

loc_00221996:
    PUSH32(esp, 0xC);
    esi = ebp + 0x80;
    eax = ebp + 0xE4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226380(); /* call 0x00226380 */

loc_002219AB:
    ecx = ZX8(MEM8(esi + 0xA));
    edx = ZX8(MEM8(esi + 0xB));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esi + 8));
    esp = esp + 0xC;
    SET_LO8(eax, MEM8(esi + 9));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    /* cmp eax, 0xC - flags set for next jcc */
    MEM32(ebp + 0x74) = eax;
    if (CMP_L(eax, 0xC)) goto loc_00221A8F; /* jl: less (signed <) */

loc_002219D4:
    if (CMP_G(eax, 0x8000)) goto loc_00221A8F; /* jg: greater (signed >) */

loc_002219DF:
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_002219E6:
    esp = esp + 4;
    /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_NE(eax, edi)) goto loc_00221A07; /* jne: not equal / not zero */

loc_002219F0:
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_002219F9:
    esp = esp + 4;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00221A07:
    ecx = MEM32(ebp + 0x78);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebp + 0x78);
    if (CMP_NE(eax, MEM32(ebp + 0x74))) goto loc_00221A41; /* jne: not equal / not zero */

loc_00221A22:
    eax = MEM32(ebp + 0x70);
    if (TEST_Z(eax, eax)) goto loc_00221A41; /* je: equal / zero */

loc_00221A29:
    ecx = MEM32(ebp + 0x68);
    if (CMP_NE(ecx, MEM32(ebp + 0x64))) goto loc_00221A41; /* jne: not equal / not zero */

loc_00221A31:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00221A37:
    esp = esp + 4;
    MEM32(ebp + 0x70) = 0;

loc_00221A41:
    edx = MEM32(ebp + 0x7C);
    if (TEST_Z(edx, edx)) goto loc_00221B34; /* je: equal / zero */

loc_00221A4C:
    ecx = MEM32(ebp + 0x78);
    eax = MEM32(ebp + 0x74);
    if (CMP_GE(ecx, eax)) goto loc_00221B34; /* jge: greater or equal (signed >=) */

loc_00221A5A:
    eax = eax - ecx;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00224B40(); /* call 0x00224B40 */

loc_00221A69:
    esp = esp + 0xC;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00221AA6; /* jge: greater or equal (signed >=) */

loc_00221A74:
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_00221A7D:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00221A8F:
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_00221A98:
    esp = esp + 4;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00221AA6:
    if (((int32_t)esp <= 0)) goto loc_00221AAB; /* jle: less or equal (signed <=) */

loc_00221AA8:
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + eax;

loc_00221AAB:
    eax = MEM32(ebp + 0x78);
    if (CMP_NE(eax, MEM32(ebp + 0x74))) goto loc_00221B0D; /* jne: not equal / not zero */

loc_00221AB3:
    edx = MEM32(ebp + 0x7C);
    eax = eax + 0xFFFFFFF4u;
    PUSH32(esp, eax);
    edx = edx + 0xC;
    PUSH32(esp, edx);
    esi = ebp + 0xE4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00226380(); /* call 0x00226380 */

loc_00221ACA:
    eax = MEM32(ebp + 0x74);
    ecx = MEM32(ebp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002263B0(); /* call 0x002263B0 */

loc_00221AD8:
    esp = esp + 0x18;
    if (CMP_GE(eax & eax, 0)) goto loc_00221AFA; /* jge: greater or equal (signed >=) */

loc_00221ADF:
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00224190(); /* call 0x00224190 */

loc_00221AE8:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00221AFA:
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00226430(); /* call 0x00226430 */

loc_00221B04:
    esp = esp + 8;
    MEM32(ebp + 0x78) = eax;
    MEM32(ebp + 0x74) = eax;

loc_00221B0D:
    ecx = MEM32(ebp + 0x78);
    if (CMP_NE(ecx, MEM32(ebp + 0x74))) goto loc_00221B34; /* jne: not equal / not zero */

loc_00221B15:
    eax = MEM32(ebp + 0x70);
    if (TEST_Z(eax, eax)) goto loc_00221B34; /* je: equal / zero */

loc_00221B1C:
    edx = MEM32(ebp + 0x68);
    if (CMP_NE(edx, MEM32(ebp + 0x64))) goto loc_00221B34; /* jne: not equal / not zero */

loc_00221B24:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00221B2A:
    MEM32(ebp + 0x70) = 0;
    esp = esp + 4;

loc_00221B34:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
