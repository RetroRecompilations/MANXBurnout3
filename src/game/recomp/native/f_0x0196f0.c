#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000196F0
 * Original: 0x000196F0 - 0x00019875 (389 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000196F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000196F0:
    eax = MEM32(esp + 4);
    if (CMP_A(eax, 0x16)) goto loc_0001986F; /* ja: above (unsigned >) */

loc_000196FD:
    { uint32_t _jt = MEM32(eax * 4 + 0x19878); /* switch: 23 entries, 23 targets */
    if (_jt == 0x00019704u) goto loc_00019704;
    if (_jt == 0x0001970Au) goto loc_0001970A;
    if (_jt == 0x00019734u) goto loc_00019734;
    if (_jt == 0x0001974Fu) goto loc_0001974F;
    if (_jt == 0x00019779u) goto loc_00019779;
    if (_jt == 0x000197A3u) goto loc_000197A3;
    if (_jt == 0x000197BEu) goto loc_000197BE;
    if (_jt == 0x000197D9u) goto loc_000197D9;
    if (_jt == 0x000197DFu) goto loc_000197DF;
    if (_jt == 0x000197FAu) goto loc_000197FA;
    if (_jt == 0x00019800u) goto loc_00019800;
    if (_jt == 0x00019806u) goto loc_00019806;
    if (_jt == 0x00019821u) goto loc_00019821;
    if (_jt == 0x00019827u) goto loc_00019827;
    if (_jt == 0x0001982Du) goto loc_0001982D;
    if (_jt == 0x00019833u) goto loc_00019833;
    if (_jt == 0x0001983Cu) goto loc_0001983C;
    if (_jt == 0x00019845u) goto loc_00019845;
    if (_jt == 0x0001984Eu) goto loc_0001984E;
    if (_jt == 0x00019857u) goto loc_00019857;
    if (_jt == 0x00019860u) goto loc_00019860;
    if (_jt == 0x00019866u) goto loc_00019866;
    if (_jt == 0x0001986Fu) goto loc_0001986F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00019704:
    eax = MEM32(ecx + 0x5C);
    esp += 8; return; /* ret 4 */

loc_0001970A:
    eax = MEM32(ecx + 0x984);
    if (TEST_NZ(eax, eax)) goto loc_0001971D; /* jne: not equal / not zero */

loc_00019714:
    eax = MEM32(ecx + 0x8EC);
    esp += 8; return; /* ret 4 */

loc_0001971D:
    if (CMP_NE(eax, 2)) goto loc_0001972B; /* jne: not equal / not zero */

loc_00019722:
    eax = MEM32(ecx + 0x42C);
    esp += 8; return; /* ret 4 */

loc_0001972B:
    eax = MEM32(ecx + 0x10C);
    esp += 8; return; /* ret 4 */

loc_00019734:
    if (CMP_NE(MEM32(ecx + 0x984), 2)) goto loc_00019746; /* jne: not equal / not zero */

loc_0001973D:
    eax = MEM32(ecx + 0x82C);
    esp += 8; return; /* ret 4 */

loc_00019746:
    eax = MEM32(ecx + 0x36C);
    esp += 8; return; /* ret 4 */

loc_0001974F:
    eax = MEM32(ecx + 0x984);
    if (TEST_NZ(eax, eax)) goto loc_00019762; /* jne: not equal / not zero */

loc_00019759:
    eax = MEM32(ecx + 0x91C);
    esp += 8; return; /* ret 4 */

loc_00019762:
    if (CMP_NE(eax, 2)) goto loc_00019770; /* jne: not equal / not zero */

loc_00019767:
    eax = MEM32(ecx + 0x48C);
    esp += 8; return; /* ret 4 */

loc_00019770:
    eax = MEM32(ecx + 0x16C);
    esp += 8; return; /* ret 4 */

loc_00019779:
    eax = MEM32(ecx + 0x984);
    if (TEST_NZ(eax, eax)) goto loc_0001978C; /* jne: not equal / not zero */

loc_00019783:
    eax = MEM32(ecx + 0x93C);
    esp += 8; return; /* ret 4 */

loc_0001978C:
    if (CMP_NE(eax, 2)) goto loc_0001979A; /* jne: not equal / not zero */

loc_00019791:
    eax = MEM32(ecx + 0x49C);
    esp += 8; return; /* ret 4 */

loc_0001979A:
    eax = MEM32(ecx + 0x17C);
    esp += 8; return; /* ret 4 */

loc_000197A3:
    if (CMP_NE(MEM32(ecx + 0x984), 2)) goto loc_000197B5; /* jne: not equal / not zero */

loc_000197AC:
    eax = MEM32(ecx + 0x4AC);
    esp += 8; return; /* ret 4 */

loc_000197B5:
    eax = MEM32(ecx + 0x18C);
    esp += 8; return; /* ret 4 */

loc_000197BE:
    if (CMP_NE(MEM32(ecx + 0x984), 2)) goto loc_000197D0; /* jne: not equal / not zero */

loc_000197C7:
    eax = MEM32(ecx + 0x5DC);
    esp += 8; return; /* ret 4 */

loc_000197D0:
    eax = MEM32(ecx + 0x22C);
    esp += 8; return; /* ret 4 */

loc_000197D9:
    eax = MEM32(ecx + 0x6C);
    esp += 8; return; /* ret 4 */

loc_000197DF:
    if (CMP_NE(MEM32(ecx + 0x984), 2)) goto loc_000197F1; /* jne: not equal / not zero */

loc_000197E8:
    eax = MEM32(ecx + 0x80C);
    esp += 8; return; /* ret 4 */

loc_000197F1:
    eax = MEM32(ecx + 0x34C);
    esp += 8; return; /* ret 4 */

loc_000197FA:
    eax = MEM32(ecx + 0x1C);
    esp += 8; return; /* ret 4 */

loc_00019800:
    eax = MEM32(ecx + 0x2C);
    esp += 8; return; /* ret 4 */

loc_00019806:
    if (CMP_NE(MEM32(ecx + 0x984), 2)) goto loc_00019818; /* jne: not equal / not zero */

loc_0001980F:
    eax = MEM32(ecx + 0x81C);
    esp += 8; return; /* ret 4 */

loc_00019818:
    eax = MEM32(ecx + 0x35C);
    esp += 8; return; /* ret 4 */

loc_00019821:
    eax = MEM32(ecx + 0x3C);
    esp += 8; return; /* ret 4 */

loc_00019827:
    eax = MEM32(ecx + 0xC);
    esp += 8; return; /* ret 4 */

loc_0001982D:
    eax = MEM32(ecx + 0x4C);
    esp += 8; return; /* ret 4 */

loc_00019833:
    eax = MEM32(ecx + 0x94C);
    esp += 8; return; /* ret 4 */

loc_0001983C:
    eax = MEM32(ecx + 0x96C);
    esp += 8; return; /* ret 4 */

loc_00019845:
    eax = MEM32(ecx + 0x95C);
    esp += 8; return; /* ret 4 */

loc_0001984E:
    eax = MEM32(ecx + 0x97C);
    esp += 8; return; /* ret 4 */

loc_00019857:
    eax = MEM32(ecx + 0x90C);
    esp += 8; return; /* ret 4 */

loc_00019860:
    eax = MEM32(ecx + 0x7C);
    esp += 8; return; /* ret 4 */

loc_00019866:
    eax = MEM32(ecx + 0xFC);
    esp += 8; return; /* ret 4 */

loc_0001986F:
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}
