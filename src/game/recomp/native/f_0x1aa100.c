#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001AA100
 * Original: 0x001AA100 - 0x001AA6A8 (1448 bytes, 346 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_scene_update;
        if (traced_scene_update++ < 32)
            fprintf(stderr,
                    "[B3-FE] 1AA100 phase=%u guard=%u scene={state:%u enabled:%u/%u} "
                    "lists=%u screen=%08X:%08X esp=%08X\n",
                    MEM32(MEM32(esp + 4) + 0x144384), MEM8(0x55927C),
                    MEM32(MEM32(esp + 4) + 0x1265C0 + 0x584),
                    MEM8(MEM32(esp + 4) + 0x1265C0 + 0x589),
                    MEM8(MEM32(esp + 4) + 0x1265C0 + 0x58A),
                    MEM32(MEM32(esp + 4) + 0x12B79C),
                    MEM32(MEM32(esp + 4) + 0x12B790),
                    MEM32(MEM32(esp + 4) + 0x12B794), esp);
    }

loc_001AA100:
    SET_LO8(eax, MEM8(0x55927C));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* jne: not equal / not zero */

loc_001AA115:
    eax = MEM32(ebp + 0x144384);
    eax--;
    if (CMP_A(eax, 0x17)) goto loc_001AA42E; /* ja: above (unsigned >) */

loc_001AA125:
    esi = 2;
    { uint32_t _jt = MEM32(eax * 4 + 0x1AA6A8); /* switch: 28 entries, 23 targets */
    if (_jt == 0x001AA131u) goto loc_001AA131;
    if (_jt == 0x001AA16Bu) goto loc_001AA16B;
    if (_jt == 0x001AA175u) goto loc_001AA175;
    if (_jt == 0x001AA192u) goto loc_001AA192;
    if (_jt == 0x001AA1AEu) goto loc_001AA1AE;
    if (_jt == 0x001AA224u) goto loc_001AA224;
    if (_jt == 0x001AA2A0u) goto loc_001AA2A0;
    if (_jt == 0x001AA2BCu) goto loc_001AA2BC;
    if (_jt == 0x001AA303u) goto loc_001AA303;
    if (_jt == 0x001AA321u) goto loc_001AA321;
    if (_jt == 0x001AA32Bu) goto loc_001AA32B;
    if (_jt == 0x001AA335u) goto loc_001AA335;
    if (_jt == 0x001AA34Fu) goto loc_001AA34F;
    if (_jt == 0x001AA368u) goto loc_001AA368;
    if (_jt == 0x001AA37Bu) goto loc_001AA37B;
    if (_jt == 0x001AA3A7u) goto loc_001AA3A7;
    if (_jt == 0x001AA3E8u) goto loc_001AA3E8;
    if (_jt == 0x001AA415u) goto loc_001AA415;
    if (_jt == 0x001AA42Eu) goto loc_001AA42E;
    if (_jt == 0x001AA4B9u) goto loc_001AA4B9;
    if (_jt == 0x001AA4E2u) goto loc_001AA4E2;
    if (_jt == 0x001AA504u) goto loc_001AA504;
    if (_jt == 0x001AA513u) goto loc_001AA513;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AA131:
    eax = MEM32(0x4CFB20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    ecx = 0x4CFB20;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001AA142:
    edx = MEM32(0x4D0770);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    ecx = 0x4D0770;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001AA154:
    ecx = ebp;
    PUSH32(esp, 0); sub_001B5A80(); /* call 0x001B5A80 */

loc_001AA15B:
    MEM32(ebp + 0x12B7A0) = 0;
    MEM32(ebp + 0x144384) = esi;

loc_001AA16B:
    MEM32(ebp + 0x144384) = 3;

loc_001AA175:
    edi = ebp + 0x1265C0;
    PUSH32(esp, 0); sub_0018B250(); /* call 0x0018B250 */

loc_001AA180:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA188:
    MEM32(ebp + 0x144384) = 4;

loc_001AA192:
    PUSH32(esp, 0x40E120);
    PUSH32(esp, 0); sub_0013EA20(); /* call 0x0013EA20 */

loc_001AA19C:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA1A4:
    MEM32(ebp + 0x144384) = 5;

loc_001AA1AE:
    eax = MEM32(0x5729A8);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AA1DC; /* jle: less or equal (signed <=) */

loc_001AA1B9:
    /* nop */

loc_001AA1C0:
    eax = MEM32(ecx * 4 + 0x572988);
    if (TEST_Z(eax, eax)) goto loc_001AA1D2; /* je: equal / zero */

loc_001AA1CB:
    MEM8(eax + 0x5D5) = 1;

loc_001AA1D2:
    eax = MEM32(0x5729A8);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_001AA1C0; /* jl: less (signed <) */

loc_001AA1DC:
    esi = MEM32(ebp + 0x12B7A0);
    if (CMP_GE(esi, MEM32(ebp + 0x12B79C))) goto loc_001AA21A; /* jge: greater or equal (signed >=) */

loc_001AA1EA:
    /* nop */

loc_001AA1F0:
    eax = MEM32(ebp + 0x12B7A0);
    ecx = MEM32(ebp + eax * 4 + 0x12B7A8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001AA201:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA209:
    MEM32(ebp + 0x12B7A0) = MEM32(ebp + 0x12B7A0) + 1;
    eax = MEM32(ebp + 0x12B79C);
    esi++;
    if (CMP_L(esi, eax)) goto loc_001AA1F0; /* jl: less (signed <) */

loc_001AA21A:
    MEM32(ebp + 0x144384) = 6;

loc_001AA224:
    eax = MEM32(ebp + 0x12B790);
    eax = eax | MEM32(ebp + 0x12B794);
    if ((eax != 0)) goto loc_001AA273; /* jne: not equal / not zero */

loc_001AA232:
    if (CMP_EQ(MEM32(0x4D5370), 0x4D4290)) goto loc_001AA42E; /* je: equal / zero */

loc_001AA242:
    eax = ebp + 0x130790;
    ecx = ebp + 0x132C00;
    MEM32(ebp + 0x12B7AC) = ecx;
    MEM32(ebp + 0x12B7A8) = eax;
    MEM8(eax + 0x19BC) = 0;
    edx = MEM32(ebp + 0x12B7AC);
    MEM8(edx + 0x19BC) = 1;
    goto loc_001AA42E;

loc_001AA273:
    esi = ebp + 0x126B50;
    PUSH32(esp, 0); sub_0018E820(); /* call 0x0018E820 */

loc_001AA27E:
    SET_LO8(eax, MEM8(ebp + 0x144380));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA296; /* je: equal / zero */

loc_001AA288:
    SET_LO8(eax, 1);
    MEM8(ebp + 0x12DFA9) = LO8(eax);
    MEM8(ebp + 0x130789) = LO8(eax);

loc_001AA296:
    MEM32(ebp + 0x144384) = 7;

loc_001AA2A0:
    ebx = 0x60E040;
    PUSH32(esp, 0); sub_001888F0(); /* call 0x001888F0 */

loc_001AA2AA:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA2B2:
    MEM32(ebp + 0x144384) = 8;

loc_001AA2BC:
    eax = MEM32(ebp + 0x12B760);
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AA2F9; /* jle: less or equal (signed <=) */

loc_001AA2CA:
    eax = ebp + 0x274;
    SET_LO8(ebx, 0xFF);

loc_001AA2D2:
    esi = MEM32(eax + -72);
    MEM16(eax + -68) = LO16(ecx);
    MEM8(eax + -1) = LO8(edx);
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    MEM8(eax + -2) = LO8(ebx);
    edi = MEM32(esi + 0x10);
    esi = MEM32(ebp + 0x12B760);
    ecx = ecx + edi;
    edx++;
    eax = eax + 0x4C;
    if (CMP_L(edx, esi)) goto loc_001AA2D2; /* jl: less (signed <) */

loc_001AA2F9:
    MEM32(ebp + 0x144384) = 9;

loc_001AA303:
    eax = ebp + 0x12ADB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019AE10(); /* call 0x0019AE10 */

loc_001AA30F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA317:
    MEM32(ebp + 0x144384) = 0xA;

loc_001AA321:
    MEM32(ebp + 0x144384) = 0xB;

loc_001AA32B:
    MEM32(ebp + 0x144384) = 0xC;

loc_001AA335:
    ecx = ebp + 0x3C2E8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0010C5F0(); /* call 0x0010C5F0 */

loc_001AA341:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA345:
    MEM32(ebp + 0x144384) = 0xD;

loc_001AA34F:
    eax = ebp + 0x4DE0;
    PUSH32(esp, 0); sub_001A13F0(); /* call 0x001A13F0 */

loc_001AA35A:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA35E:
    MEM32(ebp + 0x144384) = 0xE;

loc_001AA368:
    PUSH32(esp, 0); sub_00167220(); /* call 0x00167220 */

loc_001AA36D:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA371:
    MEM32(ebp + 0x144384) = 0xF;

loc_001AA37B:
    edx = MEM32(ebp + 0x12B794);
    eax = MEM32(ebp + 0x12B790);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ebx = ebp + 0x12B160;
    PUSH32(esp, 0); sub_0019D870(); /* call 0x0019D870 */

loc_001AA394:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA398:
    MEM32(ebp + 0x144384) = 0x10;
    esi = 2;

loc_001AA3A7:
    /* cmp MEM32(0x73A1C0), esi - flags set for next jcc */
    PUSH32(esp, 0);
    if (CMP_NE(MEM32(0x73A1C0), esi)) goto loc_001AA3CC; /* jne: not equal / not zero */

loc_001AA3B1:
    PUSH32(esp, 1);
    ecx = ebp + 0x12ADC8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019C740(); /* call 0x0019C740 */

loc_001AA3BF:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA3DE; /* jne: not equal / not zero */

loc_001AA3C3:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001AA3CC:
    PUSH32(esp, 0);
    edx = ebp + 0x12ADC8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019C740(); /* call 0x0019C740 */

loc_001AA3DA:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA3DE:
    MEM32(ebp + 0x144384) = 0x11;

loc_001AA3E8:
    if (CMP_NE(MEM32(0x73A1C0), esi)) goto loc_001AA404; /* jne: not equal / not zero */

loc_001AA3F0:
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = ebp + 0x12AF94;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019C740(); /* call 0x0019C740 */

loc_001AA400:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA404:
    MEM8(ebp + 0x12B164) = 0;
    MEM32(ebp + 0x144384) = 0x12;

loc_001AA415:
    eax = ebp + 0x128C74;
    PUSH32(esp, 0); sub_0018CBC0(); /* call 0x0018CBC0 */

loc_001AA420:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA3C3; /* je: equal / zero */

loc_001AA424:
    MEM32(ebp + 0x144384) = 0x13;

loc_001AA42E:
    SET_LO8(ecx, MEM8(ebp + 0x144332));
    edi = 0; /* xor self */
    MEM32(ebp + 0x3C904) = edi;
    eax = MEM32(ebp + 0x3C8EC);
    /* cmp eax, MEM32(ebp + 0x3C8F4) - flags set for next jcc */
    MEM32(ebp + 0x3C8F0) = eax;
    if (CMP_BE(eax, MEM32(ebp + 0x3C8F4))) goto loc_001AA456; /* jbe: below or equal (unsigned <=) */

loc_001AA450:
    MEM32(ebp + 0x3C8F4) = eax;

loc_001AA456:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001AA46C; /* jne: not equal / not zero */

loc_001AA45A:
    edx = MEM32(ebp + 0x3C8EC);
    MEM32(ebp + 0x3C8F4) = edx;
    MEM32(ebp + 0x3C908) = edi;

loc_001AA46C:
    MEM8(ebp + 0x3C90C) = LO8(ecx);
    eax = MEM32(ebp + 0x12B260);
    ecx = ebp + 0x12B260;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001AA481:
    /* cmp MEM32(ebp + 0x12B79C), edi - flags set for next jcc */
    SET_LO8(ecx, MEM8(ebp + 0x144332));
    MEM8(ebp + 0x144333) = LO8(ecx);
    MEM32(ebp + 0x12B78C) = edi;
    if (CMP_LE(MEM32(ebp + 0x12B79C), edi)) goto loc_001AA53A; /* jle: less or equal (signed <=) */

loc_001AA49F:
    ebx = ebp + 0x12B7A8;

loc_001AA4A5:
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x1920);
    if (CMP_A(eax, 3)) goto loc_001AA528; /* ja: above (unsigned >) */

loc_001AA4B2:
    { uint32_t _jt = MEM32(eax * 4 + 0x1AA708); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001AA4B9u) goto loc_001AA4B9;
    if (_jt == 0x001AA4E2u) goto loc_001AA4E2;
    if (_jt == 0x001AA504u) goto loc_001AA504;
    if (_jt == 0x001AA513u) goto loc_001AA513;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AA4B9:
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AA4C9; /* je: equal / zero */

loc_001AA4C2:
    edx = 0x57C398;
    goto loc_001AA518;

loc_001AA4C9:
    eax = MEM32(esi + 0x27D0);
    ecx = eax + eax * 8;
    ecx = ecx * 4 + 0x4CFAD4;
    eax = esi;
    PUSH32(esp, 0); sub_001A98F0(); /* call 0x001A98F0 */

loc_001AA4E0:
    goto loc_001AA528;

loc_001AA4E2:
    eax = MEM32(ebp + 0x12B7C0);
    edx = edi;
    edx = edx - eax;
    eax = MEM32(0x4D532C);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + edx * 4 + 0xBF0);
    eax = esi;
    PUSH32(esp, 0); sub_001A98F0(); /* call 0x001A98F0 */

loc_001AA502:
    goto loc_001AA528;

loc_001AA504:
    ecx = MEM32(esi + 0x1A98);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001AA50F:
    edx = eax;
    goto loc_001AA518;

loc_001AA513:
    edx = 0x3B1268;

loc_001AA518:
    eax = esi + 0x1984;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_001B2C60(); /* call 0x001B2C60 */

loc_001AA525:
    esp = esp + 4;

loc_001AA528:
    eax = MEM32(ebp + 0x12B79C);
    edi++;
    ebx = ebx + 4;
    if (CMP_L(edi, eax)) goto loc_001AA4A5; /* jl: less (signed <) */

loc_001AA53A:
    eax = MEM32(ebp + 0x12B790);
    eax = eax | MEM32(ebp + 0x12B794);
    if ((eax == 0)) goto loc_001AA55D; /* je: equal / zero */

loc_001AA548:
    ebx = ebp + 0x3C910;
    PUSH32(esp, 0); sub_00110420(); /* call 0x00110420 */

loc_001AA553:
    ebx = 0x54F900;
    PUSH32(esp, 0); sub_00052AB0(); /* call 0x00052AB0 */

loc_001AA55D:
    eax = MEM32(0x5729A8);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AA58C; /* jle: less or equal (signed <=) */

loc_001AA568:
    goto loc_001AA570;

    /* nop */

loc_001AA570:
    eax = MEM32(ecx * 4 + 0x572988);
    if (TEST_Z(eax, eax)) goto loc_001AA582; /* je: equal / zero */

loc_001AA57B:
    MEM8(eax + 0x5D5) = 0;

loc_001AA582:
    eax = MEM32(0x5729A8);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_001AA570; /* jl: less (signed <) */

loc_001AA58C:
    ecx = MEM32(ebp + 0x12B790);
    ecx = ecx | MEM32(ebp + 0x12B794);
    if ((ecx == 0)) goto loc_001AA5C6; /* je: equal / zero */

loc_001AA59A:
    ecx = MEM32(ebp + 0x126B20);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_001AA5B2; /* je: equal / zero */

loc_001AA5A6:
    edx = MEM32(ebp + 0x126B2C);
    eax = MEM32(edx + 0x3EC);

loc_001AA5B2:
    PUSH32(esp, eax);
    eax = ebp + 0x126948;
    PUSH32(esp, eax);
    ecx = ebp + 0x4DE0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A28B0(); /* call 0x001A28B0 */

loc_001AA5C6:
    PUSH32(esp, 0x5A9A00);
    PUSH32(esp, 0); sub_0017EE00(); /* call 0x0017EE00 */

loc_001AA5D0:
    ecx = MEM32(ebp + 0x144334);
    eax = eax | 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    if (CMP_NE(ecx, eax)) goto loc_001AA5E5; /* jne: not equal / not zero */

loc_001AA5DF:
    MEM32(ebp + 0x144334) = ebx;

loc_001AA5E5:
    if (CMP_NE(MEM32(ebp + 0x144338), eax)) goto loc_001AA5F3; /* jne: not equal / not zero */

loc_001AA5ED:
    MEM32(ebp + 0x144338) = ebx;

loc_001AA5F3:
    if (CMP_NE(MEM32(ebp + 0x14433C), eax)) goto loc_001AA601; /* jne: not equal / not zero */

loc_001AA5FB:
    MEM32(ebp + 0x14433C) = ebx;

loc_001AA601:
    if (CMP_NE(MEM32(ebp + 0x144340), eax)) goto loc_001AA60F; /* jne: not equal / not zero */

loc_001AA609:
    MEM32(ebp + 0x144340) = ebx;

loc_001AA60F:
    if (CMP_NE(MEM32(ebp + 0x144344), eax)) goto loc_001AA61D; /* jne: not equal / not zero */

loc_001AA617:
    MEM32(ebp + 0x144344) = ebx;

loc_001AA61D:
    edx = MEM32(ebp + 0x12B790);
    edx = edx | MEM32(ebp + 0x12B794);
    if ((edx == 0)) goto loc_001AA656; /* je: equal / zero */

loc_001AA62B:
    eax = MEM32(ebp + 0x12B7C0);
    edi = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_001AA656; /* jle: less or equal (signed <=) */

loc_001AA637:
    esi = 0x4CFB20;
    /* nop */

loc_001AA640:
    PUSH32(esp, 0); sub_001674B0(); /* call 0x001674B0 */

loc_001AA645:
    eax = MEM32(ebp + 0x12B7C0);
    edi++;
    esi = esi + 0xC50;
    if (CMP_L(edi, eax)) goto loc_001AA640; /* jl: less (signed <) */

loc_001AA656:
    ecx = MEM32(ebp + 0x12B79C);
    eax = 0; /* xor self */
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 0x12B7A4) = ebx;
    if (CMP_LE(ecx, ebx)) goto loc_001AA68E; /* jle: less or equal (signed <=) */

loc_001AA668:
    ecx = ebp + 0x12B7A8;
    edi = edi;

loc_001AA670:
    edx = MEM32(ecx);
    if (CMP_EQ(MEM32(edx + 0x16C8), ebx)) goto loc_001AA680; /* je: equal / zero */

loc_001AA67A:
    MEM32(ebp + 0x12B7A4) = MEM32(ebp + 0x12B7A4) + 1;

loc_001AA680:
    edx = MEM32(ebp + 0x12B79C);
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_001AA670; /* jl: less (signed <) */

loc_001AA68E:
    eax = ebp;
    PUSH32(esp, 0); sub_001AB1A0(); /* call 0x001AB1A0 */

loc_001AA695:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x144384) = 0x17;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
