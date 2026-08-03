#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00019110
 * Original: 0x00019110 - 0x000193FD (749 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019110:
    eax = ecx;
    ecx = MEM32(esp + 4);
    if (CMP_A(ecx, 0x16)) goto loc_000193F8; /* ja: above (unsigned >) */

loc_0001911F:
    { uint32_t _jt = MEM32(ecx * 4 + 0x19400); /* switch: 23 entries, 23 targets */
    if (_jt == 0x00019126u) goto loc_00019126;
    if (_jt == 0x00019137u) goto loc_00019137;
    if (_jt == 0x0001918Du) goto loc_0001918D;
    if (_jt == 0x000191C9u) goto loc_000191C9;
    if (_jt == 0x00019202u) goto loc_00019202;
    if (_jt == 0x0001923Bu) goto loc_0001923B;
    if (_jt == 0x00019277u) goto loc_00019277;
    if (_jt == 0x000192B3u) goto loc_000192B3;
    if (_jt == 0x000192C4u) goto loc_000192C4;
    if (_jt == 0x000192EBu) goto loc_000192EB;
    if (_jt == 0x000192FCu) goto loc_000192FC;
    if (_jt == 0x0001930Du) goto loc_0001930D;
    if (_jt == 0x00019334u) goto loc_00019334;
    if (_jt == 0x00019345u) goto loc_00019345;
    if (_jt == 0x00019356u) goto loc_00019356;
    if (_jt == 0x00019367u) goto loc_00019367;
    if (_jt == 0x0001937Bu) goto loc_0001937B;
    if (_jt == 0x0001938Fu) goto loc_0001938F;
    if (_jt == 0x000193A3u) goto loc_000193A3;
    if (_jt == 0x000193B7u) goto loc_000193B7;
    if (_jt == 0x000193CBu) goto loc_000193CB;
    if (_jt == 0x000193E4u) goto loc_000193E4;
    if (_jt == 0x000193F8u) goto loc_000193F8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00019126:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x54;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019134:
    esp += 12; return; /* ret 8 */

loc_00019137:
    edx = MEM32(eax + 0x984);
    if (TEST_NZ(edx, edx)) goto loc_00019157; /* jne: not equal / not zero */

loc_00019141:
    ecx = MEM32(esp + 8);
    ecx = ecx << 4;
    ecx = ecx + eax + 0x8E4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019154:
    esp += 12; return; /* ret 8 */

loc_00019157:
    if (CMP_NE(edx, 2)) goto loc_00019177; /* jne: not equal / not zero */

loc_0001915C:
    edx = MEM32(esp + 8);
    edx = edx << 4;
    ecx = edx + eax + 0x424;
    edx = 2;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019174:
    esp += 12; return; /* ret 8 */

loc_00019177:
    ecx = MEM32(esp + 8);
    ecx = ecx << 4;
    ecx = ecx + eax + 0x104;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0001918A:
    esp += 12; return; /* ret 8 */

loc_0001918D:
    edx = MEM32(eax + 0x984);
    if (CMP_NE(edx, 2)) goto loc_000191B3; /* jne: not equal / not zero */

loc_00019198:
    edx = MEM32(esp + 8);
    edx = edx << 4;
    ecx = edx + eax + 0x824;
    edx = 2;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000191B0:
    esp += 12; return; /* ret 8 */

loc_000191B3:
    ecx = MEM32(esp + 8);
    ecx = ecx << 4;
    ecx = ecx + eax + 0x364;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000191C6:
    esp += 12; return; /* ret 8 */

loc_000191C9:
    edx = MEM32(eax + 0x984);
    if (TEST_NZ(edx, edx)) goto loc_000191E1; /* jne: not equal / not zero */

loc_000191D3:
    ecx = eax + 0x914;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000191DE:
    esp += 12; return; /* ret 8 */

loc_000191E1:
    if (CMP_NE(edx, 2)) goto loc_000191F4; /* jne: not equal / not zero */

loc_000191E6:
    ecx = eax + 0x484;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000191F1:
    esp += 12; return; /* ret 8 */

loc_000191F4:
    ecx = eax + 0x164;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000191FF:
    esp += 12; return; /* ret 8 */

loc_00019202:
    edx = MEM32(eax + 0x984);
    if (TEST_NZ(edx, edx)) goto loc_0001921A; /* jne: not equal / not zero */

loc_0001920C:
    ecx = eax + 0x934;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019217:
    esp += 12; return; /* ret 8 */

loc_0001921A:
    if (CMP_NE(edx, 2)) goto loc_0001922D; /* jne: not equal / not zero */

loc_0001921F:
    ecx = eax + 0x494;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0001922A:
    esp += 12; return; /* ret 8 */

loc_0001922D:
    ecx = eax + 0x174;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019238:
    esp += 12; return; /* ret 8 */

loc_0001923B:
    edx = MEM32(eax + 0x984);
    if (CMP_NE(edx, 2)) goto loc_00019261; /* jne: not equal / not zero */

loc_00019246:
    edx = MEM32(esp + 8);
    edx = edx << 4;
    ecx = edx + eax + 0x4A4;
    edx = 2;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0001925E:
    esp += 12; return; /* ret 8 */

loc_00019261:
    ecx = MEM32(esp + 8);
    ecx = ecx << 4;
    ecx = ecx + eax + 0x184;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019274:
    esp += 12; return; /* ret 8 */

loc_00019277:
    edx = MEM32(eax + 0x984);
    if (CMP_NE(edx, 2)) goto loc_0001929D; /* jne: not equal / not zero */

loc_00019282:
    edx = MEM32(esp + 8);
    edx = edx << 4;
    ecx = edx + eax + 0x5D4;
    edx = 2;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0001929A:
    esp += 12; return; /* ret 8 */

loc_0001929D:
    ecx = MEM32(esp + 8);
    ecx = ecx << 4;
    ecx = ecx + eax + 0x224;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000192B0:
    esp += 12; return; /* ret 8 */

loc_000192B3:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x64;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000192C1:
    esp += 12; return; /* ret 8 */

loc_000192C4:
    edx = MEM32(eax + 0x984);
    if (CMP_NE(edx, 2)) goto loc_000192DD; /* jne: not equal / not zero */

loc_000192CF:
    ecx = eax + 0x804;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000192DA:
    esp += 12; return; /* ret 8 */

loc_000192DD:
    ecx = eax + 0x344;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000192E8:
    esp += 12; return; /* ret 8 */

loc_000192EB:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x14;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000192F9:
    esp += 12; return; /* ret 8 */

loc_000192FC:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x24;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0001930A:
    esp += 12; return; /* ret 8 */

loc_0001930D:
    edx = MEM32(eax + 0x984);
    if (CMP_NE(edx, 2)) goto loc_00019326; /* jne: not equal / not zero */

loc_00019318:
    ecx = eax + 0x814;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019323:
    esp += 12; return; /* ret 8 */

loc_00019326:
    ecx = eax + 0x354;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019331:
    esp += 12; return; /* ret 8 */

loc_00019334:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x34;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019342:
    esp += 12; return; /* ret 8 */

loc_00019345:
    edx = MEM32(eax + 0x984);
    ecx = eax + 4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019353:
    esp += 12; return; /* ret 8 */

loc_00019356:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x44;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019364:
    esp += 12; return; /* ret 8 */

loc_00019367:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x944;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_00019378:
    esp += 12; return; /* ret 8 */

loc_0001937B:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x964;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0001938C:
    esp += 12; return; /* ret 8 */

loc_0001938F:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x974;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000193A0:
    esp += 12; return; /* ret 8 */

loc_000193A3:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x904;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000193B4:
    esp += 12; return; /* ret 8 */

loc_000193B7:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0x954;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000193C8:
    esp += 12; return; /* ret 8 */

loc_000193CB:
    edx = MEM32(esp + 8);
    edx = edx << 4;
    ecx = edx + eax + 0x74;
    edx = MEM32(eax + 0x984);
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000193E1:
    esp += 12; return; /* ret 8 */

loc_000193E4:
    edx = MEM32(eax + 0x984);
    ecx = eax + 0xF4;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_000193F5:
    esp += 12; return; /* ret 8 */

loc_000193F8:
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}
