#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D120E
 * Original: 0x001D120E - 0x001D1308 (250 bytes, 104 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D120E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001D120E:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_001D1225; /* je: equal / zero */

loc_001D121E:
    edi = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    goto loc_001D122D;

loc_001D1225:
    eax = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = eax;
    edi = edx;

loc_001D122D:
    eax = MEM32(ebp + 0x14);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001D128F; /* je: equal / zero */

loc_001D1235:
    eax--;
    if ((eax == 0)) goto loc_001D1261; /* je: equal / zero */

loc_001D1238:
    eax--;
    if ((eax != 0)) goto loc_001D1261; /* jne: not equal / not zero */

loc_001D123B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B844), _icall_esp); /* indirect call */
    }

loc_001D1250:
    if (TEST_S(eax, eax)) goto loc_001D127A; /* jl: less (signed <) */

loc_001D1254:
    eax = MEM32(ebp + -32);
    eax = eax + esi;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -28);
    goto loc_001D128B;

loc_001D1261:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B844), _icall_esp); /* indirect call */
    }

loc_001D1276:
    if (CMP_GE(eax & eax, 0)) goto loc_001D1285; /* jge: greater or equal (signed >=) */

loc_001D127A:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D1280:
    eax = eax | 0xFFFFFFFFu;
    goto loc_001D1301;

loc_001D1285:
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    eax = MEM32(ebp + -4);

loc_001D128B:
    eax = eax + edi + _cf; /* adc */
    goto loc_001D1294;

loc_001D128F:
    MEM32(ebp + -8) = esi;
    eax = edi;

loc_001D1294:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_001D12AA; /* jg: greater (signed >) */

loc_001D129B:
    if (TEST_S(eax, eax)) goto loc_001D12A3; /* jl: less (signed <) */

loc_001D129D:
    if (CMP_AE(MEM32(ebp + -8), 0)) goto loc_001D12AA; /* jae: above or equal (unsigned >=) */

loc_001D12A3:
    PUSH32(esp, 0x83);
    goto loc_001D12B7;

loc_001D12AA:
    if (TEST_NZ(ebx, ebx)) goto loc_001D12BE; /* jne: not equal / not zero */

loc_001D12AE:
    if (TEST_Z(eax, 0x7FFFFFFF)) goto loc_001D12BE; /* je: equal / zero */

loc_001D12B5:
    PUSH32(esp, 0x57);

loc_001D12B7:
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D12BC:
    goto loc_001D1280;

loc_001D12BE:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B840), _icall_esp); /* indirect call */
    }

loc_001D12D3:
    if (TEST_S(eax, eax)) goto loc_001D12F2; /* jl: less (signed <) */

loc_001D12D7:
    if (TEST_Z(ebx, ebx)) goto loc_001D12E0; /* je: equal / zero */

loc_001D12DB:
    eax = MEM32(ebp + -4);
    MEM32(ebx) = eax;

loc_001D12E0:
    if (CMP_NE(MEM32(ebp + -8), 0xFFFFFFFFu)) goto loc_001D12ED; /* jne: not equal / not zero */

loc_001D12E6:
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D12ED:
    eax = MEM32(ebp + -8);
    goto loc_001D1301;

loc_001D12F2:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D12F8:
    eax = eax | 0xFFFFFFFFu;
    if (TEST_Z(ebx, ebx)) goto loc_001D1301; /* je: equal / zero */

loc_001D12FF:
    MEM32(ebx) = eax;

loc_001D1301:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}
