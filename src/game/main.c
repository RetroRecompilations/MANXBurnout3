/**
 * Burnout 3: Takedown - Recompiled Game Entry Point
 *
 * This is the Windows executable that hosts the recompiled game code.
 * It performs the following initialization sequence:
 *
 * 1. Load the original XBE file from disk
 * 2. Initialize the Xbox memory layout (map data sections to original VAs)
 * 3. Initialize the Xbox kernel replacement layer
 * 4. Initialize graphics (D3D8→D3D11)
 * 5. Initialize audio (DirectSound→XAudio2)
 * 6. Initialize input (XPP→XInput)
 * 7. Call the game's original entry point (recompiled)
 *
 * The recompiled game code lives in separate translation units generated
 * from the original x86 machine code. Each function is translated to C
 * with the same calling convention and register usage.
 */

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <dbghelp.h>
#include <xinput.h>
#pragma comment(lib, "dbghelp.lib")
#pragma comment(lib, "xinput.lib")

/* Compatibility layers */
#include "../kernel/kernel.h"
#include "../kernel/xbox_memory_layout.h"
#include "../d3d/d3d8_xbox.h"
#include "../audio/dsound_xbox.h"
#include "../input/xinput_xbox.h"

/* Recompiled code */
#include "recomp/gen/recomp_funcs.h"

/* ── Crash diagnostics + SEH simulation ────────────────────── */

/*
 * Mini x86-64 instruction decoder for VEH fault skipping.
 *
 * When the RenderWare engine probes memory past 64MB, the real Xbox
 * dispatches the fault through SEH. The game's __try/__except catches it
 * to determine available RAM. We simulate this by decoding the faulting
 * instruction, setting the destination register to 0 (as if reading from
 * unmapped memory), and advancing RIP past the instruction.
 */
static int g_seh_skip_count = 0;

static BOOL veh_skip_faulting_read(PCONTEXT ctx)
{
    uint8_t *rip = (uint8_t *)ctx->Rip;
    int prefix_len = 0;
    int rex_w = 0, rex_r = 0, rex_x = 0, rex_b = 0;

    /* Map register index to CONTEXT field */
    DWORD64 *gpr[] = {
        &ctx->Rax, &ctx->Rcx, &ctx->Rdx, &ctx->Rbx,
        &ctx->Rsp, &ctx->Rbp, &ctx->Rsi, &ctx->Rdi,
        &ctx->R8,  &ctx->R9,  &ctx->R10, &ctx->R11,
        &ctx->R12, &ctx->R13, &ctx->R14, &ctx->R15
    };

    /* Parse legacy prefixes (segment, operand size, etc.) */
    while (prefix_len < 4) {
        uint8_t b = rip[prefix_len];
        if (b == 0x66 || b == 0x67 || b == 0xF2 || b == 0xF3 ||
            b == 0x2E || b == 0x3E || b == 0x26 || b == 0x36 ||
            b == 0x64 || b == 0x65) {
            prefix_len++;
        } else {
            break;
        }
    }

    /* Parse REX prefix (0x40-0x4F) */
    if ((rip[prefix_len] & 0xF0) == 0x40) {
        uint8_t rex = rip[prefix_len];
        rex_w = (rex >> 3) & 1;
        rex_r = (rex >> 2) & 1;
        rex_x = (rex >> 1) & 1;
        rex_b = rex & 1;
        prefix_len++;
    }

    uint8_t *op = rip + prefix_len;

    /* Calculate ModRM displacement length */
    /* Returns total bytes for modrm + optional SIB + displacement */
    #define MODRM_LEN(modrm_byte) do { \
        int _mod = ((modrm_byte) >> 6) & 3; \
        int _rm  = ((modrm_byte) & 7) | (rex_b << 3); \
        modrm_total = 1; /* modrm byte itself */ \
        if (_mod == 0 && (_rm & 7) == 4) modrm_total++; /* SIB */ \
        if (_mod == 0 && (_rm & 7) == 5) modrm_total += 4; /* RIP-rel disp32 */ \
        if (_mod == 1) { modrm_total++; if ((_rm & 7) == 4) modrm_total++; } \
        if (_mod == 2) { modrm_total += 4; if ((_rm & 7) == 4) modrm_total++; } \
        if (_mod == 3) modrm_total = 1; /* reg-reg, shouldn't fault */ \
    } while(0)

    int modrm_total = 0;
    int reg_idx;

    /* 8B /r : mov r32/r64, r/m32/r/m64 */
    if (op[0] == 0x8B) {
        reg_idx = ((op[1] >> 3) & 7) | (rex_r << 3);
        MODRM_LEN(op[1]);
        *gpr[reg_idx] = 0;
        ctx->Rip += prefix_len + 1 + modrm_total;
        return TRUE;
    }

    /* 8A /r : mov r8, r/m8 */
    if (op[0] == 0x8A) {
        reg_idx = ((op[1] >> 3) & 7) | (rex_r << 3);
        MODRM_LEN(op[1]);
        /* Zero just the low byte of the register */
        *gpr[reg_idx] &= ~(DWORD64)0xFF;
        ctx->Rip += prefix_len + 1 + modrm_total;
        return TRUE;
    }

    /* 0F B6 /r : movzx r32, r/m8 */
    /* 0F B7 /r : movzx r32, r/m16 */
    /* 0F BE /r : movsx r32, r/m8 */
    /* 0F BF /r : movsx r32, r/m16 */
    if (op[0] == 0x0F && (op[1] == 0xB6 || op[1] == 0xB7 ||
                           op[1] == 0xBE || op[1] == 0xBF)) {
        reg_idx = ((op[2] >> 3) & 7) | (rex_r << 3);
        MODRM_LEN(op[2]);
        *gpr[reg_idx] = 0;
        ctx->Rip += prefix_len + 2 + modrm_total;
        return TRUE;
    }

    /* 3B /r : cmp r32, r/m32 - set flags as if comparing with 0 */
    if (op[0] == 0x3B) {
        reg_idx = ((op[1] >> 3) & 7) | (rex_r << 3);
        MODRM_LEN(op[1]);
        /* Set ZF=0, CF based on comparison with 0 */
        DWORD64 val = *gpr[reg_idx];
        ctx->EFlags &= ~(0x8D5);  /* clear OF, SF, ZF, AF, PF, CF */
        if (val == 0) ctx->EFlags |= 0x40;  /* ZF */
        if (val & (rex_w ? 0x8000000000000000ULL : 0x80000000ULL))
            ctx->EFlags |= 0x80;  /* SF */
        ctx->Rip += prefix_len + 1 + modrm_total;
        return TRUE;
    }

    /* 39 /r : cmp r/m32, r32 - set flags as if mem=0 */
    if (op[0] == 0x39) {
        reg_idx = ((op[1] >> 3) & 7) | (rex_r << 3);
        MODRM_LEN(op[1]);
        DWORD64 val = *gpr[reg_idx];
        ctx->EFlags &= ~(0x8D5);
        if (val == 0) ctx->EFlags |= 0x40;  /* ZF: 0 == val */
        /* 0 - val: CF set if val != 0 */
        if (val != 0) ctx->EFlags |= 0x01;  /* CF */
        /* SF: sign of (0 - val) */
        DWORD64 result = (rex_w ? (DWORD64)(-(int64_t)val) : (DWORD64)(uint32_t)(-(int32_t)(uint32_t)val));
        if (result & (rex_w ? 0x8000000000000000ULL : 0x80000000ULL))
            ctx->EFlags |= 0x80;  /* SF */
        ctx->Rip += prefix_len + 1 + modrm_total;
        return TRUE;
    }

    /* SSE instructions with memory operands.
     * These use legacy prefixes (F3/F2/66/none) + 0F opcode + modrm.
     * For faulting memory reads, zero the destination XMM register
     * and advance RIP to let execution continue.
     */
    {
        int has_f3 = 0, has_f2 = 0, has_66 = 0;
        for (int i = 0; i < prefix_len; i++) {
            if (rip[i] == 0xF3) has_f3 = 1;
            if (rip[i] == 0xF2) has_f2 = 1;
            if (rip[i] == 0x66) has_66 = 1;
        }

        if (op[0] == 0x0F) {
            int is_sse_mem_read = 0;

            /* F3 0F xx: scalar single-precision */
            if (has_f3) {
                switch (op[1]) {
                case 0x10: /* movss xmm, m32 */
                case 0x58: /* addss xmm, m32 */
                case 0x59: /* mulss xmm, m32 */
                case 0x5C: /* subss xmm, m32 */
                case 0x5E: /* divss xmm, m32 */
                case 0x51: /* sqrtss xmm, m32 */
                case 0x5D: /* minss xmm, m32 */
                case 0x5F: /* maxss xmm, m32 */
                case 0x2A: /* cvtsi2ss xmm, r/m32 */
                case 0x2C: /* cvttss2si r32, xmm/m32 */
                case 0x2D: /* cvtss2si r32, xmm/m32 */
                    is_sse_mem_read = 1;
                    break;
                }
            }
            /* F2 0F xx: scalar double-precision */
            else if (has_f2) {
                switch (op[1]) {
                case 0x10: /* movsd xmm, m64 */
                case 0x58: /* addsd */
                case 0x59: /* mulsd */
                case 0x5C: /* subsd */
                case 0x5E: /* divsd */
                    is_sse_mem_read = 1;
                    break;
                }
            }
            /* 66 0F xx: packed double / integer */
            else if (has_66) {
                switch (op[1]) {
                case 0x28: /* movapd xmm, m128 */
                case 0x10: /* movupd xmm, m128 */
                case 0x6F: /* movdqa xmm, m128 */
                    is_sse_mem_read = 1;
                    break;
                }
            }
            /* No prefix: packed single-precision */
            else {
                switch (op[1]) {
                case 0x28: /* movaps xmm, m128 */
                case 0x10: /* movups xmm, m128 */
                case 0x58: /* addps xmm, m128 */
                case 0x59: /* mulps xmm, m128 */
                case 0x5C: /* subps xmm, m128 */
                case 0x5E: /* divps xmm, m128 */
                    is_sse_mem_read = 1;
                    break;
                }
            }

            if (is_sse_mem_read) {
                int xmm_idx = ((op[2] >> 3) & 7) | (rex_r << 3);
                MODRM_LEN(op[2]);

                /* For cvttss2si/cvtss2si, dest is GPR, not XMM */
                if ((has_f3 && (op[1] == 0x2C || op[1] == 0x2D))) {
                    *gpr[xmm_idx] = 0;
                } else if (xmm_idx < 16) {
                    M128A *xmm = &ctx->Xmm0 + xmm_idx;
                    xmm->Low = 0;
                    xmm->High = 0;
                }
                ctx->Rip += prefix_len + 2 + modrm_total;
                return TRUE;
            }
        }
    }

    #undef MODRM_LEN
    return FALSE;
}

/**
 * Skip a faulting write instruction by advancing RIP past it.
 * Unlike read skips, write skips don't need to set a register.
 * Handles common store instructions: mov r/m, r and mov r/m, imm.
 */
static BOOL veh_skip_faulting_write(PCONTEXT ctx)
{
    uint8_t *rip = (uint8_t *)ctx->Rip;
    int prefix_len = 0;
    int rex_w = 0, rex_r = 0, rex_b = 0;

    /* Parse legacy prefixes */
    while (prefix_len < 4) {
        uint8_t b = rip[prefix_len];
        if (b == 0x66 || b == 0x67 || b == 0xF2 || b == 0xF3 ||
            b == 0x2E || b == 0x3E || b == 0x26 || b == 0x36 ||
            b == 0x64 || b == 0x65) {
            prefix_len++;
        } else {
            break;
        }
    }

    /* Parse REX prefix */
    if ((rip[prefix_len] & 0xF0) == 0x40) {
        uint8_t rex = rip[prefix_len];
        rex_w = (rex >> 3) & 1;
        rex_r = (rex >> 2) & 1;
        rex_b = rex & 1;
        prefix_len++;
    }

    uint8_t *op = rip + prefix_len;
    int modrm_total = 0;

    #define MODRM_LEN(modrm_byte) do { \
        int _mod = ((modrm_byte) >> 6) & 3; \
        int _rm  = ((modrm_byte) & 7) | (rex_b << 3); \
        modrm_total = 1; \
        if (_mod == 0 && (_rm & 7) == 4) modrm_total++; \
        if (_mod == 0 && (_rm & 7) == 5) modrm_total += 4; \
        if (_mod == 1) { modrm_total++; if ((_rm & 7) == 4) modrm_total++; } \
        if (_mod == 2) { modrm_total += 4; if ((_rm & 7) == 4) modrm_total++; } \
        if (_mod == 3) modrm_total = 1; \
    } while(0)

    (void)rex_r; (void)rex_w;

    /* 89 /r : mov r/m32, r32 */
    if (op[0] == 0x89) {
        MODRM_LEN(op[1]);
        ctx->Rip += prefix_len + 1 + modrm_total;
        return TRUE;
    }

    /* 88 /r : mov r/m8, r8 */
    if (op[0] == 0x88) {
        MODRM_LEN(op[1]);
        ctx->Rip += prefix_len + 1 + modrm_total;
        return TRUE;
    }

    /* C7 /0 id : mov r/m32, imm32 */
    if (op[0] == 0xC7) {
        MODRM_LEN(op[1]);
        ctx->Rip += prefix_len + 1 + modrm_total + 4;
        return TRUE;
    }

    /* C6 /0 ib : mov r/m8, imm8 */
    if (op[0] == 0xC6) {
        MODRM_LEN(op[1]);
        ctx->Rip += prefix_len + 1 + modrm_total + 1;
        return TRUE;
    }

    /* 66 89 /r : mov r/m16, r16 (handled via 0x66 prefix + 89) */
    /* Already handled above since 0x66 is parsed as prefix */

    /* 0F 11 /r : movups xmm, m128 (SSE store) */
    if (op[0] == 0x0F && op[1] == 0x11) {
        MODRM_LEN(op[2]);
        ctx->Rip += prefix_len + 2 + modrm_total;
        return TRUE;
    }

    /* F3 0F 11 /r : movss m32, xmm (SSE scalar store) */
    {
        int has_f3 = 0;
        for (int i = 0; i < prefix_len; i++) {
            if (rip[i] == 0xF3) has_f3 = 1;
        }
        if (has_f3 && op[0] == 0x0F && op[1] == 0x11) {
            MODRM_LEN(op[2]);
            ctx->Rip += prefix_len + 2 + modrm_total;
            return TRUE;
        }

        /* F3 A4 : rep movsb (inline memcpy)
         * F3 A5 : rep movsd (inline memcpy, 4-byte)
         * F3 AA : rep stosb (inline memset)
         * F3 AB : rep stosd (inline memset, 4-byte)
         *
         * Cancel remaining iterations: set RCX=0, advance RSI/RDI past
         * the unmapped region. The rep prefix with RCX=0 is a no-op,
         * so the CPU will naturally advance RIP past the instruction.
         * Assumes DF=0 (CLD), which is standard for MSVC code.
         */
        if (has_f3 && (op[0] == 0xA4 || op[0] == 0xA5)) {
            /* rep movsb / rep movsd */
            uint64_t stride = (op[0] == 0xA5) ? 4 : 1;
            uint64_t remaining = ctx->Rcx * stride;
            ctx->Rcx = 0;
            ctx->Rsi += remaining;
            ctx->Rdi += remaining;
            return TRUE;
        }
        if (has_f3 && (op[0] == 0xAA || op[0] == 0xAB)) {
            /* rep stosb / rep stosd */
            uint64_t stride = (op[0] == 0xAB) ? 4 : 1;
            uint64_t remaining = ctx->Rcx * stride;
            ctx->Rcx = 0;
            ctx->Rdi += remaining;
            return TRUE;
        }
    }

    #undef MODRM_LEN
    return FALSE;
}

static LONG WINAPI crash_veh(PEXCEPTION_POINTERS info)
{
    /* Catch stack overflow early - can't do much except report and die */
    if (info->ExceptionRecord->ExceptionCode == EXCEPTION_STACK_OVERFLOW) {
        fprintf(stderr, "\n=== NATIVE STACK OVERFLOW at RIP=0x%p ===\n",
                info->ExceptionRecord->ExceptionAddress);
        fprintf(stderr, "  RSP=0x%p  Xbox ESP=0x%08X\n",
                (void*)info->ContextRecord->Rsp, g_esp);
        fflush(stderr);
        ExitProcess(42);
    }

    if (info->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t fault_addr = info->ExceptionRecord->ExceptionInformation[1];
        int is_write = (int)info->ExceptionRecord->ExceptionInformation[0];

        /*
         * Guard: reject native addresses below the Xbox memory base.
         * These are null pointer dereferences or wild pointers that, when
         * offset-subtracted, wrap to large Xbox VAs (e.g., native 0x0
         * wraps to Xbox VA 0xF0000000 which looks like NV2A GPU space).
         */
        if (fault_addr < (uintptr_t)g_xbox_mem_offset) {
            /* Fall through to crash reporting at bottom of handler */
            goto veh_crash_report;
        }

        /*
         * Guard: 32-bit overflow addresses.
         *
         * When recompiled code computes an Xbox VA >= 0xFFFFFFFF and does
         * a multi-byte access (e.g., MEM32(0xFFFFFFFF)), the read spans
         * bytes 0xFFFFFFFF..0x100000002. The CPU faults at the page
         * boundary (native offset 0x100000000+), which exceeds 32 bits.
         * Converting back to Xbox VA wraps to 0, confusing downstream
         * handlers (NV2A, mirror, etc.).
         *
         * Skip these directly - they're sentinel/NULL pointer accesses.
         */
        if ((fault_addr - (uintptr_t)g_xbox_mem_offset) >= 0x100000000ULL) {
            if (!is_write) {
                if (veh_skip_faulting_read(info->ContextRecord)) {
                    static int overflow_skip_count = 0;
                    overflow_skip_count++;
                    if (overflow_skip_count <= 5 || (overflow_skip_count % 50000) == 0) {
                        fprintf(stderr, "  [SKIP-OVERFLOW #%d] native=%p (32-bit VA overflow)\n",
                                overflow_skip_count, (void*)fault_addr);
                        fflush(stderr);
                    }
                    return EXCEPTION_CONTINUE_EXECUTION;
                }
            } else {
                if (veh_skip_faulting_write(info->ContextRecord)) {
                    return EXCEPTION_CONTINUE_EXECUTION;
                }
            }
            goto veh_crash_report;
        }

        /*
         * NV2A GPU / hardware I/O address space (0xF0000000+):
         *   0xF0000000-0xF3FFFFFF  GPU framebuffer / texture memory
         *   0xF4000000-0xFCFFFFFF  AGP aperture, push buffer DMA, misc HW
         *   0xFD000000-0xFDFFFFFF  GPU MMIO registers
         *   0xFE000000+            Flash ROM, misc
         *
         * On Xbox, the NV2A GPU and other hardware is mapped above 0xF0000000.
         * The statically-linked D3D8 library accesses these during init and
         * at runtime for push buffer submission, register queries, etc.
         *
         * We map pages on demand filled with zeros. For registers, zero
         * means "feature not present" (safe default). For framebuffer and
         * push buffers, the writes are silently absorbed (no real GPU).
         */
        {
            uint32_t fault_xbox_va = (uint32_t)(fault_addr - g_xbox_mem_offset);
            if (fault_xbox_va >= 0xF0000000u) {
                static int nv2a_page_count = 0;
                uintptr_t alloc_base = fault_addr & ~(uintptr_t)0xFFFF; /* 64KB align */
                LPVOID result = VirtualAlloc((LPVOID)alloc_base, 0x10000,
                                            MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
                if (!result) {
                    result = VirtualAlloc((LPVOID)alloc_base, 0x10000,
                                         MEM_COMMIT, PAGE_READWRITE);
                }
                if (result) {
                    memset(result, 0, 0x10000);
                    nv2a_page_count++;
                    if (nv2a_page_count <= 20 || (nv2a_page_count % 100) == 0) {
                        const char *region = (fault_xbox_va >= 0xFD000000u) ? "reg" :
                                              (fault_xbox_va >= 0xF4000000u) ? "io" : "fb";
                        fprintf(stderr, "  [NV2A] GPU %s page 0x%08X (%s) [page #%d]\n",
                                region, fault_xbox_va & 0xFFFF0000u,
                                is_write ? "W" : "R", nv2a_page_count);
                        fflush(stderr);
                    }
                    return EXCEPTION_CONTINUE_EXECUTION;
                }
            }
        }

        /*
         * Xbox mirror memory mapping (0x80000000 and 0xC0000000 ranges).
         *
         * On Xbox, physical RAM is accessible through three virtual address ranges:
         *   0x00000000-0x03FFFFFF  Cached (normal CPU access)
         *   0x80000000-0x83FFFFFF  Cached mirror
         *   0xC0000000-0xC3FFFFFF  Uncached / write-combined (GPU-coherent)
         *
         * All three map to the same 64MB of physical DRAM. The D3D library uses
         * the uncached mapping for push buffers, vertex data, and other GPU
         * resources that need write-combined access for DMA coherency.
         *
         * We handle faults in this range on-demand: allocate pages and copy the
         * initial data from the cached mapping. Since we replace D3D at a higher
         * level, the push buffer data written here is not consumed by real GPU
         * hardware, but the memory must be writable for the D3D code to function.
         */
        {
            uint32_t fault_xbox_va = (uint32_t)(fault_addr - g_xbox_mem_offset);
            if ((fault_xbox_va >= 0x80000000u && fault_xbox_va < 0x84000000u) ||
                (fault_xbox_va >= 0xC0000000u && fault_xbox_va < 0xC4000000u)) {
                static int uncached_page_count = 0;
                uintptr_t alloc_base = fault_addr & ~(uintptr_t)0xFFFF; /* 64KB align */
                LPVOID result = VirtualAlloc((LPVOID)alloc_base, 0x10000,
                                            MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
                if (!result) {
                    result = VirtualAlloc((LPVOID)alloc_base, 0x10000,
                                         MEM_COMMIT, PAGE_READWRITE);
                }
                if (result) {
                    /* Copy initial data from cached mapping as baseline */
                    uint32_t page_xbox_va = (uint32_t)(alloc_base - g_xbox_mem_offset);
                    uint32_t cached_va = (page_xbox_va >= 0xC0000000u)
                        ? page_xbox_va - 0xC0000000u
                        : page_xbox_va - 0x80000000u;
                    if (cached_va < XBOX_TOTAL_RAM) {
                        void *src = (void *)((uintptr_t)cached_va + g_xbox_mem_offset);
                        memcpy(result, src, 0x10000);
                    }
                    uncached_page_count++;
                    if (uncached_page_count <= 20 || (uncached_page_count % 100) == 0) {
                        fprintf(stderr, "  [UNCACHED] Xbox VA 0x%08X (%s) [page #%d]\n",
                                page_xbox_va, is_write ? "W" : "R", uncached_page_count);
                        fflush(stderr);
                    }
                    return EXCEPTION_CONTINUE_EXECUTION;
                }
            }
        }

        /*
         * Fallback mirror mapping for addresses past the pre-mapped views.
         *
         * The base 64 MB region and XBOX_NUM_MIRRORS mirror views are mapped
         * at init time via CreateFileMapping + MapViewOfFileEx (true aliases).
         * If a fault occurs past the pre-mapped range, map an additional 64 MB
         * view on demand. This handles edge cases where the memory walker or
         * init code accesses beyond the pre-mapped 1+ GB.
         */
        {
            uintptr_t xbox_region_end = (uintptr_t)(XBOX_HEAP_BASE + XBOX_HEAP_SIZE +
                                                     XBOX_GUARD_SIZE) + g_xbox_mem_offset;
            if (fault_addr >= xbox_region_end) {
                uint32_t fault_xbox_va = (uint32_t)(fault_addr - g_xbox_mem_offset);

                /* Map mirrors for all RAM aliases below the NV2A MMIO range.
                 * Xbox memory map: 0x00-0x03 = cached RAM, 0x80-0x83 = uncached,
                 * 0xC0-0xC3 = write-combined, 0xD0+ = contiguous GPU aperture.
                 * All map to the same 64 MB physical RAM (modulo 0x04000000). */
                if (fault_xbox_va < 0xF0000000u) {
                    HANDLE hMap = xbox_GetMappingHandle();
                    if (hMap) {
                        /* Map a full 64 MB view aligned to the mirror boundary */
                        uint32_t mirror_idx = fault_xbox_va / XBOX_TOTAL_RAM;
                        uintptr_t view_base = (uintptr_t)g_xbox_mem_offset +
                                              (uintptr_t)mirror_idx * XBOX_TOTAL_RAM;
                        LPVOID result = MapViewOfFileEx(
                            hMap, FILE_MAP_ALL_ACCESS, 0, 0,
                            XBOX_TOTAL_RAM, (LPVOID)view_base);
                        if (result) {
                            static int fallback_mirror_count = 0;
                            fallback_mirror_count++;
                            fprintf(stderr, "  [MIRROR-FALLBACK] view %d at %p "
                                    "(Xbox VA 0x%08X-0x%08X)\n",
                                    mirror_idx, result,
                                    mirror_idx * XBOX_TOTAL_RAM,
                                    (mirror_idx + 1) * XBOX_TOTAL_RAM);
                            fflush(stderr);
                            return EXCEPTION_CONTINUE_EXECUTION;
                        } else {
                            fprintf(stderr, "  [MIRROR-FAIL] view %d at %p "
                                    "(Xbox VA 0x%08X, error %lu)\n",
                                    mirror_idx, (void*)view_base,
                                    fault_xbox_va, GetLastError());
                            fflush(stderr);
                        }
                    }
                }
            }
        }

        /*
         * Bounded fault-skip for isolated bad reads.
         *
         * The Xbox D3D8 code (statically linked) and RW Xbox display driver
         * read from internal D3D structures that don't exist in our D3D11 shim.
         * Rather than crashing on each bad read, decode the faulting instruction,
         * return 0 to the destination register, and advance RIP. This lets the
         * init code proceed and shows us the full call flow.
         *
         * Limited to MAX_FAULT_SKIPS to avoid infinite loops.
         * Writes still crash immediately (they indicate a real problem).
         */
        #define MAX_FAULT_SKIPS 10000000  /* 10M: rendering loop produces many skips */
        if (!is_write) {
            static int fault_skip_count = 0;
            if (fault_skip_count < MAX_FAULT_SKIPS) {
                if (veh_skip_faulting_read(info->ContextRecord)) {
                    fault_skip_count++;
                    if (fault_skip_count <= 50 || (fault_skip_count % 10000) == 0) {
                        HMODULE fmod = NULL;
                        GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
                                          (LPCSTR)info->ExceptionRecord->ExceptionAddress, &fmod);
                        fprintf(stderr, "  [SKIP-READ #%d] Xbox VA 0x%08X native=%p at RVA 0x%llX "
                                        "(eax=0x%08X ecx=0x%08X edx=0x%08X)\n",
                                fault_skip_count,
                                (uint32_t)(fault_addr - g_xbox_mem_offset),
                                (void *)fault_addr,
                                (unsigned long long)((uintptr_t)info->ExceptionRecord->ExceptionAddress - (uintptr_t)fmod),
                                g_eax, g_ecx, g_edx);
                        fflush(stderr);
                    }
                    return EXCEPTION_CONTINUE_EXECUTION;
                }
            }
        }

        /*
         * Skip writes to unmapped Xbox memory.
         *
         * The Xbox D3D8 library produces garbage internal structure pointers
         * because the NV2A GPU doesn't exist. RW engine code then tries to
         * read/write through these garbage pointers. Skip writes that are
         * outside all known mapped memory regions to let init continue.
         *
         * We also extend the read-skip to work universally below.
         */
        if (is_write) {
            static int write_skip_count = 0;
            if (write_skip_count < MAX_FAULT_SKIPS) {
                if (veh_skip_faulting_write(info->ContextRecord)) {
                    write_skip_count++;
                    uint32_t fault_xbox_va = (uint32_t)(fault_addr - g_xbox_mem_offset);
                    if (write_skip_count <= 50 || (write_skip_count % 10000) == 0) {
                        HMODULE fmod = NULL;
                        GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
                                          (LPCSTR)info->ExceptionRecord->ExceptionAddress, &fmod);
                        fprintf(stderr, "  [SKIP-WRITE #%d] Xbox VA 0x%08X at RVA 0x%llX "
                                        "(eax=0x%08X ecx=0x%08X edx=0x%08X)\n",
                                write_skip_count,
                                fault_xbox_va,
                                (unsigned long long)((uintptr_t)info->ExceptionRecord->ExceptionAddress - (uintptr_t)fmod),
                                g_eax, g_ecx, g_edx);
                        fflush(stderr);
                    }
                    return EXCEPTION_CONTINUE_EXECUTION;
                }
            }
        }

        /* Normal crash reporting */
        veh_crash_report:
        void *frames[32];
        USHORT count;
        HMODULE mod;
        char modname[MAX_PATH];
        uintptr_t base;

        fprintf(stderr, "\n=== VEH: Access violation at RIP=0x%p ===\n",
                info->ExceptionRecord->ExceptionAddress);
        fprintf(stderr, "  %s address 0x%p\n",
                is_write ? "Writing" : "Reading",
                (void*)fault_addr);

        /* Get module base to compute RVA */
        GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
                          (LPCSTR)info->ExceptionRecord->ExceptionAddress, &mod);
        base = (uintptr_t)mod;
        GetModuleFileNameA(mod, modname, sizeof(modname));
        fprintf(stderr, "  Module: %s (base=0x%p)\n", modname, (void*)base);
        fprintf(stderr, "  Crash RVA: 0x%llX\n",
                (unsigned long long)((uintptr_t)info->ExceptionRecord->ExceptionAddress - base));

        /* Native stack trace */
        count = CaptureStackBackTrace(0, 32, frames, NULL);
        fprintf(stderr, "  Native stack (%d frames):\n", count);
        for (USHORT i = 0; i < count; i++) {
            HMODULE fmod = NULL;
            GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
                              (LPCSTR)frames[i], &fmod);
            fprintf(stderr, "    [%2d] 0x%p (RVA 0x%llX)\n",
                    i, frames[i],
                    (unsigned long long)((uintptr_t)frames[i] - (uintptr_t)fmod));
        }
        fflush(stderr);
    }

    return EXCEPTION_CONTINUE_SEARCH;
}

/* ── Configuration ──────────────────────────────────────────── */

/* Default path to the original XBE file */
#define DEFAULT_XBE_PATH "Burnout 3 Takedown\\default.xbe"

/* Window properties */
#define WINDOW_TITLE "Burnout 3: Takedown (Recompiled)"
#define WINDOW_CLASS "Burnout3RecompClass"
#define DEFAULT_WIDTH 640
#define DEFAULT_HEIGHT 480

/* ── Global state ───────────────────────────────────────────── */

static HWND g_hwnd = NULL;
static BOOL g_running = TRUE;
static void *g_xbe_data = NULL;
static size_t g_xbe_size = 0;
static IDirect3D8 *g_d3d8 = NULL;
static IDirect3DDevice8 *g_d3d_device = NULL;
static IDirectSound8 *g_dsound = NULL;

/* ── XBE loading ────────────────────────────────────────────── */

/**
 * Load the original XBE file into memory.
 * The XBE data is needed to initialize the memory layout
 * (copy .rdata and .data sections to their expected addresses).
 */
static BOOL load_xbe(const char *path)
{
    HANDLE hFile;
    DWORD fileSize, bytesRead;

    hFile = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ,
                        NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        fprintf(stderr, "ERROR: Cannot open XBE: %s (error %lu)\n",
                path, GetLastError());
        return FALSE;
    }

    fileSize = GetFileSize(hFile, NULL);
    if (fileSize == INVALID_FILE_SIZE || fileSize == 0) {
        fprintf(stderr, "ERROR: Invalid XBE file size\n");
        CloseHandle(hFile);
        return FALSE;
    }

    g_xbe_data = VirtualAlloc(NULL, fileSize, MEM_COMMIT, PAGE_READWRITE);
    if (!g_xbe_data) {
        fprintf(stderr, "ERROR: Cannot allocate %lu bytes for XBE\n", fileSize);
        CloseHandle(hFile);
        return FALSE;
    }

    if (!ReadFile(hFile, g_xbe_data, fileSize, &bytesRead, NULL) ||
        bytesRead != fileSize) {
        fprintf(stderr, "ERROR: Failed to read XBE (%lu of %lu bytes)\n",
                bytesRead, fileSize);
        VirtualFree(g_xbe_data, 0, MEM_RELEASE);
        g_xbe_data = NULL;
        CloseHandle(hFile);
        return FALSE;
    }

    g_xbe_size = fileSize;
    CloseHandle(hFile);
    fprintf(stderr, "Loaded XBE: %s (%lu bytes)\n", path, fileSize);
    return TRUE;
}

/* ── Window management ──────────────────────────────────────── */

static LRESULT CALLBACK window_proc(HWND hwnd, UINT msg,
                                     WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_CLOSE:
        g_running = FALSE;
        PostQuitMessage(0);
        return 0;

    case WM_KEYDOWN:
        if (wParam == VK_ESCAPE) {
            g_running = FALSE;
            PostQuitMessage(0);
        }
        return 0;

    case WM_SIZE:
        /* TODO: Notify D3D layer of resize */
        return 0;
    }

    return DefWindowProcA(hwnd, msg, wParam, lParam);
}

static HWND create_window(HINSTANCE hInstance, int width, int height)
{
    WNDCLASSEXA wc = {0};
    RECT rect;
    HWND hwnd;

    wc.cbSize = sizeof(wc);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = window_proc;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszClassName = WINDOW_CLASS;
    RegisterClassExA(&wc);

    /* Adjust window size for client area */
    rect.left = 0;
    rect.top = 0;
    rect.right = width;
    rect.bottom = height;
    AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, FALSE);

    hwnd = CreateWindowExA(
        0, WINDOW_CLASS, WINDOW_TITLE,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT,
        rect.right - rect.left, rect.bottom - rect.top,
        NULL, NULL, hInstance, NULL
    );

    if (hwnd) {
        ShowWindow(hwnd, SW_SHOW);
        UpdateWindow(hwnd);
    }

    return hwnd;
}

/* ── Subsystem initialization ───────────────────────────────── */

static BOOL init_subsystems(void)
{
    fprintf(stderr, "\n=== Initializing subsystems ===\n");

    /* 1. Xbox memory layout (maps .rdata/.data to original VAs) */
    fprintf(stderr, "[1/4] Memory layout...\n");
    if (!xbox_MemoryLayoutInit(g_xbe_data, g_xbe_size)) {
        fprintf(stderr, "FATAL: Memory layout initialization failed\n");
        fprintf(stderr, "  The address range 0x00010000-0x00770000 must be available.\n");
        fprintf(stderr, "  Try disabling ASLR or running with a fixed base address.\n");
        return FALSE;
    }

    /* Verify .text section data integrity */
    fprintf(stderr, "  .text verify: JT[0x16CC8]=0x%08X (expect 0x000166D1)\n", MEM32(0x16CC8));

    /* 2. Xbox kernel replacement layer */
    fprintf(stderr, "[2/4] Kernel layer...\n");
    fflush(stderr);
    xbox_kernel_init();          /* Fill thunk table with our Win32 implementations */
    fprintf(stderr, "  xbox_kernel_init() done\n");
    fflush(stderr);
    xbox_kernel_bridge_init();   /* Patch Xbox memory thunk entries with synthetic VAs */
    fprintf(stderr, "  xbox_kernel_bridge_init() done\n");
    fflush(stderr);

    /* 2b. Pre-initialize CRT bootstrap locks.
     *
     * The Xbox CRT uses a lock table at 0x3C6500 with 36 entries (8 bytes
     * each: [pointer(4), flag(4)]). Bootstrap locks have flag=1 and must be
     * initialized before any code calls __lock(). Normally _mtinitlocks()
     * (sub_0024858A) does this during CRT startup, but we bypass the CRT
     * entry point.
     *
     * Without this, __lock(8) → _mtinitlocknum(8) → __lock(10) →
     * _mtinitlocknum(10) → __lock(10) → infinite recursion → stack overflow.
     *
     * Since all CS operations are no-ops (single-threaded execution), the
     * pointers just need to be non-zero. We use the pre-allocated CS buffer
     * array at 0x41D310 (in BSS), same as the original _mtinitlocks. */
    {
        uint32_t cs_addr = 0x41D310;  /* Pre-allocated CS buffer array */
        int locks_initialized = 0;
        int i;
        for (i = 0; i < 36; i++) {
            uint32_t flag_va = 0x3C6504 + i * 8;
            uint32_t ptr_va  = 0x3C6500 + i * 8;
            if (MEM32(flag_va) == 1) {
                MEM32(ptr_va) = cs_addr;
                cs_addr += 0x1C;  /* Each CS struct is 0x1C bytes */
                locks_initialized++;
            }
        }
        fprintf(stderr, "  CRT locks: %d bootstrap locks pre-initialized\n",
                locks_initialized);
    }

    /* 2c. Pre-initialize CRT atexit callback table.
     *
     * The CRT atexit/onexit registration function (sub_0024326D) stores
     * callback function pointers in a dynamically-allocated table whose
     * base and current pointers live at Xbox VA 0x76B92C and 0x76B928.
     * These are BSS (zero-initialized), but the code doesn't handle null:
     * sub_00246E8B → sub_001D4D65 reads RW heap block metadata at negative
     * offsets from the table pointer, crashing on MEM8(0 - 11).
     *
     * Fix: allocate a zeroed buffer with 32 bytes of padding (for the
     * negative-offset metadata reads). The zeroed metadata makes
     * sub_001D4D65 return -1 (huge capacity), so sub_0024326D always
     * finds room to store entries without needing to query block size. */
    {
        uint32_t atexit_buf = xbox_HeapAlloc(1024 + 32, 4);
        if (atexit_buf) {
            uint32_t table_base = atexit_buf + 32;
            MEM32(0x76B92C) = table_base;  /* base pointer */
            MEM32(0x76B928) = table_base;  /* current = base (empty table) */
            fprintf(stderr, "  CRT atexit: table at 0x%08X (256 entries)\n", table_base);
        } else {
            fprintf(stderr, "  WARNING: could not allocate atexit table\n");
        }
    }

    /* 2d. Pre-initialize D3D8 push buffer.
     *
     * The Xbox D3D8 library (statically linked into the game) uses a command
     * buffer ("push buffer") to batch GPU commands. Render state setters like
     * sub_00355360 write pairs of uint32 values into this buffer. When full,
     * sub_00351A20 (flush) submits it to the NV2A GPU and resets the pointer.
     *
     * On our recompilation, there's no real GPU. But the code still runs and
     * tries to write to the buffer. Without initialization, the buffer
     * pointers at 0x35D6A0/0x35D6A4 are zero, causing sub_00355360 to enter
     * an infinite flush-retry loop that corrupts the simulated stack.
     *
     * Fix: allocate a buffer so writes succeed (silently discarded).
     * sub_00351A20 (manual override in recomp_manual.c) resets the write
     * pointer when the buffer fills.
     */
    {
        uint32_t cmd_buf_size = 4 * 1024 * 1024;  /* 4 MB */
        uint32_t cmd_buf = xbox_HeapAlloc(cmd_buf_size, 4096);
        if (cmd_buf) {
            MEM32(0x35D69C) = cmd_buf;                  /* base (for flush reset) */
            MEM32(0x35D6A0) = cmd_buf;                  /* write pointer */
            MEM32(0x35D6A4) = cmd_buf + cmd_buf_size;   /* end pointer */
            MEM32(0x3609FC) = cmd_buf_size / 2;          /* size in 16-bit words */
            fprintf(stderr, "  D3D8 push buffer: %u KB at Xbox VA 0x%08X-0x%08X\n",
                    cmd_buf_size / 1024, cmd_buf, cmd_buf + cmd_buf_size);
        }
    }

    /* 2e. Pre-initialize D3D8 device context.
     *
     * The Xbox D3D8 device context is a large structure (~8KB) pointed to
     * by MEM32(0x35FB48). Functions like sub_0034C2E0 read fields at offsets
     * +0x1A04, +0x1A08, etc. Without initialization, 0x35FB48 = 0 and all
     * field accesses become near-null dereferences (0xFFFFFFF8 etc.).
     *
     * Allocating a zeroed buffer means device field reads return 0 (safe
     * defaults) rather than faulting. This lets D3D8 init code proceed even
     * though the actual GPU hardware doesn't exist.
     */
    {
        uint32_t fake_device = xbox_HeapAlloc(0x2000, 16);  /* 8 KB */
        if (fake_device) {
            MEM32(0x35FB48) = fake_device;
            fprintf(stderr, "  D3D8 device context: fake at Xbox VA 0x%08X\n", fake_device);
        }
    }

    /* 3. Graphics (D3D8→D3D11) */
    fprintf(stderr, "[3/4] Graphics (D3D8→D3D11)...\n");
    {
        D3DPRESENT_PARAMETERS pp;
        HRESULT hr;

        g_d3d8 = xbox_Direct3DCreate8(0);
        if (!g_d3d8) {
            fprintf(stderr, "FATAL: Direct3DCreate8 failed\n");
            return FALSE;
        }

        memset(&pp, 0, sizeof(pp));
        pp.BackBufferWidth = DEFAULT_WIDTH;
        pp.BackBufferHeight = DEFAULT_HEIGHT;
        pp.BackBufferFormat = D3DFMT_X8R8G8B8;
        pp.BackBufferCount = 1;
        pp.SwapEffect = D3DSWAPEFFECT_DISCARD;
        pp.hDeviceWindow = g_hwnd;
        pp.Windowed = TRUE;
        pp.EnableAutoDepthStencil = TRUE;
        pp.AutoDepthStencilFormat = D3DFMT_D24S8;

        hr = g_d3d8->lpVtbl->CreateDevice(g_d3d8, 0, 0, g_hwnd, 0, &pp, &g_d3d_device);
        if (FAILED(hr)) {
            fprintf(stderr, "FATAL: CreateDevice failed: 0x%08lX\n", hr);
            return FALSE;
        }
    }

    /* 4. Audio + Input */
    fprintf(stderr, "[4/4] Audio + Input...\n");
    xbox_DirectSoundCreate(NULL, &g_dsound, NULL);
    xbox_InputInit();

    fprintf(stderr, "=== All subsystems initialized ===\n\n");
    return TRUE;
}

static void shutdown_subsystems(void)
{
    fprintf(stderr, "\n=== Shutting down ===\n");

    /* Reverse order of initialization */
    if (g_dsound) {
        g_dsound->lpVtbl->Release(g_dsound);
        g_dsound = NULL;
    }
    if (g_d3d_device) {
        g_d3d_device->lpVtbl->Release(g_d3d_device);
        g_d3d_device = NULL;
    }
    if (g_d3d8) {
        g_d3d8->lpVtbl->Release(g_d3d8);
        g_d3d8 = NULL;
    }
    xbox_MemoryLayoutShutdown();

    if (g_xbe_data) {
        VirtualFree(g_xbe_data, 0, MEM_RELEASE);
        g_xbe_data = NULL;
    }

    fprintf(stderr, "Shutdown complete.\n");
}

/* ── KeTickCount updater thread ──────────────────────────── */
/* Xbox KeTickCount is a data export at VA 0x00740020 that increments
 * every ~1ms. The game reads it directly from memory for timing.
 * We update it from a background thread using GetTickCount(). */

static DWORD WINAPI tick_count_thread_func(LPVOID param)
{
    (void)param;
    uint32_t tick_va = XBOX_KERNEL_DATA_BASE + KDATA_TICK_COUNT;
    for (;;) {
        MEM32(tick_va) = GetTickCount();
        Sleep(1);  /* ~1ms Xbox tick interval */
    }
    return 0;
}

/* ── Watchdog thread: periodically dumps register state ──── */

static DWORD WINAPI watchdog_thread_func(LPVOID param)
{
    (void)param;
    uint64_t prev_count = 0;
    for (;;) {
        Sleep(2000);
        uint64_t count = g_icall_count;
        uint32_t idx = g_icall_trace_idx;
        fprintf(stderr, "  [WATCHDOG] ICALLs: %llu total (+%llu/2s) esp=0x%08X\n",
                count, count - prev_count, g_esp);
        /* Dump game state variables */
        {
            extern volatile uint32_t g_d3d_render_count;
            extern volatile uint32_t g_present_count;
            extern volatile uint32_t g_tick_110e0_count;
            fprintf(stderr, "  [WATCHDOG] game_state=0x%08X pending=0x%08X load_state=0x%08X flag=0x%02X d3d=%u present=%u tick=%u\n",
                    MEM32(0x4D53B8), MEM32(0x4D53B4), MEM32(0x4D5388), MEM8(0x4D5378),
                    g_d3d_render_count, g_present_count, g_tick_110e0_count);
        }
        /* Print last ICALL targets */
        fprintf(stderr, "  [WATCHDOG] ICALLs:");
        for (int j = ICALL_TRACE_SIZE - 1; j >= 0; j--) {
            uint32_t va = g_icall_trace[(idx - 1 - j) & (ICALL_TRACE_SIZE - 1)];
            if (va) fprintf(stderr, " 0x%06X", va);
        }
        fprintf(stderr, "\n");
        /* Dump Xbox stack to identify stuck function */
        {
            uint32_t sp = g_esp;
            fprintf(stderr, "  [WATCHDOG] Stack@0x%08X:", sp);
            for (int k = 0; k < 12; k++)
                fprintf(stderr, " %08X", MEM32(sp + k * 4));
            fprintf(stderr, "\n");
        }
        fflush(stderr);
        prev_count = count;
    }
    return 0;
}

/* ── Frame pump (called from recompiled game loop) ─────────── */

void game_frame_pump(void)
{
    static LARGE_INTEGER s_freq = {0};
    static LARGE_INTEGER s_last = {0};

    /* Initialize timer on first call */
    if (s_freq.QuadPart == 0) {
        QueryPerformanceFrequency(&s_freq);
        QueryPerformanceCounter(&s_last);
    }

    /* Throttle to ~60fps: only render if >= 16ms since last frame */
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    double elapsed_ms = (double)(now.QuadPart - s_last.QuadPart) * 1000.0 / (double)s_freq.QuadPart;
    if (elapsed_ms < 16.0)
        return;
    s_last = now;

    /* Pump Windows messages */
    {
        MSG msg;
        while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                g_running = FALSE;
                return;
            }
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }
    }

    /* ── Input polling & injection into game memory ── */
    {
        extern ptrdiff_t g_xbox_mem_offset;
        #define XINP_MEM32(a) (*(volatile uint32_t*)((uintptr_t)(a) + g_xbox_mem_offset))
        #define XINP_MEMF(a)  (*(volatile float*)((uintptr_t)(a) + g_xbox_mem_offset))
        #define XINP_MEM8(a)  (*(volatile uint8_t*)((uintptr_t)(a) + g_xbox_mem_offset))

        /* Only inject input when game is in state 4 (gameplay) */
        uint32_t game_st = XINP_MEM32(0x4D53B8);
        if (game_st == 4) {
            int32_t throttle = 0;  /* positive = gas */
            int32_t steering = 0;  /* positive = right */

            /* Keyboard: WASD for driving, Shift for boost */
            if (GetAsyncKeyState('W') & 0x8000) throttle += 1000;
            if (GetAsyncKeyState('S') & 0x8000) throttle -= 1000;
            if (GetAsyncKeyState('A') & 0x8000) steering -= 1000;
            if (GetAsyncKeyState('D') & 0x8000) steering += 1000;
            XINP_MEM32(0x5FFD0C) = (GetAsyncKeyState(VK_SHIFT) & 0x8000) ? 1 : 0;

            /* XInput gamepad (port 0) */
            {
                XINPUT_STATE xi;
                memset(&xi, 0, sizeof(xi));
                if (XInputGetState(0, &xi) == ERROR_SUCCESS) {
                    throttle += (int32_t)xi.Gamepad.bRightTrigger * 8;
                    throttle -= (int32_t)xi.Gamepad.bLeftTrigger * 8;
                    steering += (int32_t)xi.Gamepad.sThumbLX / 32;
                }
            }

            /* Write to game input accumulator addresses.
             * sub_000636D0 computes force = (0x4D652C - 0x4D6B24 - 0x4D6B20) * scale.
             * We set the accumulators directly and zero the base/prev values. */
            XINP_MEM32(0x4D652C) = (uint32_t)throttle;
            XINP_MEM32(0x4D6530) = (uint32_t)steering;
            XINP_MEM32(0x4D6B20) = 0;
            XINP_MEM32(0x4D6B24) = 0;
            XINP_MEM32(0x4D6B28) = 0;

            /* Force physics scale factors to known-good values.
             * sub_000636D0 multiplies input by these; if any are 0, force is 0.
             * On Xbox, the game sets these during car/track setup, but some
             * may not be initialized in our recompilation. Force non-zero. */
            {
                float s1 = XINP_MEMF(0x557870);
                float s2 = XINP_MEMF(0x3B1C40);
                float s3 = XINP_MEMF(0x5592C8);
                float s4 = XINP_MEMF(0x3B1C38);
                if (s1 > -1e-10f && s1 < 1e-10f) XINP_MEMF(0x557870) = 0.001f;
                if (s2 > -1e-10f && s2 < 1e-10f) XINP_MEMF(0x3B1C40) = 1.0f;
                if (s3 > -1e-10f && s3 < 1e-10f) XINP_MEMF(0x5592C8) = 0.001f;
                if (s4 > -1e-10f && s4 < 1e-10f) XINP_MEMF(0x3B1C38) = 1.0f;
            }

            /* Direct physics velocity injection as fallback.
             * If the scale chain produces 0 (broken .rdata scales),
             * write force directly to the car's physics velocity vector.
             * Physics ptr = MEM32(0x557880 + 0x1B4), vel at +8/+0xC. */
            if (throttle != 0 || steering != 0) {
                uint32_t phys_ptr = XINP_MEM32(0x557880 + 0x1B4);
                if (phys_ptr > 0x10000 && phys_ptr < 0x4000000) {
                    float cur_vx = XINP_MEMF(phys_ptr + 8);
                    float cur_vy = XINP_MEMF(phys_ptr + 0xC);
                    /* Only inject if the scale path produced 0 */
                    if (cur_vx == 0.0f && cur_vy == 0.0f) {
                        XINP_MEMF(phys_ptr + 8) = (float)throttle * 0.01f;
                        XINP_MEMF(phys_ptr + 0xC) = (float)steering * 0.01f;
                    }
                }
            }

            /* Button events for menu navigation */
            if (GetAsyncKeyState(VK_UP) & 0x8000)     XINP_MEM8(0x4A1C74) = 1;
            if (GetAsyncKeyState(VK_DOWN) & 0x8000)    XINP_MEM8(0x4A1C78) = 1;
            if (GetAsyncKeyState(VK_LEFT) & 0x8000)    XINP_MEM8(0x4A1C76) = 1;
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000)   XINP_MEM8(0x4A1C77) = 1;
            if (GetAsyncKeyState(VK_RETURN) & 0x8000)  XINP_MEM8(0x4A1C75) = 1;
            if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)  XINP_MEM8(0x4A1C79) = 1;

            /* Debug: log input state */
            {
                static int _inp_dbg = 0;
                _inp_dbg++;
                if (_inp_dbg == 1 || (_inp_dbg % 300 == 0) ||
                    (throttle != 0 && _inp_dbg % 30 == 0) ||
                    (steering != 0 && _inp_dbg % 30 == 0)) {
                    float s1 = XINP_MEMF(0x557870);
                    float s2 = XINP_MEMF(0x3B1C40);
                    float s3 = XINP_MEMF(0x5592C8);
                    float s4 = XINP_MEMF(0x3B1C38);
                    uint32_t phys_ptr = XINP_MEM32(0x557880 + 0x1B4);
                    float vx = 0.0f, vy = 0.0f;
                    if (phys_ptr > 0x10000 && phys_ptr < 0x4000000) {
                        vx = XINP_MEMF(phys_ptr + 8);
                        vy = XINP_MEMF(phys_ptr + 0xC);
                    }
                    fprintf(stderr, "  [INPUT] #%d thr=%d steer=%d scales=(%.6f,%.4f,%.6f,%.4f) vel=(%.2f,%.2f)\n",
                            _inp_dbg, throttle, steering, s1, s2, s3, s4, vx, vy);
                }
            }
        }

        #undef XINP_MEM32
        #undef XINP_MEMF
        #undef XINP_MEM8
    }

    /* Render frame with car indicator */
    if (g_d3d_device) {
        g_d3d_device->lpVtbl->BeginScene(g_d3d_device);
        g_d3d_device->lpVtbl->Clear(g_d3d_device, 0, NULL,
            D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER,
            0xFF102040, /* Dark blue-grey */
            1.0f, 0);

        /* Pseudo-3D perspective road rendering (OutRun-style).
         * Camera is behind and above the car, looking forward.
         * Road rendered as horizontal trapezoid segments with perspective. */
        {
            extern ptrdiff_t g_xbox_mem_offset;
            #define _R_MEMF(a) (*(volatile float*)((uintptr_t)(a) + g_xbox_mem_offset))
            #define _R_MEM32(a) (*(volatile uint32_t*)((uintptr_t)(a) + g_xbox_mem_offset))
            uint32_t _phys = _R_MEM32(0x557880 + 0x1B4);
            if (_phys > 0x100 && _phys < 0x4000000) {
                float px      = _R_MEMF(_phys + 0x10);
                float py      = _R_MEMF(_phys + 0x14);
                float heading = _R_MEMF(_phys + 0x18);
                float speed   = _R_MEMF(_phys + 0x1C);

                /* Screen and perspective constants */
                const float SW = 640.0f, SH = 480.0f;
                const float CX = SW * 0.5f;
                const float HORIZON = SH * 0.38f;  /* horizon line y */
                const float CAM_H = 4.5f;          /* camera height */
                const float FOCAL = 120.0f;         /* focal length */
                const float ROAD_HW = 15.0f;       /* road half-width */
                const float VIEW_DIST = 200.0f;     /* max draw distance */

                /* XYZRHW + DIFFUSE vertex */
                typedef struct { float x, y, z, rhw; DWORD color; } RHW_VERT;

                /* Helper: project world point to screen.
                 * World: x=lateral (0=center), d=distance ahead of camera.
                 * Returns screen x and y, and scale factor. */
                #define PROJ_X(wx, d) (CX + ((wx) - px) * FOCAL / (d))
                #define PROJ_Y(d) (HORIZON + CAM_H * FOCAL / (d))
                #define PROJ_SCALE(d) (FOCAL / (d))

                /* Road curve function: overlapping sine waves for S-curves.
                 * Returns a curvature value (positive = road bends right). */
                #define ROAD_CURVE(world_y) \
                    (sinf((world_y) * 0.008f) * 0.5f + sinf((world_y) * 0.022f) * 0.2f)

                /* Road hill function: sine waves for gentle ups and downs.
                 * Returns a vertical offset (positive = uphill). */
                #define ROAD_HILL(world_y) \
                    (sinf((world_y) * 0.005f) * 0.3f + sinf((world_y) * 0.013f) * 0.15f)

                /* Pre-compute curve and hill offsets for each segment boundary.
                 * These accumulate in screen-space pixels so far segments
                 * appear shifted, creating curved and hilly road illusion. */
                #define ROAD_SEGS 50
                float curve_offsets[ROAD_SEGS + 1];
                float hill_offsets[ROAD_SEGS + 1];
                {
                    int ci;
                    curve_offsets[0] = 0.0f;
                    hill_offsets[0] = 0.0f;
                    for (ci = 0; ci < ROAD_SEGS; ci++) {
                        float ct0 = (float)ci / ROAD_SEGS;
                        float ct1 = (float)(ci + 1) / ROAD_SEGS;
                        float cd0 = 2.0f + ct0 * ct0 * VIEW_DIST;
                        float cd1 = 2.0f + ct1 * ct1 * VIEW_DIST;
                        float cwy = py + (cd0 + cd1) * 0.5f;
                        float scale = FOCAL / ((cd0 + cd1) * 0.5f);
                        curve_offsets[ci + 1] = curve_offsets[ci] + ROAD_CURVE(cwy) * scale * 20.0f;
                        hill_offsets[ci + 1] = hill_offsets[ci] + ROAD_HILL(cwy) * scale * 15.0f;
                    }
                }

                /* Store road curve at player position for physics (centripetal force) */
                {
                    float player_curve = ROAD_CURVE(py);
                    *(volatile float*)((uintptr_t)0x5FFD10 + g_xbox_mem_offset) = player_curve;
                }

                /* Set render state */
                g_d3d_device->lpVtbl->SetVertexShader(g_d3d_device,
                    D3DFVF_XYZRHW | D3DFVF_DIFFUSE);
                g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                    D3DRS_ZENABLE, 0);
                g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                    D3DRS_LIGHTING, 0);
                g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                    D3DRS_CULLMODE, 1 /* D3DCULL_NONE */);
                g_d3d_device->lpVtbl->SetTexture(g_d3d_device, 0, NULL);

                /* ── Sky gradient ────────────────────────────────────── */
                {
                    DWORD sky_top = 0xFF1020A0; /* deep blue */
                    DWORD sky_bot = 0xFF6090D0; /* light blue at horizon */
                    RHW_VERT sky[6] = {
                        {0.0f, 0.0f, 0.99f, 1.0f, sky_top},
                        {SW,   0.0f, 0.99f, 1.0f, sky_top},
                        {0.0f, HORIZON, 0.99f, 1.0f, sky_bot},
                        {SW,   0.0f, 0.99f, 1.0f, sky_top},
                        {SW,   HORIZON, 0.99f, 1.0f, sky_bot},
                        {0.0f, HORIZON, 0.99f, 1.0f, sky_bot},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, sky, sizeof(RHW_VERT));
                }

                /* ── Horizon scenery (mountain silhouettes) ─────────── */
                {
                    /* Simple mountain range: triangles along the horizon.
                     * Heights vary by a sine pattern offset by player position
                     * so they appear to slowly shift as you drive. */
                    #define MTN_COUNT 12
                    DWORD mtn_col = 0xFF304060; /* dark blue-grey */
                    RHW_VERT mtn_verts[MTN_COUNT * 3];
                    int mi;
                    for (mi = 0; mi < MTN_COUNT; mi++) {
                        float base_x = (float)mi / MTN_COUNT * SW - 30.0f;
                        float width = SW / MTN_COUNT * 1.4f;
                        /* Height varies with a pseudo-random pattern */
                        float h = 20.0f + 35.0f * sinf((float)mi * 2.3f + py * 0.0002f);
                        float peak_x = base_x + width * 0.5f + 10.0f * sinf((float)mi * 1.7f);
                        mtn_verts[mi * 3 + 0] = (RHW_VERT){base_x, HORIZON, 0.98f, 1.0f, mtn_col};
                        mtn_verts[mi * 3 + 1] = (RHW_VERT){peak_x, HORIZON - h, 0.98f, 1.0f, mtn_col};
                        mtn_verts[mi * 3 + 2] = (RHW_VERT){base_x + width, HORIZON, 0.98f, 1.0f, mtn_col};
                    }
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, MTN_COUNT, mtn_verts, sizeof(RHW_VERT));
                    #undef MTN_COUNT
                }

                /* ── Ground plane (grass on both sides of road) ─────── */
                {
                    DWORD grass_col = 0xFF1A3318; /* dark green */
                    RHW_VERT grass[6] = {
                        {0.0f, HORIZON, 0.95f, 1.0f, grass_col},
                        {SW,   HORIZON, 0.95f, 1.0f, grass_col},
                        {0.0f, SH,      0.95f, 1.0f, grass_col},
                        {SW,   HORIZON, 0.95f, 1.0f, grass_col},
                        {SW,   SH,      0.95f, 1.0f, grass_col},
                        {0.0f, SH,      0.95f, 1.0f, grass_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, grass, sizeof(RHW_VERT));
                }

                /* ── Road segments (perspective trapezoids) ──────────── */
                {
                    /* Build all road segment vertices in one array for batched draw */
                    RHW_VERT road_verts[ROAD_SEGS * 6];
                    int vi = 0;
                    int si;
                    for (si = 0; si < ROAD_SEGS; si++) {
                        /* Exponential depth distribution: more detail up close */
                        float t0 = (float)si / ROAD_SEGS;
                        float t1 = (float)(si + 1) / ROAD_SEGS;
                        float d0 = 2.0f + t0 * t0 * VIEW_DIST;
                        float d1 = 2.0f + t1 * t1 * VIEW_DIST;

                        /* Screen Y for near and far edges, with hill offset */
                        float ho0 = hill_offsets[si], ho1 = hill_offsets[si + 1];
                        float y0 = PROJ_Y(d0) - ho0;
                        float y1 = PROJ_Y(d1) - ho1;
                        if (y0 < HORIZON - 30.0f || y1 > SH) continue;
                        if (y0 > SH) y0 = SH;

                        /* Road edges with curve offset */
                        float co0 = curve_offsets[si], co1 = curve_offsets[si + 1];
                        float lx0 = PROJ_X(-ROAD_HW, d0) + co0;
                        float rx0 = PROJ_X(ROAD_HW, d0) + co0;
                        float lx1 = PROJ_X(-ROAD_HW, d1) + co1;
                        float rx1 = PROJ_X(ROAD_HW, d1) + co1;

                        /* Alternating road color based on world distance (rumble strips) */
                        float world_d = py + (d0 + d1) * 0.5f;
                        int stripe = ((int)(world_d / 3.0f)) & 1;
                        DWORD road_col = stripe ? 0xFF222233 : 0xFF1A1A2A;

                        /* Draw road surface quad */
                        road_verts[vi++] = (RHW_VERT){lx0, y0, 0.9f, 1.0f, road_col};
                        road_verts[vi++] = (RHW_VERT){rx0, y0, 0.9f, 1.0f, road_col};
                        road_verts[vi++] = (RHW_VERT){lx1, y1, 0.9f, 1.0f, road_col};
                        road_verts[vi++] = (RHW_VERT){rx0, y0, 0.9f, 1.0f, road_col};
                        road_verts[vi++] = (RHW_VERT){rx1, y1, 0.9f, 1.0f, road_col};
                        road_verts[vi++] = (RHW_VERT){lx1, y1, 0.9f, 1.0f, road_col};
                    }
                    if (vi > 0) {
                        g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                            D3DPT_TRIANGLELIST, vi / 3, road_verts, sizeof(RHW_VERT));
                    }

                    /* Edge lines and center dashes (drawn over road) */
                    {
                        RHW_VERT line_verts[ROAD_SEGS * 18]; /* 3 lines × 6 verts per seg */
                        int lvi = 0;
                        for (si = 0; si < ROAD_SEGS; si++) {
                            float t0 = (float)si / ROAD_SEGS;
                            float t1 = (float)(si + 1) / ROAD_SEGS;
                            float d0 = 2.0f + t0 * t0 * VIEW_DIST;
                            float d1 = 2.0f + t1 * t1 * VIEW_DIST;
                            float ho0 = hill_offsets[si], ho1 = hill_offsets[si + 1];
                            float y0 = PROJ_Y(d0) - ho0;
                            float y1 = PROJ_Y(d1) - ho1;
                            if (y0 < HORIZON - 30.0f || y1 > SH) continue;
                            if (y0 > SH) y0 = SH;

                            float co0 = curve_offsets[si], co1 = curve_offsets[si + 1];
                            float scale0 = PROJ_SCALE(d0);
                            float scale1 = PROJ_SCALE(d1);
                            float ew0 = 0.6f * scale0, ew1 = 0.6f * scale1;

                            float world_d = py + (d0 + d1) * 0.5f;
                            int stripe = ((int)(world_d / 3.0f)) & 1;
                            DWORD edge_col = stripe ? 0xFFCC2222 : 0xFFCCCCCC;

                            /* Left edge line */
                            float le0 = PROJ_X(-ROAD_HW, d0) + co0;
                            float le1 = PROJ_X(-ROAD_HW, d1) + co1;
                            line_verts[lvi++] = (RHW_VERT){le0-ew0, y0, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){le0+ew0, y0, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){le1-ew1, y1, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){le0+ew0, y0, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){le1+ew1, y1, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){le1-ew1, y1, 0.8f, 1.0f, edge_col};

                            /* Right edge line */
                            float re0 = PROJ_X(ROAD_HW, d0) + co0;
                            float re1 = PROJ_X(ROAD_HW, d1) + co1;
                            line_verts[lvi++] = (RHW_VERT){re0-ew0, y0, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){re0+ew0, y0, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){re1-ew1, y1, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){re0+ew0, y0, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){re1+ew1, y1, 0.8f, 1.0f, edge_col};
                            line_verts[lvi++] = (RHW_VERT){re1-ew1, y1, 0.8f, 1.0f, edge_col};

                            /* Center dash */
                            float seg_world = py + (d0 + d1) * 0.5f;
                            float phase = fmodf(seg_world, 7.0f);
                            if (phase < 0) phase += 7.0f;
                            if (phase < 3.5f) {
                                DWORD dash_col = 0xFFDDDD44;
                                float dw0 = 0.3f * scale0, dw1 = 0.3f * scale1;
                                float cx0 = PROJ_X(0.0f, d0) + co0;
                                float cx1 = PROJ_X(0.0f, d1) + co1;
                                line_verts[lvi++] = (RHW_VERT){cx0-dw0, y0, 0.7f, 1.0f, dash_col};
                                line_verts[lvi++] = (RHW_VERT){cx0+dw0, y0, 0.7f, 1.0f, dash_col};
                                line_verts[lvi++] = (RHW_VERT){cx1-dw1, y1, 0.7f, 1.0f, dash_col};
                                line_verts[lvi++] = (RHW_VERT){cx0+dw0, y0, 0.7f, 1.0f, dash_col};
                                line_verts[lvi++] = (RHW_VERT){cx1+dw1, y1, 0.7f, 1.0f, dash_col};
                                line_verts[lvi++] = (RHW_VERT){cx1-dw1, y1, 0.7f, 1.0f, dash_col};
                            }
                        }
                        if (lvi > 0) {
                            g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                                D3DPT_TRIANGLELIST, lvi / 3, line_verts, sizeof(RHW_VERT));
                        }
                    }
                }

                /* ── Traffic obstacles (perspective projected) ───────── */
                {
                    #define OBS_BASE   0x5FFE00
                    #define OBS_COUNT  12
                    #define OBS_SIZE   16
                    #define OBS_ADDR(i, off) (OBS_BASE + (i) * OBS_SIZE + (off))
                    /* Same-dir: warm colors, Oncoming: cool/bright colors */
                    DWORD obs_colors[4] = { 0xFFFF6633, 0xFF33CCFF, 0xFFFFCC33, 0xFF66FF66 };
                    DWORD onc_colors[4] = { 0xFFFF2244, 0xFFDD44FF, 0xFFFF8800, 0xFFFF4466 };
                    int oi;
                    for (oi = 0; oi < OBS_COUNT; oi++) {
                        uint32_t flags = _R_MEM32(OBS_ADDR(oi, 0xC));
                        if ((flags & 1) == 0) continue;
                        float ox = _R_MEMF(OBS_ADDR(oi, 0));
                        float oy = _R_MEMF(OBS_ADDR(oi, 4));

                        /* Distance ahead of camera */
                        float dist = oy - py;
                        if (dist < 1.0f || dist > VIEW_DIST) continue;

                        /* Interpolate curve and hill offsets for this distance. */
                        float obs_co = 0.0f, obs_ho = 0.0f;
                        {
                            /* Inverse of d = 2 + t*t*VIEW_DIST → t = sqrt((d-2)/VIEW_DIST) */
                            float t_obs = 0.0f;
                            if (dist > 2.0f)
                                t_obs = sqrtf((dist - 2.0f) / VIEW_DIST);
                            if (t_obs > 1.0f) t_obs = 1.0f;
                            float seg_f = t_obs * ROAD_SEGS;
                            int seg_i = (int)seg_f;
                            if (seg_i >= ROAD_SEGS) seg_i = ROAD_SEGS - 1;
                            float frac = seg_f - (float)seg_i;
                            obs_co = curve_offsets[seg_i] * (1.0f - frac) + curve_offsets[seg_i + 1] * frac;
                            obs_ho = hill_offsets[seg_i] * (1.0f - frac) + hill_offsets[seg_i + 1] * frac;
                        }

                        /* Project to screen */
                        float sx = PROJ_X(ox, dist) + obs_co;
                        float sy = PROJ_Y(dist) - obs_ho;
                        float scale = PROJ_SCALE(dist);

                        /* Cull off-screen */
                        if (sx < -40.0f || sx > SW+40.0f || sy < HORIZON || sy > SH) continue;

                        /* Car rectangle scaled by perspective */
                        int is_oncoming = (flags & 2) != 0;
                        float ohw = 2.0f * scale, ohh = 3.0f * scale;
                        DWORD oc = is_oncoming ? onc_colors[oi & 3] : obs_colors[oi & 3];
                        /* Car body */
                        RHW_VERT obs[6] = {
                            {sx-ohw, sy-ohh, 0.4f, 1.0f, oc},
                            {sx+ohw, sy-ohh, 0.4f, 1.0f, oc},
                            {sx-ohw, sy,     0.4f, 1.0f, oc},
                            {sx+ohw, sy-ohh, 0.4f, 1.0f, oc},
                            {sx+ohw, sy,     0.4f, 1.0f, oc},
                            {sx-ohw, sy,     0.4f, 1.0f, oc},
                        };
                        g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                            D3DPT_TRIANGLELIST, 2, obs, sizeof(RHW_VERT));
                        /* Windshield (darker top) */
                        DWORD wc = 0xFF202040;
                        float wh = ohh * 0.35f;
                        RHW_VERT ws[6] = {
                            {sx-ohw*0.8f, sy-ohh,    0.35f, 1.0f, wc},
                            {sx+ohw*0.8f, sy-ohh,    0.35f, 1.0f, wc},
                            {sx-ohw*0.8f, sy-ohh+wh, 0.35f, 1.0f, wc},
                            {sx+ohw*0.8f, sy-ohh,    0.35f, 1.0f, wc},
                            {sx+ohw*0.8f, sy-ohh+wh, 0.35f, 1.0f, wc},
                            {sx-ohw*0.8f, sy-ohh+wh, 0.35f, 1.0f, wc},
                        };
                        g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                            D3DPT_TRIANGLELIST, 2, ws, sizeof(RHW_VERT));
                        /* Headlights on oncoming cars */
                        if (is_oncoming) {
                            DWORD hl = 0xFFFFFF88; /* bright yellow-white */
                            float hlw = ohw * 0.25f, hlh = ohh * 0.15f;
                            RHW_VERT hl_l[6] = {
                                {sx-ohw*0.6f-hlw, sy-hlh, 0.33f, 1.0f, hl},
                                {sx-ohw*0.6f+hlw, sy-hlh, 0.33f, 1.0f, hl},
                                {sx-ohw*0.6f-hlw, sy+hlh, 0.33f, 1.0f, hl},
                                {sx-ohw*0.6f+hlw, sy-hlh, 0.33f, 1.0f, hl},
                                {sx-ohw*0.6f+hlw, sy+hlh, 0.33f, 1.0f, hl},
                                {sx-ohw*0.6f-hlw, sy+hlh, 0.33f, 1.0f, hl},
                            };
                            RHW_VERT hl_r[6] = {
                                {sx+ohw*0.6f-hlw, sy-hlh, 0.33f, 1.0f, hl},
                                {sx+ohw*0.6f+hlw, sy-hlh, 0.33f, 1.0f, hl},
                                {sx+ohw*0.6f-hlw, sy+hlh, 0.33f, 1.0f, hl},
                                {sx+ohw*0.6f+hlw, sy-hlh, 0.33f, 1.0f, hl},
                                {sx+ohw*0.6f+hlw, sy+hlh, 0.33f, 1.0f, hl},
                                {sx+ohw*0.6f-hlw, sy+hlh, 0.33f, 1.0f, hl},
                            };
                            g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                                D3DPT_TRIANGLELIST, 2, hl_l, sizeof(RHW_VERT));
                            g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                                D3DPT_TRIANGLELIST, 2, hl_r, sizeof(RHW_VERT));
                        }
                    }
                    #undef OBS_BASE
                    #undef OBS_COUNT
                    #undef OBS_SIZE
                    #undef OBS_ADDR
                }

                /* ── Player car (fixed at bottom of screen) ──────────── */
                {
                    float car_cx = CX; /* car at screen center horizontally */
                    float car_cy = SH - 60.0f; /* near bottom */
                    float car_hw = 24.0f, car_hh = 32.0f; /* screen-space size */
                    /* Steering tilt: shift car left/right slightly based on heading */
                    car_cx += heading * 40.0f;

                    /* Car body */
                    DWORD body_col = 0xFFE0E0FF; /* pale blue-white */
                    RHW_VERT car_body[6] = {
                        {car_cx-car_hw, car_cy-car_hh, 0.2f, 1.0f, body_col},
                        {car_cx+car_hw, car_cy-car_hh, 0.2f, 1.0f, body_col},
                        {car_cx-car_hw, car_cy+car_hh, 0.2f, 1.0f, body_col},
                        {car_cx+car_hw, car_cy-car_hh, 0.2f, 1.0f, body_col},
                        {car_cx+car_hw, car_cy+car_hh, 0.2f, 1.0f, body_col},
                        {car_cx-car_hw, car_cy+car_hh, 0.2f, 1.0f, body_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, car_body, sizeof(RHW_VERT));

                    /* Windshield (dark area at top of car) */
                    DWORD wind_col = 0xFF404060;
                    float wh = car_hh * 0.3f;
                    RHW_VERT windshield[6] = {
                        {car_cx-car_hw*0.7f, car_cy-car_hh,    0.15f, 1.0f, wind_col},
                        {car_cx+car_hw*0.7f, car_cy-car_hh,    0.15f, 1.0f, wind_col},
                        {car_cx-car_hw*0.7f, car_cy-car_hh+wh, 0.15f, 1.0f, wind_col},
                        {car_cx+car_hw*0.7f, car_cy-car_hh,    0.15f, 1.0f, wind_col},
                        {car_cx+car_hw*0.7f, car_cy-car_hh+wh, 0.15f, 1.0f, wind_col},
                        {car_cx-car_hw*0.7f, car_cy-car_hh+wh, 0.15f, 1.0f, wind_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, windshield, sizeof(RHW_VERT));

                    /* Taillights */
                    DWORD tail_col = 0xFFFF2222;
                    float tw = 4.0f, th = 3.0f;
                    RHW_VERT tail_l[6] = {
                        {car_cx-car_hw+1, car_cy+car_hh-th, 0.1f, 1.0f, tail_col},
                        {car_cx-car_hw+1+tw, car_cy+car_hh-th, 0.1f, 1.0f, tail_col},
                        {car_cx-car_hw+1, car_cy+car_hh, 0.1f, 1.0f, tail_col},
                        {car_cx-car_hw+1+tw, car_cy+car_hh-th, 0.1f, 1.0f, tail_col},
                        {car_cx-car_hw+1+tw, car_cy+car_hh, 0.1f, 1.0f, tail_col},
                        {car_cx-car_hw+1, car_cy+car_hh, 0.1f, 1.0f, tail_col},
                    };
                    RHW_VERT tail_r[6] = {
                        {car_cx+car_hw-1-tw, car_cy+car_hh-th, 0.1f, 1.0f, tail_col},
                        {car_cx+car_hw-1, car_cy+car_hh-th, 0.1f, 1.0f, tail_col},
                        {car_cx+car_hw-1-tw, car_cy+car_hh, 0.1f, 1.0f, tail_col},
                        {car_cx+car_hw-1, car_cy+car_hh-th, 0.1f, 1.0f, tail_col},
                        {car_cx+car_hw-1, car_cy+car_hh, 0.1f, 1.0f, tail_col},
                        {car_cx+car_hw-1-tw, car_cy+car_hh, 0.1f, 1.0f, tail_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, tail_l, sizeof(RHW_VERT));
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, tail_r, sizeof(RHW_VERT));

                    /* Boost exhaust flames (when actively boosting) */
                    {
                        float boost_val = _R_MEMF(0x5FFD08);
                        uint32_t boost_btn = _R_MEM32(0x5FFD0C);
                        if (boost_btn && boost_val > 0.0f && speed > 5.0f) {
                            /* Animated flame length using a pseudo-random flicker */
                            static uint32_t _flame_seed = 7777;
                            _flame_seed = _flame_seed * 1103515245 + 12345;
                            float flicker = 0.7f + 0.3f * ((float)((_flame_seed >> 16) & 0xFF) / 255.0f);
                            float flame_len = 18.0f * flicker;
                            /* Left exhaust flame */
                            DWORD f_inner = 0xFFFFFF44; /* bright yellow */
                            DWORD f_outer = 0xFFFF4400; /* orange-red at tip */
                            float fx_l = car_cx - car_hw * 0.4f;
                            float fx_r = car_cx + car_hw * 0.4f;
                            float fy_top = car_cy + car_hh;
                            RHW_VERT flame_l[3] = {
                                {fx_l - 3.0f, fy_top, 0.08f, 1.0f, f_inner},
                                {fx_l + 3.0f, fy_top, 0.08f, 1.0f, f_inner},
                                {fx_l, fy_top + flame_len, 0.08f, 1.0f, f_outer},
                            };
                            RHW_VERT flame_r[3] = {
                                {fx_r - 3.0f, fy_top, 0.08f, 1.0f, f_inner},
                                {fx_r + 3.0f, fy_top, 0.08f, 1.0f, f_inner},
                                {fx_r, fy_top + flame_len, 0.08f, 1.0f, f_outer},
                            };
                            g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                                D3DPT_TRIANGLELIST, 1, flame_l, sizeof(RHW_VERT));
                            g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                                D3DPT_TRIANGLELIST, 1, flame_r, sizeof(RHW_VERT));
                        }
                    }
                }

                /* ── Speed lines (at high speed or when boosting) ────── */
                {
                    float abs_spd = speed < 0 ? -speed : speed;
                    if (abs_spd > 25.0f) {
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            D3DRS_ALPHABLENDENABLE, 1);
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            19, 5); /* D3DRS_SRCBLEND = D3DBLEND_SRCALPHA */
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            20, 6); /* D3DRS_DESTBLEND = D3DBLEND_INVSRCALPHA */
                        /* Draw several speed lines streaking from center outward */
                        static uint32_t _line_seed = 42;
                        int li;
                        for (li = 0; li < 8; li++) {
                            _line_seed = _line_seed * 1103515245 + 12345;
                            float lx = (float)((_line_seed >> 16) & 0x1FF) + 70.0f;
                            _line_seed = _line_seed * 1103515245 + 12345;
                            float ly = HORIZON + (float)((_line_seed >> 16) & 0xFF);
                            float line_len = (abs_spd - 25.0f) * 1.5f;
                            if (line_len > 60.0f) line_len = 60.0f;
                            /* Alpha proportional to speed */
                            int alpha = (int)((abs_spd - 25.0f) * 4.0f);
                            if (alpha > 160) alpha = 160;
                            DWORD lc = ((DWORD)alpha << 24) | 0x00CCDDFF;
                            RHW_VERT sline[6] = {
                                {lx, ly,            0.06f, 1.0f, lc},
                                {lx + 1.5f, ly,     0.06f, 1.0f, lc},
                                {lx, ly + line_len, 0.06f, 1.0f, 0x00CCDDFF},
                                {lx + 1.5f, ly,     0.06f, 1.0f, lc},
                                {lx + 1.5f, ly + line_len, 0.06f, 1.0f, 0x00CCDDFF},
                                {lx, ly + line_len, 0.06f, 1.0f, 0x00CCDDFF},
                            };
                            g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                                D3DPT_TRIANGLELIST, 2, sline, sizeof(RHW_VERT));
                        }
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            D3DRS_ALPHABLENDENABLE, 0);
                    }
                }

                /* ── Speed bar (bottom-left HUD) ─────────────────────── */
                {
                    float abs_spd = speed < 0 ? -speed : speed;
                    float bar_pct = abs_spd / 50.0f;
                    if (bar_pct > 1.0f) bar_pct = 1.0f;
                    float bar_w = bar_pct * 150.0f;
                    DWORD bg_col = 0xFF202030;
                    RHW_VERT bg_bar[6] = {
                        {10.0f, SH-30.0f, 0.05f, 1.0f, bg_col},
                        {160.0f, SH-30.0f, 0.05f, 1.0f, bg_col},
                        {10.0f, SH-18.0f, 0.05f, 1.0f, bg_col},
                        {160.0f, SH-30.0f, 0.05f, 1.0f, bg_col},
                        {160.0f, SH-18.0f, 0.05f, 1.0f, bg_col},
                        {10.0f, SH-18.0f, 0.05f, 1.0f, bg_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, bg_bar, sizeof(RHW_VERT));
                    DWORD spd_col = (speed >= 0) ? 0xFF44FF44 : 0xFFFF4444;
                    RHW_VERT spd_bar[6] = {
                        {10.0f, SH-30.0f, 0.04f, 1.0f, spd_col},
                        {10.0f+bar_w, SH-30.0f, 0.04f, 1.0f, spd_col},
                        {10.0f, SH-18.0f, 0.04f, 1.0f, spd_col},
                        {10.0f+bar_w, SH-30.0f, 0.04f, 1.0f, spd_col},
                        {10.0f+bar_w, SH-18.0f, 0.04f, 1.0f, spd_col},
                        {10.0f, SH-18.0f, 0.04f, 1.0f, spd_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, spd_bar, sizeof(RHW_VERT));
                }

                /* ── Boost bar (bottom-left HUD, below speed bar) ────── */
                {
                    float boost = _R_MEMF(0x5FFD08);
                    float boost_pct = boost / 100.0f;
                    if (boost_pct > 1.0f) boost_pct = 1.0f;
                    if (boost_pct < 0.0f) boost_pct = 0.0f;
                    float boost_w = boost_pct * 150.0f;
                    /* Background */
                    DWORD bbg_col = 0xFF202030;
                    RHW_VERT bbg[6] = {
                        {10.0f, SH-46.0f, 0.05f, 1.0f, bbg_col},
                        {160.0f, SH-46.0f, 0.05f, 1.0f, bbg_col},
                        {10.0f, SH-34.0f, 0.05f, 1.0f, bbg_col},
                        {160.0f, SH-46.0f, 0.05f, 1.0f, bbg_col},
                        {160.0f, SH-34.0f, 0.05f, 1.0f, bbg_col},
                        {10.0f, SH-34.0f, 0.05f, 1.0f, bbg_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, bbg, sizeof(RHW_VERT));
                    /* Boost fill: blue normally, orange when actively boosting */
                    uint32_t boost_active = _R_MEM32(0x5FFD0C);
                    DWORD boost_col = (boost_active && boost > 0.0f)
                        ? 0xFFFF8833 : 0xFF3388FF;
                    RHW_VERT bfill[6] = {
                        {10.0f, SH-46.0f, 0.04f, 1.0f, boost_col},
                        {10.0f+boost_w, SH-46.0f, 0.04f, 1.0f, boost_col},
                        {10.0f, SH-34.0f, 0.04f, 1.0f, boost_col},
                        {10.0f+boost_w, SH-46.0f, 0.04f, 1.0f, boost_col},
                        {10.0f+boost_w, SH-34.0f, 0.04f, 1.0f, boost_col},
                        {10.0f, SH-34.0f, 0.04f, 1.0f, boost_col},
                    };
                    if (boost_w > 0.5f) {
                        g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                            D3DPT_TRIANGLELIST, 2, bfill, sizeof(RHW_VERT));
                    }
                }

                /* ── Takedown counter (top-right HUD) ────────────────── */
                {
                    uint32_t takedowns = _R_MEM32(0x5FFD00);
                    if (takedowns > 0) {
                        DWORD td_col = 0xFFFF3333;
                        uint32_t ti;
                        for (ti = 0; ti < takedowns && ti < 20; ti++) {
                            float tx = SW - 20.0f - (float)(ti % 10) * 14.0f;
                            float ty = 10.0f + (float)(ti / 10) * 14.0f;
                            RHW_VERT pip[6] = {
                                {tx, ty, 0.02f, 1.0f, td_col},
                                {tx+10.0f, ty, 0.02f, 1.0f, td_col},
                                {tx, ty+10.0f, 0.02f, 1.0f, td_col},
                                {tx+10.0f, ty, 0.02f, 1.0f, td_col},
                                {tx+10.0f, ty+10.0f, 0.02f, 1.0f, td_col},
                                {tx, ty+10.0f, 0.02f, 1.0f, td_col},
                            };
                            g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                                D3DPT_TRIANGLELIST, 2, pip, sizeof(RHW_VERT));
                        }
                    }
                }

                /* ── Takedown flash effect ────────────────────────────── */
                {
                    float flash = _R_MEMF(0x5FFD04);
                    if (flash > 0.0f) {
                        int alpha = (int)(flash * 2.0f * 180.0f);
                        if (alpha > 180) alpha = 180;
                        if (alpha < 0) alpha = 0;
                        DWORD flash_col = ((DWORD)alpha << 24) | 0x00FFFFFF;
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            D3DRS_ALPHABLENDENABLE, 1);
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            19, 5);
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            20, 6);
                        RHW_VERT flash_verts[6] = {
                            {0.0f, 0.0f, 0.01f, 1.0f, flash_col},
                            {SW, 0.0f, 0.01f, 1.0f, flash_col},
                            {0.0f, SH, 0.01f, 1.0f, flash_col},
                            {SW, 0.0f, 0.01f, 1.0f, flash_col},
                            {SW, SH, 0.01f, 1.0f, flash_col},
                            {0.0f, SH, 0.01f, 1.0f, flash_col},
                        };
                        g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                            D3DPT_TRIANGLELIST, 2, flash_verts, sizeof(RHW_VERT));
                        g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                            D3DRS_ALPHABLENDENABLE, 0);
                    }
                }

                #undef ROAD_SEGS
                #undef ROAD_CURVE
                #undef ROAD_HILL
                #undef PROJ_X
                #undef PROJ_Y
                #undef PROJ_SCALE
            }
            #undef _R_MEMF
            #undef _R_MEM32
        }

        g_d3d_device->lpVtbl->EndScene(g_d3d_device);
        g_d3d_device->lpVtbl->Present(g_d3d_device, NULL, NULL, NULL, NULL);
        {
            extern volatile uint32_t g_present_count;
            g_present_count++;
        }
    }

    /* Update window title with game state (every 30 frames) */
    {
        static uint32_t s_title_counter = 0;
        s_title_counter++;
        if (g_hwnd && (s_title_counter % 30) == 0) {
            extern volatile uint64_t g_icall_count;
            extern volatile uint32_t g_tick_110e0_count;
            extern volatile uint32_t g_present_count;
            /* Read game state from Xbox memory */
            extern ptrdiff_t g_xbox_mem_offset;
            #define XMEM32(a) (*(volatile uint32_t*)((uintptr_t)(a) + g_xbox_mem_offset))
            #define XMEMF(a)  (*(volatile float*)((uintptr_t)(a) + g_xbox_mem_offset))
            char title[256];
            /* Read physics state for display */
            uint32_t phys_ptr = XMEM32(0x557880 + 0x1B4);
            float spd = 0.0f, hdg = 0.0f;
            float px = 0.0f, py = 0.0f;
            if (phys_ptr > 0x100 && phys_ptr < 0x4000000) {
                px  = XMEMF(phys_ptr + 0x10);
                py  = XMEMF(phys_ptr + 0x14);
                hdg = XMEMF(phys_ptr + 0x18);
                spd = XMEMF(phys_ptr + 0x1C);
            }
            uint32_t takedowns = XMEM32(0x5FFD00);
            float boost = *(volatile float*)((uintptr_t)0x5FFD08 + g_xbox_mem_offset);
            uint32_t dist_m = XMEM32(0x5FFD14);
            snprintf(title, sizeof(title),
                "Burnout 3 | spd=%.0f dist=%um TD=%u boost=%.0f%%",
                spd, dist_m, takedowns, boost);
            #undef XMEM32
            #undef XMEMF
            SetWindowTextA(g_hwnd, title);
        }
    }
}

/* ── Main game loop ─────────────────────────────────────────── */

static void game_loop(void)
{
    MSG msg;

    fprintf(stderr, "Entering main loop (press ESC to exit)...\n");

    while (g_running) {
        /* Process Windows messages */
        while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                g_running = FALSE;
                break;
            }
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }

        if (!g_running)
            break;

        /*
         * Frame rendering.
         *
         * Eventually the recompiled game code will drive this.
         * For now, clear to dark blue and present to verify D3D works.
         */
        if (g_d3d_device) {
            g_d3d_device->lpVtbl->BeginScene(g_d3d_device);
            g_d3d_device->lpVtbl->Clear(g_d3d_device, 0, NULL,
                D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER,
                0xFF001030,  /* Dark blue */
                1.0f, 0);
            g_d3d_device->lpVtbl->EndScene(g_d3d_device);
            g_d3d_device->lpVtbl->Present(g_d3d_device, NULL, NULL, NULL, NULL);
        }
        Sleep(16); /* ~60 FPS target */
    }
}

/* ── Entry point ────────────────────────────────────────────── */

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow)
{
    const char *xbe_path = DEFAULT_XBE_PATH;

    (void)hPrevInstance;
    (void)nCmdShow;

    fprintf(stderr, "Burnout 3: Takedown - Static Recompilation\n");
    fprintf(stderr, "==========================================\n\n");

    /* Allow custom XBE path via command line */
    if (lpCmdLine && lpCmdLine[0]) {
        xbe_path = lpCmdLine;
    }

    /* Load the original XBE (needed for data sections) */
    if (!load_xbe(xbe_path)) {
        MessageBoxA(NULL,
            "Failed to load default.xbe.\n\n"
            "Place the game files in a 'Burnout 3 Takedown' folder\n"
            "next to this executable, or pass the XBE path as an argument.",
            WINDOW_TITLE, MB_OK | MB_ICONERROR);
        return 1;
    }

    /* Create the game window */
    g_hwnd = create_window(hInstance, DEFAULT_WIDTH, DEFAULT_HEIGHT);
    if (!g_hwnd) {
        fprintf(stderr, "FATAL: Failed to create window\n");
        shutdown_subsystems();
        return 1;
    }

    /* Initialize all subsystems */
    if (!init_subsystems()) {
        shutdown_subsystems();
        return 1;
    }

    /* Run recompiled code integration tests */
    {
        int recomp_run_tests(void);
        int test_result = recomp_run_tests();
        if (test_result < 0) {
            fprintf(stderr, "WARNING: Integration tests skipped\n");
        } else if (test_result != 0) {
            fprintf(stderr, "WARNING: Some integration tests failed\n");
        }
    }

    /* Register VEH for crash diagnostics */
    AddVectoredExceptionHandler(1, crash_veh);

    /* Start KeTickCount updater thread (Xbox timing) */
    CreateThread(NULL, 0, tick_count_thread_func, NULL, 0, NULL);

    /* Start watchdog thread for periodic register dumps */
    CreateThread(NULL, 0, watchdog_thread_func, NULL, 0, NULL);

    /* Call the recompiled game entry point with crash protection.
     * We push a dummy return address (simulating x86 'call' instruction)
     * because the translated code expects [esp] = return addr on entry. */
    fprintf(stderr, "\n=== Calling xbe_entry_point (0x001D2807) ===\n");
    fprintf(stderr, "  g_esp = 0x%08X before call\n", g_esp);
    fprintf(stderr, "  JT verify pre-entry: [0x16CC8]=0x%08X (expect 0x000166D1)\n", MEM32(0x16CC8));
    fprintf(stderr, "  RW vtable BEFORE init: 0x36B860=0x%08X 0x36B89C=0x%08X\n",
            MEM32(0x36B860), MEM32(0x36B89C));
    __try {
        PUSH32(g_esp, 0); /* simulate 'call' pushing return address */
        xbe_entry_point();
        fprintf(stderr, "xbe_entry_point returned normally (g_eax=0x%08X)\n", g_eax);
    } __except(
        (fprintf(stderr, "CRASH in xbe_entry_point: exception 0x%08lX\n",
                 GetExceptionInformation()->ExceptionRecord->ExceptionCode),
         fprintf(stderr, "  Fault address: 0x%p\n",
                 GetExceptionInformation()->ExceptionRecord->ExceptionAddress),
         GetExceptionInformation()->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION
            ? fprintf(stderr, "  Access violation %s address 0x%p\n",
                      GetExceptionInformation()->ExceptionRecord->ExceptionInformation[0] ? "writing" : "reading",
                      (void*)GetExceptionInformation()->ExceptionRecord->ExceptionInformation[1])
            : 0,
         EXCEPTION_EXECUTE_HANDLER)
    ) {
        DWORD code = GetExceptionCode();
        switch (code) {
        case EXCEPTION_ACCESS_VIOLATION:
            fprintf(stderr, "  Registers: eax=0x%08X ecx=0x%08X edx=0x%08X esp=0x%08X\n",
                    g_eax, g_ecx, g_edx, g_esp);
            fprintf(stderr, "  ebx=0x%08X esi=0x%08X edi=0x%08X seh_ebp=0x%08X\n",
                    g_ebx, g_esi, g_edi, g_seh_ebp);
            /* Dump simulated Xbox stack to find return addresses */
            {
                int j;
                uint32_t sp = g_esp;
                fprintf(stderr, "  Xbox stack dump (16 dwords from esp=0x%08X):\n", sp);
                for (j = 0; j < 16 && sp + j*4 < XBOX_STACK_TOP; j++) {
                    uint32_t val = MEM32(sp + j*4);
                    fprintf(stderr, "    [esp+%02X] 0x%08X", j*4, val);
                    /* Mark values that look like code addresses */
                    if (val >= 0x00010000 && val < 0x002CE000)
                        fprintf(stderr, " <- .text");
                    fprintf(stderr, "\n");
                }
            }
            break;
        case EXCEPTION_STACK_OVERFLOW:
            fprintf(stderr, "  Stack overflow (infinite recursion?)\n");
            break;
        case EXCEPTION_INT_DIVIDE_BY_ZERO:
            fprintf(stderr, "  Integer divide by zero\n");
            break;
        case EXCEPTION_ILLEGAL_INSTRUCTION:
            fprintf(stderr, "  Illegal instruction (tried to execute Xbox code VA as native?)\n");
            break;
        default:
            fprintf(stderr, "  Exception code: 0x%08lX\n", code);
            break;
        }
    }

    /* Run the game window loop */
    game_loop();

    /* Clean up */
    shutdown_subsystems();

    fprintf(stderr, "\nBurnout 3 exited normally.\n");
    return 0;
}
