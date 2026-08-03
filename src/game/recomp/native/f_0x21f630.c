#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021F630
 * Original: 0x0021F630 - 0x002202B6 (3206 bytes, 959 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F630:
    esp = esp - 0xC0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xD4);
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edi + 0xCF8);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_0021F654:
    edx = MEM32(edi + 0xC);
    ebx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); sub_00221630(); /* call 0x00221630 */

loc_0021F663:
    eax = 0; /* xor self */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edi + 0x8E4);
    esi = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_0021F734; /* je: equal / zero */

loc_0021F690:
    eax = MEM32(edi + 8);
    if (CMP_EQ(eax, esi)) goto loc_0021F734; /* je: equal / zero */

loc_0021F69B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0021F69F:
    ebp = eax;
    esp = esp + 4;
    if (CMP_EQ(ebp, esi)) goto loc_0021F734; /* je: equal / zero */

loc_0021F6AC:
    if (CMP_LE(ebp, esi)) goto loc_0021F709; /* jle: less or equal (signed <=) */

loc_0021F6AE:
    SET_LO8(eax, MEM8(edi + 0x24));
    /* cmp LO8(eax), 0x2A - flags set for next jcc */
    ebx = edi + 0x24;
    esi = edi + 0x25;
    if (CMP_EQ(LO8(eax), 0x2A)) goto loc_0021F6BD; /* je: equal / zero */

loc_0021F6BB:
    esi = ebx;

loc_0021F6BD:
    ecx = MEM32(edi + 0x18);
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00221D90(); /* call 0x00221D90 */

loc_0021F6D2:
    esp = esp + 0x10;
    if (CMP_EQ(esi, ebx)) goto loc_0021F6E7; /* je: equal / zero */

loc_0021F6D9:
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002215B0(); /* call 0x002215B0 */

loc_0021F6E4:
    esp = esp + 8;

loc_0021F6E7:
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = edi + 0x5B0;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41555448);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00221B40(); /* call 0x00221B40 */

loc_0021F700:
    ebx = MEM32(esp + 0x3C);
    esp = esp + 0x14;
    esi = 0; /* xor self */

loc_0021F709:
    if (CMP_GE(ebp, esi)) goto loc_0021F727; /* jge: greater or equal (signed >=) */

loc_0021F70D:
    edx = 2;
    eax = edi;
    PUSH32(esp, 0); sub_0021D230(); /* call 0x0021D230 */

loc_0021F719:
    if (CMP_NE(MEM32(edi + 0x1A8), esi)) goto loc_0021F727; /* jne: not equal / not zero */

loc_0021F721:
    MEM32(edi + 0x8E4) = esi;

loc_0021F727:
    eax = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0021F72E:
    esp = esp + 4;
    MEM32(edi + 8) = esi;

loc_0021F734:
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, esi)) goto loc_0021F79E; /* je: equal / zero */

loc_0021F73B:
    if (CMP_BE(ebx, eax)) goto loc_0021F79E; /* jbe: below or equal (unsigned <=) */

loc_0021F73F:
    eax = MEM32(edi + 0x10);
    if (CMP_NE(eax, 7)) goto loc_0021F754; /* jne: not equal / not zero */

loc_0021F747:
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0021EEE0(); /* call 0x0021EEE0 */

loc_0021F74F:
    esp = esp + 8;
    goto loc_0021F79E;

loc_0021F754:
    ecx = 3;
    if (CMP_EQ(eax, ecx)) goto loc_0021F790; /* je: equal / zero */

loc_0021F75D:
    eax = MEM32(edi + 0x8E4);
    /* cmp eax, esi - flags set for next jcc */
    MEM32(edi + 0x10) = ecx;
    if (CMP_EQ(eax, esi)) goto loc_0021F790; /* je: equal / zero */

loc_0021F76A:
    edx = MEM32(edi + 0x8E0);
    MEM32(esp + 0x58) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x60) = 0x636F6E6E;
    MEM32(esp + 0x68) = esi;
    MEM32(esp + 0x74) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021F78D:
    esp = esp + 0xC;

loc_0021F790:
    if (CMP_NE(MEM32(edi + 0x1A8), esi)) goto loc_0021F79E; /* jne: not equal / not zero */

loc_0021F798:
    MEM32(edi + 0x8E4) = esi;

loc_0021F79E:
    eax = MEM32(edi + 0x10);
    ebp = 5;
    if (CMP_NE(eax, ebp)) goto loc_0021F814; /* jne: not equal / not zero */

loc_0021F7AA:
    eax = MEM32(edi + 0x4DC);
    if (CMP_EQ(eax, esi)) goto loc_0021F7C5; /* je: equal / zero */

loc_0021F7B4:
    if (CMP_B(ebx, eax)) goto loc_0021F7C5; /* jb: below (unsigned <) */

loc_0021F7B8:
    esi = edi;
    PUSH32(esp, 0); sub_0021D0E0(); /* call 0x0021D0E0 */

loc_0021F7BF:
    ebx = MEM32(esp + 0x28);
    esi = 0; /* xor self */

loc_0021F7C5:
    if (CMP_NE(MEM32(edi + 0x10), ebp)) goto loc_0021F814; /* jne: not equal / not zero */

loc_0021F7CA:
    edx = MEM32(edi + 0xD64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226240(); /* call 0x00226240 */

loc_0021F7D6:
    eax = MEM32(edi + 0x10);
    esp = esp + 4;
    if (CMP_NE(eax, ebp)) goto loc_0021F814; /* jne: not equal / not zero */

loc_0021F7E0:
    if (CMP_EQ(MEM32(edi + 0x914), esi)) goto loc_0021F814; /* je: equal / zero */

loc_0021F7E8:
    eax = MEM32(edi + 0x90C);
    if (CMP_EQ(eax, esi)) goto loc_0021F814; /* je: equal / zero */

loc_0021F7F2:
    if (CMP_BE(ebx, eax)) goto loc_0021F814; /* jbe: below or equal (unsigned <=) */

loc_0021F7F6:
    MEM32(edi + 0x90C) = esi;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00221570(); /* call 0x00221570 */

loc_0021F805:
    esp = esp + 4;
    edx = 3;
    eax = edi;
    PUSH32(esp, 0); sub_0021D230(); /* call 0x0021D230 */

loc_0021F814:
    eax = MEM32(edi + 0x10);
    if (CMP_EQ(eax, 6)) goto loc_0021F821; /* je: equal / zero */

loc_0021F81C:
    if (CMP_NE(eax, 3)) goto loc_0021F874; /* jne: not equal / not zero */

loc_0021F821:
    esi = edi + 0x914;
    ebx = 9;
    ebp = 0xFFFFFFFCu;

loc_0021F831:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0021F857; /* je: equal / zero */

loc_0021F837:
    ecx = MEM32(esi + -16);
    edx = MEM32(esi + -4);
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021F84E:
    esp = esp + 0xC;
    MEM32(esi) = 0;

loc_0021F857:
    esi = esi + 0x14;
    ebx--;
    if ((ebx != 0)) goto loc_0021F831; /* jne: not equal / not zero */

loc_0021F85D:
    /* cmp MEM32(edi + 0x10), 3 - flags set for next jcc */
    ebp = 1;
    if (CMP_NE(MEM32(edi + 0x10), 3)) goto loc_0021F879; /* jne: not equal / not zero */

loc_0021F868:
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0021EEE0(); /* call 0x0021EEE0 */

loc_0021F86F:
    esp = esp + 8;
    goto loc_0021F879;

loc_0021F874:
    ebp = 1;

loc_0021F879:
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00221C60(); /* call 0x00221C60 */

loc_0021F893:
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_0022023A; /* jl: less (signed <) */

loc_0021F89E:
    edi = edi;

loc_0021F8A0:
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(eax, 0x52454356)) goto loc_0021F8D2; /* jne: not equal / not zero */

loc_0021F8B3:
    if (CMP_EQ(MEM32(edi + 0x8D0), ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021F8BF:
    PUSH32(esp, edi);
    ebx = esp + 0x14;
    PUSH32(esp, 0); sub_0021CB70(); /* call 0x0021CB70 */

loc_0021F8C9:
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    ebx = 0; /* xor self */

loc_0021F8D2:
    if (CMP_NE(eax, 0x53454E44)) goto loc_0021F90B; /* jne: not equal / not zero */

loc_0021F8D9:
    eax = MEM32(edi + 0x93C);
    if (CMP_EQ(eax, ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021F8E7:
    ecx = MEM32(edi + 0x938);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x73656E64;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021F8FE:
    eax = MEM32(esp + 0x20);
    esp = esp + 0xC;
    MEM32(edi + 0x93C) = ebx;

loc_0021F90B:
    if (CMP_NE(eax, 0x42524443)) goto loc_0021F944; /* jne: not equal / not zero */

loc_0021F912:
    eax = MEM32(edi + 0x964);
    if (CMP_EQ(eax, ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021F920:
    ecx = MEM32(edi + 0x960);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x62726463;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021F937:
    eax = MEM32(esp + 0x20);
    esp = esp + 0xC;
    MEM32(edi + 0x964) = ebx;

loc_0021F944:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0021F960; /* jne: not equal / not zero */

loc_0021F949:
    if (CMP_NE(MEM32(esp + 0x18), 0xFFFFFFFFu)) goto loc_0021F98D; /* jne: not equal / not zero */

loc_0021F950:
    edx = 5;
    eax = edi;
    PUSH32(esp, 0); sub_0021D230(); /* call 0x0021D230 */

loc_0021F95C:
    eax = MEM32(esp + 0x14);

loc_0021F960:
    if (CMP_NE(eax, 0x50494E47)) goto loc_0021F988; /* jne: not equal / not zero */

loc_0021F967:
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x50494E47);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00221B40(); /* call 0x00221B40 */

loc_0021F981:
    eax = MEM32(esp + 0x28);
    esp = esp + 0x14;

loc_0021F988:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0021F9BD; /* jne: not equal / not zero */

loc_0021F98D:
    if (CMP_NE(MEM32(esp + 0x18), 0xFEFEFEFEu)) goto loc_002201CC; /* jne: not equal / not zero */

loc_0021F99B:
    esi = MEM32(edi + 0x10);
    edx = 6;
    eax = edi;
    PUSH32(esp, 0); sub_0021D230(); /* call 0x0021D230 */

loc_0021F9AA:
    if (CMP_NE(esi, 5)) goto loc_0021F9B9; /* jne: not equal / not zero */

loc_0021F9AF:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0021EEE0(); /* call 0x0021EEE0 */

loc_0021F9B6:
    esp = esp + 8;

loc_0021F9B9:
    eax = MEM32(esp + 0x14);

loc_0021F9BD:
    if (CMP_NE(eax, 0x41555448)) goto loc_0021FAA2; /* jne: not equal / not zero */

loc_0021F9C8:
    /* cmp MEM32(esp + 0x18), ebx - flags set for next jcc */
    MEM32(edi + 0x14) = ebx;
    if (CMP_EQ(MEM32(esp + 0x18), ebx)) goto loc_0021FA1A; /* je: equal / zero */

loc_0021F9D1:
    eax = MEM32(edi + 0x8E0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x61757468;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0x8E4), _icall_esp); /* indirect call */
    }

loc_0021F9EC:
    eax = MEM32(esp + 0x24);
    esp = esp + 0xC;
    if (CMP_EQ(eax, 0x6E657477)) goto loc_0021FA05; /* je: equal / zero */

loc_0021F9FA:
    if (CMP_NE(eax, 0x62736F64)) goto loc_0021FA9E; /* jne: not equal / not zero */

loc_0021FA05:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0021E5F0(); /* call 0x0021E5F0 */

loc_0021FA0B:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0021EEE0(); /* call 0x0021EEE0 */

loc_0021FA12:
    esp = esp + 0xC;
    goto loc_0021FA9E;

loc_0021FA1A:
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x37054C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021FA2B:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021FA34:
    PUSH32(esp, edi);
    MEM32(edi + 0xD60) = eax;
    eax = MEM32(edi + 0xD64);
    PUSH32(esp, 0x21DB40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225B00(); /* call 0x00225B00 */

loc_0021FA4C:
    ecx = MEM32(edi + 0xD64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x21E8C0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225A80(); /* call 0x00225A80 */

loc_0021FA5F:
    eax = MEM32(edi + 0xD60);
    ecx = MEM32(edi + 0xD64);
    edx = edi + 0xCFC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225F10(); /* call 0x00225F10 */

loc_0021FA80:
    edx = MEM32(edi + 0x8E0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x54) = 0x61757468;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0x8E4), _icall_esp); /* indirect call */
    }

loc_0021FA9B:
    esp = esp + 0x44;

loc_0021FA9E:
    eax = MEM32(esp + 0x14);

loc_0021FAA2:
    if (CMP_NE(eax, 0x41444D4E)) goto loc_0021FB17; /* jne: not equal / not zero */

loc_0021FAA9:
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x1F);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3B1390);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021FAC4:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021FACD:
    eax = esp + 0x44;
    PUSH32(esp, 0x3B1644);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_0021FADC:
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_0021FAEF; /* jne: not equal / not zero */

loc_0021FAE3:
    edx = 6;
    eax = edi;
    PUSH32(esp, 0); sub_0021D230(); /* call 0x0021D230 */

loc_0021FAEF:
    eax = MEM32(edi + 0x8D0);
    if (CMP_EQ(eax, ebx)) goto loc_0021FB13; /* je: equal / zero */

loc_0021FAF9:
    ecx = MEM32(edi + 0x8CC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x61646D6E;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021FB10:
    esp = esp + 0xC;

loc_0021FB13:
    eax = MEM32(esp + 0x14);

loc_0021FB17:
    if (CMP_NE(eax, 0x52474554)) goto loc_0021FB6F; /* jne: not equal / not zero */

loc_0021FB1E:
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3704C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021FB2E:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021FB37:
    esp = esp + 8;
    if (CMP_NE(eax, 2)) goto loc_0021FB6B; /* jne: not equal / not zero */

loc_0021FB3F:
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x35BEA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021FB4F:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021FB58:
    esp = esp + 8;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x8DC) = eax;
    if (CMP_NE(eax, ebx)) goto loc_0021FB6B; /* jne: not equal / not zero */

loc_0021FB65:
    MEM32(edi + 0xCF8) = ebp;

loc_0021FB6B:
    eax = MEM32(esp + 0x14);

loc_0021FB6F:
    if (CMP_NE(eax, 0x524F5354)) goto loc_0021FBCC; /* jne: not equal / not zero */

loc_0021FB76:
    if (CMP_EQ(MEM32(edi + 0x8C8), ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021FB82:
    ecx = MEM32(esp + 0x10);
    esp = esp - 0x18;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0); sub_0021D2F0(); /* call 0x0021D2F0 */

loc_0021FBB2:
    esp = esp + 0x1C;
    if (CMP_NE(eax, 2)) goto loc_0021FBC8; /* jne: not equal / not zero */

loc_0021FBBA:
    MEM32(edi + 0x8DC) = MEM32(edi + 0x8DC) - 1;
    if ((MEM32(edi + 0x8DC) != 0)) goto loc_0021FBC8; /* jne: not equal / not zero */

loc_0021FBC2:
    MEM32(edi + 0xCF8) = ebp;

loc_0021FBC8:
    eax = MEM32(esp + 0x14);

loc_0021FBCC:
    if (CMP_NE(eax, 0x524E4F54)) goto loc_0021FC2A; /* jne: not equal / not zero */

loc_0021FBD3:
    if (CMP_EQ(MEM32(edi + 0x8C8), ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021FBDF:
    ecx = MEM32(esp + 0x10);
    esp = esp - 0x18;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0); sub_0021E6E0(); /* call 0x0021E6E0 */

loc_0021FC0F:
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_0021FC26; /* jne: not equal / not zero */

loc_0021FC16:
    edx = MEM32(edi + 0x8C8);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021C2F0(); /* call 0x0021C2F0 */

loc_0021FC23:
    esp = esp + 8;

loc_0021FC26:
    eax = MEM32(esp + 0x14);

loc_0021FC2A:
    if (CMP_NE(eax, 0x50474554)) goto loc_0021FC74; /* jne: not equal / not zero */

loc_0021FC31:
    if (CMP_EQ(MEM32(edi + 0x8C8), ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021FC3D:
    edx = MEM32(esp + 0x10);
    esp = esp - 0x18;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    PUSH32(esp, 0); sub_0021D550(); /* call 0x0021D550 */

loc_0021FC6D:
    eax = MEM32(esp + 0x30);
    esp = esp + 0x1C;

loc_0021FC74:
    if (CMP_EQ(eax, 0x52414444)) goto loc_0021FC86; /* je: equal / zero */

loc_0021FC7B:
    if (CMP_NE(eax, 0x5241444D)) goto loc_0021FE55; /* jne: not equal / not zero */

loc_0021FC86:
    if (CMP_EQ(MEM32(edi + 0x8C8), ebx)) goto loc_0021FE55; /* je: equal / zero */

loc_0021FC92:
    eax = MEM32(esp + 0x24);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3704C4);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0x61646475;
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021FCAC:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021FCB5:
    ecx = MEM32(edi + 0x8C8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ebp = eax;
    MEM32(edi + 0x90C) = esi;
    PUSH32(esp, 0); sub_0021C240(); /* call 0x0021C240 */

loc_0021FCCA:
    ebx = eax;
    esp = esp + 0x10;
    if (TEST_Z(ebx, ebx)) goto loc_0021FE39; /* je: equal / zero */

loc_0021FCD7:
    goto loc_0021FCE0;

    /* nop */

loc_0021FCE0:
    if (TEST_Z(MEM32(ebx + 0xF8), 0x10000)) goto loc_0021FCF4; /* je: equal / zero */

loc_0021FCEC:
    if (CMP_EQ(MEM32(ebx + 0xFC), ebp)) goto loc_0021FD10; /* je: equal / zero */

loc_0021FCF4:
    edx = MEM32(edi + 0x8C8);
    esi++;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021C240(); /* call 0x0021C240 */

loc_0021FD02:
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_0021FCE0; /* jne: not equal / not zero */

loc_0021FD0B:
    goto loc_0021FE39;

loc_0021FD10:
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0021FD84; /* je: equal / zero */

loc_0021FD18:
    if (CMP_NE(eax, 0x626C636B)) goto loc_0021FD29; /* jne: not equal / not zero */

loc_0021FD1F:
    MEM32(esp + 0x18) = 0;
    goto loc_0021FD3E;

loc_0021FD29:
    ecx = 0; /* xor self */
    /* cmp eax, 0x66756C6C - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0x66756C6C)) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 0xFFFFFFFDu;
    ecx = ecx + 0xFFFFFFFEu;
    MEM32(esp + 0x18) = ecx;

loc_0021FD3E:
    eax = MEM32(edi + 0x914);
    if (TEST_Z(eax, eax)) goto loc_0021FD5E; /* je: equal / zero */

loc_0021FD48:
    edx = MEM32(edi + 0x910);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021FD5B:
    esp = esp + 0xC;

loc_0021FD5E:
    edx = MEM32(edi + 0x8C4);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002220D0(); /* call 0x002220D0 */

loc_0021FD6B:
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x8C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C200(); /* call 0x0021C200 */

loc_0021FD78:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_0021FD7C:
    esp = esp + 0x14;
    goto loc_0021FE39;

loc_0021FD84:
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x20);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x370544);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021FD9F:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021FDA8:
    esp = esp + 0x10;
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_0021CAB0(); /* call 0x0021CAB0 */

loc_0021FDB4:
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021FDFC; /* je: equal / zero */

loc_0021FDBC:
    eax = esi;
    edx = eax + 1;

loc_0021FDC1:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021FDC1; /* jne: not equal / not zero */

loc_0021FDC8:
    eax = eax - edx;
    if (CMP_AE(eax, 0x21)) goto loc_0021FDFC; /* jae: above or equal (unsigned >=) */

loc_0021FDCF:
    eax = MEM32(edi + 0x8C4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002220D0(); /* call 0x002220D0 */

loc_0021FDDC:
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x21);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_002135F0(); /* call 0x002135F0 */

loc_0021FDEB:
    edx = MEM32(edi + 0x8C4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00222010(); /* call 0x00222010 */

loc_0021FDF9:
    esp = esp + 0x20;

loc_0021FDFC:
    eax = MEM32(edi + 0x914);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0021FE22; /* je: equal / zero */

loc_0021FE08:
    ecx = MEM32(edi + 0x910);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021FE1F:
    esp = esp + 0xC;

loc_0021FE22:
    eax = MEM32(ebx + 0xF8);
    eax = eax ^ 0x10000;
    MEM32(ebx + 0xFC) = esi;
    MEM32(ebx + 0xF8) = eax;

loc_0021FE39:
    eax = MEM32(edi + 0x8C8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C2F0(); /* call 0x0021C2F0 */

loc_0021FE47:
    eax = MEM32(esp + 0x1C);
    esp = esp + 8;
    ebp = 1;
    ebx = 0; /* xor self */

loc_0021FE55:
    if (CMP_NE(eax, 0x50414444)) goto loc_0021FE84; /* jne: not equal / not zero */

loc_0021FE5C:
    if (CMP_EQ(MEM32(edi + 0x914), ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021FE68:
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(eax, ebx)) goto loc_0021FE79; /* je: equal / zero */

loc_0021FE70:
    if (CMP_NE(MEM8(eax), 0)) goto loc_002201CC; /* jne: not equal / not zero */

loc_0021FE79:
    MEM32(edi + 0x90C) = ebx;
    goto loc_002201CC;

loc_0021FE84:
    if (CMP_NE(eax, 0x5044454C)) goto loc_0021FEB3; /* jne: not equal / not zero */

loc_0021FE8B:
    if (CMP_EQ(MEM32(edi + 0x928), ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021FE97:
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(eax, ebx)) goto loc_0021FEA8; /* je: equal / zero */

loc_0021FE9F:
    if (CMP_NE(MEM8(eax), 0)) goto loc_002201CC; /* jne: not equal / not zero */

loc_0021FEA8:
    MEM32(edi + 0x920) = ebx;
    goto loc_002201CC;

loc_0021FEB3:
    if (CMP_EQ(eax, 0x5244454C)) goto loc_0021FEC1; /* je: equal / zero */

loc_0021FEBA:
    if (CMP_NE(eax, 0x5244454D)) goto loc_0021FEFE; /* jne: not equal / not zero */

loc_0021FEC1:
    PUSH32(esp, ebp);
    esp = esp - 0x18;
    ecx = 0x64656C75;
    edx = esp;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0); sub_0021D700(); /* call 0x0021D700 */

loc_0021FEF7:
    eax = MEM32(esp + 0x34);
    esp = esp + 0x20;

loc_0021FEFE:
    if (CMP_NE(eax, 0x52525350)) goto loc_0021FF43; /* jne: not equal / not zero */

loc_0021FF05:
    PUSH32(esp, 6);
    esp = esp - 0x18;
    ecx = 0x696E7674;
    edx = esp;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0); sub_0021D700(); /* call 0x0021D700 */

loc_0021FF3C:
    eax = MEM32(esp + 0x34);
    esp = esp + 0x20;

loc_0021FF43:
    if (CMP_EQ(eax, 0x47525350)) goto loc_0021FF51; /* je: equal / zero */

loc_0021FF4A:
    if (CMP_NE(eax, 0x4752564B)) goto loc_0021FF8F; /* jne: not equal / not zero */

loc_0021FF51:
    PUSH32(esp, 7);
    esp = esp - 0x18;
    ecx = 0x67696E76;
    edx = esp;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0); sub_0021D700(); /* call 0x0021D700 */

loc_0021FF88:
    eax = MEM32(esp + 0x34);
    esp = esp + 0x20;

loc_0021FF8F:
    if (CMP_NE(eax, 0x47494E56)) goto loc_0021FFD4; /* jne: not equal / not zero */

loc_0021FF96:
    PUSH32(esp, 8);
    esp = esp - 0x18;
    ecx = 0x67696E76;
    edx = esp;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0); sub_0021D700(); /* call 0x0021D700 */

loc_0021FFCD:
    eax = MEM32(esp + 0x34);
    esp = esp + 0x20;

loc_0021FFD4:
    if (CMP_NE(eax, 0x474E4F54)) goto loc_0021FFF7; /* jne: not equal / not zero */

loc_0021FFDB:
    eax = MEM32(edi + 0x8C8);
    if (CMP_EQ(eax, ebx)) goto loc_002201CC; /* je: equal / zero */

loc_0021FFE9:
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C2F0(); /* call 0x0021C2F0 */

loc_0021FFF0:
    eax = MEM32(esp + 0x1C);
    esp = esp + 8;

loc_0021FFF7:
    if (CMP_NE(eax, 0x45505354)) goto loc_0022003C; /* jne: not equal / not zero */

loc_0021FFFE:
    PUSH32(esp, 5);
    esp = esp - 0x18;
    ecx = 0x65707374;
    edx = esp;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0); sub_0021D700(); /* call 0x0021D700 */

loc_00220035:
    eax = MEM32(esp + 0x34);
    esp = esp + 0x20;

loc_0022003C:
    if (CMP_NE(eax, 0x45504754)) goto loc_002200F3; /* jne: not equal / not zero */

loc_00220047:
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3704C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_00220057:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_00220060:
    esp = esp + 8;
    if (CMP_NE(eax, 4)) goto loc_002200EF; /* jne: not equal / not zero */

loc_0022006C:
    if (CMP_NE(MEM32(esp + 0x18), ebx)) goto loc_002200EF; /* jne: not equal / not zero */

loc_00220072:
    eax = MEM32(edi + 0x8C0);
    ecx = MEM32(esp + 0x24);
    eax = eax & 0xFFFFFEFFu;
    PUSH32(esp, 0x3830E0);
    MEM32(edi + 0x8C0) = eax;
    PUSH32(esp, 0xFF);
    eax = edi + 0x6C0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x370028);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_002200A3:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_002200AC:
    eax = MEM32(esp + 0x34);
    esp = esp + 0x10;
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x64);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x370500);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_002200CA:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_002200D3:
    ecx = esp + 0x7C;
    PUSH32(esp, 0x3B15F4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244C51(); /* call 0x00244C51 */

loc_002200E2:
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_002200EF; /* jne: not equal / not zero */

loc_002200E9:
    MEM32(edi + 0x8C0) = MEM32(edi + 0x8C0) | ebp;

loc_002200EF:
    eax = MEM32(esp + 0x14);

loc_002200F3:
    if (CMP_NE(eax, 0x55534348)) goto loc_00220188; /* jne: not equal / not zero */

loc_002200FE:
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3704C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0022010E:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_00220117:
    esp = esp + 8;
    if (CMP_NE(eax, 3)) goto loc_00220184; /* jne: not equal / not zero */

loc_0022011F:
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_00220162; /* je: equal / zero */

loc_00220127:
    if (CMP_NE(eax, 0x73757372)) goto loc_00220136; /* jne: not equal / not zero */

loc_0022012E:
    MEM32(edi + 0x9C0) = ebx;
    goto loc_00220184;

loc_00220136:
    eax = MEM32(edi + 0x950);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = 0x75736572;
    if (CMP_EQ(eax, ebx)) goto loc_0022015A; /* je: equal / zero */

loc_00220148:
    ecx = MEM32(edi + 0x94C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00220157:
    esp = esp + 0xC;

loc_0022015A:
    MEM32(edi + 0x950) = ebx;
    goto loc_00220184;

loc_00220162:
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x35BEA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_00220172:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0022017B:
    esp = esp + 8;
    MEM32(edi + 0x9C0) = eax;

loc_00220184:
    eax = MEM32(esp + 0x14);

loc_00220188:
    if (CMP_NE(eax, 0x55534552)) goto loc_002201CC; /* jne: not equal / not zero */

loc_0022018F:
    edx = MEM32(esp + 0x10);
    esp = esp - 0x18;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    PUSH32(esp, 0); sub_0021DBD0(); /* call 0x0021DBD0 */

loc_002201BF:
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_002201CC; /* jne: not equal / not zero */

loc_002201C6:
    MEM32(edi + 0x9C0) = MEM32(edi + 0x9C0) - 1;

loc_002201CC:
    if (CMP_NE(MEM32(edi + 0x9C0), ebx)) goto loc_0022020A; /* jne: not equal / not zero */

loc_002201D4:
    eax = MEM32(edi + 0x950);
    if (CMP_EQ(eax, ebx)) goto loc_0022020A; /* je: equal / zero */

loc_002201DE:
    ecx = MEM32(edi + 0x94C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x75736572;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00220201:
    esp = esp + 0xC;
    MEM32(edi + 0x950) = ebx;

loc_0022020A:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00221D20(); /* call 0x00221D20 */

loc_00220217:
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00221C60(); /* call 0x00221C60 */

loc_0022022F:
    esp = esp + 0x24;
    if (CMP_GE(eax & eax, 0)) goto loc_0021F8A0; /* jge: greater or equal (signed >=) */

loc_0022023A:
    if (CMP_EQ(MEM32(edi + 0xCF8), ebx)) goto loc_0022025C; /* je: equal / zero */

loc_00220242:
    if (CMP_NE(MEM32(esp + 0x30), ebx)) goto loc_0022025C; /* jne: not equal / not zero */

loc_00220248:
    eax = MEM32(edi + 0x8C8);
    if (CMP_EQ(eax, ebx)) goto loc_0022025C; /* je: equal / zero */

loc_00220252:
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C2F0(); /* call 0x0021C2F0 */

loc_00220259:
    esp = esp + 8;

loc_0022025C:
    if (CMP_EQ(MEM32(edi + 0x8D8), ebx)) goto loc_002202A7; /* je: equal / zero */

loc_00220264:
    edx = MEM32(edi + 0x8C8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021C310(); /* call 0x0021C310 */

loc_00220270:
    esp = esp + 4;
    if (CMP_LE(eax & eax, 0)) goto loc_002202A7; /* jle: less or equal (signed <=) */

loc_00220277:
    ecx = MEM32(edi + 0x8D4);
    eax = MEM32(edi + 0x8C8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x726F7374;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0x8D8), _icall_esp); /* indirect call */
    }

loc_002202A4:
    esp = esp + 0xC;

loc_002202A7:
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC0;
    esp += 4; return; /* ret */

}
