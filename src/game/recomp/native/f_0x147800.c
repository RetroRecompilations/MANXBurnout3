#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00147800
 * Original: 0x00147800 - 0x00147CAE (1198 bytes, 261 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147800:
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x110) = ecx;
    MEM8(esi + 0x124) = 1;
    MEM32(esi) = eax;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x173);
    ebx = edx;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esi + 0x10;
    MEM32(esi + 0x120) = eax;
    PUSH32(esp, 0); sub_001464D0(); /* call 0x001464D0 */

loc_0014782D:
    PUSH32(esp, 0); sub_00243D95(); /* call 0x00243D95 */

loc_00147832:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, 0x3AE85C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0014784B:
    MEM8(esi + 0x12C) = LO8(ebx);
    edi = 0; /* xor self */
    MEM32(esi + 0x114) = edi;
    ecx = (uint32_t)(int32_t)SMEM16(0x40FBBA);
    eax = MEM32(0x40FBB8);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x40FBBC);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x40FBB8) = eax;
    MEM32(0x40FBBC) = ecx;
    edx = 0; /* xor self */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(esi + 0x127) = 0;
    esp = esp + 0xC;
    MEM8(esi + 0x128) = LO8(edx);
    eax = MEM32(0x40FBB8);
    edx = MEM32(0x40FBB8);
    ecx = MEM32(0x40FBBC);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(0x40FBB8) = eax;
    MEM32(0x40FBBC) = ecx;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001478D0; /* jne: not equal / not zero */

loc_001478C4:
    MEM32(esi + 0x114) = MEM32(esi + 0x114) | 0x20;
    eax = MEM32(0x40FBB8);

loc_001478D0:
    ecx = MEM32(0x40FBB8);
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x40FBBC);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x40FBBC) = ecx;
    edx = 0; /* xor self */
    ecx = 0x64;
    MEM32(0x40FBB8) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    if (CMP_AE(edx, 0x3C)) goto loc_00147908; /* jae: above or equal (unsigned >=) */

loc_00147901:
    MEM32(esi + 0x114) = MEM32(esi + 0x114) | 0x10;

loc_00147908:
    ebx = MEM32(esi + 0x114);
    MEM8(esi + 0x12B) = 0;
    MEM8(esi + 0x12A) = 0;
    ebx = ebx | 8;
    MEM32(esi + 0x114) = ebx;
    eax = MEM32(0x40FBB8);
    edx = MEM32(0x40FBB8);
    ecx = MEM32(0x40FBBC);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(0x40FBB8) = eax;
    MEM32(0x40FBBC) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0014795F; /* jge: greater or equal (signed >=) */

loc_00147959:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014795F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0xEC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(0x3B168C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esi + 0xEC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(0x40FBB8);
    ecx = MEM32(0x40FBB8);
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x40FBBC);
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(0x40FBB8) = eax;
    MEM32(0x40FBBC) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_001479C1; /* jge: greater or equal (signed >=) */

loc_001479BB:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001479C1:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi + 0x120);
    eax--;
    /* cmp eax, 0xA - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0xF0) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0xF0) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_A(eax, 0xA)) goto loc_00147CA8; /* ja: above (unsigned >) */

loc_001479EF:
    { uint32_t _jt = MEM32(eax * 4 + 0x147CB0); /* switch: 11 entries, 8 targets */
    if (_jt == 0x001479F6u) goto loc_001479F6;
    if (_jt == 0x00147A9Au) goto loc_00147A9A;
    if (_jt == 0x00147AFCu) goto loc_00147AFC;
    if (_jt == 0x00147B3Eu) goto loc_00147B3E;
    if (_jt == 0x00147B5Bu) goto loc_00147B5B;
    if (_jt == 0x00147B7Fu) goto loc_00147B7F;
    if (_jt == 0x00147C49u) goto loc_00147C49;
    if (_jt == 0x00147CA1u) goto loc_00147CA1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001479F6:
    xmm0.f[0] = MEMF(0x40FBD0); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBC0); /* movss */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBE4); /* movss */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBE0); /* movss */
    eax = 0x3AE850;

loc_00147A33:
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00147A40:
    MEM32(esp + 8) = eax;
    PUSH32(esp, edi);
    ebx = esp + 0xC;
    eax = 0x40B7F4;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_00147A57:
    MEM32(esi + 0xD0) = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00147A66:
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0);
    ebx = esp + 0xC;
    eax = 0x40B7F4;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_00147A7E:
    MEM32(esi + 0xCC) = eax;
    xmm0.f[0] = MEMF(0x40FC68); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00147A9A:
    xmm0.f[0] = MEMF(0x40FBD8); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBC8); /* movss */

loc_00147AB2:
    eax = esp + 0x10;
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xD0) = edi;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00147AC9:
    MEM32(esp + 8) = eax;
    PUSH32(esp, edi);
    ebx = esp + 0xC;
    eax = 0x40B7F4;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_00147AE0:
    MEM32(esi + 0xCC) = eax;
    xmm0.f[0] = MEMF(0x40FBCC); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00147AFC:
    xmm0.f[0] = MEMF(0x40FBD4); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBC4); /* movss */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBEC); /* movss */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBE8); /* movss */
    eax = 0x3AE844;
    goto loc_00147A33;

loc_00147B3E:
    xmm0.f[0] = MEMF(0x40FBDC); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBCC); /* movss */
    goto loc_00147AB2;

loc_00147B5B:
    MEM32(esi + 0x114) = MEM32(esi + 0x114) & 0xFFFFFFF7u;
    xmm0.f[0] = MEMF(0x40FBD4); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBC4); /* movss */
    goto loc_00147C5C;

loc_00147B7F:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC2A8); /* movss */
    MEMF(esi + 0x104) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC2B0); /* movss */
    PUSH32(esp, edi);
    ebx = 0x39C770;
    eax = 0x40B7F4;
    MEMF(esi + 0x10C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_00147BC7:
    MEM32(esi + 0xD0) = eax;
    PUSH32(esp, 0);
    ebx = 0x39C778;
    eax = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_00147BDE:
    MEM32(esi + 0xCC) = eax;
    edx = (uint32_t)(int32_t)SMEM16(0x40FBBA);
    eax = MEM32(0x40FBB8);
    ecx = MEM32(0x40FBBC);
    eax = eax << 0x10;
    eax = eax + edx;
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x40FBB8) = eax;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x3EC2A4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x3EC2A4)); }
    eax = MEM32(0x4A1DC8);
    MEM32(0x40FBBC) = ecx;
    edi = 3;
    ecx = MEM32(esi + 0x114);
    ecx = ecx & 0xFFFFFFF8u;
    MEM32(esi + 0x114) = ecx;
    MEM8(esi + 0x129) = LO8(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    if (TEST_NZ(edx, edx)) goto loc_00147C41; /* jne: not equal / not zero */

loc_00147C38:
    ecx = ecx | 7;
    MEM32(esi + 0x114) = ecx;

loc_00147C41:
    MEM32(0x4A1DC8) = MEM32(0x4A1DC8) + 1;
    goto loc_00147C90;

loc_00147C49:
    xmm0.f[0] = MEMF(0x40FBDC); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_00147C5C:
    eax = esp + 0x10;
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xD0) = edi;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00147C73:
    MEM32(esp + 8) = eax;
    PUSH32(esp, edi);
    ebx = esp + 0xC;
    eax = 0x40B7F4;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_00147C8A:
    MEM32(esi + 0xCC) = eax;

loc_00147C90:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00147CA1:
    edi = esi;
    PUSH32(esp, 0); sub_00147CE0(); /* call 0x00147CE0 */

loc_00147CA8:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
