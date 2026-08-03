#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014C4E0
 * Original: 0x0014C4E0 - 0x0014C874 (916 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014C4E0:
    PUSH32(esp, esi);
    esi = MEM32(0x73A190);
    PUSH32(esp, edi);
    edi = MEM32(0x73A194);
    eax = 0x3AED78;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C4F8:
    if (CMP_NE(esi, eax)) goto loc_0014C504; /* jne: not equal / not zero */

loc_0014C4FC:
    if (CMP_EQ(edi, edx)) goto loc_0014C86A; /* je: equal / zero */

loc_0014C504:
    eax = 0x3AED6C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C50E:
    if (CMP_NE(esi, eax)) goto loc_0014C51A; /* jne: not equal / not zero */

loc_0014C512:
    if (CMP_EQ(edi, edx)) goto loc_0014C86A; /* je: equal / zero */

loc_0014C51A:
    eax = 0x3AED60;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C524:
    if (CMP_NE(esi, eax)) goto loc_0014C530; /* jne: not equal / not zero */

loc_0014C528:
    if (CMP_EQ(edi, edx)) goto loc_0014C860; /* je: equal / zero */

loc_0014C530:
    eax = 0x3AED54;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C53A:
    if (CMP_NE(esi, eax)) goto loc_0014C546; /* jne: not equal / not zero */

loc_0014C53E:
    if (CMP_EQ(edi, edx)) goto loc_0014C860; /* je: equal / zero */

loc_0014C546:
    eax = 0x3AED48;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C550:
    if (CMP_NE(esi, eax)) goto loc_0014C55C; /* jne: not equal / not zero */

loc_0014C554:
    if (CMP_EQ(edi, edx)) goto loc_0014C856; /* je: equal / zero */

loc_0014C55C:
    eax = 0x3AED3C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C566:
    if (CMP_NE(esi, eax)) goto loc_0014C572; /* jne: not equal / not zero */

loc_0014C56A:
    if (CMP_EQ(edi, edx)) goto loc_0014C856; /* je: equal / zero */

loc_0014C572:
    eax = 0x3AED30;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C57C:
    if (CMP_NE(esi, eax)) goto loc_0014C588; /* jne: not equal / not zero */

loc_0014C580:
    if (CMP_EQ(edi, edx)) goto loc_0014C84C; /* je: equal / zero */

loc_0014C588:
    eax = 0x3AED24;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C592:
    if (CMP_NE(esi, eax)) goto loc_0014C59E; /* jne: not equal / not zero */

loc_0014C596:
    if (CMP_EQ(edi, edx)) goto loc_0014C84C; /* je: equal / zero */

loc_0014C59E:
    eax = 0x3AED18;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C5A8:
    if (CMP_NE(esi, eax)) goto loc_0014C5B4; /* jne: not equal / not zero */

loc_0014C5AC:
    if (CMP_EQ(edi, edx)) goto loc_0014C842; /* je: equal / zero */

loc_0014C5B4:
    eax = 0x3AED0C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C5BE:
    if (CMP_NE(esi, eax)) goto loc_0014C5CA; /* jne: not equal / not zero */

loc_0014C5C2:
    if (CMP_EQ(edi, edx)) goto loc_0014C842; /* je: equal / zero */

loc_0014C5CA:
    eax = 0x3AED00;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C5D4:
    if (CMP_NE(esi, eax)) goto loc_0014C5E0; /* jne: not equal / not zero */

loc_0014C5D8:
    if (CMP_EQ(edi, edx)) goto loc_0014C838; /* je: equal / zero */

loc_0014C5E0:
    eax = 0x3AECF4;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C5EA:
    if (CMP_NE(esi, eax)) goto loc_0014C5F6; /* jne: not equal / not zero */

loc_0014C5EE:
    if (CMP_EQ(edi, edx)) goto loc_0014C838; /* je: equal / zero */

loc_0014C5F6:
    eax = 0x3AECE8;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C600:
    if (CMP_NE(esi, eax)) goto loc_0014C60C; /* jne: not equal / not zero */

loc_0014C604:
    if (CMP_EQ(edi, edx)) goto loc_0014C82E; /* je: equal / zero */

loc_0014C60C:
    eax = 0x3AECDC;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C616:
    if (CMP_NE(esi, eax)) goto loc_0014C622; /* jne: not equal / not zero */

loc_0014C61A:
    if (CMP_EQ(edi, edx)) goto loc_0014C82E; /* je: equal / zero */

loc_0014C622:
    eax = 0x3AECD0;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C62C:
    if (CMP_NE(esi, eax)) goto loc_0014C638; /* jne: not equal / not zero */

loc_0014C630:
    if (CMP_EQ(edi, edx)) goto loc_0014C824; /* je: equal / zero */

loc_0014C638:
    eax = 0x3AECC4;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C642:
    if (CMP_NE(esi, eax)) goto loc_0014C64E; /* jne: not equal / not zero */

loc_0014C646:
    if (CMP_EQ(edi, edx)) goto loc_0014C824; /* je: equal / zero */

loc_0014C64E:
    eax = 0x3AECB8;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C658:
    if (CMP_NE(esi, eax)) goto loc_0014C664; /* jne: not equal / not zero */

loc_0014C65C:
    if (CMP_EQ(edi, edx)) goto loc_0014C81A; /* je: equal / zero */

loc_0014C664:
    eax = 0x3AECAC;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C66E:
    if (CMP_NE(esi, eax)) goto loc_0014C67A; /* jne: not equal / not zero */

loc_0014C672:
    if (CMP_EQ(edi, edx)) goto loc_0014C81A; /* je: equal / zero */

loc_0014C67A:
    eax = 0x3AECA0;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C684:
    if (CMP_NE(esi, eax)) goto loc_0014C690; /* jne: not equal / not zero */

loc_0014C688:
    if (CMP_EQ(edi, edx)) goto loc_0014C810; /* je: equal / zero */

loc_0014C690:
    eax = 0x3AEC94;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C69A:
    if (CMP_NE(esi, eax)) goto loc_0014C6A6; /* jne: not equal / not zero */

loc_0014C69E:
    if (CMP_EQ(edi, edx)) goto loc_0014C810; /* je: equal / zero */

loc_0014C6A6:
    eax = 0x3AEC88;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C6B0:
    if (CMP_NE(esi, eax)) goto loc_0014C6BC; /* jne: not equal / not zero */

loc_0014C6B4:
    if (CMP_EQ(edi, edx)) goto loc_0014C806; /* je: equal / zero */

loc_0014C6BC:
    eax = 0x3AEC7C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C6C6:
    if (CMP_NE(esi, eax)) goto loc_0014C6D2; /* jne: not equal / not zero */

loc_0014C6CA:
    if (CMP_EQ(edi, edx)) goto loc_0014C806; /* je: equal / zero */

loc_0014C6D2:
    eax = 0x3AEC70;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C6DC:
    if (CMP_NE(esi, eax)) goto loc_0014C6E8; /* jne: not equal / not zero */

loc_0014C6E0:
    if (CMP_EQ(edi, edx)) goto loc_0014C7FC; /* je: equal / zero */

loc_0014C6E8:
    eax = 0x3AEC64;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C6F2:
    if (CMP_NE(esi, eax)) goto loc_0014C6FE; /* jne: not equal / not zero */

loc_0014C6F6:
    if (CMP_EQ(edi, edx)) goto loc_0014C7FC; /* je: equal / zero */

loc_0014C6FE:
    eax = 0x3AEC58;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C708:
    if (CMP_NE(esi, eax)) goto loc_0014C714; /* jne: not equal / not zero */

loc_0014C70C:
    if (CMP_EQ(edi, edx)) goto loc_0014C7F2; /* je: equal / zero */

loc_0014C714:
    eax = 0x3AEC4C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C71E:
    if (CMP_NE(esi, eax)) goto loc_0014C72A; /* jne: not equal / not zero */

loc_0014C722:
    if (CMP_EQ(edi, edx)) goto loc_0014C7F2; /* je: equal / zero */

loc_0014C72A:
    eax = 0x3AEC40;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C734:
    if (CMP_NE(esi, eax)) goto loc_0014C740; /* jne: not equal / not zero */

loc_0014C738:
    if (CMP_EQ(edi, edx)) goto loc_0014C7E8; /* je: equal / zero */

loc_0014C740:
    eax = 0x3AEC34;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C74A:
    if (CMP_NE(esi, eax)) goto loc_0014C756; /* jne: not equal / not zero */

loc_0014C74E:
    if (CMP_EQ(edi, edx)) goto loc_0014C7E8; /* je: equal / zero */

loc_0014C756:
    eax = 0x3AEC28;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C760:
    if (CMP_NE(esi, eax)) goto loc_0014C768; /* jne: not equal / not zero */

loc_0014C764:
    if (CMP_EQ(edi, edx)) goto loc_0014C7DE; /* je: equal / zero */

loc_0014C768:
    eax = 0x3AEC1C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C772:
    if (CMP_NE(esi, eax)) goto loc_0014C77A; /* jne: not equal / not zero */

loc_0014C776:
    if (CMP_EQ(edi, edx)) goto loc_0014C7DE; /* je: equal / zero */

loc_0014C77A:
    eax = 0x3AEC10;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C784:
    if (CMP_NE(esi, eax)) goto loc_0014C78C; /* jne: not equal / not zero */

loc_0014C788:
    if (CMP_EQ(edi, edx)) goto loc_0014C7D4; /* je: equal / zero */

loc_0014C78C:
    eax = 0x3AEC04;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C796:
    if (CMP_NE(esi, eax)) goto loc_0014C79E; /* jne: not equal / not zero */

loc_0014C79A:
    if (CMP_EQ(edi, edx)) goto loc_0014C7D4; /* je: equal / zero */

loc_0014C79E:
    eax = 0x3AEBF8;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C7A8:
    if (CMP_NE(esi, eax)) goto loc_0014C7B0; /* jne: not equal / not zero */

loc_0014C7AC:
    if (CMP_EQ(edi, edx)) goto loc_0014C7CA; /* je: equal / zero */

loc_0014C7B0:
    eax = 0x3AEBEC;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_0014C7BA:
    if (CMP_NE(esi, eax)) goto loc_0014C871; /* jne: not equal / not zero */

loc_0014C7C2:
    if (CMP_NE(edi, edx)) goto loc_0014C871; /* jne: not equal / not zero */

loc_0014C7CA:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C7D4:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 9;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C7DE:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C7E8:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C7F2:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 0xF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C7FC:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 0xE;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C806:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 0xD;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C810:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 6;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C81A:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C824:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C82E:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C838:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C842:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 0xB;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C84C:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C856:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C860:
    POP32(esp, edi);
    MEM8(ebx + 0x8C1) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C86A:
    MEM8(ebx + 0x8C1) = 0;

loc_0014C871:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
