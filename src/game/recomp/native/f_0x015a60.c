#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* XBE CRT initializer sub_0026B320 -> sub_00064230.  The native entry path
 * does not run the original .CRT initializer array, so replay the exact
 * frontend-manager/screen vtable writes before constructing the manager.
 * These addresses and offsets are the retail XBE's, not a replacement menu. */
static void b3_init_retail_frontend_vtables(void)
{
    const uint32_t base = 0x567170;
    static const struct { uint16_t offset; uint32_t vtable; } entries[] = {
        {0x000, 0x3AC188}, {0x018, 0x3AC160}, {0x030, 0x3AC148},
        {0x090, 0x3AC118}, {0x0A8, 0x3AC100}, {0x0C0, 0x3AC12C},
        {0x0E0, 0x3AC1F0}, {0x100, 0x3AC1D4}, {0x120, 0x3AC1B8},
        {0x138, 0x3AC178}, {0x158, 0x3AC16C}, {0x178, 0x3AC150},
        {0x1A8, 0x3AC13C}, {0x1C8, 0x3AC124}, {0x1E0, 0x3AC110},
        {0x1F8, 0x3AC1FC}, {0x210, 0x3AC1E8}, {0x228, 0x3AC1D8},
        {0x240, 0x3AC1C4}, {0x260, 0x3AC15C}, {0x290, 0x3AC11C},
        {0x2B0, 0x3AC104}, {0x2C8, 0x3AC1F4}, {0x2E8, 0x3AC1D0},
        {0x300, 0x3AC1BC}, {0x318, 0x3AC138}, {0x338, 0x3AC114},
        {0x350, 0x3AC200}, {0x368, 0x3AC1EC}, {0x380, 0x3AC1DC},
        {0x398, 0x3AC1C0}, {0x3B0, 0x3AC134}, {0x3C8, 0x3AC1AC},
        {0x3E0, 0x3AC184}, {0x400, 0x3AC174}, {0x460, 0x3AC168},
        {0x478, 0x3AC158}, {0x490, 0x3AC140}, {0x4B8, 0x3AC120},
        {0x4D8, 0x3AC10C}, {0x4F0, 0x3AC1F8}, {0x508, 0x3AC1E0},
        {0x528, 0x3AC1C8}, {0x548, 0x3AC1B4}, {0x568, 0x3AC1A4},
        {0x590, 0x3AC1E4}, {0x5B0, 0x3AC164}, {0x5D0, 0x3AC1A8},
        {0x5F0, 0x3AC144}, {0x610, 0x3AC17C}, {0x630, 0x3AC170},
        {0x6C0, 0x3AC128}, {0x6D8, 0x3AC108}, {0x6F8, 0x3AC1CC},
        {0x808, 0x3AC180}, {0x830, 0x3AC154}, {0x928, 0x3AC130},
        {0x948, 0x3AC1B0},
    };
    unsigned i;

    for (i = 0; i < sizeof(entries) / sizeof(entries[0]); ++i)
        MEM32(base + entries[i].offset) = entries[i].vtable;
}
/**
 * sub_00015A60
 * Original: 0x00015A60 - 0x00015F03 (1187 bytes, 238 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015A60:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM8(ebp + 0x2E209) = LO8(ebx);
    MEM8(ebp + 0x2E208) = LO8(ebx);
    MEM8(ebp + 0x2E21C) = 1;
    MEM8(ebp + 0x2E21D) = LO8(ebx);
    MEM8(ebp + 0x2E21E) = LO8(ebx);
    MEM8(ebp + 0x2E188) = 1;
    MEM8(ebp + 0x2AE44) = LO8(ebx);
    MEM32(ebp + 0x2AE40) = ebx;
    MEM8(ebp + 0x2AE4C) = LO8(ebx);
    MEM8(ebp + 0x2AE4D) = LO8(ebx);
    MEM32(ebp + 0x2AE64) = ebx;
    MEM8(ebp + 0x2CE60) = LO8(ebx);
    MEM32(ebp + 0x2BE64) = ebx;
    MEM8(ebp + 0x2CE61) = LO8(ebx);
    MEM8(ebp + 0x2E20A) = LO8(ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 0x2AE3C) = 0x2B9D6F8;
    MEM32(ebp + 0x2AE38) = 0xFD462907u;
    PUSH32(esp, edi);
    edi = 1;
    MEM32(ebp + 0x2E1F8) = edi;
    MEM32(0x49FA54) = ebx;
    MEM32(0x49FA5C) = ebx;
    MEM32(0x49FA64) = ebx;
    MEM32(0x49FA6C) = ebx;
    PUSH32(esp, 0); sub_001D191E(); /* call 0x001D191E */

loc_00015B02:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x49FA54);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ebx);
    MEM32(0x49FA58) = eax;
    PUSH32(esp, 0); sub_001D1A1B(); /* call 0x001D1A1B */

loc_00015B18:
    ecx = 0x3F9CC0;
    PUSH32(esp, 0); sub_00022F60(); /* call 0x00022F60 */

loc_00015B22:
    esi = ebp + 0x7000;
    PUSH32(esp, 0); sub_00020760(); /* call 0x00020760 */

loc_00015B2D:
    /* cmp MEM8(0x45B9C0), LO8(ebx) - flags set for next jcc */
    MEM32(0x4A1EB8) = ebx;
    MEM8(0x3F7B14) = 1;
    esi = ebp + 0x2E198;
    PUSH32(esp, ebx);
    MEM32(0x4A1EB4) = ebx;
    if (CMP_EQ(MEM8(0x45B9C0), LO8(ebx))) goto loc_00015B68; /* je: equal / zero */

loc_00015B4F:
    xmm0.f[0] = MEMF(0x3B1A08); /* movss */
    MEM32(0x49C11C) = 0x14;
    PUSH32(esp, 0x41A00000);
    goto loc_00015B7F;

loc_00015B68:
    xmm0.f[0] = MEMF(0x3B1838); /* movss */
    MEM32(0x49C11C) = 0x10;
    PUSH32(esp, 0x41855555);

loc_00015B7F:
    MEMF(0x49C120) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B5880(); /* call 0x001B5880 */

loc_00015B8C:
    eax = MEM32(0x4A1EB4);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0x7054) = eax;
    eax = 0x420BE0;
    MEM32(ebp + 0x7040) = ebx;
    MEM32(ebp + 0x7044) = ebx;
    MEM32(ebp + 0x7048) = ebx;
    MEM32(ebp + 0x704C) = ebx;
    MEM32(ebp + 0x7050) = ebx;
    MEM32(ebp + 0x7058) = edi;
    MEM32(ebp + 0x7064) = edi;
    MEM8(ebp + 0x7068) = LO8(ebx);
    MEMF(ebp + 0x705C) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x7060) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013B20(); /* call 0x00013B20 */

loc_00015BE4:
    eax = 0x464018;
    MEM32(0x420BE0) = ebx;
    MEM32(0x420BF0) = ebx;
    MEM32(0x420BE4) = ebx;
    MEM32(0x420C04) = ebx;
    MEM32(0x420BE8) = ebx;
    MEM32(0x420BEC) = ebx;
    MEM32(0x420BF4) = ebx;
    MEM32(0x420BF8) = ebx;
    MEM32(0x420BFC) = ebx;
    MEM32(0x420C00) = ebx;
    MEM32(0x420C08) = ebx;
    PUSH32(esp, 0); sub_00062B40(); /* call 0x00062B40 */

loc_00015C30:
    edx = ebp + 0x7C3C;
    MEM32(ebp + 0x2E18C) = ebx;
    MEM32(ebp + 0x2E190) = ebx;
    PUSH32(esp, 0); sub_00011030(); /* call 0x00011030 */

loc_00015C47:
    eax = 0x4D6170;
    PUSH32(esp, 0); sub_0003C8A0(); /* call 0x0003C8A0 */

loc_00015C51:
    esi = 0x4A4B90;
    PUSH32(esp, 0); sub_00013EB0(); /* call 0x00013EB0 */

loc_00015C5B:
    eax = 0x572980;
    PUSH32(esp, 0); sub_000FC420(); /* call 0x000FC420 */

loc_00015C65:
    PUSH32(esp, 0x60EA00);
    PUSH32(esp, 0); sub_001A9C50(); /* call 0x001A9C50 */

loc_00015C6F:
    /* The native entry path also skips the retail scalar CRT initializers at
     * 0x002A2340 and 0x002A2360.  These copy the frontend's 640x480 design
     * dimensions into its mutable globals; without them the original movie
     * builder creates a 0x480 quad even when the decoded raster is valid. */
    MEM32(0x56FD58) = MEM32(0x3B1F00);
    MEM32(0x56FDE8) = MEM32(0x3B1EEC);

    /* CRT initializer 0x0026AED0 is skipped by the native entry path.  Replay
     * its exact retail frontend-object vtable bank before constructing UI. */
    if (MEM32(0x55CB88) == 0) {
        eax = 0x559390;
        PUSH32(esp, 0); sub_00063B80();
    }
    esi = 0x557880;
    PUSH32(esp, 0); sub_00063050(); /* call 0x00063050 */

loc_00015C79:
    PUSH32(esp, 0x45B9E0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x45BAD0);
    ecx = 0xF0;
    edx = edi;
    PUSH32(esp, 0); sub_001C6660(); /* call 0x001C6660 */

loc_00015C91:
    if (MEM32(0x567170) == 0)
        b3_init_retail_frontend_vtables();
    PUSH32(esp, 0x4AE1E0);
    PUSH32(esp, 0x38A8F0);
    PUSH32(esp, ebp);
    ecx = 0x567170;
    MEM32(0x45BB10) = ebx;
    MEM32(0x45BB14) = ebx;
    MEM32(0x45BB18) = ebx;
    MEM32(0x567AD8) = ebx;
    PUSH32(esp, 0); sub_001B4170(); /* call 0x001B4170 */

loc_00015CBE:
    eax = 0x44CAA8;
    MEM32(0x44CFC0) = ebx;
    MEM32(0x44CFBC) = 0x44CB20;
    PUSH32(esp, 0); sub_00021C20(); /* call 0x00021C20 */

loc_00015CD8:
    edx = ebp + 0x83E0;
    MEM32(edx + 0x20) = 0x6C8;
    MEM32(edx + 0x14) = ebx;
    edi = edx + 0xC30;
    MEM32(edx + 0x1C) = edi;
    ecx = 0x3640;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0xC2C) = LO8(ebx);
    MEM32(edx + 0xC24) = ebx;
    MEM32(edx + 0xC28) = ebx;
    MEM32(0x4A1E94) = edx;
    MEM32(0x499E48) = ebx;
    MEM8(ebp + 0x2E1D8) = LO8(ebx);
    MEM32(ebp + 0x2E1D0) = ebx;
    MEM32(ebp + 0x2E1D4) = ebx;
    MEM32(ebp + 0x2AE40) = ebx;
    edx = MEM32(ebp + 0x2CE68);
    ecx = ebp + 0x2CE68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015D3E:
    eax = MEM32(ebp + 0x2D0F0);
    ecx = ebp + 0x2D0F0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015D4C:
    edx = MEM32(ebp + 0x2D430);
    ecx = ebp + 0x2D430;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015D5A:
    eax = MEM32(ebp + 0x2D5F8);
    ecx = ebp + 0x2D5F8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015D68:
    edx = MEM32(ebp + 0x2D7C8);
    ecx = ebp + 0x2D7C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015D76:
    eax = MEM32(ebp + 0x2D9A0);
    ecx = ebp + 0x2D9A0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015D84:
    edx = MEM32(ebp + 0x2D9EC);
    ecx = ebp + 0x2D9EC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015D92:
    eax = MEM32(ebp + 0x2DA38);
    ecx = ebp + 0x2DA38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015DA0:
    edx = MEM32(ebp + 0x2DA88);
    ecx = ebp + 0x2DA88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015DAE:
    eax = MEM32(ebp + 0x2DAFC);
    ecx = ebp + 0x2DAFC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015DBC:
    edx = MEM32(ebp + 0x2DB54);
    ecx = ebp + 0x2DB54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015DCA:
    eax = MEM32(ebp + 0x2DC04);
    ecx = ebp + 0x2DC04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015DD8:
    edx = MEM32(ebp + 0x2DBAC);
    ecx = ebp + 0x2DBAC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015DE6:
    eax = MEM32(ebp + 0x2DC5C);
    ecx = ebp + 0x2DC5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015DF4:
    edx = MEM32(ebp + 0x2DCB4);
    ecx = ebp + 0x2DCB4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015E02:
    eax = MEM32(ebp + 0x2DD00);
    ecx = ebp + 0x2DD00;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015E10:
    edx = MEM32(ebp + 0x2DD74);
    ecx = ebp + 0x2DD74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015E1E:
    eax = MEM32(ebp + 0x2DDD8);
    ecx = ebp + 0x2DDD8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015E2C:
    edx = MEM32(ebp + 0x2DE5C);
    ecx = ebp + 0x2DE5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015E3A:
    eax = MEM32(ebp + 0x2DED0);
    ecx = ebp + 0x2DED0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015E48:
    edx = MEM32(ebp + 0x2DF44);
    ecx = ebp + 0x2DF44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015E56:
    eax = MEM32(ebp + 0x2E068);
    ecx = ebp + 0x2E068;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015E64:
    edx = MEM32(ebp + 0x2E070);
    ecx = ebp + 0x2E070;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015E72:
    eax = MEM32(ebp + 0x2E0D0);
    ecx = ebp + 0x2E0D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00015E80:
    MEM8(ebp + 0x28950) = LO8(ebx);
    MEM32(ebp + 0x28948) = ebx;
    esi = 1;
    ecx = ebp + 0x28980;
    eax = 0; /* xor self */
    MEM8(ebp + 0x28974) = LO8(ebx);
    MEM32(ebp + 0x2896C) = esi;
    PUSH32(esp, 0); sub_001673E0(); /* call 0x001673E0 */

loc_00015EAA:
    ecx = ebp + 0x295D0;
    eax = esi;
    PUSH32(esp, 0); sub_001673E0(); /* call 0x001673E0 */

loc_00015EB7:
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    /* ESI was loaded with 1 at 0x15E8C and is callee-saved in the original
     * x86 ABI. One translated constructor leaks its internal ESI value, so
     * using the shared register here stored the game-object pointer as the
     * state. Preserve the literal value the original instructions carry. */
    MEM32(ebp + 0x2E1E8) = 1;
    MEM32(ebp + 0x2E1F8) = 1;
    POP32(esp, esi);
    MEM8(ebp + 0x2E1EC) = LO8(ebx);
    MEM8(ebp + 0x2CE62) = LO8(ebx);
    MEM32(ebp + 0x2E1FC) = ebx;
    MEM32(ebp + 0x2E200) = ebx;
    MEM32(ebp + 0x2E218) = ebx;
    MEM32(ebp + 0x2E214) = ebx;
    MEM32(ebp + 0x2E1E0) = eax;
    MEM32(ebp + 0x2E1E4) = eax;
    MEM32(ebp + 0x2E1DC) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
