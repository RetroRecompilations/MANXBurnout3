#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010DCA0
 * Original: 0x0010DCA0 - 0x0010DD12 (114 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010DCA0:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xA0), _icall_esp); /* indirect call */
    }

loc_0010DCBD:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010DCF7; /* jne: not equal / not zero */

loc_0010DCC1:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_0010DCE5; /* je: equal / zero */

loc_0010DCCA:
    eax = MEM32(eax + 0x1B8);
    if (CMP_EQ(eax, 0x4D4CF4)) goto loc_0010DCF7; /* je: equal / zero */

loc_0010DCD7:
    if (CMP_EQ(eax, 0x4D4DA4)) goto loc_0010DCF7; /* je: equal / zero */

loc_0010DCDE:
    if (CMP_EQ(eax, 0x4D4FFC)) goto loc_0010DCF7; /* je: equal / zero */

loc_0010DCE5:
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0010DD20(); /* call 0x0010DD20 */

loc_0010DCF2:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0010DCF7:
    eax = MEM32(ebx + 0x13F4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0010DD20(); /* call 0x0010DD20 */

loc_0010DD0D:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
