#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00161990
 * Original: 0x00161990 - 0x00161DDB (1099 bytes, 379 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00161990:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    esi = eax;
    eax = esi + 0x30;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_001619A6:
    if (TEST_Z(eax, eax)) goto loc_001619B2; /* je: equal / zero */

loc_001619AA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001619B2:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x40;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_001619C4:
    if (TEST_Z(eax, eax)) goto loc_001619D0; /* je: equal / zero */

loc_001619C8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001619D0:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x50;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_001619E2:
    if (TEST_Z(eax, eax)) goto loc_001619EE; /* je: equal / zero */

loc_001619E6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001619EE:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x60;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161A00:
    if (TEST_Z(eax, eax)) goto loc_00161A0C; /* je: equal / zero */

loc_00161A04:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161A0C:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x70;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161A1E:
    if (TEST_Z(eax, eax)) goto loc_00161A2A; /* je: equal / zero */

loc_00161A22:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161A2A:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x80;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161A3F:
    if (TEST_Z(eax, eax)) goto loc_00161A4B; /* je: equal / zero */

loc_00161A43:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161A4B:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x90;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161A60:
    if (TEST_Z(eax, eax)) goto loc_00161A6C; /* je: equal / zero */

loc_00161A64:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161A6C:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xA0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161A81:
    if (TEST_Z(eax, eax)) goto loc_00161A8D; /* je: equal / zero */

loc_00161A85:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161A8D:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xB0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161AA2:
    if (TEST_Z(eax, eax)) goto loc_00161AAE; /* je: equal / zero */

loc_00161AA6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161AAE:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xC0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161AC3:
    if (TEST_Z(eax, eax)) goto loc_00161ACF; /* je: equal / zero */

loc_00161AC7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161ACF:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xD0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161AE4:
    if (TEST_Z(eax, eax)) goto loc_00161AF0; /* je: equal / zero */

loc_00161AE8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161AF0:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xE0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161B05:
    if (TEST_Z(eax, eax)) goto loc_00161B11; /* je: equal / zero */

loc_00161B09:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161B11:
    edi = MEM32(0x4A1E94);
    eax = esi + 0xF0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161B26:
    if (TEST_Z(eax, eax)) goto loc_00161B32; /* je: equal / zero */

loc_00161B2A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161B32:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x100;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161B47:
    if (TEST_Z(eax, eax)) goto loc_00161B53; /* je: equal / zero */

loc_00161B4B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161B53:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x110;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161B68:
    if (TEST_Z(eax, eax)) goto loc_00161B74; /* je: equal / zero */

loc_00161B6C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161B74:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x120;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161B89:
    if (TEST_Z(eax, eax)) goto loc_00161B95; /* je: equal / zero */

loc_00161B8D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161B95:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x130;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161BAA:
    if (TEST_Z(eax, eax)) goto loc_00161BB6; /* je: equal / zero */

loc_00161BAE:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161BB6:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x140;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161BCB:
    if (TEST_Z(eax, eax)) goto loc_00161BD7; /* je: equal / zero */

loc_00161BCF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161BD7:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x150;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161BEC:
    if (TEST_Z(eax, eax)) goto loc_00161BF8; /* je: equal / zero */

loc_00161BF0:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161BF8:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x160;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161C0D:
    if (TEST_Z(eax, eax)) goto loc_00161C19; /* je: equal / zero */

loc_00161C11:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161C19:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x170;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161C2E:
    if (TEST_Z(eax, eax)) goto loc_00161C3A; /* je: equal / zero */

loc_00161C32:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161C3A:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x180;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161C4F:
    if (TEST_Z(eax, eax)) goto loc_00161C5B; /* je: equal / zero */

loc_00161C53:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161C5B:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x190;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161C70:
    if (TEST_Z(eax, eax)) goto loc_00161C7C; /* je: equal / zero */

loc_00161C74:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161C7C:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x1A0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161C91:
    if (TEST_Z(eax, eax)) goto loc_00161C9D; /* je: equal / zero */

loc_00161C95:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161C9D:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x1B0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161CB2:
    if (TEST_Z(eax, eax)) goto loc_00161CBE; /* je: equal / zero */

loc_00161CB6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161CBE:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x1C0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161CD3:
    if (TEST_Z(eax, eax)) goto loc_00161CDF; /* je: equal / zero */

loc_00161CD7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161CDF:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x1D0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161CF4:
    if (TEST_Z(eax, eax)) goto loc_00161D00; /* je: equal / zero */

loc_00161CF8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161D00:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x1E0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161D15:
    if (TEST_Z(eax, eax)) goto loc_00161D21; /* je: equal / zero */

loc_00161D19:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161D21:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x1F0;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161D36:
    if (TEST_Z(eax, eax)) goto loc_00161D42; /* je: equal / zero */

loc_00161D3A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161D42:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x200;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161D57:
    if (TEST_Z(eax, eax)) goto loc_00161D63; /* je: equal / zero */

loc_00161D5B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161D63:
    edi = MEM32(0x4A1E94);
    edi = edi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161D72:
    if (TEST_Z(eax, eax)) goto loc_00161D7E; /* je: equal / zero */

loc_00161D76:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161D7E:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x10;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161D90:
    if (TEST_Z(eax, eax)) goto loc_00161D9C; /* je: equal / zero */

loc_00161D94:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161D9C:
    edi = MEM32(0x4A1E94);
    eax = esi + 0x20;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161DAE:
    if (TEST_Z(eax, eax)) goto loc_00161DBA; /* je: equal / zero */

loc_00161DB2:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161DBA:
    edi = MEM32(0x4A1E94);
    esi = esi + 0x24;
    edi = edi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_00161DCC:
    if (TEST_Z(eax, eax)) goto loc_00161DD8; /* je: equal / zero */

loc_00161DD0:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00161DD8:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
