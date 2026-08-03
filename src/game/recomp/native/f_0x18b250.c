#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018B250
 * Original: 0x0018B250 - 0x0018BC26 (2518 bytes, 620 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B250:
    SET_LO8(eax, MEM8(edi + 0x589));
    esp = esp - 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0018BC26(); return; } /* je: equal / zero */

loc_0018B261:
    SET_LO8(eax, MEM8(edi + 0x58A));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0018BC26(); return; } /* je: equal / zero */

loc_0018B26F:
    eax = MEM32(edi + 0x584);
    PUSH32(esp, ebx);
    eax--;
    /* cmp eax, 0x17 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_A(eax, 0x17)) goto loc_0018BC1D; /* ja: above (unsigned >) */

loc_0018B282:
    { uint32_t _jt = MEM32(eax * 4 + 0x18BC2C); /* switch: 24 entries, 17 targets */
    if (_jt == 0x0018B289u) goto loc_0018B289;
    if (_jt == 0x0018B2CEu) goto loc_0018B2CE;
    if (_jt == 0x0018B2FAu) goto loc_0018B2FA;
    if (_jt == 0x0018B32Au) goto loc_0018B32A;
    if (_jt == 0x0018B365u) goto loc_0018B365;
    if (_jt == 0x0018B3F8u) goto loc_0018B3F8;
    if (_jt == 0x0018B42Bu) goto loc_0018B42B;
    if (_jt == 0x0018B4C1u) goto loc_0018B4C1;
    if (_jt == 0x0018B4F9u) goto loc_0018B4F9;
    if (_jt == 0x0018B57Fu) goto loc_0018B57F;
    if (_jt == 0x0018B5D5u) goto loc_0018B5D5;
    if (_jt == 0x0018B64Du) goto loc_0018B64D;
    if (_jt == 0x0018B685u) goto loc_0018B685;
    if (_jt == 0x0018B727u) goto loc_0018B727;
    if (_jt == 0x0018B75Fu) goto loc_0018B75F;
    if (_jt == 0x0018B844u) goto loc_0018B844;
    if (_jt == 0x0018BC1Du) goto loc_0018BC1D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018B289:
    MEM8(edi + 0x588) = 0;
    MEM32(edi + 0x560) = 0;
    edx = MEM32(0x3FA644);
    if (CMP_NE(edx, 2)) goto loc_0018B2AC; /* jne: not equal / not zero */

loc_0018B2A5:
    ecx = 0x3FA4C4;
    goto loc_0018B2B1;

loc_0018B2AC:
    ecx = 0x3FA004;

loc_0018B2B1:
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0018B2B6:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x560) = eax;
    if (TEST_Z(eax, eax)) goto loc_0018B83B; /* je: equal / zero */

loc_0018B2C4:
    MEM32(edi + 0x584) = 2;

loc_0018B2CE:
    esi = MEM32(0x4AED9C);
    PUSH32(esp, 0x11);
    eax = edi + 0x458;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_0018B2E2:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x578) = eax;
    if (TEST_Z(eax, eax)) goto loc_0018B83B; /* je: equal / zero */

loc_0018B2F0:
    MEM32(edi + 0x584) = 3;

loc_0018B2FA:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B301:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B309:
    ecx = MEM32(edi + 0x578);
    eax = MEM32(edi + 0x560);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0018B320:
    MEM32(edi + 0x584) = 4;

loc_0018B32A:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B331:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B339:
    eax = MEM32(edi + 0x560);
    ecx = MEM32(edi + 0x578);
    eax = eax + 0x800;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2800);
    MEM32(edi + 0x568) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0018B35B:
    MEM32(edi + 0x584) = 5;

loc_0018B365:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B36C:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B374:
    esi = MEM32(edi + 0x560);
    ecx = MEM32(esi + 0x260);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0018B3CC; /* jle: less or equal (signed <=) */

loc_0018B38C:
    ebx = MEM32(edi + 0x558);
    eax = MEM32(edi + 0x55C);
    ecx = esi + 8;
    goto loc_0018B3A0;

    /* nop */

loc_0018B3A0:
    ebp = MEM32(ecx);
    if (CMP_NE(ebp, ebx)) goto loc_0018B3AD; /* jne: not equal / not zero */

loc_0018B3A6:
    ebp = MEM32(ecx + 4);
    if (CMP_EQ(ebp, eax)) goto loc_0018B3C5; /* je: equal / zero */

loc_0018B3AD:
    ebp = MEM32(edi + 0x560);
    edx++;
    ecx = ecx + 8;
    if (CMP_L(edx, MEM32(ebp + 0x260))) goto loc_0018B3A0; /* jl: less (signed <) */

loc_0018B3BF:
    eax = MEM32(esp + 0x14);
    goto loc_0018B3CC;

loc_0018B3C5:
    eax = MEM32(esi + edx * 4 + 0x198);

loc_0018B3CC:
    ecx = MEM32(edi + 0x568);
    ecx = ecx + 0x2800;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi + 0x564) = ecx;
    ecx = MEM32(edi + 0x578);
    esi = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_0018B3EE:
    MEM32(edi + 0x584) = 6;

loc_0018B3F8:
    ecx = MEM32(edi + 0x578);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0018B403:
    eax--;
    if ((eax != 0)) goto loc_0018B83B; /* jne: not equal / not zero */

loc_0018B40A:
    ecx = MEM32(edi + 0x578);
    edx = MEM32(edi + 0x564);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0018B421:
    MEM32(edi + 0x584) = 7;

loc_0018B42B:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B432:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B43A:
    SET_LO8(eax, MEM8(edi + 0x58B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B472; /* je: equal / zero */

loc_0018B444:
    eax = MEM32(edi + 0x57C);
    ecx = MEM32(edi + 0x568);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x390);
    eax = eax + ecx;
    MEM32(0x73A170) = eax;
    ecx = MEM32(edi + 0x57C);
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + ecx * 4 + 0x2010);
    goto loc_0018B48A;

loc_0018B472:
    ecx = MEM32(edi + 0x564);
    MEM32(0x73A170) = ecx;
    edx = MEM32(edi + 0x564);
    eax = MEM32(edx + 0x3B4);

loc_0018B48A:
    MEM32(0x73A180) = eax;
    eax = MEM32(edi + 0x564);
    ecx = eax + 0x800;
    MEM32(edi + 0x56C) = ecx;
    eax = MEM32(eax + 0x3C0);
    ecx = MEM32(edi + 0x578);
    esi = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_0018B4B7:
    MEM32(edi + 0x584) = 8;

loc_0018B4C1:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B4C8:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B4D0:
    eax = MEM32(edi + 0x564);
    eax = MEM32(eax + 0x3BC);
    ecx = MEM32(edi + 0x578);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x56C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0018B4EF:
    MEM32(edi + 0x584) = 9;

loc_0018B4F9:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B500:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B508:
    eax = MEM32(edi + 0x56C);
    esi = MEM32(eax + 0x3E0);
    MEM32(eax + 0x3E4) = MEM32(eax + 0x3E4) + eax;
    esi = esi + eax;
    MEM32(eax + 0x3E0) = esi;
    ecx = MEM32(edi + 0x564);
    edx = MEM32(ecx + 0x3BC);
    edx = edx + MEM32(edi + 0x56C);
    MEM32(0x6137E0) = edx;
    SET_LO8(eax, MEM8(edi + 0x58B));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(edi + 0x578);
    esi = MEM32(ecx);
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B563; /* je: equal / zero */

loc_0018B54E:
    eax = MEM32(edi + 0x580);
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + eax * 4 + 0x2040);
    goto loc_0018B56F;

loc_0018B563:
    eax = MEM32(edi + 0x564);
    eax = MEM32(eax + 0x3C8);

loc_0018B56F:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_0018B575:
    MEM32(edi + 0x584) = 0xA;

loc_0018B57F:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B586:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B58E:
    SET_LO8(eax, MEM8(edi + 0x58B));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(edi + 0x578);
    edx = MEM32(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B5B5; /* je: equal / zero */

loc_0018B5A0:
    eax = MEM32(edi + 0x580);
    esi = MEM32(edi + 0x568);
    eax = MEM32(esi + eax * 4 + 0x2034);
    goto loc_0018B5C1;

loc_0018B5B5:
    eax = MEM32(edi + 0x564);
    eax = MEM32(eax + 0x3C4);

loc_0018B5C1:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x6137E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0018B5CB:
    MEM32(edi + 0x584) = 0xB;

loc_0018B5D5:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B5DC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B5E4:
    edx = MEM32(0x6137E0);
    esi = edx;
    PUSH32(esp, 0); sub_00158B70(); /* call 0x00158B70 */

loc_0018B5F1:
    SET_LO8(ecx, MEM8(edi + 0x58B));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(0x6137E0);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018B615; /* je: equal / zero */

loc_0018B600:
    ecx = MEM32(edi + 0x580);
    edx = MEM32(edi + 0x568);
    eax = eax + MEM32(edx + ecx * 4 + 0x2034);
    goto loc_0018B621;

loc_0018B615:
    ecx = MEM32(edi + 0x564);
    eax = eax + MEM32(ecx + 0x3C4);

loc_0018B621:
    edx = MEM32(edi + 0x564);
    ecx = MEM32(edi + 0x578);
    MEM32(edi + 0x570) = eax;
    eax = MEM32(edx + 0x3D0);
    esi = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_0018B643:
    MEM32(edi + 0x584) = 0xC;

loc_0018B64D:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B654:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B65C:
    edx = MEM32(edi + 0x564);
    edx = MEM32(edx + 0x3CC);
    ecx = MEM32(edi + 0x578);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x570);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0018B67B:
    MEM32(edi + 0x584) = 0xD;

loc_0018B685:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B68C:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B694:
    ecx = MEM32(edi + 0x570);
    edx = ecx;
    PUSH32(esp, 0); sub_00158CC0(); /* call 0x00158CC0 */

loc_0018B6A1:
    eax = MEM32(edi + 0x570);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0018B6E0; /* jle: less or equal (signed <=) */

loc_0018B6B0:
    eax = 0; /* xor self */
    ecx = 0x60EC2C;
    goto loc_0018B6C0;

    /* nop */

loc_0018B6C0:
    esi = MEM32(edi + 0x570);
    esi = MEM32(esi);
    esi = esi + eax;
    MEM32(ecx) = esi;
    esi = MEM32(edi + 0x570);
    ebx = MEM32(esi + 8);
    edx++;
    eax = eax + 0x14;
    ecx = ecx + 0x4C;
    if (CMP_L(edx, ebx)) goto loc_0018B6C0; /* jl: less (signed <) */

loc_0018B6E0:
    ecx = MEM32(edi + 0x570);
    edx = MEM32(ecx + 8);
    MEM32(0x73A160) = edx;
    eax = MEM32(edi + 0x564);
    ecx = MEM32(eax + 0x3CC);
    ecx = ecx + MEM32(edi + 0x570);
    MEM32(edi + 0x574) = ecx;
    eax = MEM32(eax + 0x3D8);
    ecx = MEM32(edi + 0x578);
    esi = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_0018B71D:
    MEM32(edi + 0x584) = 0xE;

loc_0018B727:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B72E:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B736:
    eax = MEM32(edi + 0x564);
    eax = MEM32(eax + 0x3D4);
    ecx = MEM32(edi + 0x578);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x574);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0018B755:
    MEM32(edi + 0x584) = 0xF;

loc_0018B75F:
    eax = edi;
    PUSH32(esp, 0); sub_0018BF50(); /* call 0x0018BF50 */

loc_0018B766:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018B83B; /* je: equal / zero */

loc_0018B76E:
    ecx = MEM32(edi + 0x578);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0018B779:
    ecx = MEM32(edi + 0x574);
    MEM32(edi + 0x578) = 0;
    PUSH32(esp, 0); sub_00158DE0(); /* call 0x00158DE0 */

loc_0018B78E:
    eax = MEM32(edi + 0x574);
    MEM32(0x73A164) = eax;
    ecx = MEM32(edi + 0x574);
    edx = MEM32(ecx + 0x20);
    MEM32(0x73A174) = edx;
    eax = MEM32(edi + 0x574);
    ecx = MEM32(eax + 0x14);
    MEM32(0x73A168) = ecx;
    edx = MEM32(edi + 0x574);
    eax = MEM32(edx + 0x1C);
    MEM32(0x73A16C) = eax;
    ecx = MEM32(edi + 0x574);
    edx = MEM32(ecx + 0x18);
    MEM32(0x73A184) = edx;
    eax = MEM32(edi + 0x574);
    ecx = MEM32(eax + 4);
    MEM32(0x73A178) = ecx;
    edx = MEM32(edi + 0x574);
    eax = MEM32(edx + 0xC);
    MEM32(0x73A17C) = eax;
    ecx = MEM32(edi + 0x574);
    edx = MEM32(ecx + 8);
    MEM32(0x73A188) = edx;
    ecx = MEM32(edi + 0x574);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0018B831; /* jle: less or equal (signed <=) */

loc_0018B80F:
    ecx = 0; /* xor self */

loc_0018B811:
    edx = MEM32(0x73A168);
    edx = edx + ecx;
    MEM32(eax * 8 + 0x60EA30) = edx;
    edx = MEM32(edi + 0x574);
    esi = MEM32(edx + 4);
    eax++;
    ecx = ecx + 0x10;
    if (CMP_L(eax, esi)) goto loc_0018B811; /* jl: less (signed <) */

loc_0018B831:
    MEM32(edi + 0x584) = 0x17;

loc_0018B83B:
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0018B844:
    eax = MEM32(edi + 0x56C);
    MEM32(edi + 0x370) = eax;
    ecx = MEM32(edi + 0x56C);
    ecx = ecx + 0x50;
    MEM32(edi + 0x374) = ecx;
    edx = MEM32(edi + 0x56C);
    edx = edx + 0xA0;
    MEM32(edi + 0x378) = edx;
    eax = MEM32(edi + 0x56C);
    eax = eax + 0xF0;
    MEM32(edi + 0x37C) = eax;
    ecx = MEM32(edi + 0x56C);
    ecx = ecx + 0x140;
    MEM32(edi + 0x380) = ecx;
    edx = MEM32(edi + 0x56C);
    edx = edx + 0x190;
    MEM32(edi + 0x384) = edx;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x1E0;
    ebp = edi + 0x38C;
    /* nop */

loc_0018B8C0:
    ecx = MEM32(edi + 0x560);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_0018B8D8; /* je: equal / zero */

loc_0018B8CC:
    eax = MEM32(edi + 0x56C);
    eax = MEM32(eax + 0x3EC);

loc_0018B8D8:
    if (CMP_GE(MEM32(esp + 0x10), eax)) goto loc_0018B90B; /* jge: greater or equal (signed >=) */

loc_0018B8DE:
    ebx = MEM32(edi + 0x56C);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    ebx = ebx + ecx;
    /* test eax, eax - flags set for next jcc */
    MEM8(ebp + 8) = 0;
    if (TEST_NZ(eax, eax)) goto loc_0018B908; /* jne: not equal / not zero */

loc_0018B8F5:
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3B1088);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0018B905:
    MEM32(ebp) = eax;

loc_0018B908:
    MEM32(ebp + -4) = ebx;

loc_0018B90B:
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ebx++;
    ebp = ebp + 0x10;
    /* cmp eax, 0x220 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 0x220)) goto loc_0018B8C0; /* jl: less (signed <) */

loc_0018B929:
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x220;
    ebp = edi + 0x3B0;
    /* nop */

loc_0018B940:
    ecx = MEM32(edi + 0x560);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_0018B958; /* je: equal / zero */

loc_0018B94C:
    ecx = MEM32(edi + 0x56C);
    eax = MEM32(ecx + 0x3F0);

loc_0018B958:
    if (CMP_GE(MEM32(esp + 0x10), eax)) goto loc_0018B9A5; /* jge: greater or equal (signed >=) */

loc_0018B95E:
    ebx = MEM32(edi + 0x56C);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    ebx = ebx + ecx;
    /* test eax, eax - flags set for next jcc */
    MEM8(ebp + 4) = 1;
    if (TEST_NZ(eax, eax)) goto loc_0018B988; /* jne: not equal / not zero */

loc_0018B975:
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3B1090);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0018B985:
    MEM32(ebp) = eax;

loc_0018B988:
    eax = MEM32(ebp + -4);
    if (TEST_NZ(eax, eax)) goto loc_0018B9A2; /* jne: not equal / not zero */

loc_0018B98F:
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3B1088);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0018B99F:
    MEM32(ebp + -4) = eax;

loc_0018B9A2:
    MEM32(ebp + -8) = ebx;

loc_0018B9A5:
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ebx++;
    ebp = ebp + 0x10;
    /* cmp eax, 0x260 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 0x260)) goto loc_0018B940; /* jl: less (signed <) */

loc_0018B9C7:
    eax = edi + 0x3CC;
    MEM32(esp + 0x10) = 0;
    ebp = 0x260;
    MEM32(esp + 0x14) = eax;
    edi = edi;

loc_0018B9E0:
    edx = MEM32(edi + 0x560);
    ecx = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_0018B9F8; /* je: equal / zero */

loc_0018B9EC:
    edx = MEM32(edi + 0x56C);
    ecx = MEM32(edx + 0x3F4);

loc_0018B9F8:
    if (CMP_GE(MEM32(esp + 0x10), ecx)) goto loc_0018BA27; /* jge: greater or equal (signed >=) */

loc_0018B9FE:
    ebx = MEM32(edi + 0x56C);
    ecx = MEM32(eax);
    ebx = ebx + ebp;
    if (TEST_NZ(ecx, ecx)) goto loc_0018BA24; /* jne: not equal / not zero */

loc_0018BA0C:
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3B1088);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0018BA1C:
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    eax = ecx;

loc_0018BA24:
    MEM32(eax + -4) = ebx;

loc_0018BA27:
    ebx = MEM32(esp + 0x10);
    ebx++;
    ebp = ebp + 0x20;
    eax = eax + 8;
    /* cmp ebp, 0x3E0 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(ebp, 0x3E0)) goto loc_0018B9E0; /* jl: less (signed <) */

loc_0018BA42:
    MEM8(edi + 0x58C) = 0;
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_0018BC1D; /* je: equal / zero */

loc_0018BA56:
    esi = MEM32(eax + 0x1B8);
    if (TEST_Z(esi, esi)) goto loc_0018BC1D; /* je: equal / zero */

loc_0018BA64:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_0018BA6E:
    if (CMP_EQ(eax, 6)) goto loc_0018BAA4; /* je: equal / zero */

loc_0018BA73:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0018BA7D:
    if (CMP_EQ(eax, 3)) goto loc_0018BAA4; /* je: equal / zero */

loc_0018BA82:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_0018BA8C:
    if (CMP_EQ(eax, 4)) goto loc_0018BAA4; /* je: equal / zero */

loc_0018BA91:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0018BA9B:
    if (CMP_NE(eax, 5)) goto loc_0018BC1D; /* jne: not equal / not zero */

loc_0018BAA4:
    ecx = MEM32(0x4D5370);
    esi = MEM32(ecx + 0x1B8);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xA0), _icall_esp); /* indirect call */
    }

loc_0018BABA:
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0xE) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x9C), _icall_esp); /* indirect call */
    }

loc_0018BACA:
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(eax);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0018BADB; /* jne: not equal / not zero */

loc_0018BAD2:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xD) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018BAE0; /* je: equal / zero */

loc_0018BADB:
    MEM8(esp + 0xD) = 0;

loc_0018BAE0:
    ebp = 0x3F7344;
    ebx = edi + 0x430;
    goto loc_0018BAF0;

    /* nop */

loc_0018BAF0:
    ecx = MEM32(ebp);
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0018BAFF:
    MEM32(ebx) = eax;
    ebp = ebp + 4;
    ebx = ebx + 4;
    if (CMP_L(ebp, 0x3F7368)) goto loc_0018BAF0; /* jl: less (signed <) */

loc_0018BB0F:
    edx = MEM32(edi + 0x56C);
    eax = MEM32(edx + 0x3F8);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0018BBA5; /* jle: less or equal (signed <=) */

loc_0018BB25:
    SET_LO8(ebx, MEM8(esp + 0xD));
    esi = 0; /* xor self */
    SET_LO8(edx, LO8(edx) | 0xFF);
    edi = edi;

loc_0018BB30:
    eax = MEM32(edi + 0x56C);
    eax = MEM32(eax + 0x3E0);
    eax = eax + esi;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0018BB48; /* je: equal / zero */

loc_0018BB42:
    if (TEST_NZ(MEM8(eax + 0x11), 1)) goto loc_0018BB64; /* jne: not equal / not zero */

loc_0018BB48:
    SET_LO8(ecx, MEM8(esp + 0xE));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018BB56; /* je: equal / zero */

loc_0018BB50:
    if (TEST_NZ(MEM8(eax + 0x11), 4)) goto loc_0018BB64; /* jne: not equal / not zero */

loc_0018BB56:
    SET_LO8(ecx, MEM8(esp + 0xF));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018BB91; /* je: equal / zero */

loc_0018BB5E:
    if (TEST_Z(MEM8(eax + 0x11), 2)) goto loc_0018BB91; /* je: equal / zero */

loc_0018BB64:
    ecx = ZX8(MEM8(edi + 0x58C));
    ecx = ecx << 4;
    ecx = ecx + edi;
    MEM8(ecx + 0xA) = LO8(edx);
    MEM8(ecx + 9) = 0;
    MEM8(ecx + 8) = 0;
    MEM32(ecx) = eax;
    eax = ZX8(MEM8(eax + 0x10));
    eax = MEM32(edi + eax * 4 + 0x430);
    MEM32(ecx + 0xC) = eax;
    MEM8(edi + 0x58C) = MEM8(edi + 0x58C) + 1;

loc_0018BB91:
    ecx = MEM32(edi + 0x56C);
    eax = MEM32(ecx + 0x3F8);
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_0018BB30; /* jl: less (signed <) */

loc_0018BBA5:
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3B0450);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0018BBB5:
    edx = MEM32(edi + 0x56C);
    MEM32(edi + 0x454) = eax;
    eax = MEM32(edx + 0x3FC);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0018BC0C; /* jle: less or equal (signed <=) */

loc_0018BBCD:
    esi = 0; /* xor self */
    ebp = edi + 0x140;
    goto loc_0018BBE0;

    /* nop */
    edi = edi;

loc_0018BBE0:
    eax = MEM32(edi + 0x56C);
    ecx = MEM32(eax + 0x3E4);
    ecx = ecx + esi;
    eax = ebp;
    PUSH32(esp, 0); sub_0017CE70(); /* call 0x0017CE70 */

loc_0018BBF5:
    ecx = MEM32(edi + 0x56C);
    eax = MEM32(ecx + 0x3FC);
    ebx++;
    esi = esi + 0x50;
    ebp = ebp + 0x70;
    if (CMP_L(ebx, eax)) goto loc_0018BBE0; /* jl: less (signed <) */

loc_0018BC0C:
    eax = 4;
    MEM32(edi + 0x428) = eax;
    MEM32(edi + 0x42C) = eax;

loc_0018BC1D:
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/* Scanner-split early-success epilogue at 0x0018BC26.
 * XBE bytes: B0 01 83 C4 0C C3.  This path is used when the optional scene
 * resource loader is disabled, so it must report ready and unwind the 12-byte
 * local frame plus the emulated return slot. */
void sub_0018BC26(void)
{
    SET_LO8(eax, 1);
    esp += 0x10;
}
