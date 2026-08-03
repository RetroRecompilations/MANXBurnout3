#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014B600
 * Original: 0x0014B600 - 0x0014C4AE (3758 bytes, 1139 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B600:
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x11C);
    eax = MEM32(ebp);
    eax--;
    /* cmp eax, 0x17 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x17)) goto loc_0014C49F; /* ja: above (unsigned >) */

loc_0014B61E:
    eax = ZX8(MEM8(eax + 0x14C4C0));
    { uint32_t _jt = MEM32(eax * 4 + 0x14C4B0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0014B62Cu) goto loc_0014B62C;
    if (_jt == 0x0014C34Cu) goto loc_0014C34C;
    if (_jt == 0x0014C43Fu) goto loc_0014C43F;
    if (_jt == 0x0014C49Fu) goto loc_0014C49F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014B62C:
    eax = MEM32(ebp + 0x880);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_0014B708; /* jne: not equal / not zero */

loc_0014B63C:
    if (CMP_NE(MEM8(ebp + 0x8E1), LO8(ebx))) goto loc_0014B6CA; /* jne: not equal / not zero */

loc_0014B648:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014B652:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014B692; /* je: equal / zero */

loc_0014B656:
    edx = MEM32(0x3AEDDC);
    ecx = ebp + 0x2D0;
    MEM32(ecx) = edx;
    eax = MEM32(0x3AEDE0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x3AEDE4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x3AEDE8);
    MEM32(ecx + 0xC) = eax;
    SET_LO16(edx, MEM16(0x3AEDEC));
    MEM16(ecx + 0x10) = LO16(edx);
    SET_LO8(eax, MEM8(0x3AEDEE));
    MEM8(ecx + 0x12) = LO8(eax);
    goto loc_0014B6CA;

loc_0014B692:
    PUSH32(esp, 2);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3AEDD4);
    PUSH32(esp, 0x3AEDC0);
    esi = 0x3AEDC8;
    PUSH32(esp, 0); sub_001CC260(); /* call 0x001CC260 */

loc_0014B6AD:
    eax = esp + 0x30;
    edx = ebp;
    ecx = eax;
    edx = edx - ecx;
    esp = esp + 0x10;
    edx = edx + 0x2D0;

loc_0014B6C0:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0014B6C0; /* jne: not equal / not zero */

loc_0014B6CA:
    PUSH32(esp, 0x2000);
    PUSH32(esp, 1);
    edx = ebp + 0x2D0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40B7F4);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_0014B6E2:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x880) = eax;
    if (CMP_NE(eax, ebx)) goto loc_0014B702; /* jne: not equal / not zero */

loc_0014B6EC:
    MEM8(ebp + 0x8E1) = 1;

loc_0014B6F3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 8; return; /* ret 4 */

loc_0014B702:
    MEM8(ebp + 0x8E1) = LO8(ebx);

loc_0014B708:
    if (CMP_EQ(MEM8(ebp + 0x8D8), LO8(ebx))) goto loc_0014BAB6; /* je: equal / zero */

loc_0014B714:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1B4;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B729:
    if (CMP_EQ(eax, ebx)) goto loc_0014B735; /* je: equal / zero */

loc_0014B72D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B735:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1B0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B74A:
    if (CMP_EQ(eax, ebx)) goto loc_0014B756; /* je: equal / zero */

loc_0014B74E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B756:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1BC;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B76B:
    if (CMP_EQ(eax, ebx)) goto loc_0014B777; /* je: equal / zero */

loc_0014B76F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B777:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1B8;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B78C:
    if (CMP_EQ(eax, ebx)) goto loc_0014B798; /* je: equal / zero */

loc_0014B790:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B798:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1CC;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B7AD:
    if (CMP_EQ(eax, ebx)) goto loc_0014B7B9; /* je: equal / zero */

loc_0014B7B1:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B7B9:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1C8;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B7CE:
    if (CMP_EQ(eax, ebx)) goto loc_0014B7DA; /* je: equal / zero */

loc_0014B7D2:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B7DA:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1D4;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B7EF:
    if (CMP_EQ(eax, ebx)) goto loc_0014B7FB; /* je: equal / zero */

loc_0014B7F3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B7FB:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1D0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B810:
    if (CMP_EQ(eax, ebx)) goto loc_0014B81C; /* je: equal / zero */

loc_0014B814:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B81C:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1E4;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B831:
    if (CMP_EQ(eax, ebx)) goto loc_0014B83D; /* je: equal / zero */

loc_0014B835:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B83D:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1E0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B852:
    if (CMP_EQ(eax, ebx)) goto loc_0014B85E; /* je: equal / zero */

loc_0014B856:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B85E:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1EC;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B873:
    if (CMP_EQ(eax, ebx)) goto loc_0014B87F; /* je: equal / zero */

loc_0014B877:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B87F:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1E8;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B894:
    if (CMP_EQ(eax, ebx)) goto loc_0014B8A0; /* je: equal / zero */

loc_0014B898:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B8A0:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1FC;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B8B5:
    if (CMP_EQ(eax, ebx)) goto loc_0014B8C1; /* je: equal / zero */

loc_0014B8B9:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B8C1:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x1F8;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B8D6:
    if (CMP_EQ(eax, ebx)) goto loc_0014B8E2; /* je: equal / zero */

loc_0014B8DA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B8E2:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x204;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B8F7:
    if (CMP_EQ(eax, ebx)) goto loc_0014B903; /* je: equal / zero */

loc_0014B8FB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B903:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x200;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B918:
    if (CMP_EQ(eax, ebx)) goto loc_0014B924; /* je: equal / zero */

loc_0014B91C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B924:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x214;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B939:
    if (CMP_EQ(eax, ebx)) goto loc_0014B945; /* je: equal / zero */

loc_0014B93D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B945:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x210;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B95A:
    if (CMP_EQ(eax, ebx)) goto loc_0014B966; /* je: equal / zero */

loc_0014B95E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B966:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x21C;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B97B:
    if (CMP_EQ(eax, ebx)) goto loc_0014B987; /* je: equal / zero */

loc_0014B97F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B987:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x218;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B99C:
    if (CMP_EQ(eax, ebx)) goto loc_0014B9A8; /* je: equal / zero */

loc_0014B9A0:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B9A8:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x22C;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B9BD:
    if (CMP_EQ(eax, ebx)) goto loc_0014B9C9; /* je: equal / zero */

loc_0014B9C1:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B9C9:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x228;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B9DE:
    if (CMP_EQ(eax, ebx)) goto loc_0014B9EA; /* je: equal / zero */

loc_0014B9E2:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014B9EA:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x234;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014B9FF:
    if (CMP_EQ(eax, ebx)) goto loc_0014BA0B; /* je: equal / zero */

loc_0014BA03:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014BA0B:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x230;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014BA20:
    if (CMP_EQ(eax, ebx)) goto loc_0014BA2C; /* je: equal / zero */

loc_0014BA24:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014BA2C:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x244;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014BA41:
    if (CMP_EQ(eax, ebx)) goto loc_0014BA4D; /* je: equal / zero */

loc_0014BA45:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014BA4D:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x240;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014BA62:
    if (CMP_EQ(eax, ebx)) goto loc_0014BA6E; /* je: equal / zero */

loc_0014BA66:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014BA6E:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x24C;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014BA83:
    if (CMP_EQ(eax, ebx)) goto loc_0014BA8F; /* je: equal / zero */

loc_0014BA87:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014BA8F:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x248;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0014BAA4:
    if (CMP_EQ(eax, ebx)) goto loc_0014BAB0; /* je: equal / zero */

loc_0014BAA8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0014BAB0:
    MEM8(ebp + 0x8D8) = LO8(ebx);

loc_0014BAB6:
    eax = MEM32(0x73A194);
    ecx = MEM32(0x73A190);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001AED30(); /* call 0x001AED30 */

loc_0014BACC:
    edx = esp + 0x18;
    PUSH32(esp, edx);
    esi = ebp + 0x470;
    PUSH32(esp, 0x3AED98);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0014BAE2:
    ecx = MEM32(0x4A1E94);
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x1B4;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC388);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BB0C:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC388);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x1B0;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BB32:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x1BC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC388);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BB59:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x1B8;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC388);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BB80:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC38C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x244;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BBA6:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, esi);
    ecx = ebp + 0x240;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC38C);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BBCD:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x24C;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC38C);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BBF4:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC38C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x248;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BC1A:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x1E4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC390);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BC41:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x1E0;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC390);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BC68:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC390);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x1EC;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BC8E:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x1E8;
    PUSH32(esp, ecx);
    edx = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC390);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BCB5:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x1CC;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC394);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BCDC:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC394);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x1C8;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BD02:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x1D4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC394);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BD29:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x1D0;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC394);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BD50:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC398);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x22C;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BD76:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x228;
    PUSH32(esp, ecx);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    ecx = MEM32(0x3EC398);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BD9D:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x234;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC398);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BDC4:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC398);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x230;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BDEA:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x1FC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC39C);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BE11:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x1F8;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC39C);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BE38:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC39C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x204;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BE5E:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x200;
    edx = edx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC39C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BE85:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x214;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A0);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BEAC:
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC3A0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ebp + 0x210;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BED2:
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x21C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BEF9:
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x218;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A0);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014BF20:
    ebx = ebp;
    MEM8(ebp + 0x8D8) = 1;
    PUSH32(esp, 0); sub_0014C4E0(); /* call 0x0014C4E0 */

loc_0014BF2E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0x524) = 0x2B9D6F8;
    MEM32(ebp + 0x520) = 0xFD462907u;
    MEM32(ebp + 0x524) = 0x24B04;
    MEM32(ebp + 0x520) = 0xFFFDB4FBu;
    eax = 0; /* xor self */
    MEM8(ebp + 0x8C5) = LO8(eax);
    MEMF(ebp + 0x7C4) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x8C6) = LO8(eax);
    MEMF(ebp + 0x7C8) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x8C7) = LO8(eax);
    MEM8(ebp + 0x8CB) = LO8(eax);
    MEM8(ebp + 0x8CC) = LO8(eax);
    MEM8(ebp + 0x8CD) = LO8(eax);
    MEM8(ebp + 0x8C3) = LO8(eax);
    MEM8(ebp + 0x8C4) = LO8(eax);
    MEM8(ebp + 0x8CE) = LO8(eax);
    MEM8(ebp + 0x8CF) = LO8(eax);
    MEM8(ebp + 0x8C2) = LO8(eax);
    MEM8(ebp + 0x8CA) = LO8(eax);
    edx = 0; /* xor self */
    MEM32(ebp + 0x514) = edx;
    MEM32(ebp + 0x518) = edx;
    PUSH32(esp, eax);
    ebx = 0x39CB30;
    eax = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_0014BFD1:
    MEM32(ebp + 0x84C) = eax;
    eax = MEM32(ebp + 0x880);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0x39CB48;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014BFEB:
    ecx = MEM32(ebp + 0x880);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x844) = eax;
    PUSH32(esp, ecx);
    eax = 0x39CB40;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014C003:
    edx = MEM32(ebp + 0x880);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x848) = eax;
    PUSH32(esp, edx);
    eax = 0x39CB50;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014C01B:
    MEM32(ebp + 0x858) = eax;
    eax = MEM32(ebp + 0x880);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0x39CB60;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014C033:
    esi = MEM32(ebp + 0x868);
    /* cmp esi, ebx - flags set for next jcc */
    MEM32(ebp + 0x85C) = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0014C06D; /* je: equal / zero */

loc_0014C043:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014C04D:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014C057:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014C06D:
    esi = MEM32(ebp + 0x860);
    if (CMP_EQ(esi, ebx)) goto loc_0014C0A1; /* je: equal / zero */

loc_0014C077:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014C081:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014C08B:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014C0A1:
    esi = MEM32(ebp + 0x870);
    if (CMP_EQ(esi, ebx)) goto loc_0014C0D5; /* je: equal / zero */

loc_0014C0AB:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014C0B5:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014C0BF:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014C0D5:
    esi = MEM32(ebp + 0x86C);
    if (CMP_EQ(esi, ebx)) goto loc_0014C109; /* je: equal / zero */

loc_0014C0DF:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014C0E9:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014C0F3:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014C109:
    eax = MEM32(ebp + 0x874);
    if (CMP_EQ(eax, ebx)) goto loc_0014C132; /* je: equal / zero */

loc_0014C113:
    ecx = MEM32(eax + 0x14);
    if (CMP_NE(ecx, MEM32(ebp + 0x8AC))) goto loc_0014C132; /* jne: not equal / not zero */

loc_0014C11E:
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_0014C123:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C132; /* je: equal / zero */

loc_0014C127:
    esi = MEM32(ebp + 0x874);
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_0014C132:
    esi = MEM32(ebp + 0x878);
    if (CMP_EQ(esi, ebx)) goto loc_0014C166; /* je: equal / zero */

loc_0014C13C:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014C146:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014C150:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014C166:
    esi = MEM32(ebp + 0x87C);
    if (CMP_EQ(esi, ebx)) goto loc_0014C19A; /* je: equal / zero */

loc_0014C170:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014C17A:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014C184:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014C19A:
    MEM32(ebp + 0x874) = ebx;
    MEM32(ebp + 0x868) = ebx;
    MEM32(ebp + 0x860) = ebx;
    MEM32(ebp + 0x870) = ebx;
    MEM32(ebp + 0x86C) = ebx;
    MEM32(ebp + 0x878) = ebx;
    MEM32(ebp + 0x87C) = ebx;
    MEM8(ebp + 0x8D6) = LO8(ebx);
    MEM8(ebp + 0x8D7) = LO8(ebx);
    esi = ebp + 0x10;
    edi = 6;

loc_0014C1D8:
    PUSH32(esp, 0); sub_001521C0(); /* call 0x001521C0 */

loc_0014C1DD:
    esi = esi + 0x40;
    edi--;
    if ((edi != 0)) goto loc_0014C1D8; /* jne: not equal / not zero */

loc_0014C1E3:
    eax = MEM32(ebp + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x39CB80;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014C1F6:
    esi = MEM32(ebp + 0x864);
    /* cmp esi, ebx - flags set for next jcc */
    MEM32(ebp + 0x854) = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0014C230; /* je: equal / zero */

loc_0014C206:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014C210:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014C21A:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014C230:
    MEM32(ebp + 0x864) = ebx;
    if (CMP_NE(MEM8(0x752D80), LO8(ebx))) goto loc_0014C2A6; /* jne: not equal / not zero */

loc_0014C23E:
    if (CMP_NE(MEM32(0x73A1C0), 1)) goto loc_0014C2AC; /* jne: not equal / not zero */

loc_0014C247:
    esi = MEM32(ebp + 0x884);
    if (CMP_NE(esi, ebx)) goto loc_0014C264; /* jne: not equal / not zero */

loc_0014C251:
    PUSH32(esp, ebx);
    ecx = 0x40E0D4;
    PUSH32(esp, 0); sub_001CBF30(); /* call 0x001CBF30 */

loc_0014C25C:
    MEM32(ebp + 0x884) = eax;
    goto loc_0014C269;

loc_0014C264:
    PUSH32(esp, 0); sub_001CB900(); /* call 0x001CB900 */

loc_0014C269:
    SET_LO8(ecx, MEM8(ebp + 0x890));
    eax = ZX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ebp + 0x4B0;
    edx++;
    PUSH32(esp, edx);
    SET_LO8(ecx, LO8(ecx) + 1);
    PUSH32(esp, 0x3AED84);
    PUSH32(esp, eax);
    MEM8(ebp + 0x890) = LO8(ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0014C295:
    esp = esp + 0xC;
    MEM8(ebp + 0x8DE) = LO8(ebx);
    MEM8(ebp + 0x8DD) = LO8(ebx);
    goto loc_0014C2AC;

loc_0014C2A6:
    MEM32(ebp + 0x884) = ebx;

loc_0014C2AC:
    SET_LO8(eax, MEM8(ebp + 0x890));
    MEM8(ebp + 0x8DC) = LO8(ebx);
    MEM8(ebp + 0x8DB) = LO8(ebx);
    MEM8(ebp + 0x8E2) = LO8(ebx);
    MEM8(ebp + 0x8E3) = LO8(ebx);
    MEM8(ebp + 0x93E) = LO8(ebx);
    MEM8(ebp + 0x8DF) = LO8(ebx);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ebp + 0x890) = LO8(eax);
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(ebp + 0x894) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x898) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x8E8) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x8E4) = LO8(ebx);
    MEM8(ebp + 0x93C) = LO8(ebx);
    MEM8(ebp + 0x93D) = LO8(ebx);
    MEM32(ebp + 0x91C) = ebx;
    MEM32(ebp + 0x92C) = ebx;
    MEM32(ebp + 0x920) = ebx;
    MEM32(ebp + 0x930) = ebx;
    MEM32(ebp + 0x924) = ebx;
    MEM32(ebp + 0x934) = ebx;
    MEM32(ebp + 0x928) = ebx;
    MEM32(ebp + 0x938) = ebx;
    MEM32(ebp) = 2;
    goto loc_0014C34E;

loc_0014C34C:
    ebx = 0; /* xor self */

loc_0014C34E:
    eax = MEM32(0x4D5370);
    if (CMP_EQ(eax, ebx)) goto loc_0014C498; /* je: equal / zero */

loc_0014C35B:
    esi = MEM32(eax + 0x1B8);
    if (CMP_EQ(esi, ebx)) goto loc_0014C498; /* je: equal / zero */

loc_0014C369:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_0014C373:
    if (CMP_EQ(eax, 6)) goto loc_0014C3A9; /* je: equal / zero */

loc_0014C378:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0014C382:
    if (CMP_EQ(eax, 3)) goto loc_0014C3A9; /* je: equal / zero */

loc_0014C387:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_0014C391:
    if (CMP_EQ(eax, 4)) goto loc_0014C3A9; /* je: equal / zero */

loc_0014C396:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0014C3A0:
    if (CMP_NE(eax, 5)) goto loc_0014C498; /* jne: not equal / not zero */

loc_0014C3A9:
    esi = MEM32(ebp + 0x888);
    if (CMP_EQ(esi, ebx)) goto loc_0014C3F1; /* je: equal / zero */

loc_0014C3B3:
    eax = MEM32(esi + 0x170);
    if (CMP_EQ(eax, 5)) goto loc_0014C3DE; /* je: equal / zero */

loc_0014C3BE:
    if (CMP_EQ(eax, 4)) goto loc_0014C3DE; /* je: equal / zero */

loc_0014C3C3:
    ecx = MEM32(esi + 0x16C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esi + 0x170) = 5;
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_0014C3DB:
    esp = esp + 8;

loc_0014C3DE:
    MEM8(esi + 0x196) = LO8(ebx);
    esi = MEM32(ebp + 0x888);
    PUSH32(esp, 0); sub_001CB900(); /* call 0x001CB900 */

loc_0014C3EF:
    goto loc_0014C402;

loc_0014C3F1:
    PUSH32(esp, ebx);
    ecx = 0x40E0D4;
    PUSH32(esp, 0); sub_001CBF30(); /* call 0x001CBF30 */

loc_0014C3FC:
    MEM32(ebp + 0x888) = eax;

loc_0014C402:
    edi = ebp + 0x4E2;
    eax = edi;
    PUSH32(esp, 0); sub_001513E0(); /* call 0x001513E0 */

loc_0014C40F:
    eax = MEM32(0x3EC3C8);
    esi = eax;

loc_0014C416:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0014C416; /* jne: not equal / not zero */

loc_0014C41D:
    eax = eax - esi;
    edi--;

loc_0014C420:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0014C420; /* jne: not equal / not zero */

loc_0014C428:
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebp) = 3;
    goto loc_0014C441;

loc_0014C43F:
    ebx = 0; /* xor self */

loc_0014C441:
    eax = MEM32(ebp + 0x888);
    ecx = MEM32(eax + 0x170);
    esi = 1;
    if (CMP_EQ(ecx, esi)) goto loc_0014C479; /* je: equal / zero */

loc_0014C456:
    ecx = MEM32(0x40E0EC);
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_0014C479; /* je: equal / zero */

loc_0014C462:
    if (CMP_NE(MEM32(ecx + 0x178), esi)) goto loc_0014C46B; /* jne: not equal / not zero */

loc_0014C46A:
    edx++;

loc_0014C46B:
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, ebx)) goto loc_0014C462; /* jne: not equal / not zero */

loc_0014C471:
    if (CMP_NE(edx, ebx)) goto loc_0014B6F3; /* jne: not equal / not zero */

loc_0014C479:
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = ebp + 0x4E2;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_001CB6C0(); /* call 0x001CB6C0 */

loc_0014C489:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014B6F3; /* je: equal / zero */

loc_0014C491:
    MEM8(ebp + 0x8E2) = 1;

loc_0014C498:
    MEM32(ebp) = 0x17;

loc_0014C49F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 8; return; /* ret 4 */

}
