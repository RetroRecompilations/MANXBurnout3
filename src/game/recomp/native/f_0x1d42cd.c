#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D42CD
 * Original: 0x001D42CD - 0x001D4360 (147 bytes, 63 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D42CD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D42CD:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ebx = esi + 0x38;
    goto loc_001D4314;

loc_001D42DE:
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0xC);
    if (CMP_A(edx, ecx)) goto loc_001D4345; /* ja: above (unsigned >) */

loc_001D42E8:
    ecx = MEM32(eax + 8);
    ecx = ecx + edx;
    if (CMP_NE(ecx, MEM32(ebp + 0xC))) goto loc_001D4312; /* jne: not equal / not zero */

loc_001D42F2:
    edi = edi + MEM32(eax + 8);
    ecx = edx;
    MEM32(ebp + 0xC) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebx) = ecx;
    PUSH32(esp, 0); sub_001D42AC(); /* call 0x001D42AC */

loc_001D4305:
    MEM32(esi + 0x34) = MEM32(esi + 0x34) - 1;
    if (CMP_BE(edi, MEM32(esi + 0x1C))) goto loc_001D4314; /* jbe: below or equal (unsigned <=) */

loc_001D430D:
    MEM32(esi + 0x1C) = edi;
    goto loc_001D4314;

loc_001D4312:
    ebx = eax;

loc_001D4314:
    eax = MEM32(ebx);
    if (TEST_NZ(eax, eax)) goto loc_001D42DE; /* jne: not equal / not zero */

loc_001D431A:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D418C(); /* call 0x001D418C */

loc_001D4320:
    if (TEST_Z(eax, eax)) goto loc_001D433E; /* je: equal / zero */

loc_001D4324:
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edi;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    MEM32(ebx) = eax;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 1;
    if (CMP_B(edi, MEM32(esi + 0x1C))) goto loc_001D433E; /* jb: below (unsigned <) */

loc_001D433B:
    MEM32(esi + 0x1C) = edi;

loc_001D433E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001D4345:
    edx = ecx + edi;
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_001D431A; /* jne: not equal / not zero */

loc_001D434D:
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    MEM32(eax + 4) = ecx;
    eax = MEM32(eax + 8);
    if (CMP_BE(eax, MEM32(esi + 0x1C))) goto loc_001D433E; /* jbe: below or equal (unsigned <=) */

loc_001D435B:
    MEM32(esi + 0x1C) = eax;
    goto loc_001D433E;

}
