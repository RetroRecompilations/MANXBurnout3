#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000201A0
 * Original: 0x000201A0 - 0x00020754 (1460 bytes, 473 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000201A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000201A0:
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8414);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000201B4:
    if (TEST_Z(eax, eax)) goto loc_000201C0; /* je: equal / zero */

loc_000201B8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000201C0:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8418);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000201D3:
    if (TEST_Z(eax, eax)) goto loc_000201DF; /* je: equal / zero */

loc_000201D7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000201DF:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C841C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000201F2:
    if (TEST_Z(eax, eax)) goto loc_000201FE; /* je: equal / zero */

loc_000201F6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000201FE:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8420);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020211:
    if (TEST_Z(eax, eax)) goto loc_0002021D; /* je: equal / zero */

loc_00020215:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002021D:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8424);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020230:
    if (TEST_Z(eax, eax)) goto loc_0002023C; /* je: equal / zero */

loc_00020234:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002023C:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8428);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002024F:
    if (TEST_Z(eax, eax)) goto loc_0002025B; /* je: equal / zero */

loc_00020253:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002025B:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C842C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002026E:
    if (TEST_Z(eax, eax)) goto loc_0002027A; /* je: equal / zero */

loc_00020272:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002027A:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8430);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002028D:
    if (TEST_Z(eax, eax)) goto loc_00020299; /* je: equal / zero */

loc_00020291:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020299:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8434);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000202AC:
    if (TEST_Z(eax, eax)) goto loc_000202B8; /* je: equal / zero */

loc_000202B0:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000202B8:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8438);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000202CB:
    if (TEST_Z(eax, eax)) goto loc_000202D7; /* je: equal / zero */

loc_000202CF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000202D7:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CA0);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000202EA:
    if (TEST_Z(eax, eax)) goto loc_000202F6; /* je: equal / zero */

loc_000202EE:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000202F6:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C843C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020309:
    if (TEST_Z(eax, eax)) goto loc_00020315; /* je: equal / zero */

loc_0002030D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020315:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8440);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020328:
    if (TEST_Z(eax, eax)) goto loc_00020334; /* je: equal / zero */

loc_0002032C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020334:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CA4);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020347:
    if (TEST_Z(eax, eax)) goto loc_00020353; /* je: equal / zero */

loc_0002034B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020353:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8444);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020366:
    if (TEST_Z(eax, eax)) goto loc_00020372; /* je: equal / zero */

loc_0002036A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020372:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8448);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020385:
    if (TEST_Z(eax, eax)) goto loc_00020391; /* je: equal / zero */

loc_00020389:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020391:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C844C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000203A4:
    if (TEST_Z(eax, eax)) goto loc_000203B0; /* je: equal / zero */

loc_000203A8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000203B0:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8450);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000203C3:
    if (TEST_Z(eax, eax)) goto loc_000203CF; /* je: equal / zero */

loc_000203C7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000203CF:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CA8);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000203E2:
    if (TEST_Z(eax, eax)) goto loc_000203EE; /* je: equal / zero */

loc_000203E6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000203EE:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8454);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020401:
    if (TEST_Z(eax, eax)) goto loc_0002040D; /* je: equal / zero */

loc_00020405:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002040D:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8458);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020420:
    if (TEST_Z(eax, eax)) goto loc_0002042C; /* je: equal / zero */

loc_00020424:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002042C:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CAC);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002043F:
    if (TEST_Z(eax, eax)) goto loc_0002044B; /* je: equal / zero */

loc_00020443:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002044B:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C845C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002045E:
    if (TEST_Z(eax, eax)) goto loc_0002046A; /* je: equal / zero */

loc_00020462:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002046A:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8460);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002047D:
    if (TEST_Z(eax, eax)) goto loc_00020489; /* je: equal / zero */

loc_00020481:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020489:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8464);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002049C:
    if (TEST_Z(eax, eax)) goto loc_000204A8; /* je: equal / zero */

loc_000204A0:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000204A8:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8468);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000204BB:
    if (TEST_Z(eax, eax)) goto loc_000204C7; /* je: equal / zero */

loc_000204BF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000204C7:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CB0);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000204DA:
    if (TEST_Z(eax, eax)) goto loc_000204E6; /* je: equal / zero */

loc_000204DE:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000204E6:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C846C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000204F9:
    if (TEST_Z(eax, eax)) goto loc_00020505; /* je: equal / zero */

loc_000204FD:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020505:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8470);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020518:
    if (TEST_Z(eax, eax)) goto loc_00020524; /* je: equal / zero */

loc_0002051C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020524:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CB4);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020537:
    if (TEST_Z(eax, eax)) goto loc_00020543; /* je: equal / zero */

loc_0002053B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020543:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CB8);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020556:
    if (TEST_Z(eax, eax)) goto loc_00020562; /* je: equal / zero */

loc_0002055A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020562:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8474);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020575:
    if (TEST_Z(eax, eax)) goto loc_00020581; /* je: equal / zero */

loc_00020579:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020581:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8478);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020594:
    if (TEST_Z(eax, eax)) goto loc_000205A0; /* je: equal / zero */

loc_00020598:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000205A0:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CBC);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000205B3:
    if (TEST_Z(eax, eax)) goto loc_000205BF; /* je: equal / zero */

loc_000205B7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000205BF:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CC0);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000205D2:
    if (TEST_Z(eax, eax)) goto loc_000205DE; /* je: equal / zero */

loc_000205D6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000205DE:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C847C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000205F1:
    if (TEST_Z(eax, eax)) goto loc_000205FD; /* je: equal / zero */

loc_000205F5:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000205FD:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8480);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020610:
    if (TEST_Z(eax, eax)) goto loc_0002061C; /* je: equal / zero */

loc_00020614:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002061C:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CC4);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002062F:
    if (TEST_Z(eax, eax)) goto loc_0002063B; /* je: equal / zero */

loc_00020633:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002063B:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CC8);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002064E:
    if (TEST_Z(eax, eax)) goto loc_0002065A; /* je: equal / zero */

loc_00020652:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0002065A:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8484);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002066D:
    if (TEST_Z(eax, eax)) goto loc_00020679; /* je: equal / zero */

loc_00020671:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020679:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8488);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0002068C:
    if (TEST_Z(eax, eax)) goto loc_00020698; /* je: equal / zero */

loc_00020690:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020698:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CCC);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000206AB:
    if (TEST_Z(eax, eax)) goto loc_000206B7; /* je: equal / zero */

loc_000206AF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000206B7:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C848C);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000206CA:
    if (TEST_Z(eax, eax)) goto loc_000206D6; /* je: equal / zero */

loc_000206CE:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000206D6:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8490);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_000206E9:
    if (TEST_Z(eax, eax)) goto loc_000206F5; /* je: equal / zero */

loc_000206ED:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000206F5:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8494);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020708:
    if (TEST_Z(eax, eax)) goto loc_00020714; /* je: equal / zero */

loc_0002070C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020714:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x4A1CD0);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020727:
    if (TEST_Z(eax, eax)) goto loc_00020733; /* je: equal / zero */

loc_0002072B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020733:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, 0x3C8498);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00020746:
    if (TEST_Z(eax, eax)) goto loc_00020752; /* je: equal / zero */

loc_0002074A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00020752:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
