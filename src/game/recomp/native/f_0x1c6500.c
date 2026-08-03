#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001C6500
 * Original: 0x001C6500 - 0x001C6654 (340 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001C6500:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_001C664D; /* je: equal / zero */

loc_001C653A:
    ecx = esp + 0x40;
    edx = esp + 0x60;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    /* nop */

loc_001C6550:
    eax = MEM32(ebx + 0x40);
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x2C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0xC); /* mulss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = ecx;
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x24); /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x2C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x74) = edx;
    xmm0.f[0] = MEMF(ebx + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x18), 16); /* movaps */
    {
    float _d0 = xmm1.f[0];
    float _s0 = xmm0.f[0];
    float _d1 = xmm1.f[1];
    float _s1 = xmm0.f[1];
    float _d2 = xmm1.f[2];
    float _s2 = xmm0.f[2];
    float _d3 = xmm1.f[3];
    float _s3 = xmm0.f[3];
    xmm1.f[0] = _d0 * _s0;
    xmm1.f[1] = _d1 * _s1;
    xmm1.f[2] = _d2 * _s2;
    xmm1.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = MEMF((edi) + 0);
    float _d1 = xmm0.f[1];
    float _s1 = MEMF((edi) + 4);
    float _d2 = xmm0.f[2];
    float _s2 = MEMF((edi) + 8);
    float _d3 = xmm0.f[3];
    float _s3 = MEMF((edi) + 12);
    xmm0.f[0] = (_d0 < _s0 ? _d0 : _s0);
    xmm0.f[1] = (_d1 < _s1 ? _d1 : _s1);
    xmm0.f[2] = (_d2 < _s2 ? _d2 : _s2);
    xmm0.f[3] = (_d3 < _s3 ? _d3 : _s3);
    } /* minps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x84) = ecx;
    ecx = ebx + 0x28;
    MEM32(esp + 0x88) = edx;
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0x5C);
    if (getenv("B3_VERTEX_TRACE")) {
        static unsigned batch_trace_count;
        if (batch_trace_count++ < 16)
            fprintf(stderr,
                    "[BATCH] item=%08X cb=%08X xywh={%g,%g,%g,%g} "
                    "local={%g,%g,%g,%g} parent=%08X "
                    "parent_xform={%g,%g,%g,%g} parent_rgba={%g,%g,%g,%g} "
                    "data={%g,%g,%08X,%08X} src={flag:%u,index:%u,dim:%u,%u}\n",
                    ebx, MEM32(ebx + 0x44),
                    MEMF(esp + 0x70), MEMF(esp + 0x74),
                    MEMF(esp + 0x78), MEMF(esp + 0x7C),
                    MEMF(ebx + 8), MEMF(ebx + 0xC),
                    MEMF(ebx + 0x10), MEMF(ebx + 0x14),
                    MEM32(ebx + 0x40),
                    MEMF(MEM32(ebx + 0x40) + 0x20),
                    MEMF(MEM32(ebx + 0x40) + 0x24),
                    MEMF(MEM32(ebx + 0x40) + 0x28),
                    MEMF(MEM32(ebx + 0x40) + 0x2C),
                    MEMF(MEM32(ebx + 0x40) + 0x30),
                    MEMF(MEM32(ebx + 0x40) + 0x34),
                    MEMF(MEM32(ebx + 0x40) + 0x38),
                    MEMF(MEM32(ebx + 0x40) + 0x3C),
                    MEMF(ebx + 0x28),
                    MEMF(ebx + 0x2C), MEM32(ebx + 0x38),
                    MEM32(ebx + 0x3C),
                    MEM32(ebx + 0x38) ? MEM8(MEM32(ebx + 0x38) + 0x61) : 0,
                    MEM32(ebx + 0x38) ? MEM32(MEM32(ebx + 0x38) + 0x40) : 0,
                    MEM32(ebx + 0x38) ? MEM32(MEM32(ebx + 0x38) +
                        MEM32(MEM32(ebx + 0x38) + 0x40) * 0x20 + 0x18) : 0,
                    MEM32(ebx + 0x38) ? MEM32(MEM32(ebx + 0x38) +
                        MEM32(MEM32(ebx + 0x38) + 0x40) * 0x20 + 0x1C) : 0);
    }
    { uint32_t _icall_esp = g_esp;
    uint32_t _icall_item = ebx;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    MEM32(esp + 0x94) = eax;
    /* This callback is cdecl with two arguments. On a missing target leave
     * those arguments for loc_001C6640's add esp,8, just as a real callee
     * would after popping only its return address. */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0x44), _icall_esp - 8); /* indirect call */
    if (getenv("B3_VERTEX_TRACE")) {
        static unsigned batch_return_trace_count;
        if (batch_return_trace_count++ < 24)
            fprintf(stderr,
                    "[BATCH-RETURN] item=%08X next=%08X ebx=%08X "
                    "esp_before=%08X esp_after=%08X\n",
                    _icall_item, MEM32(_icall_item), ebx,
                    _icall_esp, esp);
    }
    }

loc_001C6640:
    ebx = MEM32(ebx);
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_001C6550; /* jne: not equal / not zero */

loc_001C664D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
