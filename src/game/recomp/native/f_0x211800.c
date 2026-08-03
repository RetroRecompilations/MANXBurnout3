#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211800
 * Original: 0x00211800 - 0x0021187D (125 bytes, 54 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211800:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(ebx, ebp)) goto loc_0021187A; /* je: equal / zero */

loc_0021180C:
    ecx = MEM32(ebx + 0x18);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, ebp)) goto loc_0021181E; /* je: equal / zero */

loc_00211815:
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001B35F0(); /* call 0x001B35F0 */

loc_0021181B:
    esp = esp + 4;

loc_0021181E:
    PUSH32(esp, edi);
    edi = eax + -1;
    if (CMP_L(edi, ebp)) goto loc_00211867; /* jl: less (signed <) */

loc_00211826:
    PUSH32(esp, esi);

loc_00211827:
    eax = MEM32(ebx + 0x18);
    if (CMP_EQ(eax, ebp)) goto loc_00211863; /* je: equal / zero */

loc_0021182E:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C240(); /* call 0x0021C240 */

loc_00211835:
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_00211863; /* je: equal / zero */

loc_0021183C:
    esi = MEM32(eax + 0x100);
    if (CMP_EQ(esi, ebp)) goto loc_00211863; /* je: equal / zero */

loc_00211846:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00211500(); /* call 0x00211500 */

loc_0021184D:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C030(); /* call 0x0021C030 */

loc_00211856:
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esi + 0xC) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_00211860:
    esp = esp + 0x10;

loc_00211863:
    edi--;
    if (((int32_t)edi >= 0)) goto loc_00211827; /* jns: not sign (positive) */

loc_00211866:
    POP32(esp, esi);

loc_00211867:
    edx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021DE90(); /* call 0x0021DE90 */

loc_00211870:
    esp = esp + 4;
    MEM32(ebx + 0x18) = ebp;
    MEM32(ebx + 0x50) = ebp;
    POP32(esp, edi);

loc_0021187A:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
