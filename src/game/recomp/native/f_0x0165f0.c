#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern void b3_dxvk_publish_frame(void) __attribute__((weak));
/**
 * sub_000165F0
 * Original: 0x000165F0 - 0x00016CC8 (1752 bytes, 391 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000165F0(void)
{
    uint32_t ebp;
    uint32_t entry_esp = esp;
    uint32_t caller_ebx = ebx;
    uint32_t caller_esi = esi;
    uint32_t caller_edi = edi;
    uint32_t caller_seh_ebp = g_seh_ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000165F0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x2AE38);
    ecx = MEM32(ebp + 0x2AE3C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(ebp + 0x2AE38) = eax;
    eax = eax + ecx;
    PUSH32(esp, esi);
    MEM32(ebp + 0x2AE3C) = eax;
    PUSH32(esp, edi);
    eax = 0x4A4B90;
    PUSH32(esp, 0); sub_00013F10(); /* call 0x00013F10 */

loc_00016628:
    SET_LO8(eax, MEM8(ebp + 0x2E21D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001663B; /* je: equal / zero */

loc_00016632:
    MEM8(ebp + 0x2E21C) = 0;
    goto loc_0001664C;

loc_0001663B:
    SET_LO8(eax, MEM8(ebp + 0x2E21E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001664C; /* je: equal / zero */

loc_00016645:
    MEM8(ebp + 0x2E21C) = 1;

loc_0001664C:
    MEM8(ebp + 0x2E21D) = 0;
    MEM8(ebp + 0x2E21E) = 0;
    SET_LO8(eax, MEM8(0x4D53BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016680; /* je: equal / zero */

loc_00016663:
    SET_LO8(eax, MEM8(0x4A4B90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016680; /* je: equal / zero */

loc_0001666C:
    eax = MEM32(ebp + 0x2E214);
    if (CMP_EQ(MEM32(ebp + 0x2E218), eax)) goto loc_00016680; /* je: equal / zero */

loc_0001667A:
    MEM32(ebp + 0x2E218) = eax;

loc_00016680:
    edi = ebp + 0x7C3C;
    PUSH32(esp, 0); sub_000110E0(); /* call 0x000110E0 */

loc_0001668B:
    ecx = 0x3F9CC0;
    PUSH32(esp, 0); sub_00023800(); /* call 0x00023800 */

loc_00016695:
    eax = MEM32(0x4D6B2C);
    xmm0.f[0] = MEMF(ebp + 0x705C); /* movss */
    MEM32(0x4A1EB8) = eax;
    eax = MEM32(0x3C838C);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x2E218);
    eax--;
    edi = 0xB;
    if (CMP_A(eax, edi)) goto loc_00016C42; /* ja: above (unsigned >) */

loc_000166CA:
    { uint32_t _jt = MEM32(eax * 4 + 0x16CC8); /* switch: 12 entries, 10 targets */
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_frame_switch;
        if (traced_frame_switch < 12) {
            fprintf(stderr,
                    "[B3-FE] frame=%u base=%08X current=%u pending=%u index=%u jt=%08X esp=%08X\n",
                    traced_frame_switch, ebp, MEM32(ebp + 0x2E218),
                    MEM32(ebp + 0x2E214), eax, _jt, esp);
            traced_frame_switch++;
        }
    }
    if (_jt == 0x000166D1u) goto loc_000166D1;
    if (_jt == 0x0001673Eu) goto loc_0001673E;
    if (_jt == 0x00016807u) goto loc_00016807;
    if (_jt == 0x0001685Bu) goto loc_0001685B;
    if (_jt == 0x00016880u) goto loc_00016880;
    if (_jt == 0x00016912u) goto loc_00016912;
    if (_jt == 0x00016937u) goto loc_00016937;
    if (_jt == 0x00016953u) goto loc_00016953;
    if (_jt == 0x00016A72u) goto loc_00016A72;
    if (_jt == 0x00016C42u) goto loc_00016C42;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000166D1:
    ecx = MEM32(0x4A1EB4);
    eax = MEM32(0x4A1D84);
    ecx++;
    MEM32(0x4A1EB4) = ecx;
    eax++;
    ecx = ebp + 0x7040;
    MEM32(0x4A1D84) = eax;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_000166F4:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_000166FE:
    MEM8(0x55927D) = 1;
    ecx = MEM32(ebp + 0x2E1D4);
    MEM32(ebp + 0x2E1D0) = ecx;
    ecx = 0x567170;
    MEM32(ebp + 0x2E1D4) = 0;
    PUSH32(esp, 0); sub_00015570(); /* call 0x00015570 */

loc_00016725:
    esi = 0x557880;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0001672F:
    MEM32(ebp + 0x2E214) = 7;
    goto loc_00016C42;

loc_0001673E:
    edx = MEM32(0x4A1EB4);
    ecx = MEM32(0x4A1D84);
    edx++;
    ecx++;
    MEM32(0x4A1D84) = ecx;
    ecx = ebp + 0x7040;
    MEM32(0x4A1EB4) = edx;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016763:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_0001676D:
    ebx = ebx | 0xFFFFFFFFu;
    MEM8(0x55927D) = 1;
    MEM32(ebp + 0x2E1DC) = ebx;
    MEM32(ebp + 0x2E1E0) = ebx;
    MEM32(ebp + 0x2E1E4) = ebx;
    SET_LO8(eax, MEM8(0x5A3749));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000167A4; /* jne: not equal / not zero */

loc_00016792:
    edi = ebp + 0x706C;
    eax = edi;
    PUSH32(esp, 0); sub_00018250(); /* call 0x00018250 */

loc_0001679F:
    PUSH32(esp, 0); sub_00021A50(); /* call 0x00021A50 */

loc_000167A4:
    eax = 0x60EA00;
    PUSH32(esp, 0); sub_001AA990(); /* call 0x001AA990 */

loc_000167AE:
    ecx = MEM32(ebp + 0x2E1D0);
    MEM8(ebp + 0x2E1EC) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_000167C0:
    eax = MEM32(ebp + 0x2E1D4);
    ecx = 0x567170;
    MEM32(ebp + 0x2E1D0) = eax;
    MEM32(ebp + 0x2E1D4) = 0;
    MEM8(ebp + 0x2E1EE) = 0;
    MEM8(ebp + 0x2E1ED) = 0;
    PUSH32(esp, 0); sub_00015570(); /* call 0x00015570 */

loc_000167EE:
    esi = 0x557880;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000167F8:
    MEM32(ebp + 0x2E214) = 7;
    goto loc_00016C42;

loc_00016807:
    ebx = ebx | 0xFFFFFFFFu;
    eax = ebp + 0x706C;
    MEM32(ebp + 0x2E1DC) = ebx;
    MEM32(ebp + 0x2E1E0) = ebx;
    MEM32(ebp + 0x2E1E4) = ebx;
    PUSH32(esp, 0); sub_00018250(); /* call 0x00018250 */

loc_00016827:
    esi = 0x40B310;
    PUSH32(esp, 0); sub_001356A0(); /* call 0x001356A0 */

loc_00016831:
    eax = 0x60EA00;
    PUSH32(esp, 0); sub_001AA990(); /* call 0x001AA990 */

loc_0001683B:
    ecx = MEM32(ebp + 0x2E1D0);
    MEM8(ebp + 0x2E1EC) = 0;
    MEM8(ecx + 0x1C0) = 1;
    MEM32(ebp + 0x2E214) = edi;
    MEM32(ebp + 0x2E218) = edi;

loc_0001685B:
    eax = ebp;
    PUSH32(esp, 0); sub_00017250(); /* call 0x00017250 */

loc_00016862:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016C42; /* je: equal / zero */

loc_0001686A:
    eax = 0xC;
    MEM32(ebp + 0x2E214) = eax;
    MEM32(ebp + 0x2E218) = eax;
    goto loc_00016C42;

loc_00016880:
    ecx = MEM32(0x4A1EB4);
    eax = MEM32(0x4A1D84);
    ecx++;
    MEM32(0x4A1EB4) = ecx;
    eax++;
    ecx = ebp + 0x7040;
    MEM32(0x4A1D84) = eax;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_000168A3:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_000168AD:
    MEM8(0x55927D) = 1;
    ebx = ebx | 0xFFFFFFFFu;
    eax = ebp + 0x706C;
    MEM32(ebp + 0x2E1DC) = ebx;
    MEM32(ebp + 0x2E1E0) = ebx;
    MEM32(ebp + 0x2E1E4) = ebx;
    PUSH32(esp, 0); sub_00018250(); /* call 0x00018250 */

loc_000168D4:
    esi = 0x40B310;
    PUSH32(esp, 0); sub_001356A0(); /* call 0x001356A0 */

loc_000168DE:
    eax = 0x60EA00;
    PUSH32(esp, 0); sub_001AA990(); /* call 0x001AA990 */

loc_000168E8:
    edx = MEM32(ebp + 0x2E1D0);
    eax = 9;
    MEM8(ebp + 0x2E1EC) = 0;
    MEM8(edx + 0x1C0) = 1;
    MEM32(ebp + 0x2E214) = eax;
    MEM32(ebp + 0x2E218) = eax;
    goto loc_00016C42;

loc_00016912:
    eax = ebp;
    PUSH32(esp, 0); sub_00017250(); /* call 0x00017250 */

loc_00016919:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016C42; /* je: equal / zero */

loc_00016921:
    eax = 4;
    MEM32(ebp + 0x2E214) = eax;
    MEM32(ebp + 0x2E218) = eax;
    goto loc_00016C42;

loc_00016937:
    ecx = MEM32(ebp + 0x2E1D0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_00016942:
    eax = 4;
    MEM32(ebp + 0x2E214) = eax;
    MEM32(ebp + 0x2E218) = eax;

loc_00016953:
    PUSH32(esp, 0x60EA00);
    PUSH32(esp, 0); sub_001AA100(); /* call 0x001AA100 */

loc_0001695D:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0x2E1EC) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016A08; /* jne: not equal / not zero */

loc_0001696B:
    edx = MEM32(0x4A1EB4);
    ecx = MEM32(0x4A1D84);
    edx++;
    ecx++;
    MEM32(0x4A1D84) = ecx;
    ecx = ebp + 0x7040;
    MEM32(0x4A1EB4) = edx;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016990:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_0001699A:
    ecx = 0x567170;
    MEM8(0x55927D) = 1;
    PUSH32(esp, 0); sub_00015570(); /* call 0x00015570 */

loc_000169AB:
    esi = 0x557880;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000169B5:
    SET_LO8(eax, MEM8(0x5A3749));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000169D0; /* jne: not equal / not zero */

loc_000169BE:
    edi = ebp + 0x706C;
    eax = edi;
    PUSH32(esp, 0); sub_00018250(); /* call 0x00018250 */

loc_000169CB:
    PUSH32(esp, 0); sub_00021A50(); /* call 0x00021A50 */

loc_000169D0:
    esi = 0x40B310;
    PUSH32(esp, 0); sub_001354A0(); /* call 0x001354A0 */

loc_000169DA:
    esi = 0x572980;
    PUSH32(esp, 0); sub_000FC710(); /* call 0x000FC710 */

loc_000169E4:
    ecx = MEM32(ebp + 0x2E1D0);
    ecx = MEM32(ecx + 0x1B8);
    if (TEST_Z(ecx, ecx)) goto loc_000169F9; /* je: equal / zero */

loc_000169F4:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x70), _icall_esp); /* indirect call */
    }

loc_000169F9:
    esi = 0x572980;
    PUSH32(esp, 0); sub_000FC990(); /* call 0x000FC990 */

loc_00016A03:
    goto loc_00016C42;

loc_00016A08:
    eax = MEM32(ebp + 0x2E1D0);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00016A25; /* je: equal / zero */

loc_00016A14:
    eax = MEM32(eax + 0x1B8);
    if (CMP_EQ(eax, edi)) goto loc_00016A25; /* je: equal / zero */

loc_00016A1E:
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x6C), _icall_esp); /* indirect call */
    }

loc_00016A25:
    eax = 5;
    MEM32(ebp + 0x2E198) = edi;
    MEM32(ebp + 0x2E1A8) = edi;
    MEM32(ebp + 0x2E1AC) = edi;
    MEM32(ebp + 0x2E1A0) = edi;
    MEM32(ebp + 0x2E1A4) = edi;
    MEM32(ebp + 0x2E1C4) = edi;
    MEM32(ebp + 0x2E1C0) = edi;
    MEM32(ebp + 0x2E1C8) = edi;
    esi = 0x567170;
    MEM32(ebp + 0x2E214) = eax;
    MEM32(ebp + 0x2E218) = eax;
    PUSH32(esp, 0); sub_00064490(); /* call 0x00064490 */

loc_00016A70:
    goto loc_00016A74;

loc_00016A72:
    edi = 0; /* xor self */

loc_00016A74:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_frame_body;
        if (traced_frame_body++ < 6)
            fprintf(stderr,
                    "[B3-FE] frame body audio=%08X/%08X/%08X ticks=%u esp=%08X\n",
                    MEM32(ebp + 0x2E1DC), MEM32(ebp + 0x2E1E0),
                    MEM32(ebp + 0x2E1E4), MEM32(ebp + 0x2E20C), esp);
    }
    esi = ebp;
    PUSH32(esp, 0); sub_00016EF0(); /* call 0x00016EF0 */

loc_00016A7B:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_after_audio;
        if (traced_after_audio++ < 6)
            fprintf(stderr, "[B3-FE] frame after 16EF0 esp=%08X\n", esp);
    }
    edx = MEM32(ebp + 0x2E1F4);
    if (CMP_NE(edx, 3)) goto loc_00016A8C; /* jne: not equal / not zero */

loc_00016A86:
    edx = MEM32(ebp + 0x2E1F0);

loc_00016A8C:
    eax = MEM32(ebp + 0x2E1DC);
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_NE(eax, ebx)) goto loc_00016AAF; /* jne: not equal / not zero */

loc_00016A99:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_000172D0(); /* call 0x000172D0 */

loc_00016AA3:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] frame after 172D0 result=%02X esp=%08X\n",
                LO8(eax), esp);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016AAF; /* jne: not equal / not zero */

loc_00016AA7:
    MEM8(ebp + 0x2E1CC) = LO8(eax);
    goto loc_00016AB6;

loc_00016AAF:
    MEM8(ebp + 0x2E1CC) = 1;

loc_00016AB6:
    MEM32(ebp + 0x2E198) = edx;
    /* cmp MEM32(ebp + 0x2E20C), edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(MEM32(ebp + 0x2E20C), edi)) goto loc_00016C10; /* jle: less or equal (signed <=) */

loc_00016ACC:
    /* nop */

loc_00016AD0:
    if (CMP_NE(MEM32(ebp + 0x2E1E0), ebx)) goto loc_00016C06; /* jne: not equal / not zero */

loc_00016ADC:
    edx = MEM32(0x4A1EB4);
    ecx = MEM32(0x4A1D84);
    edx++;
    ecx++;
    MEM32(0x4A1D84) = ecx;
    ecx = ebp + 0x7040;
    MEM32(0x4A1EB4) = edx;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016B01:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] frame after game timer esp=%08X\n", esp);
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016B0B:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] frame after global timer esp=%08X\n", esp);
    SET_LO8(eax, MEM8(0x5A3749));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016B21; /* jne: not equal / not zero */

loc_00016B14:
    edi = ebp + 0x706C;
    PUSH32(esp, 0); sub_00021A50(); /* call 0x00021A50 */

loc_00016B1F:
    edi = 0; /* xor self */

loc_00016B21:
    eax = MEM32(ebp + 0x28930);
    PUSH32(esp, 0); sub_00020CE0(); /* call 0x00020CE0 */

loc_00016B2C:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016B40; /* je: equal / zero */

loc_00016B30:
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(ebp + 0x2894C) = xmm0.f[0]; /* movss */

loc_00016B40:
    eax = MEM32(ebp + 0x28954);
    PUSH32(esp, 0); sub_00020CE0(); /* call 0x00020CE0 */

loc_00016B4B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016B5F; /* je: equal / zero */

loc_00016B4F:
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(ebp + 0x28970) = xmm0.f[0]; /* movss */

loc_00016B5F:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] frame after camera timers esp=%08X\n", esp);
    PUSH32(esp, 0); sub_00116110(); /* call 0x00116110 */

loc_00016B64:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] frame after 116110 esp=%08X\n", esp);
    SET_LO8(eax, MEM8(0x4A7184));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016B74; /* jne: not equal / not zero */

loc_00016B6D:
    MEM8(0x649B9B) = 0;

loc_00016B74:
    xmm0.f[0] = MEMF(0x3EAD58); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3B16E0))) goto loc_00016BA1; /* jb: below (unsigned <) */

loc_00016B85:
    xmm1.f[0] = MEMF(0x4AE1FC); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A35C4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x3EAD58) = xmm0.f[0]; /* movss */

loc_00016BA1:
    if (CMP_NE(MEM32(ebp + 0x2E1DC), ebx)) goto loc_00016BB8; /* jne: not equal / not zero */

loc_00016BA9:
    SET_LO8(eax, MEM8(0x4A4B90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016BDA; /* je: equal / zero */

loc_00016BB2:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00017060(); /* call 0x00017060 */

loc_00016BB8:
    SET_LO8(eax, MEM8(0x4A4B90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016BDA; /* je: equal / zero */

loc_00016BC1:
    ecx = MEM32(0x567174);
    if (CMP_EQ(ecx, edi)) goto loc_00016BDA; /* je: equal / zero */

loc_00016BCB:
    edx = MEM32(0x567178);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00016BDA:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] frame before 636D0 esp=%08X\n", esp);
    esi = 0x557880;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00016BE4:
    if (CMP_NE(MEM32(ebp + 0x2E214), 5)) goto loc_00016C10; /* jne: not equal / not zero */

loc_00016BED:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x2E20C);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_00016AD0; /* jl: less (signed <) */

loc_00016C04:
    goto loc_00016C10;

loc_00016C06:
    eax = MEM32(esp + 0x14);
    MEM32(ebp + 0x2E1C0) = eax;

loc_00016C10:
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr, "[B3-FE] frame before 170B0 audio/render prep esp=%08X\n", esp);
    edi = ebp;
    PUSH32(esp, 0); sub_000170B0(); /* call 0x000170B0 */

loc_00016C17:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_before_render;
        if (traced_before_render++ < 6)
            fprintf(stderr, "[B3-FE] frame before tick/render esp=%08X\n", esp);
    }
    SET_LO8(eax, MEM8(ebp + 0x2E1EE));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ebp + 0x2E198;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016C2D; /* je: equal / zero */

loc_00016C27:
    PUSH32(esp, 8);
    PUSH32(esp, 2);
    goto loc_00016C31;

loc_00016C2D:
    PUSH32(esp, 4);
    PUSH32(esp, 1);

loc_00016C31:
    PUSH32(esp, 0); sub_001B58E0(); /* call 0x001B58E0 */

loc_00016C36:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_tick_result;
        if (traced_tick_result++ < 6)
            fprintf(stderr, "[B3-FE] tick result=%08X esp=%08X\n", eax, esp);
    }
    PUSH32(esp, ebp);
    MEM32(ebp + 0x2E20C) = eax;
    PUSH32(esp, 0); sub_000171A0(); /* call 0x000171A0 */

loc_00016C42:
    edi = 0; /* xor self */
    esi = 0x4D6170;
    PUSH32(esp, 0); sub_0003D9E0(); /* call 0x0003D9E0 */

loc_00016C4E:
    if (CMP_NE(MEM32(0x557A70), edi)) goto loc_00016C5F; /* jne: not equal / not zero */

loc_00016C56:
    SET_LO8(eax, MEM8(0x555D5A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016C72; /* je: equal / zero */

loc_00016C5F:
    ecx = MEM32(0x557A50);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C67D0(); /* call 0x001C67D0 */

loc_00016C72:
    esi = 0x45BAD0;
    PUSH32(esp, 0); sub_0002EB50(); /* call 0x0002EB50 */

loc_00016C7C:
    edx = MEM32(0x4D6520);
    eax = MEM32(edx + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D9280(); /* call 0x001D9280 */

loc_00016C8B:
    ecx = MEM32(0x4D64D8);
    esp = esp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(0x4D6520) = edi;
    MEM32(0x4D6524) = edi;
    MEM8(0x4D6B30) = 0;
    PUSH32(esp, 0); sub_001D9420(); /* call 0x001D9420 */

loc_00016CB0:
    esp = esp + 0xC;
    MEM8(ebp + 0x295C6) = 0;
    MEM8(ebp + 0x2A216) = 0;
    if (getenv("B3_PUBLISH_FRAMES") && b3_dxvk_publish_frame) {
        b3_dxvk_publish_frame();
        /* Xbox's vertical blank paced this callback. The native kernel does
         * not emulate a display interrupt, so pace the visible retail runner
         * here instead of letting it clear/draw millions of frames a second. */
        usleep(16667);
    }
    /* This is a long-lived frame boundary called forever by WinMain. Native
     * callbacks below it use mixed cdecl/stdcall cleanup and can perturb the
     * shared emulated ESP. Recreate the original `ret 4` ABI from the entry
     * value so one bad nested cleanup cannot walk the Xbox stack each frame. */
    ebx = caller_ebx;
    esi = caller_esi;
    edi = caller_edi;
    g_seh_ebp = caller_seh_ebp;
    esp = entry_esp + 8u;
    return; /* ret 4 */

}
