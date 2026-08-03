#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00134AC0
 * Original: 0x00134AC0 - 0x00134D9C (732 bytes, 227 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134AC0:
    esp = esp - 0x90;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x9C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x9C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = esp + 0x18;
    esi = eax;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_00134AE5:
    SET_LO8(ecx, MEM8(esp + 0x23));
    esp = esp + 8;
    /* cmp LO8(ecx), 0x20 - flags set for next jcc */
    eax = esp + 0x1B;
    if (CMP_NE(LO8(ecx), 0x20)) goto loc_00134B09; /* jne: not equal / not zero */

loc_00134AF5:
    ecx = esp + 0x10;
    if (CMP_B(eax, ecx)) goto loc_00134B09; /* jb: below (unsigned <) */

loc_00134AFD:
    MEM8(eax) = 0;
    SET_LO8(ecx, MEM8(eax + -1));
    eax--;
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_00134AF5; /* je: equal / zero */

loc_00134B09:
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3AC65C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134B19:
    PUSH32(esp, 0x3AC64C);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x80) = ebp;
    MEM32(esi + 0x84) = ebx;
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134B3E:
    eax = MEM32(0x4A1E94);
    esp = esp + 0x1C;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = esi + 0x88;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x3AC64C;
    edx = 0x3AC640;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134B69:
    PUSH32(esp, 0x3AD114);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134B82:
    ecx = MEM32(0x4A1E94);
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esi + 0x8C;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x3AD114;
    edx = 0x3AD104;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134BAE:
    PUSH32(esp, 0x3AD114);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134BC7:
    edx = MEM32(0x4A1E94);
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 0x3AD114;
    edx = 0x3AD0F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134BF3:
    PUSH32(esp, 0x3AD114);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134C0C:
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, esi);
    edx = esi + 0x90;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x3AD114;
    edx = 0x3AD0E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134C37:
    PUSH32(esp, 0x3AD114);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134C50:
    ecx = MEM32(0x4A1E94);
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esi + 0x94;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x3AD114;
    edx = 0x3AD0D4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134C7C:
    PUSH32(esp, 0x3AD0BC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134C95:
    edx = MEM32(0x4A1E94);
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = esi + 0xA8;
    PUSH32(esp, ecx);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 0x3AD0BC;
    edx = 0x3AD104;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134CC1:
    PUSH32(esp, 0x3AD0BC);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134CDA:
    eax = MEM32(0x4A1E94);
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = esi + 0xA4;
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x3AD0BC;
    edx = 0x3AD0F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134D05:
    PUSH32(esp, 0x3AD0BC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134D1E:
    esp = esp + 0x10;
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esi + 0x9C;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x3AD0BC;
    edx = 0x3AD0E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134D4A:
    PUSH32(esp, 0x3AD0BC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0x3AA4F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00134D63:
    ecx = MEM32(0x4A1E94);
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = esi + 0xA0;
    ecx = ecx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x3AD0BC;
    edx = 0x3AD0D4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00134D8F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x90;
    esp += 12; return; /* ret 8 */

}
