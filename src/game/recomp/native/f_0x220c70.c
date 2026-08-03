#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220C70
 * Original: 0x00220C70 - 0x00220DE4 (372 bytes, 124 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220C70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00220C70:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    esp = esp - 0x640;
    /* cmp ecx, 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(ecx, 2)) goto loc_00220D3D; /* jne: not equal / not zero */

loc_00220C88:
    if (CMP_NE(MEM32(eax + 0x10), 0xFE)) goto loc_00220D3D; /* jne: not equal / not zero */

loc_00220C95:
    esi = MEM32(esp + 0x65C);
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(esi, esi)) goto loc_00220CB9; /* jne: not equal / not zero */

loc_00220CA1:
    edx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x640);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003393D4(); /* call 0x003393D4 */

loc_00220CB5:
    ebx = eax;
    goto loc_00220CF7;

loc_00220CB9:
    ecx = MEM32(esp + 0x664);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x640);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003393EE(); /* call 0x003393EE */

loc_00220CD7:
    ebx = eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_00220CF7; /* jle: less or equal (signed <=) */

loc_00220CDD:
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_00220CE2:
    MEM8(esi + 0xB) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 0xA) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 9) = LO8(eax);
    eax = eax >> 8;
    MEM8(esi + 8) = LO8(eax);

loc_00220CF7:
    if (CMP_LE(ebx, 2)) goto loc_00220D26; /* jle: less or equal (signed <=) */

loc_00220CFC:
    eax = MEM32(esp + 0x658);
    edi = MEM32(esp + 0x654);
    ebx = ebx - 2;
    /* cmp ebx, eax - flags set for next jcc */
    if (CMP_G(ebx, eax)) ebx = eax; /* cmovg */
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    esi = esp + 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_00220D26:
    if (TEST_NZ(ebx, ebx)) goto loc_00220D33; /* jne: not equal / not zero */

loc_00220D2A:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    goto loc_00220DBA;

loc_00220D33:
    eax = ebx;
    PUSH32(esp, 0); sub_002207E0(); /* call 0x002207E0 */

loc_00220D3A:
    POP32(esp, ebx);
    goto loc_00220DBA;

loc_00220D3D:
    edi = MEM32(esp + 0x65C);
    if (TEST_NZ(edi, edi)) goto loc_00220D66; /* jne: not equal / not zero */

loc_00220D48:
    ecx = MEM32(esp + 0x654);
    edx = MEM32(esp + 0x650);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003393D4(); /* call 0x003393D4 */

loc_00220D62:
    esi = eax;
    goto loc_00220DAA;

loc_00220D66:
    ecx = MEM32(esp + 0x660);
    edx = MEM32(esp + 0x654);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x654);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003393EE(); /* call 0x003393EE */

loc_00220D8A:
    esi = eax;
    if (CMP_LE(esi & esi, 0)) goto loc_00220DAC; /* jle: less or equal (signed <=) */

loc_00220D90:
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_00220D95:
    MEM8(edi + 0xB) = LO8(eax);
    eax = eax >> 8;
    MEM8(edi + 0xA) = LO8(eax);
    eax = eax >> 8;
    MEM8(edi + 9) = LO8(eax);
    eax = eax >> 8;
    MEM8(edi + 8) = LO8(eax);

loc_00220DAA:
    /* test esi, esi - flags set for next jcc */

loc_00220DAC:
    if (TEST_NZ(esi, esi)) goto loc_00220DB3; /* jne: not equal / not zero */

loc_00220DAE:
    eax = eax | 0xFFFFFFFFu;
    goto loc_00220DBA;

loc_00220DB3:
    eax = esi;
    PUSH32(esp, 0); sub_002207E0(); /* call 0x002207E0 */

loc_00220DBA:
    if (TEST_Z(MEM8(esp + 0x658), 0x20)) goto loc_00220DDB; /* je: equal / zero */

loc_00220DC4:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00220DD4; /* jne: not equal / not zero */

loc_00220DC9:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x640;
    esp += 4; return; /* ret */

loc_00220DD4:
    if (TEST_NZ(eax, eax)) goto loc_00220DDB; /* jne: not equal / not zero */

loc_00220DD8:
    eax = eax | 0xFFFFFFFFu;

loc_00220DDB:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x640;
    esp += 4; return; /* ret */

}
