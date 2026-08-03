#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002434C0
 * Original: 0x002434C0 - 0x00243743 (643 bytes, 231 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002434C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002434C0:
    eax = MEM32(esp + 8);
    esp = esp - 0x100;
    if (CMP_B(eax, 2)) goto loc_0024373C; /* jb: below (unsigned <) */

loc_002434D3:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    if (TEST_Z(ebp, ebp)) goto loc_0024373B; /* je: equal / zero */

loc_002434E3:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10C);
    PUSH32(esp, esi);
    esi = eax + -1;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    esi = esi + ebx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, edi);

loc_00243505:
    eax = esi;
    eax = eax - ebx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    eax++;
    if (CMP_A(eax, 8)) goto loc_0024354F; /* ja: above (unsigned >) */

loc_00243513:
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00243450(); /* call 0x00243450 */

loc_00243524:
    esp = esp + 0xC;

loc_00243527:
    eax = MEM32(esp + 0x18);
    eax--;
    MEM32(esp + 0x18) = eax;
    if (((int32_t)eax < 0)) goto loc_00243738; /* js: sign (negative) */

loc_00243536:
    edx = MEM32(esp + eax * 4 + 0x20);
    eax = MEM32(esp + eax * 4 + 0x98);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    ebx = edx;
    esi = eax;
    goto loc_00243505;

loc_0024354F:
    eax = eax >> 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    eax = eax + ebx;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_00243561:
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0024358A; /* jle: less or equal (signed <=) */

loc_00243568:
    /* cmp ebx, edi - flags set for next jcc */
    eax = edi;
    if (CMP_EQ(ebx, edi)) goto loc_0024358A; /* je: equal / zero */

loc_0024356E:
    ecx = ebx;
    ecx = ecx - edi;
    esi = ebp;

loc_00243574:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_00243574; /* jne: not equal / not zero */

loc_00243582:
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_0024358A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_00243593:
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_002435BC; /* jle: less or equal (signed <=) */

loc_0024359A:
    /* cmp ebx, esi - flags set for next jcc */
    eax = esi;
    if (CMP_EQ(ebx, esi)) goto loc_002435BC; /* je: equal / zero */

loc_002435A0:
    ecx = ebx;
    ecx = ecx - esi;
    esi = ebp;

loc_002435A6:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_002435A6; /* jne: not equal / not zero */

loc_002435B4:
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_002435BC:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_002435C5:
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_002435EA; /* jle: less or equal (signed <=) */

loc_002435CC:
    /* cmp edi, esi - flags set for next jcc */
    eax = esi;
    if (CMP_EQ(edi, esi)) goto loc_002435EA; /* je: equal / zero */

loc_002435D2:
    ecx = edi;
    ecx = ecx - esi;
    esi = ebp;

loc_002435D8:
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_002435D8; /* jne: not equal / not zero */

loc_002435E6:
    ebx = MEM32(esp + 0x10);

loc_002435EA:
    esi = MEM32(esp + 0x14);
    edi = edi;

loc_002435F0:
    if (CMP_BE(edi, ebx)) goto loc_00243610; /* jbe: below or equal (unsigned <=) */

loc_002435F4:
    ebx = ebx + ebp;
    if (CMP_AE(ebx, edi)) goto loc_00243610; /* jae: above or equal (unsigned >=) */

loc_002435FA:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_00243603:
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_002435F4; /* jle: less or equal (signed <=) */

loc_0024360A:
    if (CMP_A(edi, ebx)) goto loc_00243630; /* ja: above (unsigned >) */

loc_0024360E:
    edi = edi;

loc_00243610:
    eax = MEM32(esp + 0x14);
    ebx = ebx + ebp;
    if (CMP_A(ebx, eax)) goto loc_00243630; /* ja: above (unsigned >) */

loc_0024361A:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_00243623:
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_00243610; /* jle: less or equal (signed <=) */

loc_0024362A:
    /* nop */

loc_00243630:
    esi = esi - ebp;
    if (CMP_BE(esi, edi)) goto loc_00243646; /* jbe: below or equal (unsigned <=) */

loc_00243636:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_0024363F:
    esp = esp + 8;
    if (CMP_G(eax & eax, 0)) goto loc_00243630; /* jg: greater (signed >) */

loc_00243646:
    if (CMP_A(ebx, esi)) goto loc_0024368C; /* ja: above (unsigned >) */

loc_0024364A:
    eax = esi;
    if (CMP_EQ(ebx, esi)) goto loc_0024367D; /* je: equal / zero */

loc_0024364E:
    ecx = MEM32(esp + 0x11C);
    ebp = ebx;
    ebp = ebp - esi;
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_00243660:
    SET_LO8(ecx, MEM8(eax + ebp));
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ebp) = LO8(edx);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    eax++;
    ecx--;
    MEM32(esp + 0x1C) = ecx;
    if ((ecx != 0)) goto loc_00243660; /* jne: not equal / not zero */

loc_00243676:
    ebp = MEM32(esp + 0x11C);

loc_0024367D:
    if (CMP_NE(edi, esi)) goto loc_002435F0; /* jne: not equal / not zero */

loc_00243685:
    edi = ebx;
    goto loc_002435F0;

loc_0024368C:
    esi = esi + ebp;
    if (CMP_AE(edi, esi)) goto loc_002436B0; /* jae: above or equal (unsigned >=) */

loc_00243692:
    esi = esi - ebp;
    if (CMP_BE(esi, edi)) goto loc_002436B0; /* jbe: below or equal (unsigned <=) */

loc_00243698:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_002436A1:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00243692; /* je: equal / zero */

loc_002436A8:
    if (CMP_B(edi, esi)) goto loc_002436CA; /* jb: below (unsigned <) */

loc_002436AC:
    /* nop */

loc_002436B0:
    eax = MEM32(esp + 0x10);
    esi = esi - ebp;
    if (CMP_BE(esi, eax)) goto loc_002436CE; /* jbe: below or equal (unsigned <=) */

loc_002436BA:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_002436C3:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002436B0; /* je: equal / zero */

loc_002436CA:
    eax = MEM32(esp + 0x10);

loc_002436CE:
    edx = MEM32(esp + 0x14);
    ecx = edx;
    edi = esi;
    ecx = ecx - ebx;
    edi = edi - eax;
    if (CMP_L(edi, ecx)) goto loc_0024370B; /* jl: less (signed <) */

loc_002436DE:
    if (CMP_AE(eax, esi)) goto loc_002436F6; /* jae: above or equal (unsigned >=) */

loc_002436E2:
    ecx = MEM32(esp + 0x18);
    MEM32(esp + ecx * 4 + 0x20) = eax;
    MEM32(esp + ecx * 4 + 0x98) = esi;
    ecx++;
    MEM32(esp + 0x18) = ecx;

loc_002436F6:
    if (CMP_AE(ebx, edx)) goto loc_00243527; /* jae: above or equal (unsigned >=) */

loc_002436FE:
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ebx;
    goto loc_00243505;

loc_0024370B:
    if (CMP_AE(ebx, edx)) goto loc_00243723; /* jae: above or equal (unsigned >=) */

loc_0024370F:
    ecx = MEM32(esp + 0x18);
    MEM32(esp + ecx * 4 + 0x20) = ebx;
    MEM32(esp + ecx * 4 + 0x98) = edx;
    ecx++;
    MEM32(esp + 0x18) = ecx;

loc_00243723:
    if (CMP_AE(eax, esi)) goto loc_00243527; /* jae: above or equal (unsigned >=) */

loc_0024372B:
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = esi;
    goto loc_00243505;

loc_00243738:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0024373B:
    POP32(esp, ebp);

loc_0024373C:
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}
