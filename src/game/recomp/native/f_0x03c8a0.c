#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_0003C8A0
 * Original: 0x0003C8A0 - 0x0003D47F (3039 bytes, 835 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C8A0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    edi = 0; /* xor self */
    MEM32(ebx + 0x3B8) = edi;
    PUSH32(esp, 0); sub_001CF913(); /* call 0x001CF913 */

loc_0003C8B4:
    eax = ZX8(LO8(eax));
    eax = eax & 1;
    /* cmp eax, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 1)) ? 1 : 0); /* sete */
    esi = ebx;
    MEM8(ebx + 0xD) = LO8(eax);
    MEM32(ebx + 0x4F8) = 0x280;
    MEM32(ebx + 0x4FC) = 0x1E0;
    PUSH32(esp, 0); sub_0003D690(); /* call 0x0003D690 */

loc_0003C8DE:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0003D890(); /* call 0x0003D890 */

loc_0003C8E4:
    /* EDI is the constructor's zero sentinel, saved by the original x86
     * callees. The translated RenderWare/D3D setup path shares host globals
     * for registers and can leak an internal surface descriptor (0x10101)
     * here. That value is subsequently treated as a copy destination and
     * overwrites the retail XBE text/jump table. Restore the callee-saved
     * invariant at the first instruction that consumes it. */
    edi = 0;
    eax = MEM32(0x3FA650);
    if (getenv("B3_STACK_TRACE")) {
        static int traced_copy_selector;
        if (!traced_copy_selector) {
            fprintf(stderr,
                    "[B3-STACK] 3C8A0 selector current=%08X active=%08X fallback=%08X alloc=%08X\n",
                    eax, MEM32(0x3FA644), MEM32(0x3FA64C), MEM32(0x3FA658));
            traced_copy_selector = 1;
        }
    }
    if (CMP_L(eax, edi)) goto loc_0003C8FB; /* jl: less (signed <) */

loc_0003C8ED:
    if (CMP_EQ(eax, MEM32(0x3FA644))) goto loc_0003C8FB; /* je: equal / zero */

loc_0003C8F5:
    MEM32(esp + 0x10) = edi;
    goto loc_0003C91D;

loc_0003C8FB:
    if (CMP_EQ(MEM32(0x3FA64C), edi)) goto loc_0003C909; /* je: equal / zero */

loc_0003C903:
    MEM32(esp + 0x10) = edi;
    goto loc_0003C91D;

loc_0003C909:
    ecx = MEM32(0x3FA658);
    MEM32(0x3FA64C) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = ecx;

loc_0003C91D:
    ecx = MEM32(0x3E7BA0);
    ebp = MEM32(0x3E7B9C);
    edi = MEM32(esp + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    eax = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    PUSH32(esp, 0); sub_001BEEF0(); /* call 0x001BEEF0 */

loc_0003C944:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_001BEEF0(); /* call 0x001BEEF0 */

loc_0003C94D:
    eax = MEM32(ebp + 8);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0003C99A; /* jle: less or equal (signed <=) */

loc_0003C956:
    edx = 0; /* xor self */
    goto loc_0003C960;

    /* nop */

loc_0003C960:
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(edx + eax + 8);
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0xC);
    edi = MEM32(ecx + 4);
    eax = MEM32(edx + eax + 8);
    eax = eax + edi;
    edi = MEM32(ecx);
    edi = edi & 0x70000;
    if (CMP_EQ(edi, 0x20000)) goto loc_0003C98C; /* je: equal / zero */

loc_0003C987:
    eax = eax & 0xFFFFFFF;

loc_0003C98C:
    MEM32(ecx + 4) = eax;
    eax = MEM32(ebp + 8);
    esi++;
    edx = edx + 0x10;
    if (CMP_L(esi, eax)) goto loc_0003C960; /* jl: less (signed <) */

loc_0003C99A:
    ecx = MEM32(0x3E7BA0);
    edx = MEM32(esp + 0x10);
    eax = ecx + edx;
    edx = MEM32(0x3E7BB4);
    ecx = MEM32(0x3E7BB8);
    ebp = ecx;
    ecx = ecx >> 2;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(edx + 0xC);
    ecx = MEM32(edx + 8);
    esi = esi + edx;
    MEM32(edx + 0xC) = esi;
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0003C9FA; /* jle: less or equal (signed <=) */

loc_0003C9D6:
    edi = 0; /* xor self */
    goto loc_0003C9E0;

    /* nop */

loc_0003C9E0:
    ecx = MEM32(edx + 0xC);
    ebp = MEM32(edi + ecx + 8);
    ecx = edi + ecx + 8;
    ebp = ebp + edx;
    MEM32(ecx) = ebp;
    ecx = MEM32(edx + 8);
    esi++;
    edi = edi + 0x10;
    if (CMP_L(esi, ecx)) goto loc_0003C9E0; /* jl: less (signed <) */

loc_0003C9FA:
    esi = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    esi = esi + eax;
    MEM32(eax + 0xC) = esi;
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0003CA2A; /* jle: less or equal (signed <=) */

loc_0003CA0B:
    edi = 0; /* xor self */
    /* nop */

loc_0003CA10:
    ecx = MEM32(eax + 0xC);
    ebp = MEM32(edi + ecx + 8);
    ecx = edi + ecx + 8;
    ebp = ebp + eax;
    MEM32(ecx) = ebp;
    ecx = MEM32(eax + 8);
    esi++;
    edi = edi + 0x10;
    if (CMP_L(esi, ecx)) goto loc_0003CA10; /* jl: less (signed <) */

loc_0003CA2A:
    ecx = MEM32(edx + 8);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0003CA7F; /* jle: less or equal (signed <=) */

loc_0003CA39:
    edi = 0; /* xor self */
    goto loc_0003CA40;

    /* nop */

loc_0003CA40:
    ecx = MEM32(edx + 0xC);
    esi = MEM32(edi + ecx + 8);
    ecx = MEM32(eax + 0xC);
    ebp = MEM32(esi + 4);
    ecx = MEM32(edi + ecx + 8);
    ecx = ecx + ebp;
    ebp = MEM32(esi);
    ebp = ebp & 0x70000;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0003CA69; /* je: equal / zero */

loc_0003CA63:
    ecx = ecx & 0xFFFFFFF;

loc_0003CA69:
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(edx + 8);
    ecx++;
    edi = edi + 0x10;
    /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, esi)) goto loc_0003CA40; /* jl: less (signed <) */

loc_0003CA7F:
    eax = eax + MEM32(0x3E7BB8);
    edx = MEM32(0x3E7BA8);
    if (TEST_Z(edx, edx)) goto loc_0003CB5F; /* je: equal / zero */

loc_0003CA93:
    ecx = MEM32(0x3E7BAC);
    ebp = ecx;
    ecx = ecx >> 2;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(edx + 0xC);
    ecx = MEM32(edx + 8);
    esi = esi + edx;
    MEM32(edx + 0xC) = esi;
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0003CADA; /* jle: less or equal (signed <=) */

loc_0003CABC:
    edi = 0; /* xor self */
    edi = edi;

loc_0003CAC0:
    ecx = MEM32(edx + 0xC);
    ebp = MEM32(ecx + edi + 8);
    ecx = ecx + edi + 8;
    ebp = ebp + edx;
    MEM32(ecx) = ebp;
    ecx = MEM32(edx + 8);
    esi++;
    edi = edi + 0x10;
    if (CMP_L(esi, ecx)) goto loc_0003CAC0; /* jl: less (signed <) */

loc_0003CADA:
    esi = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    esi = esi + eax;
    MEM32(eax + 0xC) = esi;
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0003CB0A; /* jle: less or equal (signed <=) */

loc_0003CAEB:
    edi = 0; /* xor self */
    /* nop */

loc_0003CAF0:
    ecx = MEM32(eax + 0xC);
    ebp = MEM32(edi + ecx + 8);
    ecx = edi + ecx + 8;
    ebp = ebp + eax;
    MEM32(ecx) = ebp;
    ecx = MEM32(eax + 8);
    esi++;
    edi = edi + 0x10;
    if (CMP_L(esi, ecx)) goto loc_0003CAF0; /* jl: less (signed <) */

loc_0003CB0A:
    ecx = MEM32(edx + 8);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0003CB5F; /* jle: less or equal (signed <=) */

loc_0003CB19:
    edi = 0; /* xor self */
    goto loc_0003CB20;

    /* nop */

loc_0003CB20:
    ecx = MEM32(edx + 0xC);
    esi = MEM32(edi + ecx + 8);
    ecx = MEM32(eax + 0xC);
    ebp = MEM32(esi + 4);
    ecx = MEM32(edi + ecx + 8);
    ecx = ecx + ebp;
    ebp = MEM32(esi);
    ebp = ebp & 0x70000;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0003CB49; /* je: equal / zero */

loc_0003CB43:
    ecx = ecx & 0xFFFFFFF;

loc_0003CB49:
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(edx + 8);
    ecx++;
    edi = edi + 0x10;
    /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, esi)) goto loc_0003CB20; /* jl: less (signed <) */

loc_0003CB5F:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002EF90(); /* call 0x0002EF90 */

loc_0003CB65:
    PUSH32(esp, 0);
    edx = ebx + 0x3D0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E7D58);
    PUSH32(esp, 0x387558);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CB7D:
    PUSH32(esp, 0);
    eax = ebx + 0x3D4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7F60);
    PUSH32(esp, 0x38756C);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CB95:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CBA4:
    /* test eax, eax - flags set for next jcc */
    ebp = 1;
    if (TEST_Z(eax, eax)) goto loc_0003CBCA; /* je: equal / zero */

loc_0003CBAD:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8288;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x3D8) = eax;

loc_0003CBCA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CBD9:
    if (TEST_Z(eax, eax)) goto loc_0003CBFA; /* je: equal / zero */

loc_0003CBDD:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8378;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x3DC) = eax;

loc_0003CBFA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CC09:
    if (TEST_Z(eax, eax)) goto loc_0003CC2A; /* je: equal / zero */

loc_0003CC0D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8468;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x3E0) = eax;

loc_0003CC2A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CC39:
    if (TEST_Z(eax, eax)) goto loc_0003CC5A; /* je: equal / zero */

loc_0003CC3D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8648;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x3E8) = eax;

loc_0003CC5A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CC69:
    if (TEST_Z(eax, eax)) goto loc_0003CC8A; /* je: equal / zero */

loc_0003CC6D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8738;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x3EC) = eax;

loc_0003CC8A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CC99:
    if (TEST_Z(eax, eax)) goto loc_0003CCBA; /* je: equal / zero */

loc_0003CC9D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8558;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x3E4) = eax;

loc_0003CCBA:
    PUSH32(esp, 0);
    ecx = ebx + 0x3F0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E8828);
    PUSH32(esp, 0x3875A4);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CCD2:
    PUSH32(esp, 0);
    edx = ebx + 0x3F4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E88C0);
    PUSH32(esp, 0x38758C);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CCEA:
    PUSH32(esp, 0);
    eax = ebx + 0x3F8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E89E8);
    PUSH32(esp, 0x38758C);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CD02:
    PUSH32(esp, 0);
    ecx = ebx + 0x3FC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E8B10);
    PUSH32(esp, 0x38758C);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CD1A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CD29:
    if (TEST_Z(eax, eax)) goto loc_0003CD4A; /* je: equal / zero */

loc_0003CD2D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8D08;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x400) = eax;

loc_0003CD4A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CD59:
    if (TEST_Z(eax, eax)) goto loc_0003CD7A; /* je: equal / zero */

loc_0003CD5D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8DF8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x404) = eax;

loc_0003CD7A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CD89:
    if (TEST_Z(eax, eax)) goto loc_0003CDAA; /* je: equal / zero */

loc_0003CD8D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8EE8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x408) = eax;

loc_0003CDAA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CDB9:
    if (TEST_Z(eax, eax)) goto loc_0003CDDA; /* je: equal / zero */

loc_0003CDBD:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E8FD8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x40C) = eax;

loc_0003CDDA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CDE9:
    if (TEST_Z(eax, eax)) goto loc_0003CE0A; /* je: equal / zero */

loc_0003CDED:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E90C8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x410) = eax;

loc_0003CE0A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CE19:
    if (TEST_Z(eax, eax)) goto loc_0003CE3A; /* je: equal / zero */

loc_0003CE1D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E91B8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x414) = eax;

loc_0003CE3A:
    PUSH32(esp, 0);
    edx = ebx + 0x420;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E92A8);
    PUSH32(esp, 0x3875D4);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CE52:
    PUSH32(esp, 0);
    eax = ebx + 0x424;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E9360);
    PUSH32(esp, 0x3875E8);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CE6A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CE79:
    if (TEST_Z(eax, eax)) goto loc_0003CE9A; /* je: equal / zero */

loc_0003CE7D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E93E8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x428) = eax;

loc_0003CE9A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CEA9:
    if (TEST_Z(eax, eax)) goto loc_0003CECA; /* je: equal / zero */

loc_0003CEAD:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E94D8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x42C) = eax;

loc_0003CECA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CED9:
    if (TEST_Z(eax, eax)) goto loc_0003CEFA; /* je: equal / zero */

loc_0003CEDD:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E95C8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x430) = eax;

loc_0003CEFA:
    PUSH32(esp, 0);
    ecx = ebx + 0x434;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E96B8);
    PUSH32(esp, 0x3875F8);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CF12:
    PUSH32(esp, 0);
    edx = ebx + 0x438;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E9760);
    PUSH32(esp, 0x387604);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CF2A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CF39:
    if (TEST_Z(eax, eax)) goto loc_0003CF5A; /* je: equal / zero */

loc_0003CF3D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E97D8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x43C) = eax;

loc_0003CF5A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CF69:
    if (TEST_Z(eax, eax)) goto loc_0003CF8A; /* je: equal / zero */

loc_0003CF6D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E98C8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x440) = eax;

loc_0003CF8A:
    PUSH32(esp, 0);
    eax = ebx + 0x460;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EA338);
    PUSH32(esp, 0x3875A4);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CFA2:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CFB1:
    if (TEST_Z(eax, eax)) goto loc_0003CFD2; /* je: equal / zero */

loc_0003CFB5:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA3E0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x464) = eax;

loc_0003CFD2:
    PUSH32(esp, 0);
    ecx = ebx + 0x468;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EA4D0);
    PUSH32(esp, 0x3875A4);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003CFEA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003CFF9:
    if (TEST_Z(eax, eax)) goto loc_0003D01A; /* je: equal / zero */

loc_0003CFFD:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA588;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x46C) = eax;

loc_0003D01A:
    PUSH32(esp, 0);
    edx = ebx + 0x418;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3EA678);
    PUSH32(esp, 0x3875BC);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D032:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D041:
    if (TEST_Z(eax, eax)) goto loc_0003D062; /* je: equal / zero */

loc_0003D045:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA700;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x41C) = eax;

loc_0003D062:
    PUSH32(esp, 0);
    eax = ebx + 0x444;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E99B8);
    PUSH32(esp, 0x387614);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D07A:
    PUSH32(esp, 0);
    ecx = ebx + 0x448;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E9A50);
    PUSH32(esp, 0x387614);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D092:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D0A1:
    if (TEST_Z(eax, eax)) goto loc_0003D0C2; /* je: equal / zero */

loc_0003D0A5:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E9B08;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x44C) = eax;

loc_0003D0C2:
    PUSH32(esp, 0);
    edx = ebx + 0x458;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E9D70);
    PUSH32(esp, 0x387640);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D0DA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D0E9:
    if (TEST_Z(eax, eax)) goto loc_0003D10A; /* je: equal / zero */

loc_0003D0ED:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E9DB8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x45C) = eax;

loc_0003D10A:
    PUSH32(esp, 0);
    eax = ebx + 0x450;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E9BF8);
    PUSH32(esp, 0x38762C);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D122:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D131:
    if (TEST_Z(eax, eax)) goto loc_0003D152; /* je: equal / zero */

loc_0003D135:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E9C80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x454) = eax;

loc_0003D152:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D161:
    if (TEST_Z(eax, eax)) goto loc_0003D182; /* je: equal / zero */

loc_0003D165:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3E9EA8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x4A4) = eax;

loc_0003D182:
    PUSH32(esp, 0);
    ecx = ebx + 0x48C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E9F98);
    PUSH32(esp, 0x387658);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D19A:
    PUSH32(esp, 0);
    edx = ebx + 0x490;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E9FF0);
    PUSH32(esp, 0x387674);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D1B2:
    PUSH32(esp, 0);
    eax = ebx + 0x494;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EA034);
    PUSH32(esp, 0x38768C);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D1CA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D1D9:
    if (TEST_Z(eax, eax)) goto loc_0003D1FA; /* je: equal / zero */

loc_0003D1DD:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA068;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x498) = eax;

loc_0003D1FA:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D209:
    if (TEST_Z(eax, eax)) goto loc_0003D22A; /* je: equal / zero */

loc_0003D20D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA158;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x49C) = eax;

loc_0003D22A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D239:
    if (TEST_Z(eax, eax)) goto loc_0003D25A; /* je: equal / zero */

loc_0003D23D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA248;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x4A0) = eax;

loc_0003D25A:
    PUSH32(esp, 0);
    ecx = ebx + 0x470;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EA7F0);
    PUSH32(esp, 0x3876A0);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D272:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D281:
    if (TEST_Z(eax, eax)) goto loc_0003D2A2; /* je: equal / zero */

loc_0003D285:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA868;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x474) = eax;

loc_0003D2A2:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D2B1:
    if (TEST_Z(eax, eax)) goto loc_0003D2D2; /* je: equal / zero */

loc_0003D2B5:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EA958;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x478) = eax;

loc_0003D2D2:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D2E1:
    if (TEST_Z(eax, eax)) goto loc_0003D302; /* je: equal / zero */

loc_0003D2E5:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EAA48;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x480) = eax;

loc_0003D302:
    PUSH32(esp, 0);
    edx = ebx + 0x47C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3EAB38);
    PUSH32(esp, 0x3876AC);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D31A:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D329:
    if (TEST_Z(eax, eax)) goto loc_0003D34A; /* je: equal / zero */

loc_0003D32D:
    edi = eax + 0xC;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x3EAB90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x488) = eax;

loc_0003D34A:
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    eax = ebx + 0x484;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EAC80);
    PUSH32(esp, 0x3875A4);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_0003D363:
    ecx = ebx + 0x9D0;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x9C4) = 0x900;
    MEM32(ebx + 0x9BC) = esi;
    PUSH32(esp, 0); sub_00040B90(); /* call 0x00040B90 */

loc_0003D37F:
    PUSH32(esp, 0x85);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x280);
    MEM32(ebx + 0x4F0) = esi;
    MEM32(ebx + 0x4F4) = esi;
    PUSH32(esp, 0); sub_001DE870(); /* call 0x001DE870 */

loc_0003D3A1:
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x280);
    edi = eax;
    PUSH32(esp, 0); sub_001DE870(); /* call 0x001DE870 */

loc_0003D3B5:
    ecx = MEM32(0x759288);
    edx = ebx + 0x890;
    esi = ebx + 0x8F0;
    esp = esp + 0x20;
    ebx = eax;
    MEM32(ecx + edi) = edx;
    PUSH32(esp, 0); sub_001C8CF0(); /* call 0x001C8CF0 */

loc_0003D3D4:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_0003D3F0:
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMD(0x3B20F8)); /* fld double */
    PUSH32(esp, 0); sub_00244E9C(); /* call 0x00244E9C */

loc_0003D405:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_0003D410:
    MEM8(esi + 0x45D1A8) = LO8(eax);
    MEM8(esi + 0x45D2A8) = LO8(eax);
    MEM8(esi + 0x45D3A8) = LO8(eax);
    esi++;
    /* cmp esi, 0x100 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(esi, 0x100)) goto loc_0003D3F0; /* jl: less (signed <) */

loc_0003D42F:
    eax = MEM32(0x35FB48);
    esi = MEM32(eax + 0x240C);
    edx = MEM32(eax + 0x2478);
    esi = esi + esi * 2;
    esi = esi << 8;
    edx = edx & ebp;
    ecx = 0xC0;
    edi = 0x45D1A8;
    esi = esi + eax + 0x1E04;
    ebx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) { sub_0003D485(); return; } /* je: equal / zero */

loc_0003D45F:
    ecx = edx + edx * 2;
    ecx = ecx << 8;
    edi = ecx + eax + 0x1E04;
    ecx = 0xC0;
    esi = 0x45D1A8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0x240C) = edx;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
