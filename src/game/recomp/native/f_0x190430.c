#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00190430
 * Original: 0x00190430 - 0x0019231E (7918 bytes, 2599 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190430(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00190430:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B1078);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B1058);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190452:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73A0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190478:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190484:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190491; /* jne: not equal / not zero */

loc_00190488:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0019048F:
    goto loc_00190497;

loc_00190491:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190497:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B1078);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B1030);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001904B5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73A4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001904DB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001904E7:
    if (CMP_NE(LO8(eax), 1)) goto loc_001904F4; /* jne: not equal / not zero */

loc_001904EB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001904F2:
    goto loc_001904FA;

loc_001904F4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001904FA:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B1018);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0FF8);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190518:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73A8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019053E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0019054A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190557; /* jne: not equal / not zero */

loc_0019054E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190555:
    goto loc_0019055D;

loc_00190557:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019055D:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B1018);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0FD4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0019057B:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73AC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001905A1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001905AD:
    if (CMP_NE(LO8(eax), 1)) goto loc_001905BA; /* jne: not equal / not zero */

loc_001905B1:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001905B8:
    goto loc_001905C0;

loc_001905BA:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001905C0:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B1018);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0FA4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001905DE:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73B0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190604:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190610:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019061D; /* jne: not equal / not zero */

loc_00190614:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0019061B:
    goto loc_00190623;

loc_0019061D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190623:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F90);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0F74);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190641:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73B4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190667:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190673:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190680; /* jne: not equal / not zero */

loc_00190677:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019067E:
    goto loc_00190686;

loc_00190680:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190686:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F90);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0F54);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001906A4:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73B8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001906CA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001906D6:
    if (CMP_NE(LO8(eax), 1)) goto loc_001906E3; /* jne: not equal / not zero */

loc_001906DA:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001906E1:
    goto loc_001906E9;

loc_001906E3:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001906E9:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F90);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0F28);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190707:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73BC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0019072D:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190739:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190746; /* jne: not equal / not zero */

loc_0019073D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190744:
    goto loc_0019074C;

loc_00190746:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019074C:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F10);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0EF4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0019076A:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73C0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190790:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0019079C:
    if (CMP_NE(LO8(eax), 1)) goto loc_001907A9; /* jne: not equal / not zero */

loc_001907A0:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001907A7:
    goto loc_001907AF;

loc_001907A9:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001907AF:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F10);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0ED4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001907CD:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73C4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001907F3:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001907FF:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019080C; /* jne: not equal / not zero */

loc_00190803:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019080A:
    goto loc_00190812;

loc_0019080C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190812:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F10);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0EB0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190830:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73C8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190856:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190862:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019086F; /* jne: not equal / not zero */

loc_00190866:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0019086D:
    goto loc_00190875;

loc_0019086F:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190875:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F10);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0E88);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190893:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73CC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001908B9:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001908C5:
    if (CMP_NE(LO8(eax), 1)) goto loc_001908D2; /* jne: not equal / not zero */

loc_001908C9:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001908D0:
    goto loc_001908D8;

loc_001908D2:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001908D8:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0F10);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0E68);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001908F6:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73D0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019091C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190928:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190935; /* jne: not equal / not zero */

loc_0019092C:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190933:
    goto loc_0019093B;

loc_00190935:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019093B:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0E4C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0E38);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190959:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73D4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0019097F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0019098B:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190998; /* jne: not equal / not zero */

loc_0019098F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190996:
    goto loc_0019099E;

loc_00190998:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019099E:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0E4C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0E0C);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001909BC:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73D8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001909E2:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001909EE:
    if (CMP_NE(LO8(eax), 1)) goto loc_001909FB; /* jne: not equal / not zero */

loc_001909F2:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001909F9:
    goto loc_00190A01;

loc_001909FB:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190A01:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0E4C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0DE4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190A1F:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73DC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190A45:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190A51:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190A5E; /* jne: not equal / not zero */

loc_00190A55:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190A5C:
    goto loc_00190A64;

loc_00190A5E:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190A64:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0E4C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0DC0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190A82:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73E0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190AA8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190AB4:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190AC1; /* jne: not equal / not zero */

loc_00190AB8:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190ABF:
    goto loc_00190AC7;

loc_00190AC1:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190AC7:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0E4C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0D94);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190AE5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73E4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190B0B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190B17:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190B24; /* jne: not equal / not zero */

loc_00190B1B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190B22:
    goto loc_00190B2A;

loc_00190B24:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190B2A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0D7C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0D48);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190B48:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73EC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190B6E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190B7A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190B87; /* jne: not equal / not zero */

loc_00190B7E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190B85:
    goto loc_00190B8D;

loc_00190B87:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190B8D:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0D7C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0D20);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190BAB:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73F4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190BD1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190BDD:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190BEA; /* jne: not equal / not zero */

loc_00190BE1:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190BE8:
    goto loc_00190BF0;

loc_00190BEA:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190BF0:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0D7C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0CF8);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190C0E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73F0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190C34:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190C40:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190C4D; /* jne: not equal / not zero */

loc_00190C44:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190C4B:
    goto loc_00190C53;

loc_00190C4D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190C53:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0D7C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0CD0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190C71:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F742C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190C97:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190CA3:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190CB0; /* jne: not equal / not zero */

loc_00190CA7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190CAE:
    goto loc_00190CB6;

loc_00190CB0:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190CB6:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0CB8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0C90);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190CD4:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73F8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190CFA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190D06:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190D13; /* jne: not equal / not zero */

loc_00190D0A:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190D11:
    goto loc_00190D19;

loc_00190D13:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190D19:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0C54);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190D37:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73FC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190D5D:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190D69:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190D76; /* jne: not equal / not zero */

loc_00190D6D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190D74:
    goto loc_00190D7C;

loc_00190D76:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190D7C:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0C30);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190D9A:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7404;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190DC0:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190DCC:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190DD9; /* jne: not equal / not zero */

loc_00190DD0:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190DD7:
    goto loc_00190DDF;

loc_00190DD9:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190DDF:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0C04);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190DFD:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7408;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190E23:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190E2F:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190E3C; /* jne: not equal / not zero */

loc_00190E33:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190E3A:
    goto loc_00190E42;

loc_00190E3C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190E42:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0BC8);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190E60:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F740C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190E86:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190E92:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190E9F; /* jne: not equal / not zero */

loc_00190E96:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190E9D:
    goto loc_00190EA5;

loc_00190E9F:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190EA5:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0BA4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190EC3:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7400;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190EE9:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190EF5:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190F02; /* jne: not equal / not zero */

loc_00190EF9:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190F00:
    goto loc_00190F08;

loc_00190F02:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190F08:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0B70);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190F26:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7410;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00190F4C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00190F58:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190F65; /* jne: not equal / not zero */

loc_00190F5C:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00190F63:
    goto loc_00190F6B;

loc_00190F65:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190F6B:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0B3C);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190F89:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7414;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00190FAF:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00190FBB:
    if (CMP_NE(LO8(eax), 1)) goto loc_00190FC8; /* jne: not equal / not zero */

loc_00190FBF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00190FC6:
    goto loc_00190FCE;

loc_00190FC8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00190FCE:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0C78);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0B00);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00190FEC:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7418;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191012:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0019101E:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019102B; /* jne: not equal / not zero */

loc_00191022:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191029:
    goto loc_00191031;

loc_0019102B:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191031:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0AEC);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0ACC);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0019104F:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F741C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191075:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191081:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019108E; /* jne: not equal / not zero */

loc_00191085:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019108C:
    goto loc_00191094;

loc_0019108E:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191094:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0AEC);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0AA8);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001910B2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7420;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001910D8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001910E4:
    if (CMP_NE(LO8(eax), 1)) goto loc_001910F1; /* jne: not equal / not zero */

loc_001910E8:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001910EF:
    goto loc_001910F7;

loc_001910F1:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001910F7:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0A98);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0A70);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191115:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7424;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0019113B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191147:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191154; /* jne: not equal / not zero */

loc_0019114B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191152:
    goto loc_0019115A;

loc_00191154:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019115A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0A98);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0A48);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191178:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    SET_LO8(ebx, 0); /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7428;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019119E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001911AA:
    if (CMP_NE(LO8(eax), 1)) goto loc_001911B7; /* jne: not equal / not zero */

loc_001911AE:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001911B5:
    goto loc_001911BD;

loc_001911B7:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001911BD:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3B0A30);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0A10);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001911DC:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    SET_LO8(ecx, MEM8(esi + 0x1D));
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 1);
    ebx = 0; /* xor self */
    MEM8(esi + 0x1D) = LO8(ecx);
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F73E8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191213:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0019121F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019122C; /* jne: not equal / not zero */

loc_00191223:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019122A:
    goto loc_00191232;

loc_0019122C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191232:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B09EC);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191250:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7430;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019126F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0019127B:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191288; /* jne: not equal / not zero */

loc_0019127F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191286:
    goto loc_0019128E;

loc_00191288:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019128E:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B09E0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001912AC:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7434;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001912CB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001912D7:
    if (CMP_NE(LO8(eax), 1)) goto loc_001912E4; /* jne: not equal / not zero */

loc_001912DB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001912E2:
    goto loc_001912EA;

loc_001912E4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001912EA:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B09CC);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191308:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7438;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191327:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191333:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191340; /* jne: not equal / not zero */

loc_00191337:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0019133E:
    goto loc_00191346;

loc_00191340:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191346:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B09BC);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191364:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F743C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191383:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0019138F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019139C; /* jne: not equal / not zero */

loc_00191393:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019139A:
    goto loc_001913A2;

loc_0019139C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001913A2:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B09AC);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001913C0:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7440;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001913DF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001913EB:
    if (CMP_NE(LO8(eax), 1)) goto loc_001913F8; /* jne: not equal / not zero */

loc_001913EF:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001913F6:
    goto loc_001913FE;

loc_001913F8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001913FE:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0994);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0019141C:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7444;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0019143B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191447:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191454; /* jne: not equal / not zero */

loc_0019144B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191452:
    goto loc_0019145A;

loc_00191454:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019145A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0984);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191478:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7468;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191497:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001914A3:
    if (CMP_NE(LO8(eax), 1)) goto loc_001914B0; /* jne: not equal / not zero */

loc_001914A7:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001914AE:
    goto loc_001914B6;

loc_001914B0:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001914B6:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0978);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001914D4:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F746C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001914F3:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001914FF:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019150C; /* jne: not equal / not zero */

loc_00191503:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019150A:
    goto loc_00191512;

loc_0019150C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191512:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B095C);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191530:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7470;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019154F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0019155B:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191568; /* jne: not equal / not zero */

loc_0019155F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191566:
    goto loc_0019156E;

loc_00191568:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019156E:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B094C);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0019158C:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7474;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001915AB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001915B7:
    if (CMP_NE(LO8(eax), 1)) goto loc_001915C4; /* jne: not equal / not zero */

loc_001915BB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001915C2:
    goto loc_001915CA;

loc_001915C4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001915CA:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0934);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001915E8:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7478;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191607:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191613:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191620; /* jne: not equal / not zero */

loc_00191617:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0019161E:
    goto loc_00191626;

loc_00191620:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191626:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0928);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191644:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x4A1E2C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191663:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0019166F:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019167C; /* jne: not equal / not zero */

loc_00191673:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019167A:
    goto loc_00191682;

loc_0019167C:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191682:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B090C);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001916A0:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7488;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001916BF:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001916CB:
    if (CMP_NE(LO8(eax), 1)) goto loc_001916D8; /* jne: not equal / not zero */

loc_001916CF:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001916D6:
    goto loc_001916DE;

loc_001916D8:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001916DE:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B08F0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001916FC:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F748C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0019171B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191727:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191734; /* jne: not equal / not zero */

loc_0019172B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191732:
    goto loc_0019173A;

loc_00191734:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019173A:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B08E0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191758:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F747C;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191777:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191783:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191790; /* jne: not equal / not zero */

loc_00191787:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0019178E:
    goto loc_00191796;

loc_00191790:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191796:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B08D0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001917B4:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7480;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001917D3:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001917DF:
    if (CMP_NE(LO8(eax), 1)) goto loc_001917EC; /* jne: not equal / not zero */

loc_001917E3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001917EA:
    goto loc_001917F2;

loc_001917EC:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001917F2:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B08B0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191810:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7484;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019182F:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0019183B:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191848; /* jne: not equal / not zero */

loc_0019183F:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191846:
    goto loc_0019184E;

loc_00191848:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019184E:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B08A0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0019186C:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7490;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0019188C:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191898:
    if (CMP_NE(LO8(eax), 1)) goto loc_001918A5; /* jne: not equal / not zero */

loc_0019189C:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001918A3:
    goto loc_001918AB;

loc_001918A5:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001918AB:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0890);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001918C9:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7448;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001918E9:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001918F5:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191902; /* jne: not equal / not zero */

loc_001918F9:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191900:
    goto loc_00191908;

loc_00191902:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191908:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B087C);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191926:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7458;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191946:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191952:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019195F; /* jne: not equal / not zero */

loc_00191956:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019195D:
    goto loc_00191965;

loc_0019195F:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191965:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0864);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191983:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F74A0;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001919A3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001919AF:
    if (CMP_NE(LO8(eax), 1)) goto loc_001919BC; /* jne: not equal / not zero */

loc_001919B3:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001919BA:
    goto loc_001919C2;

loc_001919BC:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001919C2:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0850);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001919E0:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F74B0;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191A00:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191A0C:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191A19; /* jne: not equal / not zero */

loc_00191A10:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191A17:
    goto loc_00191A1F;

loc_00191A19:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191A1F:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0838);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191A3D:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F74C0;
    MEM8(esi + 0x1C) = 3;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191A5D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191A69:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191A76; /* jne: not equal / not zero */

loc_00191A6D:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191A74:
    goto loc_00191A7C;

loc_00191A76:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191A7C:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0824);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191A9A:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F74CC;
    MEM8(esi + 0x1C) = 3;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191ABA:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191AC6:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191AD3; /* jne: not equal / not zero */

loc_00191ACA:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191AD1:
    goto loc_00191AD9;

loc_00191AD3:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191AD9:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B080C);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191AF7:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F74D8;
    MEM8(esi + 0x1C) = 3;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191B17:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191B23:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191B30; /* jne: not equal / not zero */

loc_00191B27:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191B2E:
    goto loc_00191B36;

loc_00191B30:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191B36:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B07F4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191B54:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F74E4;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191B74:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191B80:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191B8D; /* jne: not equal / not zero */

loc_00191B84:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191B8B:
    goto loc_00191B93;

loc_00191B8D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191B93:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B07DC);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191BB1:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F74F4;
    MEM8(esi + 0x1C) = 5;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191BD1:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191BDD:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191BEA; /* jne: not equal / not zero */

loc_00191BE1:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191BE8:
    goto loc_00191BF0;

loc_00191BEA:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191BF0:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B07C8);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191C0E:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7508;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191C2E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191C3A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191C47; /* jne: not equal / not zero */

loc_00191C3E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191C45:
    goto loc_00191C4D;

loc_00191C47:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191C4D:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B07B4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191C6B:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7518;
    MEM8(esi + 0x1C) = 4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191C8B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191C97:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191CA4; /* jne: not equal / not zero */

loc_00191C9B:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191CA2:
    goto loc_00191CAA;

loc_00191CA4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191CAA:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B07A0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191CC8:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7528;
    MEM8(esi + 0x1C) = 2;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191CE8:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191CF4:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191D01; /* jne: not equal / not zero */

loc_00191CF8:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191CFF:
    goto loc_00191D07;

loc_00191D01:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191D07:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B09F8);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0788);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191D25:
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = 0x3F7530;
    MEM8(esi + 0x1C) = 8;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191D45:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191D51:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191D5E; /* jne: not equal / not zero */

loc_00191D55:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191D5C:
    goto loc_00191D64;

loc_00191D5E:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191D64:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0774);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0754);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191D82:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7550;
    MEM8(esi + 0x1C) = 4;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191DA7:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191DAF:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191DBC; /* jne: not equal / not zero */

loc_00191DB3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191DBA:
    goto loc_00191DC3;

loc_00191DBC:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191DC3:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B0774);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0730);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191DE2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7560;
    MEM8(esi + 0x1C) = 4;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191E07:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191E0F:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191E1C; /* jne: not equal / not zero */

loc_00191E13:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191E1A:
    goto loc_00191E23;

loc_00191E1C:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191E23:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B0774);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0710);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191E42:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7570;
    MEM8(esi + 0x1C) = 4;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191E67:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191E6F:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191E7C; /* jne: not equal / not zero */

loc_00191E73:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191E7A:
    goto loc_00191E83;

loc_00191E7C:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191E83:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B0774);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B06EC);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191EA2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7580;
    MEM8(esi + 0x1C) = 3;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191EC7:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191ECF:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191EDC; /* jne: not equal / not zero */

loc_00191ED3:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191EDA:
    goto loc_00191EE3;

loc_00191EDC:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191EE3:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B0774);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B06C8);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191F02:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F758C;
    MEM8(esi + 0x1C) = 3;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191F27:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191F2F:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191F3C; /* jne: not equal / not zero */

loc_00191F33:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191F3A:
    goto loc_00191F43;

loc_00191F3C:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191F43:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B0774);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B06A4);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191F62:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F7598;
    MEM8(esi + 0x1C) = 3;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00191F87:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00191F8F:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191F9C; /* jne: not equal / not zero */

loc_00191F93:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00191F9A:
    goto loc_00191FA3;

loc_00191F9C:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00191FA3:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B0774);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0680);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00191FC2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75A4;
    MEM8(esi + 0x1C) = 4;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00191FE7:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00191FEF:
    if (CMP_NE(LO8(eax), 1)) goto loc_00191FFC; /* jne: not equal / not zero */

loc_00191FF3:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00191FFA:
    goto loc_00192003;

loc_00191FFC:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00192003:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B066C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0640);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00192022:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75B4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00192048:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00192054:
    if (CMP_NE(LO8(eax), 1)) goto loc_00192061; /* jne: not equal / not zero */

loc_00192058:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0019205F:
    goto loc_00192067;

loc_00192061:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00192067:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B066C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0604);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00192085:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75B8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001920AB:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001920B7:
    if (CMP_NE(LO8(eax), 1)) goto loc_001920C4; /* jne: not equal / not zero */

loc_001920BB:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001920C2:
    goto loc_001920CA;

loc_001920C4:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001920CA:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B066C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B05D8);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001920E8:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75BC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019210E:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0019211A:
    if (CMP_NE(LO8(eax), 1)) goto loc_00192127; /* jne: not equal / not zero */

loc_0019211E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00192125:
    goto loc_0019212D;

loc_00192127:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0019212D:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B066C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B05C0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0019214B:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75C0;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00192171:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0019217D:
    if (CMP_NE(LO8(eax), 1)) goto loc_0019218A; /* jne: not equal / not zero */

loc_00192181:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00192188:
    goto loc_00192190;

loc_0019218A:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00192190:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B066C);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0584);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001921AE:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75C4;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001921D4:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001921E0:
    if (CMP_NE(LO8(eax), 1)) goto loc_001921ED; /* jne: not equal / not zero */

loc_001921E4:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001921EB:
    goto loc_001921F3;

loc_001921ED:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001921F3:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0574);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0544);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00192211:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75C8;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00192237:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00192243:
    if (CMP_NE(LO8(eax), 1)) goto loc_00192250; /* jne: not equal / not zero */

loc_00192247:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019224E:
    goto loc_00192256;

loc_00192250:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_00192256:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0574);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B05C0);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_00192274:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75CC;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019229A:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3A4990);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001922A6:
    if (CMP_NE(LO8(eax), 1)) goto loc_001922B3; /* jne: not equal / not zero */

loc_001922AA:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001922B1:
    goto loc_001922B9;

loc_001922B3:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_001922B9:
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B0528);
    edi = edi + 0x10;
    PUSH32(esp, 0x3B0504);
    ebx = 0x3A4990;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001922D7:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esi = eax;
    MEM8(esi + 0x1E) = 2;
    MEM32(esi) = 0x3F75D0;
    MEM8(esi + 0x1C) = 3;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001922FC:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00192304:
    if (CMP_NE(LO8(eax), 1)) goto loc_00192313; /* jne: not equal / not zero */

loc_00192308:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0019230F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00192313:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
