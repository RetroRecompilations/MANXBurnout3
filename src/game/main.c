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

            /* Keyboard: WASD for driving */
            if (GetAsyncKeyState('W') & 0x8000) throttle += 1000;
            if (GetAsyncKeyState('S') & 0x8000) throttle -= 1000;
            if (GetAsyncKeyState('A') & 0x8000) steering -= 1000;
            if (GetAsyncKeyState('D') & 0x8000) steering += 1000;

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

        /* Draw top-down driving view using D3D8 pre-transformed vertices.
         * Camera follows car position. Car rotates with heading. */
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

                /* Screen constants */
                const float SCR_W = 640.0f, SCR_H = 480.0f;
                const float SCR_CX = SCR_W * 0.5f, SCR_CY = SCR_H * 0.5f;
                const float PX_PER_UNIT = 4.0f;  /* zoom level */

                /* World-to-screen: camera centered on car */
                #define W2SX(wx) (SCR_CX + ((wx) - px) * PX_PER_UNIT)
                #define W2SY(wy) (SCR_CY - ((wy) - py) * PX_PER_UNIT)

                /* Trig for heading: sin/cos for rotating car and road features */
                float sh = sinf(heading), ch = cosf(heading);

                /* XYZRHW + DIFFUSE vertex */
                typedef struct { float x, y, z, rhw; DWORD color; } RHW_VERT;

                /* Set render state for flat colored primitives */
                g_d3d_device->lpVtbl->SetVertexShader(g_d3d_device,
                    D3DFVF_XYZRHW | D3DFVF_DIFFUSE);
                g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                    D3DRS_ZENABLE, 0);
                g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                    D3DRS_LIGHTING, 0);
                g_d3d_device->lpVtbl->SetRenderState(g_d3d_device,
                    D3DRS_CULLMODE, 1 /* D3DCULL_NONE */);
                g_d3d_device->lpVtbl->SetTexture(g_d3d_device, 0, NULL);

                /* ── Road surface: wide strip along Y axis ───────────── */
                /* Draw as a tall rectangle (road width ~30 world units centered at x=0) */
                {
                    DWORD road_col = 0xFF1A1A2A; /* dark asphalt */
                    float road_hw = 15.0f; /* half-width in world units */
                    /* Four corners of a very tall road strip */
                    float rl = W2SX(-road_hw), rr = W2SX(road_hw);
                    float rt = 0.0f, rb = SCR_H; /* fill full screen height */
                    RHW_VERT road[6] = {
                        {rl, rt, 0.9f, 1.0f, road_col},
                        {rr, rt, 0.9f, 1.0f, road_col},
                        {rl, rb, 0.9f, 1.0f, road_col},
                        {rr, rt, 0.9f, 1.0f, road_col},
                        {rr, rb, 0.9f, 1.0f, road_col},
                        {rl, rb, 0.9f, 1.0f, road_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, road, sizeof(RHW_VERT));
                }

                /* ── Road edge lines (left and right) ────────────────── */
                {
                    DWORD edge_col = 0xFFCCCCCC; /* white edge lines */
                    float edge_w = 0.3f; /* line width in world units */
                    float lx = -15.0f, rx = 15.0f;
                    float sl = W2SX(lx), sr = W2SX(rx);
                    float slw = edge_w * PX_PER_UNIT;
                    /* Left edge */
                    RHW_VERT ledge[6] = {
                        {sl-slw, 0.0f, 0.8f, 1.0f, edge_col},
                        {sl+slw, 0.0f, 0.8f, 1.0f, edge_col},
                        {sl-slw, SCR_H, 0.8f, 1.0f, edge_col},
                        {sl+slw, 0.0f, 0.8f, 1.0f, edge_col},
                        {sl+slw, SCR_H, 0.8f, 1.0f, edge_col},
                        {sl-slw, SCR_H, 0.8f, 1.0f, edge_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, ledge, sizeof(RHW_VERT));
                    /* Right edge */
                    RHW_VERT redge[6] = {
                        {sr-slw, 0.0f, 0.8f, 1.0f, edge_col},
                        {sr+slw, 0.0f, 0.8f, 1.0f, edge_col},
                        {sr-slw, SCR_H, 0.8f, 1.0f, edge_col},
                        {sr+slw, 0.0f, 0.8f, 1.0f, edge_col},
                        {sr+slw, SCR_H, 0.8f, 1.0f, edge_col},
                        {sr-slw, SCR_H, 0.8f, 1.0f, edge_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, redge, sizeof(RHW_VERT));
                }

                /* ── Center line dashes (scroll with car's Y position) ── */
                {
                    DWORD dash_col = 0xFFAAAA44; /* yellow center line */
                    float dash_len = 3.0f;  /* world units */
                    float gap_len  = 4.0f;  /* world units */
                    float period   = dash_len + gap_len;
                    float dash_hw  = 0.2f;  /* half-width in world units */
                    float cx_s = W2SX(0.0f); /* center of road on screen */
                    float dhw = dash_hw * PX_PER_UNIT;

                    /* How far the camera sees (in world units) */
                    float view_range = SCR_H / PX_PER_UNIT / 2.0f + period;
                    float y_start = py - view_range;
                    /* Snap to period boundary */
                    y_start = floorf(y_start / period) * period;
                    int i;
                    for (i = 0; i < 24; i++) {
                        float wy = y_start + i * period;
                        float sy_top = W2SY(wy + dash_len);
                        float sy_bot = W2SY(wy);
                        /* Cull off-screen */
                        if (sy_top > SCR_H || sy_bot < 0.0f) continue;
                        RHW_VERT dash[6] = {
                            {cx_s-dhw, sy_top, 0.7f, 1.0f, dash_col},
                            {cx_s+dhw, sy_top, 0.7f, 1.0f, dash_col},
                            {cx_s-dhw, sy_bot, 0.7f, 1.0f, dash_col},
                            {cx_s+dhw, sy_top, 0.7f, 1.0f, dash_col},
                            {cx_s+dhw, sy_bot, 0.7f, 1.0f, dash_col},
                            {cx_s-dhw, sy_bot, 0.7f, 1.0f, dash_col},
                        };
                        g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                            D3DPT_TRIANGLELIST, 2, dash, sizeof(RHW_VERT));
                    }
                }

                /* ── Car body: rotated rectangle ─────────────────────── */
                {
                    /* Car dimensions in world units */
                    float car_len = 4.5f;  /* front-to-back */
                    float car_wid = 2.0f;  /* side-to-side */
                    float hl = car_len * 0.5f, hw = car_wid * 0.5f;
                    /* Four corners rotated by heading, in screen coords.
                     * Car "forward" is along heading direction.
                     * heading=0 → facing up (north). */
                    /* Forward and right vectors in world space */
                    float fw_x = sh, fw_y = ch;   /* forward */
                    float rt_x = ch, rt_y = -sh;  /* right */
                    /* World-space corners (relative to car center) */
                    float c0x = (-hw*rt_x + hl*fw_x), c0y = (-hw*rt_y + hl*fw_y); /* front-left */
                    float c1x = ( hw*rt_x + hl*fw_x), c1y = ( hw*rt_y + hl*fw_y); /* front-right */
                    float c2x = ( hw*rt_x - hl*fw_x), c2y = ( hw*rt_y - hl*fw_y); /* rear-right */
                    float c3x = (-hw*rt_x - hl*fw_x), c3y = (-hw*rt_y - hl*fw_y); /* rear-left */
                    /* Convert to screen (car is at camera center) */
                    DWORD car_col = 0xFFE0E0FF; /* pale blue-white */
                    RHW_VERT car[6] = {
                        {SCR_CX + c0x*PX_PER_UNIT, SCR_CY - c0y*PX_PER_UNIT, 0.3f, 1.0f, car_col},
                        {SCR_CX + c1x*PX_PER_UNIT, SCR_CY - c1y*PX_PER_UNIT, 0.3f, 1.0f, car_col},
                        {SCR_CX + c3x*PX_PER_UNIT, SCR_CY - c3y*PX_PER_UNIT, 0.3f, 1.0f, car_col},
                        {SCR_CX + c1x*PX_PER_UNIT, SCR_CY - c1y*PX_PER_UNIT, 0.3f, 1.0f, car_col},
                        {SCR_CX + c2x*PX_PER_UNIT, SCR_CY - c2y*PX_PER_UNIT, 0.3f, 1.0f, car_col},
                        {SCR_CX + c3x*PX_PER_UNIT, SCR_CY - c3y*PX_PER_UNIT, 0.3f, 1.0f, car_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, car, sizeof(RHW_VERT));

                    /* Windshield indicator (front of car): red triangle */
                    {
                        DWORD hood_col = 0xFFFF4444; /* red */
                        float fx = SCR_CX + (hl*fw_x)*PX_PER_UNIT;
                        float fy = SCR_CY - (hl*fw_y)*PX_PER_UNIT;
                        float lx = SCR_CX + (hl*0.6f*fw_x - hw*0.5f*rt_x)*PX_PER_UNIT;
                        float ly = SCR_CY - (hl*0.6f*fw_y - hw*0.5f*rt_y)*PX_PER_UNIT;
                        float rx2 = SCR_CX + (hl*0.6f*fw_x + hw*0.5f*rt_x)*PX_PER_UNIT;
                        float ry2 = SCR_CY - (hl*0.6f*fw_y + hw*0.5f*rt_y)*PX_PER_UNIT;
                        RHW_VERT hood[3] = {
                            {fx,  fy,  0.2f, 1.0f, hood_col},
                            {lx, ly, 0.2f, 1.0f, hood_col},
                            {rx2, ry2, 0.2f, 1.0f, hood_col},
                        };
                        g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                            D3DPT_TRIANGLELIST, 1, hood, sizeof(RHW_VERT));
                    }
                }

                /* ── Speed bar (bottom-left HUD) ─────────────────────── */
                {
                    float abs_spd = speed < 0 ? -speed : speed;
                    float bar_pct = abs_spd / 50.0f;
                    if (bar_pct > 1.0f) bar_pct = 1.0f;
                    float bar_w = bar_pct * 150.0f;

                    /* Background bar */
                    DWORD bg_col = 0xFF202030;
                    RHW_VERT bg_bar[6] = {
                        {10.0f, SCR_H-30.0f, 0.1f, 1.0f, bg_col},
                        {160.0f, SCR_H-30.0f, 0.1f, 1.0f, bg_col},
                        {10.0f, SCR_H-18.0f, 0.1f, 1.0f, bg_col},
                        {160.0f, SCR_H-30.0f, 0.1f, 1.0f, bg_col},
                        {160.0f, SCR_H-18.0f, 0.1f, 1.0f, bg_col},
                        {10.0f, SCR_H-18.0f, 0.1f, 1.0f, bg_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, bg_bar, sizeof(RHW_VERT));

                    /* Speed fill */
                    DWORD spd_col = (speed >= 0) ? 0xFF44FF44 : 0xFFFF4444; /* green fwd, red reverse */
                    RHW_VERT spd_bar[6] = {
                        {10.0f, SCR_H-30.0f, 0.05f, 1.0f, spd_col},
                        {10.0f+bar_w, SCR_H-30.0f, 0.05f, 1.0f, spd_col},
                        {10.0f, SCR_H-18.0f, 0.05f, 1.0f, spd_col},
                        {10.0f+bar_w, SCR_H-30.0f, 0.05f, 1.0f, spd_col},
                        {10.0f+bar_w, SCR_H-18.0f, 0.05f, 1.0f, spd_col},
                        {10.0f, SCR_H-18.0f, 0.05f, 1.0f, spd_col},
                    };
                    g_d3d_device->lpVtbl->DrawPrimitiveUP(g_d3d_device,
                        D3DPT_TRIANGLELIST, 2, spd_bar, sizeof(RHW_VERT));
                }

                #undef W2SX
                #undef W2SY
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
            uint32_t game_state = XMEM32(0x4D53B8);
            uint32_t load_state = XMEM32(0x4D5388);
            float delta_time    = XMEMF(0x4AE1FC);
            uint32_t frame_ctr  = XMEM32(0x4A1D84);
            /* Car state: 0x557880 + 0x1E4 = state machine index */
            uint32_t car_state  = XMEM32(0x557880 + 0x1E4);
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
            snprintf(title, sizeof(title),
                "Burnout 3 | spd=%.1f hdg=%.0f° pos=(%.0f,%.0f) tick=%u",
                spd, hdg * 57.2958f, px, py, g_tick_110e0_count);
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
