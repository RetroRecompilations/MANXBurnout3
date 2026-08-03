#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001551E0
 * Original: 0x001551E0 - 0x001552C2 (226 bytes, 69 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001551E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001551E0:
    eax = MEM32(0x4D5370);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1B8);
    edx = MEM32(esi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_001551F6:
    if (CMP_NE(eax, 7)) goto loc_00155227; /* jne: not equal / not zero */

loc_001551FB:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_00155205:
    eax = eax - 0;
    if ((eax == 0)) goto loc_00155225; /* je: equal / zero */

loc_0015520A:
    eax--;
    if ((eax == 0)) goto loc_0015521E; /* je: equal / zero */

loc_0015520D:
    eax--;
    if ((eax == 0)) goto loc_00155217; /* je: equal / zero */

loc_00155210:
    eax = 6;
    goto loc_00155227;

loc_00155217:
    eax = 3;
    goto loc_00155227;

loc_0015521E:
    eax = 2;
    goto loc_00155227;

loc_00155225:
    eax = 0; /* xor self */

loc_00155227:
    ecx = 0; /* xor self */
    /* cmp eax, 6 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_A(eax, 6)) goto loc_00155291; /* ja: above (unsigned >) */

loc_0015522F:
    { uint32_t _jt = MEM32(eax * 4 + 0x1552C4); /* switch: 7 entries, 6 targets */
    if (_jt == 0x00155236u) goto loc_00155236;
    if (_jt == 0x00155277u) goto loc_00155277;
    if (_jt == 0x0015527Eu) goto loc_0015527E;
    if (_jt == 0x00155285u) goto loc_00155285;
    if (_jt == 0x0015528Cu) goto loc_0015528C;
    if (_jt == 0x00155291u) goto loc_00155291;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00155236:
    eax = MEM32(0x73A1C4);
    ecx = 1;
    if (CMP_NE(eax, ecx)) goto loc_0015524B; /* jne: not equal / not zero */

loc_00155244:
    ecx = 0x3AF228;
    goto loc_00155291;

loc_0015524B:
    edx = MEM32(0x4D5370);
    eax = MEM32(edx + 0x1BC);
    if (CMP_NE(MEM32(eax + 4), ecx)) goto loc_00155270; /* jne: not equal / not zero */

loc_0015525C:
    eax = MEM32(eax + 8);
    /* cmp MEM32(eax + 0x38), ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(MEM32(eax + 0x38), ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00155270; /* je: equal / zero */

loc_00155269:
    ecx = 0x3AF220;
    goto loc_00155291;

loc_00155270:
    ecx = 0x3AF218;
    goto loc_00155291;

loc_00155277:
    ecx = 0x3AF210;
    goto loc_00155291;

loc_0015527E:
    ecx = 0x3AF208;
    goto loc_00155291;

loc_00155285:
    ecx = 0x3AF200;
    goto loc_00155291;

loc_0015528C:
    ecx = 0x3AF1F8;

loc_00155291:
    edx = MEM32(0x3EC8E8);
    eax = MEM32(0x45B9BC);
    PUSH32(esp, edx);
    edx = MEM32(0x3EC8D8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax * 4 + 0x3EC8F8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3AF1A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001552BC:
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}
