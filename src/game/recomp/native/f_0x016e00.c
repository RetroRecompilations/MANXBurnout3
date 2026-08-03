#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sub_00014760(void);
/**
 * sub_00016E00
 * Original: 0x00016E00 - 0x00016EEB (235 bytes, 62 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E00(void)
{
    uint32_t game_base = edi;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00016E00:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_00016E05:
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D53AC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4AE1FC); /* mulss */
    eax = MEM32(0x4AE200);
    edx = ZX8(MEM8(0x411E74));
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EBFD0);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBFCC); /* mulss */
    PUSH32(esp, ecx);
    eax = 0x40B310;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA530(); /* call 0x001CA530 */

loc_00016E53:
    PUSH32(esp, 0); sub_001F5840(); /* call 0x001F5840 */

loc_00016E58:
    /* The Xbox render/audio helpers above preserve EDI. Their translated
     * implementations can leak a scratch object, so restore the frontend's
     * game base before looking up the active menu object. */
    edi = game_base;
    ecx = MEM32(edi + 0x2E1D0);
    eax = MEM32(ecx);
    /* The retail constructor normally installs this immutable XBE vtable.
     * A missing translated constructor left only this object's first word
     * zero while all of its initialized state survived.  Restore the XBE
     * pointer at the same update boundary where it is first consumed. */
    if (ecx == 0x004D4008u && eax != 0x003A9E7Cu) {
        MEM32(ecx) = 0x003A9E7Cu;
        {
            uint32_t frontend_object = ecx;
            PUSH32(esp, 0);
            sub_00014760();
            ecx = frontend_object;
        }
        eax = 0x003A9E7Cu;
    }
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_frontend_update;
        if (traced_frontend_update < 12) {
            fprintf(stderr,
                    "[B3-FE] update=%u object=%08X vtable=%08X method=%08X state=%u pending=%u\n",
                    traced_frontend_update, ecx, eax, MEM32(eax + 4),
                    MEM32(edi + 0x2E218), MEM32(edi + 0x2E214));
            traced_frontend_update++;
        }
    }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00016E63:
    if (getenv("B3_FRONTEND_TRACE")) {
        static unsigned traced_frontend_result;
        if (traced_frontend_result < 12) {
            fprintf(stderr, "[B3-FE] update result=%08X\n", eax);
            traced_frontend_result++;
        }
    }
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016E68; /* jne: not equal / not zero */

loc_00016E67:
    esp += 4; return; /* ret */

loc_00016E68:
    eax = MEM32(edi + 0x2E1D0);
    ecx = edi + 0x2CE68;
    /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ecx)) goto loc_00016EB5; /* je: equal / zero */

loc_00016E79:
    eax = MEM32(eax + 0x1B8);
    if (TEST_Z(eax, eax)) goto loc_00016E97; /* je: equal / zero */

loc_00016E83:
    edx = edi + 0x2DE5C;
    if (CMP_EQ(eax, edx)) goto loc_00016EB5; /* je: equal / zero */

loc_00016E8D:
    ecx = edi + 0x2DED0;
    if (CMP_EQ(eax, ecx)) goto loc_00016EB5; /* je: equal / zero */

loc_00016E97:
    SET_LO8(eax, MEM8(0x45B9C0));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = 0x4D5338;
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016EAE; /* je: equal / zero */

loc_00016EA7:
    PUSH32(esp, 0x41A00000);
    goto loc_00016ED1;

loc_00016EAE:
    PUSH32(esp, 0x41855555);
    goto loc_00016ED1;

loc_00016EB5:
    SET_LO8(eax, MEM8(0x45B9C0));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = 0x4D5338;
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016ECC; /* je: equal / zero */

loc_00016EC5:
    PUSH32(esp, 0x42200000);
    goto loc_00016ED1;

loc_00016ECC:
    PUSH32(esp, 0x42055555);

loc_00016ED1:
    PUSH32(esp, 0); sub_001B5880(); /* call 0x001B5880 */

loc_00016ED6:
    edx = MEM32(edi + 0x2E1D0);
    SET_LO8(eax, MEM8(edx + 0x1B4));
    MEM8(0x649B9B) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
