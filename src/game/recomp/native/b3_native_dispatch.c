/**
 * Indirect-call dispatch for the transformed subset.
 *
 * RECOMP_ICALL resolves a computed call target through
 * recomp_lookup_manual() first, then recomp_lookup(), then
 * recomp_lookup_kernel(). In this build all three were weak stubs that
 * only recorded the request and returned NULL, so every indirect call
 * was silently dropped and the caller carried on with eax = 0.
 *
 * That is not a small gap. RenderWare dispatches its render pipelines
 * through function pointers, so the game's draw calls are reached almost
 * entirely by computed call: of the 33 functions in the XBE that call the
 * DrawVerticesUP shim at 0x001D7D50, only two are reachable from the boot
 * entry by direct calls at all.
 *
 * The table below binds every transformed function this build defines to
 * its original Xbox address. Measured against the booting game it still
 * answers none of them: all 24 distinct targets the game asks for are
 * outside this build — eight exist in the full transform but were not
 * selected into it, nine are code addresses the function scanner never
 * recognised as function starts, and the rest are null or data. So this
 * is the mechanism plus the instrument that measures the shortfall, not
 * a fix on its own; it starts paying the moment the built set grows.
 * Set B3_DISPATCH_TRACE to see exactly what is being asked for.
 *
 * Only recomp_lookup_manual is defined here, so a miss still falls
 * through to the weak recomp_lookup in b3_native_runtime.c and is
 * recorded there for coverage reporting.
 */

/* Compiled into each consumer rather than into the archive, so it cannot
 * rely on the library target's forced includes. */
#include "msvc_compat.h"
#include "recomp_funcs.h"
/* Declares the transformed functions this directory defines. Some are
 * library-section entries recomp_funcs.h does not name, so the table
 * cannot be built from that header alone. */
#include "b3_decls.h"
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#if defined(__linux__)
#include <execinfo.h>
#endif

void sub_000871D0(void);
void sub_00014FB0(void);
void sub_000151D0(void);
void sub_001C1930(void);
void sub_000B53F0(void);
void sub_000F9CE0(void);

typedef struct { uint32_t va; recomp_func_t fn; } b3_dispatch_entry;
void sub_00014760(void);
void sub_000190F0(void);

#if defined(__GNUC__)
extern uint32_t burnout3_kernel_heap_alloc(uint32_t size, uint32_t align)
    __attribute__((weak));
extern void burnout3_kernel_heap_free(uint32_t va) __attribute__((weak));
extern void burnout3_kernel_service_resource_worker(void)
    __attribute__((weak));
#endif

/* 0x1FEDE0 is the retail CRT allocation callback. Its generated route enters
 * the Xbox driver's cache allocator before that cache is valid in the native
 * boot. Keep the ABI but allocate from the kernel shim's guest-address heap. */
static void b3_dispatch_alloc_callback(void)
{
#if defined(__GNUC__)
    uint32_t size = MEM32(g_esp + 4);
    if (size > 0x04000000u) {
        fprintf(stderr,
                "b3_dispatch: bad alloc size=%08X hint=%08X esp=%08X "
                "eax=%08X ecx=%08X edx=%08X ebx=%08X esi=%08X edi=%08X\n",
                size, MEM32(g_esp + 8), g_esp, g_eax, g_ecx, g_edx,
                g_ebx, g_esi, g_edi);
        fprintf(stderr, "b3_dispatch: prior indirect targets:");
        uint64_t available = g_icall_trace_idx < 8u ? g_icall_trace_idx : 8u;
        for (uint64_t i = available; i != 0; i--) {
            uint64_t index = g_icall_trace_idx - i;
            fprintf(stderr, " %08X",
                    g_icall_trace[index & (ICALL_TRACE_SIZE - 1u)]);
        }
        fprintf(stderr, "\n");
    }
    g_eax = burnout3_kernel_heap_alloc
        ? burnout3_kernel_heap_alloc(size ? size : 1, 16)
        : 0;
    g_esp += 4; /* cdecl: pop only the dummy return address */
#else
    sub_001FEDE0();
#endif
}

/* 0x2440A5 is the retail CRT free callback installed in RenderWare's memory
 * function table. The scanner split it from its SEH prologue, so the generated
 * body reads arguments through a stale g_seh_ebp and can loop forever when it
 * is reached indirectly. The native kernel shim uses a bump allocator and has
 * no per-block free operation anyway, making a cdecl-compatible no-op the
 * correct portable implementation for this callback. */
static void b3_dispatch_free_callback(void)
{
#if defined(__GNUC__)
    uint32_t va = MEM32(g_esp + 4);
    if (burnout3_kernel_heap_free)
        burnout3_kernel_heap_free(va);
    g_eax = 0;
    g_esp += 4; /* pop the dummy return address; caller pops the argument */
#else
    sub_002440A5();
#endif
}

/* Jump-table continuations inside sub_001DE3C0. The scanner emitted the
 * containing function but not these two valid entry points, so an indirect
 * tail jump used to discard the device commands. Both adapters enter after
 * sub_001DE3C0's `sub esp,1Ch; push esi` prologue and therefore perform its
 * shared epilogue themselves. */
static void b3_dispatch_device_copy_caps(void)
{
    uint32_t caps_va = MEM32(g_esp + 0x28);
    uint32_t context = MEM32(g_esp + 0x2C);
    if (caps_va && caps_va + 56u <= 0x04000000u) {
        for (uint32_t offset = 0; offset < 56; offset += 4)
            MEM32(caps_va + offset) = MEM32(0x003C0AD0u + offset);
    }
    MEM32(0x00759284u) = context;
    g_eax = 1;
    g_esi = MEM32(g_esp);
    g_esp += 4u + 0x1Cu + 4u;
}

static void b3_dispatch_device_open(void)
{
    /* DXVK's D3D8 device is already live before the XBE thread starts. */
    g_eax = 1;
    g_esi = MEM32(g_esp);
    g_esp += 4u + 0x1Cu + 4u;
}

static const struct { uint32_t id; uint32_t fn; } k_rw_standards[] = {
    { 0x01, 0x1DD910 }, { 0x0A, 0x1DDAE0 }, { 0x15, 0x1DE0F0 },
    { 0x14, 0x1DDAF0 }, { 0x02, 0x1E48E0 }, { 0x03, 0x1E4BE0 },
    { 0x07, 0x1E5870 }, { 0x06, 0x1E52C0 }, { 0x05, 0x1DCDC0 },
    { 0x04, 0x1DCB70 }, { 0x09, 0x1E5AE0 }, { 0x08, 0x1DCF40 },
    { 0x0F, 0x1DBDE0 }, { 0x10, 0x1DC150 }, { 0x17, 0x1DC2D0 },
    { 0x18, 0x1DC360 }, { 0x0E, 0x1E7AD0 }, { 0x0D, 0x1E7AB0 },
    { 0x11, 0x1E7730 }, { 0x12, 0x1E7770 }, { 0x13, 0x1E7750 },
    { 0x0B, 0x1E7B10 }, { 0x0C, 0x1DCF50 }, { 0x19, 0x1E6710 },
    { 0x1B, 0x1E67B0 }, { 0x1A, 0x1E6A60 }, { 0x1C, 0x1DCEB0 },
};

static void b3_rw_init_native_device_state(void)
{
    const uint32_t table = 0x7592E8u;
    for (uint32_t i = 0; i < 0x20; i++) MEM32(table + i * 4) = 0x24B90u;
    for (size_t i = 0; i < sizeof(k_rw_standards) / sizeof(k_rw_standards[0]); i++)
        MEM32(table + k_rw_standards[i].id * 4) = k_rw_standards[i].fn;
    MEM32(0x7592A8u) = 0x1DB620u;
    MEM32(0x7592ACu) = 0x1DB2C0u;
    MEM32(0x7592B0u) = 0x1DB9D0u;
    MEM32(0x7592B4u) = 0x1DB6D0u;
    MEM32(0x7592CCu) = 0x1E2930u;
    MEM32(0x7592D0u) = 0x1E2330u;
    MEM32(0x41AAD4u) = 1;
}

static void b3_dispatch_device_stop(void)
{
    /* The host graphics device remains owned by DXVK across RW stop/start. */
    g_eax = 1;
    g_esi = MEM32(g_esp);
    g_esp += 4u + 0x1Cu + 4u;
}

static void b3_dispatch_device_start(void)
{
    b3_rw_init_native_device_state();
    MEM32(0x7591E4u) = 0;
    g_eax = 1;
    g_esi = MEM32(g_esp);
    g_esp += 4u + 0x1Cu + 4u;
}

/* Command 11 asks the driver to populate a caller-owned standards table.
 * sub_001DE190 uses EBX for the destination and ESI for the entry count;
 * those values are the command function's fourth and sixth arguments. */
static void b3_dispatch_device_get_standards(void)
{
    uint32_t destination = MEM32(g_esp + 0x28);
    uint32_t count = MEM32(g_esp + 0x30);
    if (destination < 0x04000000u && count <= 0x1000u &&
        destination <= 0x04000000u - count * 4u) {
        for (uint32_t i = 0; i < count; i++)
            MEM32(destination + i * 4u) = 0x24B90u;
        for (size_t i = 0;
             i < sizeof(k_rw_standards) / sizeof(k_rw_standards[0]); i++) {
            if (k_rw_standards[i].id < count)
                MEM32(destination + k_rw_standards[i].id * 4u) =
                    k_rw_standards[i].fn;
        }
    }
    b3_rw_init_native_device_state();
    g_eax = 1;
    g_esi = MEM32(g_esp);
    g_esp += 4u + 0x1Cu + 4u;
}

/* Scanner-missed RenderWare object-construction callback at 0x1E16D0. */
static void b3_dispatch_rw_object_construct(void)
{
    uint32_t result = MEM32(g_esp + 4);
    uint32_t offset = MEM32(g_esp + 8);
    if (offset <= 0x04000000u - 0x7592A8u) {
        MEM32(offset + 0x7592A0u) = 0;
        MEM32(offset + 0x7592A4u) = 0x80000000u;
        MEM32(0x41AC64u) = offset;
        MEM32(0x41AC68u) = MEM32(0x41AC68u) + 1u;
    }
    g_eax = result;
    g_esp += 4u; /* cdecl: caller removes both arguments */
}

/* Small scanner-missed thiscall vtable methods used by the async resource
 * queues. They are pure address/accessor operations and can be represented
 * exactly without running the Xbox worker thread. */
static void b3_dispatch_resource_get_value(void)
{
    g_eax = MEM32(g_ecx + 4u);
    g_esp += 4u;
}

static void b3_dispatch_resource_status(void)
{
    g_eax = MEM32(g_ecx + 0x20u);
    g_esp += 4u;
}

static void b3_dispatch_resource_initialize(void)
{
    uint32_t source = MEM32(g_esp + 8u);
    uint32_t flags = MEM32(g_esp + 12u);

    /* sub_001B3950 builds the worker's open path in the inline 0x104-byte
     * buffer at +0x38.  It prepends the retail DVD root at 0x3B12E4,
     * strips an input drive prefix, and normalises path separators. */
    uint32_t destination = g_ecx + 0x38u;
    uint32_t written = 0;
    if (source < 0x04000000u) {
        for (uint32_t i = 0; i < 4u && source + i < 0x04000000u; i++) {
            if (MEM8(source + i) == ':') {
                source += i + 1u;
                break;
            }
        }
        for (uint32_t p = 0x003B12E4u;
             p < 0x04000000u && written + 1u < 0x104u && MEM8(p); p++)
            MEM8(destination + written++) = MEM8(p);
        while (source < 0x04000000u && written + 1u < 0x104u) {
            uint8_t ch = MEM8(source++);
            if (ch == '/' || ch == '\\') ch = '\\';
            MEM8(destination + written++) = ch;
            if (!ch) break;
        }
    }
    if (!written || MEM8(destination + written - 1u) != 0)
        MEM8(destination + written) = 0;

    MEM32(g_ecx + 0x08u) = MEM32(g_esp + 4u);
    MEM32(g_ecx + 0x18u) = 0;
    MEM32(g_ecx + 0x1Cu) = 0;
    MEM32(g_ecx + 0x24u) = 0;
    MEM32(g_ecx + 0x28u) = flags & 0x10u;
    if (flags & 0x10u) {
        MEM32(g_ecx + 0x140u) = 1;
        /* The retail system thread can open the queued DVD file before the
         * caller submits its first read. Service that state transition here
         * in the cooperative native runtime so the filename buffer is not
         * overwritten by the subsequent destination/length fields. */
        if (burnout3_kernel_service_resource_worker)
            burnout3_kernel_service_resource_worker();
    }
    g_eax = 0;
    g_esp += 16u; /* ret 12 */
}

static void b3_dispatch_resource_reset(void)
{
    MEM32(g_ecx + 0x30u) = 0xFFFFFFFFu;
    MEM32(g_ecx + 0x140u) = 0;
    MEM32(g_ecx + 0x20u) = 0;
    g_eax = 0;
    g_esp += 4u;
}

static void b3_dispatch_resource_begin(void)
{
    MEM32(g_ecx + 0x20u) = 2;
    MEM8(g_ecx + 0x144u) = 0;
    if (MEM32(g_ecx + 0x28u)) {
        MEM32(g_ecx + 0x140u) = 2;
        MEM32(g_ecx + 0x3Cu) = MEM32(g_esp + 4u);
        MEM32(g_ecx + 0x38u) = MEM32(g_esp + 8u);
        g_eax = 0;
    } else {
        /* The normal path queues host file work. Keep the return value
         * non-null so the retail state machine records the request. */
        g_eax = g_ecx;
    }
    g_esp += 12u; /* ret 8 */
}

static void b3_dispatch_resource_slot(void)
{
    uint32_t index = MEM32(g_esp + 4u);
    g_eax = MEM32(g_ecx + 0x1Cu) + index * 0x160u;
    g_esp += 8u; /* ret 4 */
}

static void b3_dispatch_resource_record(void)
{
    uint32_t index = MEM32(g_esp + 4u);
    g_eax = MEM32(g_ecx + 0x10u) + index * 0x38u;
    g_esp += 8u; /* ret 4 */
}

/* RenderWare's batched point transform, installed at standards slot 0x06. */
static void b3_dispatch_transform_points(void)
{
    uint32_t dst_va = MEM32(g_esp + 4u);
    uint32_t src_va = MEM32(g_esp + 8u);
    uint32_t count = MEM32(g_esp + 12u);
    uint32_t matrix_va = MEM32(g_esp + 16u);
    if (count <= 0x100000u && dst_va < 0x04000000u &&
        src_va < 0x04000000u && matrix_va <= 0x04000000u - 64u &&
        count <= (0x04000000u - dst_va) / 12u &&
        count <= (0x04000000u - src_va) / 12u) {
        float *dst = (float *)XBOX_PTR(dst_va);
        const float *src = (const float *)XBOX_PTR(src_va);
        const float *m = (const float *)XBOX_PTR(matrix_va);
        for (uint32_t i = 0; i < count; i++) {
            float x = src[i * 3], y = src[i * 3 + 1], z = src[i * 3 + 2];
            dst[i * 3]     = x*m[0] + y*m[4] + z*m[8]  + m[12];
            dst[i * 3 + 1] = x*m[1] + y*m[5] + z*m[9]  + m[13];
            dst[i * 3 + 2] = x*m[2] + y*m[6] + z*m[10] + m[14];
        }
    }
    g_eax = dst_va;
    g_esp += 4u; /* cdecl */
}

static void b3_dispatch_im2d_construct(void)
{
    uint32_t result = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(g_esp + 8u);
    if (offset <= 0x04000000u - 0x7592B8u) {
        MEM32(offset + 0x7592A8u) = 0x1DB620u;
        MEM32(offset + 0x7592ACu) = 0x1DB2C0u;
        MEM32(offset + 0x7592B0u) = 0x1DB9D0u;
        MEM32(offset + 0x7592B4u) = 0x1DB6D0u;
        MEM32(0x41AAD0u) = offset;
        MEM32(0x41AAD4u) = MEM32(0x41AAD4u) + 1u;
    }
    g_eax = result;
    g_esp += 4u;
}

static void b3_dispatch_im2d_destruct(void)
{
    uint32_t count = MEM32(0x41AAD4u);
    if (count) MEM32(0x41AAD4u) = count - 1u;
    g_eax = MEM32(g_esp + 4u);
    g_esp += 4u;
}

static void b3_dispatch_im3d_construct(void)
{
    MEM32(0x41AD24u) = MEM32(0x41AD24u) + 1u;
    g_eax = MEM32(g_esp + 4u);
    g_esp += 4u;
}

static void b3_dispatch_im3d_destruct(void)
{
    uint32_t count = MEM32(0x41AD24u);
    if (count) MEM32(0x41AD24u) = count - 1u;
    g_eax = MEM32(g_esp + 4u);
    g_esp += 4u;
}

static void b3_dispatch_rw_object_destruct(void)
{
    uint32_t count = MEM32(0x41AC68u);
    if (count) MEM32(0x41AC68u) = count - 1u;
    g_eax = MEM32(g_esp + 4u);
    g_esp += 4u;
}

/* Scanner-missed RenderWare world-pipeline constructor at 0x1E0860.
 * This is a direct translation of the 0x001E0860..0x001E08F7 retail body.
 * The callback creates the platform pipeline state through sub_001E0FD0,
 * stores it in the plugin block selected by the caller-supplied offset, and
 * returns the original object on success. */
static void b3_dispatch_world_pipeline_construct(void)
{
    uint32_t entry_esp = g_esp;
    uint32_t object = MEM32(entry_esp + 4u);
    uint32_t offset = MEM32(entry_esp + 8u);
    uint32_t count = MEM32(0x003C0B5Cu);
    uint32_t stride = MEM32(0x003C0B58u);

    g_esp -= 0x0Cu;
    PUSH32(g_esp, 0x0004000Du);
    PUSH32(g_esp, 0x0041AC0Cu);
    PUSH32(g_esp, count);
    PUSH32(g_esp, 0x10u);
    PUSH32(g_esp, stride);
    PUSH32(g_esp, 0x40u);
    PUSH32(g_esp, 0u);
    sub_001E0FD0();
    g_esp += 0x18u;

    uint32_t pipeline = g_eax;
    if (pipeline && offset <= 0x04000000u - 0x007592B8u) {
        MEM32(offset + 0x007592A0u) = pipeline;
        MEM32(offset + 0x007592A4u) = 0x00020000u;
        MEM32(offset + 0x007592A8u) = 0x001DFF10u;
        MEM32(offset + 0x007592ACu) = 0x3F800000u;
        MEM32(offset + 0x007592B0u) = 0x3F800000u;
        MEM32(offset + 0x007592B4u) = 0x3F800000u;
        MEM32(0x0041AC08u) = MEM32(0x0041AC08u) + 1u;
        g_eax = object;
    } else {
        g_eax = 0;
    }

    g_esp = entry_esp + 4u; /* cdecl: pop only the dummy return address */
}

static void b3_dispatch_world_pipeline_destruct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(0x0041AC04u);
    if (offset <= 0x04000000u - 0x007592A4u) {
        uint32_t pipeline = MEM32(offset + 0x007592A0u);
        if (pipeline) {
            PUSH32(g_esp, pipeline);
            PUSH32(g_esp, 0u);
            sub_001E09E0();
            g_esp += 4u;
            MEM32(offset + 0x007592A0u) = 0;
        }
    }
    uint32_t count = MEM32(0x0041AC08u);
    if (count) MEM32(0x0041AC08u) = count - 1u;
    g_eax = object;
    g_esp += 4u;
}

/* Scanner-missed world-sector pipeline constructor/destructor pair at
 * 0x1DCF80/0x1DCFE0. These use RenderWare's plugin callback ABI. */
static void b3_dispatch_world_sector_construct(void)
{
    uint32_t entry_esp = g_esp;
    uint32_t object = MEM32(entry_esp + 4u);
    uint32_t offset = MEM32(entry_esp + 8u);

    PUSH32(g_esp, 0x0004000Eu);
    PUSH32(g_esp, 0x0041AAE0u);
    PUSH32(g_esp, MEM32(0x003C0A40u));
    PUSH32(g_esp, 0x10u);
    PUSH32(g_esp, MEM32(0x003C0A3Cu));
    PUSH32(g_esp, MEM32(0x003C0A24u));
    PUSH32(g_esp, 0u);
    sub_001E0FD0();
    g_esp += 0x18u;

    uint32_t pipeline = g_eax;
    if (pipeline && offset <= 0x04000000u - 0x007592A4u) {
        MEM32(offset + 0x007592A0u) = pipeline;
        MEM32(0x0075935Cu) = 0x0075935Cu;
        MEM32(0x00759360u) = 0x0075935Cu;
        MEM32(0x0041AB08u) = MEM32(0x0041AB08u) + 1u;
        g_eax = object;
    } else {
        g_eax = 0;
    }
    g_esp = entry_esp + 4u;
}

static void b3_dispatch_world_sector_destruct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(0x0041AB04u);
    if (offset <= 0x04000000u - 0x007592A4u) {
        uint32_t pipeline = MEM32(offset + 0x007592A0u);
        if (pipeline) {
            PUSH32(g_esp, pipeline);
            PUSH32(g_esp, 0u);
            sub_001E09E0();
            g_esp += 4u;
            MEM32(offset + 0x007592A0u) = 0;
        }
    }
    uint32_t count = MEM32(0x0041AB08u);
    if (count) MEM32(0x0041AB08u) = count - 1u;
    g_eax = object;
    g_esp += 4u;
}

static uint32_t b3_create_simple_pipeline(uint32_t size, uint32_t stride,
                                          uint32_t count, uint32_t alignment,
                                          uint32_t globals, uint32_t plugin_id)
{
    PUSH32(g_esp, plugin_id);
    PUSH32(g_esp, globals);
    PUSH32(g_esp, count);
    PUSH32(g_esp, alignment);
    PUSH32(g_esp, stride);
    PUSH32(g_esp, size);
    PUSH32(g_esp, 0u);
    sub_001E0FD0();
    g_esp += 0x18u;
    return g_eax;
}

static void b3_destroy_simple_pipeline(uint32_t pipeline)
{
    if (!pipeline) return;
    PUSH32(g_esp, pipeline);
    PUSH32(g_esp, 0u);
    sub_001E09E0();
    g_esp += 4u;
}

static void b3_dispatch_mesh_pipeline_construct(void)
{
    uint32_t entry_esp = g_esp;
    uint32_t object = MEM32(entry_esp + 4u);
    uint32_t offset = MEM32(entry_esp + 8u);
    MEM32(0x0041AB88u) = offset;
    uint32_t pipeline = b3_create_simple_pipeline(
        0x24u, MEM32(0x003C0B28u), MEM32(0x003C0B2Cu), 4u,
        0x0041AB90u, 0x00040404u);
    if (offset <= 0x04000000u - 0x007592A4u)
        MEM32(offset + 0x007592A0u) = pipeline;
    if (pipeline) {
        MEM32(0x0041AB8Cu) = MEM32(0x0041AB8Cu) + 1u;
        g_eax = object;
    } else {
        g_eax = 0;
    }
    g_esp = entry_esp + 4u;
}

static void b3_dispatch_mesh_pipeline_destruct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(0x0041AB88u);
    if (offset <= 0x04000000u - 0x007592A4u)
        b3_destroy_simple_pipeline(MEM32(offset + 0x007592A0u));
    uint32_t count = MEM32(0x0041AB8Cu);
    if (count) MEM32(0x0041AB8Cu) = count - 1u;
    g_eax = object;
    g_esp += 4u;
}

static void b3_dispatch_light_pipeline_construct(void)
{
    uint32_t entry_esp = g_esp;
    uint32_t object = MEM32(entry_esp + 4u);
    uint32_t offset = MEM32(entry_esp + 8u);
    MEM32(0x0041AA68u) = offset;
    uint32_t pipeline = b3_create_simple_pipeline(
        MEM32(0x003C0810u), MEM32(0x003C0828u), MEM32(0x003C082Cu), 0x10u,
        0x0041AA44u, 0x00040005u);
    if (offset <= 0x04000000u - 0x007592A4u)
        MEM32(offset + 0x007592A0u) = pipeline;
    if (pipeline) {
        MEM32(0x0041AA6Cu) = MEM32(0x0041AA6Cu) + 1u;
        g_eax = object;
    } else {
        g_eax = 0;
    }
    g_esp = entry_esp + 4u;
}

static void b3_dispatch_light_pipeline_destruct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(0x0041AA68u);
    if (offset <= 0x04000000u - 0x007592A4u) {
        b3_destroy_simple_pipeline(MEM32(offset + 0x007592A0u));
        MEM32(offset + 0x007592A0u) = 0;
    }
    uint32_t count = MEM32(0x0041AA6Cu);
    if (count) MEM32(0x0041AA6Cu) = count - 1u;
    g_eax = object;
    g_esp += 4u;
}

static void b3_dispatch_raster_pipeline_construct(void)
{
    uint32_t entry_esp = g_esp;
    uint32_t object = MEM32(entry_esp + 4u);
    uint32_t offset = MEM32(entry_esp + 8u);
    MEM32(0x0041ABB4u) = offset;

    uint32_t primary = b3_create_simple_pipeline(
        MEM32(0x003C0B30u), MEM32(0x003C0B48u), MEM32(0x003C0B4Cu),
        4u, 0x0041ABBCu, 0x00040018u);
    if (offset <= 0x04000000u - 0x007594C0u)
        MEM32(offset + 0x007592A0u) = primary;

    uint32_t secondary = primary ? b3_create_simple_pipeline(
        0x34u, MEM32(0x003C0B48u), MEM32(0x003C0B54u),
        4u, 0x0041ABE0u, 0x00040406u) : 0;
    if (offset <= 0x04000000u - 0x007594C0u)
        MEM32(offset + 0x007594B8u) = secondary;

    uint32_t table_a = 0;
    uint32_t table_b = 0;
    if (primary && secondary && burnout3_kernel_heap_alloc) {
        table_a = burnout3_kernel_heap_alloc(0x100u, 16u);
        table_b = burnout3_kernel_heap_alloc(0x100u, 16u);
    }
    if (primary && secondary && table_a && table_b &&
        offset <= 0x04000000u - 0x007594C0u) {
        MEM32(offset + 0x007592A4u) = table_a;
        MEM32(offset + 0x007592A8u) = 0x100u;
        MEM8(table_a) = 0;
        MEM32(offset + 0x007594B0u) = table_b;
        MEM32(offset + 0x007594B4u) = 0x100u;
        MEM32(offset + 0x007594BCu) = 0;
        MEM32(0x0041ABB8u) = MEM32(0x0041ABB8u) + 1u;
        g_eax = object;
    } else {
        b3_destroy_simple_pipeline(secondary);
        b3_destroy_simple_pipeline(primary);
        g_eax = 0;
    }
    g_esp = entry_esp + 4u;
}

static void b3_dispatch_raster_pipeline_destruct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(0x0041ABB4u);
    if (offset <= 0x04000000u - 0x007594C0u) {
        b3_destroy_simple_pipeline(MEM32(offset + 0x007594B8u));
        b3_destroy_simple_pipeline(MEM32(offset + 0x007592A0u));
        MEM32(offset + 0x007592A0u) = 0;
        MEM32(offset + 0x007592A4u) = 0;
        MEM32(offset + 0x007592A8u) = 0;
        MEM32(offset + 0x007594B0u) = 0;
        MEM32(offset + 0x007594B4u) = 0;
        MEM32(offset + 0x007594B8u) = 0;
        MEM32(offset + 0x007594BCu) = 0;
    }
    uint32_t count = MEM32(0x0041ABB8u);
    if (count) MEM32(0x0041ABB8u) = count - 1u;
    g_eax = object;
    g_esp += 4u;
}

static void b3_dispatch_material_pipeline_construct(void)
{
    uint32_t entry_esp = g_esp;
    uint32_t object = MEM32(entry_esp + 4u);
    uint32_t offset = MEM32(entry_esp + 8u);
    if (offset <= 0x04000000u - 0x00759304u) {
        uint32_t state = offset + 0x007592CCu;
        memset((void *)XBOX_PTR(state), 0, 13u * sizeof(uint32_t));
        MEM8(offset + 0x007592ECu) = 0;
        MEM8(offset + 0x007592EDu) = 0x80u;
        MEM32(offset + 0x007592A0u) = state;
    }
    MEM32(0x0041AB5Cu) = offset;
    uint32_t pipeline = b3_create_simple_pipeline(
        MEM32(0x003C0B08u), MEM32(0x003C0B20u), MEM32(0x003C0B24u),
        4u, 0x0041AB64u, 0x00040407u);
    if (offset <= 0x04000000u - 0x00759304u)
        MEM32(offset + 0x00759300u) = pipeline;
    if (pipeline) {
        MEM32(0x0041AB60u) = MEM32(0x0041AB60u) + 1u;
        g_eax = object;
    } else {
        g_eax = 0;
    }
    g_esp = entry_esp + 4u;
}

static void b3_dispatch_material_pipeline_destruct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(0x0041AB5Cu);
    if (offset <= 0x04000000u - 0x00759304u) {
        b3_destroy_simple_pipeline(MEM32(offset + 0x00759300u));
        MEM32(offset + 0x00759300u) = 0;
    }
    uint32_t count = MEM32(0x0041AB60u);
    if (count) MEM32(0x0041AB60u) = count - 1u;
    g_eax = object;
    g_esp += 4u;
}

/* The retail plugin-registration block contains several callback entry
 * points that the function scanner omitted because they begin without a
 * conventional prologue. Keeping their ABI live lets the XBE complete the
 * registration transaction; their plugin-specific state is translated as
 * each consumer becomes reachable. */
static void b3_dispatch_plugin_identity(void)
{
    g_eax = MEM32(g_esp + 4u);
    g_esp += 4u; /* cdecl: caller owns the plugin callback arguments */
}

static void b3_dispatch_skin_pipeline_construct(void)
{
    uint32_t entry_esp = g_esp;
    uint32_t object = MEM32(entry_esp + 4u);
    uint32_t offset = MEM32(entry_esp + 8u);
    MEM32(0x0041B380u) = offset;
    uint32_t pipeline = b3_create_simple_pipeline(
        MEM32(0x003C0E94u), MEM32(0x003C0EB8u), MEM32(0x003C0EBCu),
        4u, 0x0041B358u, 0x00040007u);
    if (offset <= 0x04000000u - 0x007592A4u)
        MEM32(offset + 0x007592A0u) = pipeline;
    if (pipeline) {
        MEM32(0x0041B384u) = MEM32(0x0041B384u) + 1u;
        g_eax = object;
    } else {
        g_eax = 0;
    }
    g_esp = entry_esp + 4u;
}

static void b3_dispatch_skin_pipeline_destruct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t offset = MEM32(0x0041B380u);
    if (offset <= 0x04000000u - 0x007592A4u) {
        b3_destroy_simple_pipeline(MEM32(offset + 0x007592A0u));
        MEM32(offset + 0x007592A0u) = 0;
    }
    uint32_t count = MEM32(0x0041B384u);
    if (count) MEM32(0x0041B384u) = count - 1u;
    g_eax = object;
    g_esp += 4u;
}

/* Standards slot 0x14 toggles the RenderWare render-state sentinel. The
 * platform device is already active, so the Xbox-only device kick that
 * follows the toggle is intentionally owned by the host backend. */
static void b3_dispatch_render_toggle(void)
{
    MEM32(0x41AB40u) = (MEM32(g_esp + 12u) & 1u) ? 1u : 0x80000000u;
    g_eax = 1;
    g_esp += 4u; /* cdecl */
}

/* Scanner-missed RenderWare plugin constructor at 0x1F0250. */
static void b3_dispatch_rw_plugin_construct(void)
{
    uint32_t object = MEM32(g_esp + 4u);
    uint32_t base = MEM32(0x41B2FCu);
    if (object <= 0x04000000u - 0x20u &&
        base <= 0x04000000u - 0x1Cu &&
        object <= 0x04000000u - base - 0x1Cu) {
        uint32_t state = base + object;
        MEM32(state + 0x00u) = 0;
        MEM32(state + 0x04u) = 0;
        MEM32(state + 0x08u) = 0;
        MEM32(state + 0x0Cu) = 0;
        MEM32(state + 0x10u) = MEM32(object + 0x18u);
        MEM32(state + 0x14u) = MEM32(object + 0x1Cu);
        MEM32(state + 0x18u) = MEM32(object + 0x10u);
        MEM32(object + 0x10u) = 0x1F0200u;
        MEM32(object + 0x18u) = 0x1EF850u;
        MEM32(object + 0x1Cu) = 0x1EF880u;
    }
    g_eax = object;
    g_esp += 4u; /* cdecl */
}

/* Sorted ascending by Xbox VA, generated from the files present in this
 * directory, so it can never name a function the build does not define.
 *
 * Nine functions in the 0x245000-0x24B000 CRT range are left out: two of
 * them call mid-function entry points (0x0024A53A, 0x0024A9B9) that were
 * never transformed, and naming any of the nine would drag those two
 * object files into the link and fail it. They were unreachable before
 * this table existed and they stay unreachable. */
static const b3_dispatch_entry k_dispatch[] = {
    { 0x00011030u, sub_00011030 },
    { 0x00011080u, sub_00011080 },
    { 0x000110E0u, sub_000110E0 },
    { 0x00011240u, sub_00011240 },
    { 0x000113F0u, sub_000113F0 },
    { 0x000114E0u, sub_000114E0 },
    { 0x00011510u, sub_00011510 },
    { 0x00011540u, sub_00011540 },
    { 0x00011570u, sub_00011570 },
    { 0x000115C0u, sub_000115C0 },
    { 0x00011610u, sub_00011610 },
    { 0x00011640u, sub_00011640 },
    { 0x000116A0u, sub_000116A0 },
    { 0x000116D0u, sub_000116D0 },
    { 0x000116E0u, sub_000116E0 },
    { 0x00011900u, sub_00011900 },
    { 0x00011AF0u, sub_00011AF0 },
    { 0x00013B20u, sub_00013B20 },
    { 0x00013BD0u, sub_00013BD0 },
    { 0x00013C10u, sub_00013C10 },
    { 0x00013C60u, sub_00013C60 },
    { 0x00013CA0u, sub_00013CA0 },
    { 0x00013D10u, sub_00013D10 },
    { 0x00013E50u, sub_00013E50 },
    { 0x00013EB0u, sub_00013EB0 },
    { 0x00013F10u, sub_00013F10 },
    { 0x000146E0u, sub_000146E0 },
    { 0x00014730u, sub_00014730 },
    { 0x00014860u, sub_00014860 },
    { 0x00014D20u, sub_00014D20 },
    { 0x00015510u, sub_00015510 },
    { 0x00015570u, sub_00015570 },
    { 0x00015750u, sub_00015750 },
    { 0x00015A60u, sub_00015A60 },
    { 0x00015F10u, sub_00015F10 },
    { 0x000165F0u, sub_000165F0 },
    { 0x00016D00u, sub_00016D00 },
    { 0x00016E00u, sub_00016E00 },
    { 0x00016EF0u, sub_00016EF0 },
    { 0x00017060u, sub_00017060 },
    { 0x000170B0u, sub_000170B0 },
    { 0x000171A0u, sub_000171A0 },
    { 0x00017250u, sub_00017250 },
    { 0x000172D0u, sub_000172D0 },
    { 0x00017310u, sub_00017310 },
    { 0x00017370u, sub_00017370 },
    { 0x00017390u, sub_00017390 },
    { 0x000173B0u, sub_000173B0 },
    { 0x000173D0u, sub_000173D0 },
    { 0x00017750u, sub_00017750 },
    { 0x00017BB0u, sub_00017BB0 },
    { 0x00017C50u, sub_00017C50 },
    { 0x00018050u, sub_00018050 },
    { 0x00018110u, sub_00018110 },
    { 0x00018170u, sub_00018170 },
    { 0x00018250u, sub_00018250 },
    { 0x00018280u, sub_00018280 },
    { 0x00018650u, sub_00018650 },
    { 0x00018BB0u, sub_00018BB0 },
    { 0x00018BD0u, sub_00018BD0 },
    { 0x00019110u, sub_00019110 },
    { 0x000196F0u, sub_000196F0 },
    { 0x00019900u, sub_00019900 },
    { 0x00019A10u, sub_00019A10 },
    { 0x00019FB0u, sub_00019FB0 },
    { 0x0001AF70u, sub_0001AF70 },
    { 0x0001B2B0u, sub_0001B2B0 },
    { 0x0001B3A0u, sub_0001B3A0 },
    { 0x0001B5C0u, sub_0001B5C0 },
    { 0x0001B640u, sub_0001B640 },
    { 0x0001BBE0u, sub_0001BBE0 },
    { 0x0001BE60u, sub_0001BE60 },
    { 0x0001C340u, sub_0001C340 },
    { 0x0001C9D0u, sub_0001C9D0 },
    { 0x0001CBC0u, sub_0001CBC0 },
    { 0x0001CE70u, sub_0001CE70 },
    { 0x0001CED0u, sub_0001CED0 },
    { 0x0001CF50u, sub_0001CF50 },
    { 0x0001D090u, sub_0001D090 },
    { 0x0001D1D0u, sub_0001D1D0 },
    { 0x0001D490u, sub_0001D490 },
    { 0x0001D4C0u, sub_0001D4C0 },
    { 0x0001DBB0u, sub_0001DBB0 },
    { 0x0001DE50u, sub_0001DE50 },
    { 0x0001EE50u, sub_0001EE50 },
    { 0x0001EFE0u, sub_0001EFE0 },
    { 0x0001F450u, sub_0001F450 },
    { 0x0001F7C0u, sub_0001F7C0 },
    { 0x000201A0u, sub_000201A0 },
    { 0x00020760u, sub_00020760 },
    { 0x00020800u, sub_00020800 },
    { 0x00020860u, sub_00020860 },
    { 0x00020930u, sub_00020930 },
    { 0x00020CD0u, sub_00020CD0 },
    { 0x00020CE0u, sub_00020CE0 },
    { 0x000214B0u, sub_000214B0 },
    { 0x00021790u, sub_00021790 },
    { 0x000218A0u, sub_000218A0 },
    { 0x00021A50u, sub_00021A50 },
    { 0x00021B40u, sub_00021B40 },
    { 0x00021C20u, sub_00021C20 },
    { 0x00021D50u, sub_00021D50 },
    { 0x00021D60u, sub_00021D60 },
    { 0x00021EB0u, sub_00021EB0 },
    { 0x00022040u, sub_00022040 },
    { 0x000222C0u, sub_000222C0 },
    { 0x00022520u, sub_00022520 },
    { 0x00022660u, sub_00022660 },
    { 0x000226D0u, sub_000226D0 },
    { 0x00022784u, sub_00022784 },
    { 0x00022790u, sub_00022790 },
    { 0x000229E0u, sub_000229E0 },
    { 0x00022B30u, sub_00022B30 },
    { 0x00022D30u, sub_00022D30 },
    { 0x00022EF0u, sub_00022EF0 },
    { 0x00022F60u, sub_00022F60 },
    { 0x00023800u, sub_00023800 },
    { 0x00023870u, sub_00023870 },
    { 0x00023B00u, sub_00023B00 },
    { 0x0002C0D0u, sub_0002C0D0 },
    { 0x0002DD80u, sub_0002DD80 },
    { 0x0002DDC0u, sub_0002DDC0 },
    { 0x0002DDF0u, sub_0002DDF0 },
    { 0x0002DE40u, sub_0002DE40 },
    { 0x0002EA40u, sub_0002EA40 },
    { 0x0002EB50u, sub_0002EB50 },
    { 0x0002EBE0u, sub_0002EBE0 },
    { 0x0002ECC0u, sub_0002ECC0 },
    { 0x0002EE70u, sub_0002EE70 },
    { 0x0002EF90u, sub_0002EF90 },
    { 0x0002F260u, sub_0002F260 },
    { 0x0002F330u, sub_0002F330 },
    { 0x0002F380u, sub_0002F380 },
    { 0x0002F650u, sub_0002F650 },
    { 0x00030120u, sub_00030120 },
    { 0x00030150u, sub_00030150 },
    { 0x00031010u, sub_00031010 },
    { 0x000310F0u, sub_000310F0 },
    { 0x00031330u, sub_00031330 },
    { 0x00032020u, sub_00032020 },
    { 0x000323D0u, sub_000323D0 },
    { 0x000324A0u, sub_000324A0 },
    { 0x00032580u, sub_00032580 },
    { 0x000328B0u, sub_000328B0 },
    { 0x000328F0u, sub_000328F0 },
    { 0x00032CA0u, sub_00032CA0 },
    { 0x00032D80u, sub_00032D80 },
    { 0x00032DC0u, sub_00032DC0 },
    { 0x00033F20u, sub_00033F20 },
    { 0x000340E0u, sub_000340E0 },
    { 0x00035740u, sub_00035740 },
    { 0x00035C00u, sub_00035C00 },
    { 0x00036250u, sub_00036250 },
    { 0x000363C0u, sub_000363C0 },
    { 0x00036450u, sub_00036450 },
    { 0x000365D0u, sub_000365D0 },
    { 0x000380D0u, sub_000380D0 },
    { 0x00038BC0u, sub_00038BC0 },
    { 0x00038C00u, sub_00038C00 },
    { 0x00038D10u, sub_00038D10 },
    { 0x00039140u, sub_00039140 },
    { 0x0003A3C0u, sub_0003A3C0 },
    { 0x0003B060u, sub_0003B060 },
    { 0x0003B0B0u, sub_0003B0B0 },
    { 0x0003B0E0u, sub_0003B0E0 },
    { 0x0003B180u, sub_0003B180 },
    { 0x0003B240u, sub_0003B240 },
    { 0x0003B350u, sub_0003B350 },
    { 0x0003B430u, sub_0003B430 },
    { 0x0003BFB0u, sub_0003BFB0 },
    { 0x0003C0D0u, sub_0003C0D0 },
    { 0x0003C8A0u, sub_0003C8A0 },
    { 0x0003D4A0u, sub_0003D4A0 },
    { 0x0003D500u, sub_0003D500 },
    { 0x0003D620u, sub_0003D620 },
    { 0x0003D690u, sub_0003D690 },
    { 0x0003D890u, sub_0003D890 },
    { 0x0003D9E0u, sub_0003D9E0 },
    { 0x0003FE10u, sub_0003FE10 },
    { 0x0003FEE0u, sub_0003FEE0 },
    { 0x00040310u, sub_00040310 },
    { 0x00040660u, sub_00040660 },
    { 0x00040820u, sub_00040820 },
    { 0x00040AE0u, sub_00040AE0 },
    { 0x00040B90u, sub_00040B90 },
    { 0x00040CF0u, sub_00040CF0 },
    { 0x00043FC0u, sub_00043FC0 },
    { 0x00044BF0u, sub_00044BF0 },
    { 0x00044CF0u, sub_00044CF0 },
    { 0x00044D70u, sub_00044D70 },
    { 0x00044E10u, sub_00044E10 },
    { 0x00044EF0u, sub_00044EF0 },
    { 0x00044FE0u, sub_00044FE0 },
    { 0x00045050u, sub_00045050 },
    { 0x000450E0u, sub_000450E0 },
    { 0x000486E0u, sub_000486E0 },
    { 0x00048760u, sub_00048760 },
    { 0x00048800u, sub_00048800 },
    { 0x0004BF10u, sub_0004BF10 },
    { 0x0004BFC0u, sub_0004BFC0 },
    { 0x0004DA90u, sub_0004DA90 },
    { 0x0004DD00u, sub_0004DD00 },
    { 0x0004E100u, sub_0004E100 },
    { 0x0004E360u, sub_0004E360 },
    { 0x0004E3B0u, sub_0004E3B0 },
    { 0x0004EDC0u, sub_0004EDC0 },
    { 0x0004F020u, sub_0004F020 },
    { 0x0004F520u, sub_0004F520 },
    { 0x0004F630u, sub_0004F630 },
    { 0x0004F7F0u, sub_0004F7F0 },
    { 0x0004F990u, sub_0004F990 },
    { 0x000509B0u, sub_000509B0 },
    { 0x00050A70u, sub_00050A70 },
    { 0x000511C0u, sub_000511C0 },
    { 0x00051650u, sub_00051650 },
    { 0x00051970u, sub_00051970 },
    { 0x00051C70u, sub_00051C70 },
    { 0x000520D0u, sub_000520D0 },
    { 0x000521F0u, sub_000521F0 },
    { 0x00052620u, sub_00052620 },
    { 0x000526C0u, sub_000526C0 },
    { 0x00052AB0u, sub_00052AB0 },
    { 0x00052D50u, sub_00052D50 },
    { 0x00053300u, sub_00053300 },
    { 0x00053420u, sub_00053420 },
    { 0x00053540u, sub_00053540 },
    { 0x00053660u, sub_00053660 },
    { 0x000538B0u, sub_000538B0 },
    { 0x00053A10u, sub_00053A10 },
    { 0x00053AA0u, sub_00053AA0 },
    { 0x00053B70u, sub_00053B70 },
    { 0x00053BE0u, sub_00053BE0 },
    { 0x00053DE0u, sub_00053DE0 },
    { 0x00053ED0u, sub_00053ED0 },
    { 0x000542D0u, sub_000542D0 },
    { 0x00054630u, sub_00054630 },
    { 0x00056DB0u, sub_00056DB0 },
    { 0x000589E0u, sub_000589E0 },
    { 0x00059850u, sub_00059850 },
    { 0x00059D20u, sub_00059D20 },
    { 0x0005A010u, sub_0005A010 },
    { 0x0005A390u, sub_0005A390 },
    { 0x0005A3F0u, sub_0005A3F0 },
    { 0x0005A640u, sub_0005A640 },
    { 0x0005AA60u, sub_0005AA60 },
    { 0x0005DFD0u, sub_0005DFD0 },
    { 0x00060570u, sub_00060570 },
    { 0x00061B20u, sub_00061B20 },
    { 0x00062B40u, sub_00062B40 },
    { 0x00062BD0u, sub_00062BD0 },
    { 0x00062DA0u, sub_00062DA0 },
    { 0x00063050u, sub_00063050 },
    { 0x00063590u, sub_00063590 },
    { 0x00063670u, sub_00063670 },
    { 0x000636D0u, sub_000636D0 },
    { 0x00064490u, sub_00064490 },
    { 0x00067880u, sub_00067880 },
    { 0x00086F70u, sub_00086F70 },
    { 0x000871D0u, sub_000871D0 },
    { 0x000B52A0u, sub_000B52A0 },
    { 0x000B95B0u, sub_000B95B0 },
    { 0x000BCB10u, sub_000BCB10 },
    { 0x000BEB80u, sub_000BEB80 },
    { 0x000BFB10u, sub_000BFB10 },
    { 0x000BFB50u, sub_000BFB50 },
    { 0x000BFC40u, sub_000BFC40 },
    { 0x000C2360u, sub_000C2360 },
    { 0x000C2D90u, sub_000C2D90 },
    { 0x000C2DF0u, sub_000C2DF0 },
    { 0x000C2ED0u, sub_000C2ED0 },
    { 0x000C2FC0u, sub_000C2FC0 },
    { 0x000C3260u, sub_000C3260 },
    { 0x000C32A0u, sub_000C32A0 },
    { 0x000C4620u, sub_000C4620 },
    { 0x000D3EA0u, sub_000D3EA0 },
    { 0x000D7F00u, sub_000D7F00 },
    { 0x000E2780u, sub_000E2780 },
    { 0x000E2D30u, sub_000E2D30 },
    { 0x000E3E90u, sub_000E3E90 },
    { 0x000E9D20u, sub_000E9D20 },
    { 0x000EF060u, sub_000EF060 },
    { 0x000F0DF0u, sub_000F0DF0 },
    { 0x000F2010u, sub_000F2010 },
    { 0x000F67B0u, sub_000F67B0 },
    { 0x000F68E0u, sub_000F68E0 },
    { 0x000FA780u, sub_000FA780 },
    { 0x000FBE20u, sub_000FBE20 },
    { 0x000FBE60u, sub_000FBE60 },
    { 0x000FBE80u, sub_000FBE80 },
    { 0x000FC420u, sub_000FC420 },
    { 0x000FC5D0u, sub_000FC5D0 },
    { 0x000FC710u, sub_000FC710 },
    { 0x000FC990u, sub_000FC990 },
    { 0x000FC9F0u, sub_000FC9F0 },
    { 0x000FCB30u, sub_000FCB30 },
    { 0x000FD830u, sub_000FD830 },
    { 0x000FDAC0u, sub_000FDAC0 },
    { 0x000FE410u, sub_000FE410 },
    { 0x000FE520u, sub_000FE520 },
    { 0x000FEFD0u, sub_000FEFD0 },
    { 0x000FF030u, sub_000FF030 },
    { 0x000FF090u, sub_000FF090 },
    { 0x000FF0E0u, sub_000FF0E0 },
    { 0x000FF160u, sub_000FF160 },
    { 0x000FF270u, sub_000FF270 },
    { 0x000FF550u, sub_000FF550 },
    { 0x000FF650u, sub_000FF650 },
    { 0x000FF830u, sub_000FF830 },
    { 0x000FFC50u, sub_000FFC50 },
    { 0x000FFC80u, sub_000FFC80 },
    { 0x000FFD20u, sub_000FFD20 },
    { 0x000FFD50u, sub_000FFD50 },
    { 0x000FFDD0u, sub_000FFDD0 },
    { 0x000FFF00u, sub_000FFF00 },
    { 0x00100440u, sub_00100440 },
    { 0x00100950u, sub_00100950 },
    { 0x00100B00u, sub_00100B00 },
    { 0x00100BB0u, sub_00100BB0 },
    { 0x00100E80u, sub_00100E80 },
    { 0x00100F00u, sub_00100F00 },
    { 0x00101080u, sub_00101080 },
    { 0x001010F0u, sub_001010F0 },
    { 0x00101120u, sub_00101120 },
    { 0x001012B0u, sub_001012B0 },
    { 0x001014F0u, sub_001014F0 },
    { 0x00101700u, sub_00101700 },
    { 0x00101790u, sub_00101790 },
    { 0x001019B0u, sub_001019B0 },
    { 0x00101C90u, sub_00101C90 },
    { 0x00101E10u, sub_00101E10 },
    { 0x00101FA0u, sub_00101FA0 },
    { 0x001020A0u, sub_001020A0 },
    { 0x001027C0u, sub_001027C0 },
    { 0x00102810u, sub_00102810 },
    { 0x00102CA0u, sub_00102CA0 },
    { 0x00102FD0u, sub_00102FD0 },
    { 0x00103150u, sub_00103150 },
    { 0x00103660u, sub_00103660 },
    { 0x00103860u, sub_00103860 },
    { 0x00103950u, sub_00103950 },
    { 0x00103F50u, sub_00103F50 },
    { 0x00103F80u, sub_00103F80 },
    { 0x00103FB0u, sub_00103FB0 },
    { 0x001042A0u, sub_001042A0 },
    { 0x001045F0u, sub_001045F0 },
    { 0x001064B0u, sub_001064B0 },
    { 0x00106500u, sub_00106500 },
    { 0x00106590u, sub_00106590 },
    { 0x001066A0u, sub_001066A0 },
    { 0x00106720u, sub_00106720 },
    { 0x001068A0u, sub_001068A0 },
    { 0x001069C0u, sub_001069C0 },
    { 0x00106F20u, sub_00106F20 },
    { 0x00107E90u, sub_00107E90 },
    { 0x00107FD0u, sub_00107FD0 },
    { 0x00108080u, sub_00108080 },
    { 0x00108240u, sub_00108240 },
    { 0x001084E0u, sub_001084E0 },
    { 0x00108EF0u, sub_00108EF0 },
    { 0x00108F90u, sub_00108F90 },
    { 0x00109040u, sub_00109040 },
    { 0x00109190u, sub_00109190 },
    { 0x00109270u, sub_00109270 },
    { 0x00109BB0u, sub_00109BB0 },
    { 0x0010A440u, sub_0010A440 },
    { 0x0010A490u, sub_0010A490 },
    { 0x0010A9D0u, sub_0010A9D0 },
    { 0x0010ABC0u, sub_0010ABC0 },
    { 0x0010AC20u, sub_0010AC20 },
    { 0x0010B210u, sub_0010B210 },
    { 0x0010B310u, sub_0010B310 },
    { 0x0010BE70u, sub_0010BE70 },
    { 0x0010C000u, sub_0010C000 },
    { 0x0010C0D0u, sub_0010C0D0 },
    { 0x0010C220u, sub_0010C220 },
    { 0x0010C3B0u, sub_0010C3B0 },
    { 0x0010C520u, sub_0010C520 },
    { 0x0010C550u, sub_0010C550 },
    { 0x0010C570u, sub_0010C570 },
    { 0x0010C590u, sub_0010C590 },
    { 0x0010C5B0u, sub_0010C5B0 },
    { 0x0010C5F0u, sub_0010C5F0 },
    { 0x0010CD10u, sub_0010CD10 },
    { 0x0010D1C0u, sub_0010D1C0 },
    { 0x0010D490u, sub_0010D490 },
    { 0x0010D9E0u, sub_0010D9E0 },
    { 0x0010DAC0u, sub_0010DAC0 },
    { 0x0010DCA0u, sub_0010DCA0 },
    { 0x0010DD20u, sub_0010DD20 },
    { 0x0010E510u, sub_0010E510 },
    { 0x0010E580u, sub_0010E580 },
    { 0x0010E610u, sub_0010E610 },
    { 0x0010E690u, sub_0010E690 },
    { 0x0010EC10u, sub_0010EC10 },
    { 0x0010F8D0u, sub_0010F8D0 },
    { 0x0010FB20u, sub_0010FB20 },
    { 0x0010FB50u, sub_0010FB50 },
    { 0x0010FB70u, sub_0010FB70 },
    { 0x0010FBC0u, sub_0010FBC0 },
    { 0x0010FC30u, sub_0010FC30 },
    { 0x0010FC50u, sub_0010FC50 },
    { 0x0010FCE0u, sub_0010FCE0 },
    { 0x00110280u, sub_00110280 },
    { 0x00110420u, sub_00110420 },
    { 0x00110AF0u, sub_00110AF0 },
    { 0x00111140u, sub_00111140 },
    { 0x00111230u, sub_00111230 },
    { 0x00111340u, sub_00111340 },
    { 0x00111620u, sub_00111620 },
    { 0x00111680u, sub_00111680 },
    { 0x00111750u, sub_00111750 },
    { 0x00111850u, sub_00111850 },
    { 0x00111AC0u, sub_00111AC0 },
    { 0x00111BD0u, sub_00111BD0 },
    { 0x00111CD0u, sub_00111CD0 },
    { 0x00112170u, sub_00112170 },
    { 0x001121F0u, sub_001121F0 },
    { 0x00112E70u, sub_00112E70 },
    { 0x001135E0u, sub_001135E0 },
    { 0x00113890u, sub_00113890 },
    { 0x00113960u, sub_00113960 },
    { 0x00114270u, sub_00114270 },
    { 0x00114610u, sub_00114610 },
    { 0x00114730u, sub_00114730 },
    { 0x00114910u, sub_00114910 },
    { 0x00114D10u, sub_00114D10 },
    { 0x00114E60u, sub_00114E60 },
    { 0x00114F30u, sub_00114F30 },
    { 0x00115130u, sub_00115130 },
    { 0x00116080u, sub_00116080 },
    { 0x00116110u, sub_00116110 },
    { 0x00117730u, sub_00117730 },
    { 0x00119F40u, sub_00119F40 },
    { 0x0011A020u, sub_0011A020 },
    { 0x0011A720u, sub_0011A720 },
    { 0x0011BC60u, sub_0011BC60 },
    { 0x0011F890u, sub_0011F890 },
    { 0x00120470u, sub_00120470 },
    { 0x001204C0u, sub_001204C0 },
    { 0x001205E0u, sub_001205E0 },
    { 0x00120BA0u, sub_00120BA0 },
    { 0x00120EC0u, sub_00120EC0 },
    { 0x00121400u, sub_00121400 },
    { 0x00121B50u, sub_00121B50 },
    { 0x00121C00u, sub_00121C00 },
    { 0x00121C90u, sub_00121C90 },
    { 0x00121D70u, sub_00121D70 },
    { 0x00121EB0u, sub_00121EB0 },
    { 0x00121F80u, sub_00121F80 },
    { 0x00122500u, sub_00122500 },
    { 0x00122710u, sub_00122710 },
    { 0x00122830u, sub_00122830 },
    { 0x00122C20u, sub_00122C20 },
    { 0x00123790u, sub_00123790 },
    { 0x001239C0u, sub_001239C0 },
    { 0x00123FD0u, sub_00123FD0 },
    { 0x00125100u, sub_00125100 },
    { 0x00125380u, sub_00125380 },
    { 0x001253C0u, sub_001253C0 },
    { 0x00125490u, sub_00125490 },
    { 0x00125790u, sub_00125790 },
    { 0x00125AC0u, sub_00125AC0 },
    { 0x00127080u, sub_00127080 },
    { 0x001270D0u, sub_001270D0 },
    { 0x00127180u, sub_00127180 },
    { 0x00127340u, sub_00127340 },
    { 0x00127CC0u, sub_00127CC0 },
    { 0x001280C0u, sub_001280C0 },
    { 0x00128180u, sub_00128180 },
    { 0x00128680u, sub_00128680 },
    { 0x00128830u, sub_00128830 },
    { 0x00128860u, sub_00128860 },
    { 0x001289B0u, sub_001289B0 },
    { 0x00128A20u, sub_00128A20 },
    { 0x00128C30u, sub_00128C30 },
    { 0x00128D40u, sub_00128D40 },
    { 0x00128FE0u, sub_00128FE0 },
    { 0x00129040u, sub_00129040 },
    { 0x001292B0u, sub_001292B0 },
    { 0x00129340u, sub_00129340 },
    { 0x001293D0u, sub_001293D0 },
    { 0x001295B0u, sub_001295B0 },
    { 0x00129640u, sub_00129640 },
    { 0x00129770u, sub_00129770 },
    { 0x001298B0u, sub_001298B0 },
    { 0x00129D00u, sub_00129D00 },
    { 0x00129FF0u, sub_00129FF0 },
    { 0x0012A210u, sub_0012A210 },
    { 0x0012A8B0u, sub_0012A8B0 },
    { 0x0012AC00u, sub_0012AC00 },
    { 0x0012AD10u, sub_0012AD10 },
    { 0x0012B390u, sub_0012B390 },
    { 0x0012BEB0u, sub_0012BEB0 },
    { 0x0012C3F0u, sub_0012C3F0 },
    { 0x0012C530u, sub_0012C530 },
    { 0x0012C5F0u, sub_0012C5F0 },
    { 0x0012C670u, sub_0012C670 },
    { 0x0012C860u, sub_0012C860 },
    { 0x0012CEF0u, sub_0012CEF0 },
    { 0x0012D280u, sub_0012D280 },
    { 0x0012D310u, sub_0012D310 },
    { 0x0012D460u, sub_0012D460 },
    { 0x0012D640u, sub_0012D640 },
    { 0x0012E3A0u, sub_0012E3A0 },
    { 0x0012E450u, sub_0012E450 },
    { 0x0012E4D0u, sub_0012E4D0 },
    { 0x0012EBA0u, sub_0012EBA0 },
    { 0x0012F820u, sub_0012F820 },
    { 0x0012F8E0u, sub_0012F8E0 },
    { 0x0012F9B0u, sub_0012F9B0 },
    { 0x0012FA40u, sub_0012FA40 },
    { 0x0012FEE0u, sub_0012FEE0 },
    { 0x00130700u, sub_00130700 },
    { 0x001309F0u, sub_001309F0 },
    { 0x00130B40u, sub_00130B40 },
    { 0x00130C80u, sub_00130C80 },
    { 0x001314D0u, sub_001314D0 },
    { 0x00131780u, sub_00131780 },
    { 0x001318F0u, sub_001318F0 },
    { 0x00132950u, sub_00132950 },
    { 0x00134AC0u, sub_00134AC0 },
    { 0x00134DA0u, sub_00134DA0 },
    { 0x00134ED0u, sub_00134ED0 },
    { 0x00135040u, sub_00135040 },
    { 0x00135240u, sub_00135240 },
    { 0x00135350u, sub_00135350 },
    { 0x001354A0u, sub_001354A0 },
    { 0x00135500u, sub_00135500 },
    { 0x001356A0u, sub_001356A0 },
    { 0x00135710u, sub_00135710 },
    { 0x00135740u, sub_00135740 },
    { 0x00136DA0u, sub_00136DA0 },
    { 0x00137F50u, sub_00137F50 },
    { 0x0013B270u, sub_0013B270 },
    { 0x0013B480u, sub_0013B480 },
    { 0x0013E980u, sub_0013E980 },
    { 0x0013EA20u, sub_0013EA20 },
    { 0x0013EF40u, sub_0013EF40 },
    { 0x0013F1D0u, sub_0013F1D0 },
    { 0x0013F3F0u, sub_0013F3F0 },
    { 0x0013F610u, sub_0013F610 },
    { 0x0013F840u, sub_0013F840 },
    { 0x0013F9C0u, sub_0013F9C0 },
    { 0x0013FA60u, sub_0013FA60 },
    { 0x0013FE10u, sub_0013FE10 },
    { 0x00140110u, sub_00140110 },
    { 0x001401F0u, sub_001401F0 },
    { 0x00140480u, sub_00140480 },
    { 0x00140610u, sub_00140610 },
    { 0x00141010u, sub_00141010 },
    { 0x00141610u, sub_00141610 },
    { 0x00141670u, sub_00141670 },
    { 0x001416A0u, sub_001416A0 },
    { 0x00141700u, sub_00141700 },
    { 0x00141750u, sub_00141750 },
    { 0x001417B0u, sub_001417B0 },
    { 0x001417E0u, sub_001417E0 },
    { 0x00141810u, sub_00141810 },
    { 0x00141840u, sub_00141840 },
    { 0x001418A0u, sub_001418A0 },
    { 0x00141950u, sub_00141950 },
    { 0x001419A0u, sub_001419A0 },
    { 0x00142550u, sub_00142550 },
    { 0x00142690u, sub_00142690 },
    { 0x00142890u, sub_00142890 },
    { 0x00142910u, sub_00142910 },
    { 0x00142990u, sub_00142990 },
    { 0x00142B00u, sub_00142B00 },
    { 0x00142C80u, sub_00142C80 },
    { 0x00142CD0u, sub_00142CD0 },
    { 0x00142E70u, sub_00142E70 },
    { 0x00143190u, sub_00143190 },
    { 0x001432A0u, sub_001432A0 },
    { 0x001434E0u, sub_001434E0 },
    { 0x00145F00u, sub_00145F00 },
    { 0x00145F60u, sub_00145F60 },
    { 0x00146280u, sub_00146280 },
    { 0x001462B0u, sub_001462B0 },
    { 0x00146360u, sub_00146360 },
    { 0x00146480u, sub_00146480 },
    { 0x001464D0u, sub_001464D0 },
    { 0x00146530u, sub_00146530 },
    { 0x00146A70u, sub_00146A70 },
    { 0x00146DD0u, sub_00146DD0 },
    { 0x00146FA0u, sub_00146FA0 },
    { 0x00147700u, sub_00147700 },
    { 0x00147800u, sub_00147800 },
    { 0x00147CE0u, sub_00147CE0 },
    { 0x00147DF0u, sub_00147DF0 },
    { 0x00147EA0u, sub_00147EA0 },
    { 0x00147F90u, sub_00147F90 },
    { 0x00148080u, sub_00148080 },
    { 0x001481A0u, sub_001481A0 },
    { 0x00148400u, sub_00148400 },
    { 0x00148520u, sub_00148520 },
    { 0x001486D0u, sub_001486D0 },
    { 0x00148820u, sub_00148820 },
    { 0x001489B0u, sub_001489B0 },
    { 0x00148C10u, sub_00148C10 },
    { 0x0014A490u, sub_0014A490 },
    { 0x0014A6A0u, sub_0014A6A0 },
    { 0x0014A6B0u, sub_0014A6B0 },
    { 0x0014A710u, sub_0014A710 },
    { 0x0014B3D0u, sub_0014B3D0 },
    { 0x0014B600u, sub_0014B600 },
    { 0x0014C4E0u, sub_0014C4E0 },
    { 0x0014C880u, sub_0014C880 },
    { 0x0014CDF0u, sub_0014CDF0 },
    { 0x0014CEC0u, sub_0014CEC0 },
    { 0x0014D0F0u, sub_0014D0F0 },
    { 0x0014D2C0u, sub_0014D2C0 },
    { 0x0014D580u, sub_0014D580 },
    { 0x0014D5F0u, sub_0014D5F0 },
    { 0x0014D8A0u, sub_0014D8A0 },
    { 0x0014DB50u, sub_0014DB50 },
    { 0x0014DDF0u, sub_0014DDF0 },
    { 0x0014E510u, sub_0014E510 },
    { 0x0014E780u, sub_0014E780 },
    { 0x0014E7D0u, sub_0014E7D0 },
    { 0x0014E960u, sub_0014E960 },
    { 0x0014EAC0u, sub_0014EAC0 },
    { 0x0014EB00u, sub_0014EB00 },
    { 0x0014ECB0u, sub_0014ECB0 },
    { 0x0014EEA0u, sub_0014EEA0 },
    { 0x0014F130u, sub_0014F130 },
    { 0x0014F3E0u, sub_0014F3E0 },
    { 0x0014F690u, sub_0014F690 },
    { 0x00150040u, sub_00150040 },
    { 0x00150260u, sub_00150260 },
    { 0x00150480u, sub_00150480 },
    { 0x00150620u, sub_00150620 },
    { 0x00150670u, sub_00150670 },
    { 0x001509F0u, sub_001509F0 },
    { 0x00150AF0u, sub_00150AF0 },
    { 0x00150B90u, sub_00150B90 },
    { 0x00150D40u, sub_00150D40 },
    { 0x00150E80u, sub_00150E80 },
    { 0x001512C0u, sub_001512C0 },
    { 0x001513E0u, sub_001513E0 },
    { 0x00151490u, sub_00151490 },
    { 0x001516C0u, sub_001516C0 },
    { 0x001518F0u, sub_001518F0 },
    { 0x00151990u, sub_00151990 },
    { 0x00151B70u, sub_00151B70 },
    { 0x00151D30u, sub_00151D30 },
    { 0x001520D0u, sub_001520D0 },
    { 0x001521C0u, sub_001521C0 },
    { 0x00152290u, sub_00152290 },
    { 0x00152330u, sub_00152330 },
    { 0x00152400u, sub_00152400 },
    { 0x001526A0u, sub_001526A0 },
    { 0x00152720u, sub_00152720 },
    { 0x00152800u, sub_00152800 },
    { 0x00152CC0u, sub_00152CC0 },
    { 0x00152E00u, sub_00152E00 },
    { 0x00152ED0u, sub_00152ED0 },
    { 0x00152F30u, sub_00152F30 },
    { 0x001530D0u, sub_001530D0 },
    { 0x00153230u, sub_00153230 },
    { 0x001532D0u, sub_001532D0 },
    { 0x00153310u, sub_00153310 },
    { 0x00153390u, sub_00153390 },
    { 0x00153500u, sub_00153500 },
    { 0x00153580u, sub_00153580 },
    { 0x001535C0u, sub_001535C0 },
    { 0x00153660u, sub_00153660 },
    { 0x001537C0u, sub_001537C0 },
    { 0x00153890u, sub_00153890 },
    { 0x001538D0u, sub_001538D0 },
    { 0x00153950u, sub_00153950 },
    { 0x00153A20u, sub_00153A20 },
    { 0x00153A40u, sub_00153A40 },
    { 0x00153AA0u, sub_00153AA0 },
    { 0x00153B00u, sub_00153B00 },
    { 0x00153BE0u, sub_00153BE0 },
    { 0x00153E50u, sub_00153E50 },
    { 0x00153F80u, sub_00153F80 },
    { 0x00154110u, sub_00154110 },
    { 0x00154270u, sub_00154270 },
    { 0x00154350u, sub_00154350 },
    { 0x00154370u, sub_00154370 },
    { 0x001543B0u, sub_001543B0 },
    { 0x00154460u, sub_00154460 },
    { 0x001544C0u, sub_001544C0 },
    { 0x00154800u, sub_00154800 },
    { 0x00154A70u, sub_00154A70 },
    { 0x00155060u, sub_00155060 },
    { 0x001550B0u, sub_001550B0 },
    { 0x001551E0u, sub_001551E0 },
    { 0x001552E0u, sub_001552E0 },
    { 0x00155330u, sub_00155330 },
    { 0x001553D0u, sub_001553D0 },
    { 0x00155420u, sub_00155420 },
    { 0x001554A0u, sub_001554A0 },
    { 0x00155590u, sub_00155590 },
    { 0x00155630u, sub_00155630 },
    { 0x001556C0u, sub_001556C0 },
    { 0x00155720u, sub_00155720 },
    { 0x00155900u, sub_00155900 },
    { 0x00155BB0u, sub_00155BB0 },
    { 0x00155C00u, sub_00155C00 },
    { 0x00155CB0u, sub_00155CB0 },
    { 0x00155D20u, sub_00155D20 },
    { 0x00155D60u, sub_00155D60 },
    { 0x00155DB0u, sub_00155DB0 },
    { 0x00155E10u, sub_00155E10 },
    { 0x00155F70u, sub_00155F70 },
    { 0x00155FD0u, sub_00155FD0 },
    { 0x00156300u, sub_00156300 },
    { 0x00156400u, sub_00156400 },
    { 0x00156510u, sub_00156510 },
    { 0x00156AB0u, sub_00156AB0 },
    { 0x00157190u, sub_00157190 },
    { 0x00157210u, sub_00157210 },
    { 0x001572C0u, sub_001572C0 },
    { 0x001574F0u, sub_001574F0 },
    { 0x001575F0u, sub_001575F0 },
    { 0x00157630u, sub_00157630 },
    { 0x00157680u, sub_00157680 },
    { 0x00157720u, sub_00157720 },
    { 0x00157CE0u, sub_00157CE0 },
    { 0x00157E60u, sub_00157E60 },
    { 0x00158120u, sub_00158120 },
    { 0x00158260u, sub_00158260 },
    { 0x001582D0u, sub_001582D0 },
    { 0x001585A0u, sub_001585A0 },
    { 0x00158640u, sub_00158640 },
    { 0x001586A0u, sub_001586A0 },
    { 0x00158A60u, sub_00158A60 },
    { 0x00158B70u, sub_00158B70 },
    { 0x00158CC0u, sub_00158CC0 },
    { 0x00158D10u, sub_00158D10 },
    { 0x00158DE0u, sub_00158DE0 },
    { 0x00159470u, sub_00159470 },
    { 0x001596B0u, sub_001596B0 },
    { 0x00159710u, sub_00159710 },
    { 0x0015BFF0u, sub_0015BFF0 },
    { 0x00160690u, sub_00160690 },
    { 0x00160790u, sub_00160790 },
    { 0x00160840u, sub_00160840 },
    { 0x00160B90u, sub_00160B90 },
    { 0x00161990u, sub_00161990 },
    { 0x00161DE0u, sub_00161DE0 },
    { 0x00162350u, sub_00162350 },
    { 0x00163DF0u, sub_00163DF0 },
    { 0x00163E70u, sub_00163E70 },
    { 0x00164200u, sub_00164200 },
    { 0x001643B0u, sub_001643B0 },
    { 0x00164480u, sub_00164480 },
    { 0x001645A0u, sub_001645A0 },
    { 0x00164830u, sub_00164830 },
    { 0x001649E0u, sub_001649E0 },
    { 0x00164A60u, sub_00164A60 },
    { 0x00164FB0u, sub_00164FB0 },
    { 0x00165460u, sub_00165460 },
    { 0x00166F80u, sub_00166F80 },
    { 0x00167220u, sub_00167220 },
    { 0x001673E0u, sub_001673E0 },
    { 0x001674B0u, sub_001674B0 },
    { 0x00167940u, sub_00167940 },
    { 0x00167AA0u, sub_00167AA0 },
    { 0x00167C90u, sub_00167C90 },
    { 0x00167CE0u, sub_00167CE0 },
    { 0x00167E10u, sub_00167E10 },
    { 0x0016A830u, sub_0016A830 },
    { 0x0016A9F0u, sub_0016A9F0 },
    { 0x0016AFD0u, sub_0016AFD0 },
    { 0x001705F0u, sub_001705F0 },
    { 0x00175A00u, sub_00175A00 },
    { 0x0017A0F0u, sub_0017A0F0 },
    { 0x0017A320u, sub_0017A320 },
    { 0x0017A530u, sub_0017A530 },
    { 0x0017AAC0u, sub_0017AAC0 },
    { 0x0017AB50u, sub_0017AB50 },
    { 0x0017ADD0u, sub_0017ADD0 },
    { 0x0017C0F0u, sub_0017C0F0 },
    { 0x0017C130u, sub_0017C130 },
    { 0x0017C170u, sub_0017C170 },
    { 0x0017CE70u, sub_0017CE70 },
    { 0x0017D0F0u, sub_0017D0F0 },
    { 0x0017DA40u, sub_0017DA40 },
    { 0x0017DAB0u, sub_0017DAB0 },
    { 0x0017DB20u, sub_0017DB20 },
    { 0x0017DBE0u, sub_0017DBE0 },
    { 0x0017DC40u, sub_0017DC40 },
    { 0x0017DCA0u, sub_0017DCA0 },
    { 0x0017DCF0u, sub_0017DCF0 },
    { 0x0017DD20u, sub_0017DD20 },
    { 0x0017DEB0u, sub_0017DEB0 },
    { 0x0017DF50u, sub_0017DF50 },
    { 0x0017E030u, sub_0017E030 },
    { 0x0017E550u, sub_0017E550 },
    { 0x0017E600u, sub_0017E600 },
    { 0x0017E6E0u, sub_0017E6E0 },
    { 0x0017E7F0u, sub_0017E7F0 },
    { 0x0017E8A0u, sub_0017E8A0 },
    { 0x0017EE00u, sub_0017EE00 },
    { 0x0017F290u, sub_0017F290 },
    { 0x0017F360u, sub_0017F360 },
    { 0x0017FB10u, sub_0017FB10 },
    { 0x0017FFF0u, sub_0017FFF0 },
    { 0x001803C0u, sub_001803C0 },
    { 0x00180520u, sub_00180520 },
    { 0x001805B0u, sub_001805B0 },
    { 0x00180650u, sub_00180650 },
    { 0x001807C0u, sub_001807C0 },
    { 0x00180EE0u, sub_00180EE0 },
    { 0x00181130u, sub_00181130 },
    { 0x00181610u, sub_00181610 },
    { 0x00181780u, sub_00181780 },
    { 0x00181900u, sub_00181900 },
    { 0x00181A80u, sub_00181A80 },
    { 0x001820D0u, sub_001820D0 },
    { 0x001824C0u, sub_001824C0 },
    { 0x00182920u, sub_00182920 },
    { 0x00182CB0u, sub_00182CB0 },
    { 0x00183140u, sub_00183140 },
    { 0x001834E0u, sub_001834E0 },
    { 0x001839E0u, sub_001839E0 },
    { 0x00183BD0u, sub_00183BD0 },
    { 0x00183EF0u, sub_00183EF0 },
    { 0x00184590u, sub_00184590 },
    { 0x00184AD0u, sub_00184AD0 },
    { 0x00184BE0u, sub_00184BE0 },
    { 0x00185360u, sub_00185360 },
    { 0x00186030u, sub_00186030 },
    { 0x001868A0u, sub_001868A0 },
    { 0x00186BB0u, sub_00186BB0 },
    { 0x00186C20u, sub_00186C20 },
    { 0x00186D50u, sub_00186D50 },
    { 0x00186E70u, sub_00186E70 },
    { 0x00187E40u, sub_00187E40 },
    { 0x00188600u, sub_00188600 },
    { 0x00188880u, sub_00188880 },
    { 0x001888F0u, sub_001888F0 },
    { 0x00188C00u, sub_00188C00 },
    { 0x00188CF0u, sub_00188CF0 },
    { 0x00188D70u, sub_00188D70 },
    { 0x00188F80u, sub_00188F80 },
    { 0x00189940u, sub_00189940 },
    { 0x001899D0u, sub_001899D0 },
    { 0x00189A90u, sub_00189A90 },
    { 0x00189C40u, sub_00189C40 },
    { 0x00189D50u, sub_00189D50 },
    { 0x0018A170u, sub_0018A170 },
    { 0x0018AB50u, sub_0018AB50 },
    { 0x0018AF90u, sub_0018AF90 },
    { 0x0018B150u, sub_0018B150 },
    { 0x0018B250u, sub_0018B250 },
    { 0x0018BC90u, sub_0018BC90 },
    { 0x0018BD60u, sub_0018BD60 },
    { 0x0018BF50u, sub_0018BF50 },
    { 0x0018CAF0u, sub_0018CAF0 },
    { 0x0018CBC0u, sub_0018CBC0 },
    { 0x0018D020u, sub_0018D020 },
    { 0x0018E050u, sub_0018E050 },
    { 0x0018E820u, sub_0018E820 },
    { 0x0018E890u, sub_0018E890 },
    { 0x00190430u, sub_00190430 },
    { 0x00192320u, sub_00192320 },
    { 0x001942F0u, sub_001942F0 },
    { 0x00194380u, sub_00194380 },
    { 0x00194400u, sub_00194400 },
    { 0x00197680u, sub_00197680 },
    { 0x001976D0u, sub_001976D0 },
    { 0x00197720u, sub_00197720 },
    { 0x00197A20u, sub_00197A20 },
    { 0x00197F90u, sub_00197F90 },
    { 0x00198250u, sub_00198250 },
    { 0x00198390u, sub_00198390 },
    { 0x001986A0u, sub_001986A0 },
    { 0x001987A0u, sub_001987A0 },
    { 0x001989A0u, sub_001989A0 },
    { 0x00198E60u, sub_00198E60 },
    { 0x00199350u, sub_00199350 },
    { 0x001994D0u, sub_001994D0 },
    { 0x0019A050u, sub_0019A050 },
    { 0x0019AE10u, sub_0019AE10 },
    { 0x0019B110u, sub_0019B110 },
    { 0x0019B1E0u, sub_0019B1E0 },
    { 0x0019B440u, sub_0019B440 },
    { 0x0019B4A0u, sub_0019B4A0 },
    { 0x0019B4E0u, sub_0019B4E0 },
    { 0x0019B890u, sub_0019B890 },
    { 0x0019BF30u, sub_0019BF30 },
    { 0x0019C1F0u, sub_0019C1F0 },
    { 0x0019C250u, sub_0019C250 },
    { 0x0019C2D0u, sub_0019C2D0 },
    { 0x0019C3B0u, sub_0019C3B0 },
    { 0x0019C4A0u, sub_0019C4A0 },
    { 0x0019C6E0u, sub_0019C6E0 },
    { 0x0019C740u, sub_0019C740 },
    { 0x0019CA30u, sub_0019CA30 },
    { 0x0019CB40u, sub_0019CB40 },
    { 0x0019CBB0u, sub_0019CBB0 },
    { 0x0019CC60u, sub_0019CC60 },
    { 0x0019CD10u, sub_0019CD10 },
    { 0x0019CEE0u, sub_0019CEE0 },
    { 0x0019CF20u, sub_0019CF20 },
    { 0x0019D360u, sub_0019D360 },
    { 0x0019D760u, sub_0019D760 },
    { 0x0019D7A0u, sub_0019D7A0 },
    { 0x0019D7F0u, sub_0019D7F0 },
    { 0x0019D870u, sub_0019D870 },
    { 0x0019D990u, sub_0019D990 },
    { 0x0019DA70u, sub_0019DA70 },
    { 0x0019DAD0u, sub_0019DAD0 },
    { 0x0019DB30u, sub_0019DB30 },
    { 0x0019DB90u, sub_0019DB90 },
    { 0x0019DBF0u, sub_0019DBF0 },
    { 0x0019DC60u, sub_0019DC60 },
    { 0x0019DDF0u, sub_0019DDF0 },
    { 0x0019DFD0u, sub_0019DFD0 },
    { 0x0019E160u, sub_0019E160 },
    { 0x0019E210u, sub_0019E210 },
    { 0x0019E2A0u, sub_0019E2A0 },
    { 0x0019E430u, sub_0019E430 },
    { 0x0019E5B0u, sub_0019E5B0 },
    { 0x0019E640u, sub_0019E640 },
    { 0x0019E6D0u, sub_0019E6D0 },
    { 0x0019E800u, sub_0019E800 },
    { 0x0019E860u, sub_0019E860 },
    { 0x0019EBA0u, sub_0019EBA0 },
    { 0x0019F030u, sub_0019F030 },
    { 0x0019F1C0u, sub_0019F1C0 },
    { 0x0019F3B0u, sub_0019F3B0 },
    { 0x0019F560u, sub_0019F560 },
    { 0x0019FEC0u, sub_0019FEC0 },
    { 0x0019FF80u, sub_0019FF80 },
    { 0x0019FFA0u, sub_0019FFA0 },
    { 0x001A03F0u, sub_001A03F0 },
    { 0x001A0600u, sub_001A0600 },
    { 0x001A06F0u, sub_001A06F0 },
    { 0x001A0750u, sub_001A0750 },
    { 0x001A0940u, sub_001A0940 },
    { 0x001A09F0u, sub_001A09F0 },
    { 0x001A0B00u, sub_001A0B00 },
    { 0x001A0B70u, sub_001A0B70 },
    { 0x001A0F50u, sub_001A0F50 },
    { 0x001A1000u, sub_001A1000 },
    { 0x001A10E0u, sub_001A10E0 },
    { 0x001A13F0u, sub_001A13F0 },
    { 0x001A1E10u, sub_001A1E10 },
    { 0x001A20F0u, sub_001A20F0 },
    { 0x001A2770u, sub_001A2770 },
    { 0x001A2860u, sub_001A2860 },
    { 0x001A28B0u, sub_001A28B0 },
    { 0x001A2B20u, sub_001A2B20 },
    { 0x001A30B0u, sub_001A30B0 },
    { 0x001A3110u, sub_001A3110 },
    { 0x001A33B0u, sub_001A33B0 },
    { 0x001A3470u, sub_001A3470 },
    { 0x001A38F0u, sub_001A38F0 },
    { 0x001A3970u, sub_001A3970 },
    { 0x001A3A10u, sub_001A3A10 },
    { 0x001A3A80u, sub_001A3A80 },
    { 0x001A3AE0u, sub_001A3AE0 },
    { 0x001A3EA0u, sub_001A3EA0 },
    { 0x001A4150u, sub_001A4150 },
    { 0x001A41A0u, sub_001A41A0 },
    { 0x001A41F0u, sub_001A41F0 },
    { 0x001A4260u, sub_001A4260 },
    { 0x001A5680u, sub_001A5680 },
    { 0x001A5790u, sub_001A5790 },
    { 0x001A5880u, sub_001A5880 },
    { 0x001A5910u, sub_001A5910 },
    { 0x001A5C70u, sub_001A5C70 },
    { 0x001A5D70u, sub_001A5D70 },
    { 0x001A5DC0u, sub_001A5DC0 },
    { 0x001A5E30u, sub_001A5E30 },
    { 0x001A5F40u, sub_001A5F40 },
    { 0x001A5F90u, sub_001A5F90 },
    { 0x001A5FE0u, sub_001A5FE0 },
    { 0x001A6070u, sub_001A6070 },
    { 0x001A6590u, sub_001A6590 },
    { 0x001A6610u, sub_001A6610 },
    { 0x001A6680u, sub_001A6680 },
    { 0x001A6860u, sub_001A6860 },
    { 0x001A68D0u, sub_001A68D0 },
    { 0x001A6A30u, sub_001A6A30 },
    { 0x001A6B40u, sub_001A6B40 },
    { 0x001A7210u, sub_001A7210 },
    { 0x001A75A0u, sub_001A75A0 },
    { 0x001A7600u, sub_001A7600 },
    { 0x001A7910u, sub_001A7910 },
    { 0x001A8220u, sub_001A8220 },
    { 0x001A8640u, sub_001A8640 },
    { 0x001A8C30u, sub_001A8C30 },
    { 0x001A8C90u, sub_001A8C90 },
    { 0x001A8E80u, sub_001A8E80 },
    { 0x001A8EE0u, sub_001A8EE0 },
    { 0x001A9040u, sub_001A9040 },
    { 0x001A9170u, sub_001A9170 },
    { 0x001A9360u, sub_001A9360 },
    { 0x001A9600u, sub_001A9600 },
    { 0x001A98F0u, sub_001A98F0 },
    { 0x001A9C50u, sub_001A9C50 },
    { 0x001AA100u, sub_001AA100 },
    { 0x001AA720u, sub_001AA720 },
    { 0x001AA920u, sub_001AA920 },
    { 0x001AA990u, sub_001AA990 },
    { 0x001AABD0u, sub_001AABD0 },
    { 0x001AB1A0u, sub_001AB1A0 },
    { 0x001AB560u, sub_001AB560 },
    { 0x001AD350u, sub_001AD350 },
    { 0x001AD4A0u, sub_001AD4A0 },
    { 0x001AEAA0u, sub_001AEAA0 },
    { 0x001AECC0u, sub_001AECC0 },
    { 0x001AED30u, sub_001AED30 },
    { 0x001AED70u, sub_001AED70 },
    { 0x001AEDB0u, sub_001AEDB0 },
    { 0x001AEE20u, sub_001AEE20 },
    { 0x001AEEB0u, sub_001AEEB0 },
    { 0x001AEF80u, sub_001AEF80 },
    { 0x001AF0F0u, sub_001AF0F0 },
    { 0x001AF200u, sub_001AF200 },
    { 0x001AF250u, sub_001AF250 },
    { 0x001AF280u, sub_001AF280 },
    { 0x001AF980u, sub_001AF980 },
    { 0x001AFF70u, sub_001AFF70 },
    { 0x001B02B0u, sub_001B02B0 },
    { 0x001B0330u, sub_001B0330 },
    { 0x001B0420u, sub_001B0420 },
    { 0x001B0650u, sub_001B0650 },
    { 0x001B0F00u, sub_001B0F00 },
    { 0x001B0FE0u, sub_001B0FE0 },
    { 0x001B1050u, sub_001B1050 },
    { 0x001B1370u, sub_001B1370 },
    { 0x001B1D40u, sub_001B1D40 },
    { 0x001B1F90u, sub_001B1F90 },
    { 0x001B2230u, sub_001B2230 },
    { 0x001B24A0u, sub_001B24A0 },
    { 0x001B2940u, sub_001B2940 },
    { 0x001B2C60u, sub_001B2C60 },
    { 0x001B2DF0u, sub_001B2DF0 },
    { 0x001B2EF0u, sub_001B2EF0 },
    { 0x001B2F90u, sub_001B2F90 },
    { 0x001B2FF0u, sub_001B2FF0 },
    { 0x001B3190u, sub_001B3190 },
    { 0x001B3320u, sub_001B3320 },
    { 0x001B33A0u, sub_001B33A0 },
    { 0x001B35F0u, sub_001B35F0 },
    { 0x001B3620u, b3_dispatch_resource_status },
    { 0x001B3630u, b3_dispatch_resource_initialize },
    { 0x001B36C0u, b3_dispatch_resource_reset },
    { 0x001B36E0u, b3_dispatch_resource_begin },
    { 0x001B3D50u, b3_dispatch_resource_get_value },
    { 0x001B3D60u, sub_001B3D60 },
    { 0x001B3E00u, b3_dispatch_resource_slot },
    { 0x001B3E20u, sub_001B3E20 },
    { 0x001B3EC0u, b3_dispatch_resource_record },
    { 0x001B4170u, sub_001B4170 },
    { 0x001B41F0u, sub_001B41F0 },
    { 0x001B4260u, sub_001B4260 },
    { 0x001B42B0u, sub_001B42B0 },
    { 0x001B42E0u, sub_001B42E0 },
    { 0x001B4310u, sub_001B4310 },
    { 0x001B5000u, sub_001B5000 },
    { 0x001B50C0u, sub_001B50C0 },
    { 0x001B5120u, sub_001B5120 },
    { 0x001B57A0u, sub_001B57A0 },
    { 0x001B57E0u, sub_001B57E0 },
    { 0x001B5880u, sub_001B5880 },
    { 0x001B58E0u, sub_001B58E0 },
    { 0x001B5A80u, sub_001B5A80 },
    { 0x001B5AC0u, sub_001B5AC0 },
    { 0x001B5B60u, sub_001B5B60 },
    { 0x001B5C60u, sub_001B5C60 },
    { 0x001B5D90u, sub_001B5D90 },
    { 0x001B5E70u, sub_001B5E70 },
    { 0x001B5EE0u, sub_001B5EE0 },
    { 0x001B6460u, sub_001B6460 },
    { 0x001B6840u, sub_001B6840 },
    { 0x001B6900u, sub_001B6900 },
    { 0x001B6A90u, sub_001B6A90 },
    { 0x001B6D40u, sub_001B6D40 },
    { 0x001B6DB0u, sub_001B6DB0 },
    { 0x001B6E10u, sub_001B6E10 },
    { 0x001B7040u, sub_001B7040 },
    { 0x001B7100u, sub_001B7100 },
    { 0x001B7240u, sub_001B7240 },
    { 0x001B73F0u, sub_001B73F0 },
    { 0x001B7420u, sub_001B7420 },
    { 0x001B7460u, sub_001B7460 },
    { 0x001B79C0u, sub_001B79C0 },
    { 0x001B7E40u, sub_001B7E40 },
    { 0x001B7E70u, sub_001B7E70 },
    { 0x001B7EB0u, sub_001B7EB0 },
    { 0x001B7EF0u, sub_001B7EF0 },
    { 0x001B80C0u, sub_001B80C0 },
    { 0x001B8270u, sub_001B8270 },
    { 0x001B8300u, sub_001B8300 },
    { 0x001B8390u, sub_001B8390 },
    { 0x001B84E0u, sub_001B84E0 },
    { 0x001B85A0u, sub_001B85A0 },
    { 0x001B8650u, sub_001B8650 },
    { 0x001B8AB0u, sub_001B8AB0 },
    { 0x001B9050u, sub_001B9050 },
    { 0x001B9070u, sub_001B9070 },
    { 0x001BD970u, sub_001BD970 },
    { 0x001BEEF0u, sub_001BEEF0 },
    { 0x001BEF30u, sub_001BEF30 },
    { 0x001BEFF0u, sub_001BEFF0 },
    { 0x001BF040u, sub_001BF040 },
    { 0x001BF0B0u, sub_001BF0B0 },
    { 0x001BF130u, sub_001BF130 },
    { 0x001BF410u, sub_001BF410 },
    { 0x001BF590u, sub_001BF590 },
    { 0x001BF760u, sub_001BF760 },
    { 0x001C0F50u, sub_001C0F50 },
    { 0x001C1060u, sub_001C1060 },
    { 0x001C1250u, sub_001C1250 },
    { 0x001C1480u, sub_001C1480 },
    { 0x001C15A0u, sub_001C15A0 },
    { 0x001C1670u, sub_001C1670 },
    { 0x001C1740u, sub_001C1740 },
    { 0x001C17A0u, sub_001C17A0 },
    { 0x001C17F0u, sub_001C17F0 },
    { 0x001C19A0u, sub_001C19A0 },
    { 0x001C1B20u, sub_001C1B20 },
    { 0x001C2790u, sub_001C2790 },
    { 0x001C6320u, sub_001C6320 },
    { 0x001C63A0u, sub_001C63A0 },
    { 0x001C6500u, sub_001C6500 },
    { 0x001C6660u, sub_001C6660 },
    { 0x001C66F0u, sub_001C66F0 },
    { 0x001C67D0u, sub_001C67D0 },
    { 0x001C6850u, sub_001C6850 },
    { 0x001C68C0u, sub_001C68C0 },
    { 0x001C6920u, sub_001C6920 },
    { 0x001C69C0u, sub_001C69C0 },
    { 0x001C6A20u, sub_001C6A20 },
    { 0x001C6B30u, sub_001C6B30 },
    { 0x001C6F30u, sub_001C6F30 },
    { 0x001C7150u, sub_001C7150 },
    { 0x001C72F0u, sub_001C72F0 },
    { 0x001C7430u, sub_001C7430 },
    { 0x001C75C0u, sub_001C75C0 },
    { 0x001C7EC0u, sub_001C7EC0 },
    { 0x001C82E0u, sub_001C82E0 },
    { 0x001C83D0u, sub_001C83D0 },
    { 0x001C8470u, sub_001C8470 },
    { 0x001C8510u, sub_001C8510 },
    { 0x001C8C10u, sub_001C8C10 },
    { 0x001C8CF0u, sub_001C8CF0 },
    { 0x001C8E20u, sub_001C8E20 },
    { 0x001C8F70u, sub_001C8F70 },
    { 0x001C9600u, sub_001C9600 },
    { 0x001C9660u, sub_001C9660 },
    { 0x001C9840u, sub_001C9840 },
    { 0x001C98A0u, sub_001C98A0 },
    { 0x001C9900u, sub_001C9900 },
    { 0x001C99D0u, sub_001C99D0 },
    { 0x001C9B30u, sub_001C9B30 },
    { 0x001C9C30u, sub_001C9C30 },
    { 0x001C9C80u, sub_001C9C80 },
    { 0x001C9DE0u, sub_001C9DE0 },
    { 0x001C9E50u, sub_001C9E50 },
    { 0x001C9E90u, sub_001C9E90 },
    { 0x001C9ED0u, sub_001C9ED0 },
    { 0x001CA1E0u, sub_001CA1E0 },
    { 0x001CA220u, sub_001CA220 },
    { 0x001CA270u, sub_001CA270 },
    { 0x001CA350u, sub_001CA350 },
    { 0x001CA4A0u, sub_001CA4A0 },
    { 0x001CA530u, sub_001CA530 },
    { 0x001CA5A0u, sub_001CA5A0 },
    { 0x001CA620u, sub_001CA620 },
    { 0x001CA680u, sub_001CA680 },
    { 0x001CA710u, sub_001CA710 },
    { 0x001CA790u, sub_001CA790 },
    { 0x001CA820u, sub_001CA820 },
    { 0x001CA9A0u, sub_001CA9A0 },
    { 0x001CAD10u, sub_001CAD10 },
    { 0x001CAE30u, sub_001CAE30 },
    { 0x001CB1C0u, sub_001CB1C0 },
    { 0x001CB210u, sub_001CB210 },
    { 0x001CB250u, sub_001CB250 },
    { 0x001CB2D0u, sub_001CB2D0 },
    { 0x001CB480u, sub_001CB480 },
    { 0x001CB5B0u, sub_001CB5B0 },
    { 0x001CB6C0u, sub_001CB6C0 },
    { 0x001CB7E0u, sub_001CB7E0 },
    { 0x001CB900u, sub_001CB900 },
    { 0x001CB970u, sub_001CB970 },
    { 0x001CB9E0u, sub_001CB9E0 },
    { 0x001CBA60u, sub_001CBA60 },
    { 0x001CBB50u, sub_001CBB50 },
    { 0x001CBBC0u, sub_001CBBC0 },
    { 0x001CBCA0u, sub_001CBCA0 },
    { 0x001CBD50u, sub_001CBD50 },
    { 0x001CBE00u, sub_001CBE00 },
    { 0x001CBF00u, sub_001CBF00 },
    { 0x001CBF30u, sub_001CBF30 },
    { 0x001CC010u, sub_001CC010 },
    { 0x001CC0C0u, sub_001CC0C0 },
    { 0x001CC110u, sub_001CC110 },
    { 0x001CC130u, sub_001CC130 },
    { 0x001CC230u, sub_001CC230 },
    { 0x001CC260u, sub_001CC260 },
    { 0x001CC2C0u, sub_001CC2C0 },
    { 0x001CC3E0u, sub_001CC3E0 },
    { 0x001CC700u, sub_001CC700 },
    { 0x001CC910u, sub_001CC910 },
    { 0x001CCDA0u, sub_001CCDA0 },
    { 0x001CCDD0u, sub_001CCDD0 },
    { 0x001CCE50u, sub_001CCE50 },
    { 0x001CCED0u, sub_001CCED0 },
    { 0x001CD0D0u, sub_001CD0D0 },
    { 0x001CD180u, sub_001CD180 },
    { 0x001CD200u, sub_001CD200 },
    { 0x001CD620u, sub_001CD620 },
    { 0x001CD760u, sub_001CD760 },
    { 0x001CD880u, sub_001CD880 },
    { 0x001CD8D0u, sub_001CD8D0 },
    { 0x001CD9F0u, sub_001CD9F0 },
    { 0x001CDB70u, sub_001CDB70 },
    { 0x001CDBC0u, sub_001CDBC0 },
    { 0x001CE000u, sub_001CE000 },
    { 0x001CE050u, sub_001CE050 },
    { 0x001CE0B0u, sub_001CE0B0 },
    { 0x001CE100u, sub_001CE100 },
    { 0x001CE140u, sub_001CE140 },
    { 0x001CE180u, sub_001CE180 },
    { 0x001CE1B0u, sub_001CE1B0 },
    { 0x001CE1F0u, sub_001CE1F0 },
    { 0x001CE3B0u, sub_001CE3B0 },
    { 0x001CE500u, sub_001CE500 },
    { 0x001CE6A0u, sub_001CE6A0 },
    { 0x001CE920u, sub_001CE920 },
    { 0x001CE980u, sub_001CE980 },
    { 0x001CE9F0u, sub_001CE9F0 },
    { 0x001CEA80u, sub_001CEA80 },
    { 0x001CEAD0u, sub_001CEAD0 },
    { 0x001CEB10u, sub_001CEB10 },
    { 0x001CECE0u, sub_001CECE0 },
    { 0x001CED10u, sub_001CED10 },
    { 0x001CED70u, sub_001CED70 },
    { 0x001CED90u, sub_001CED90 },
    { 0x001CEDB0u, sub_001CEDB0 },
    { 0x001CEF10u, sub_001CEF10 },
    { 0x001CEF70u, sub_001CEF70 },
    { 0x001CEFC0u, sub_001CEFC0 },
    { 0x001CF153u, sub_001CF153 },
    { 0x001CF351u, sub_001CF351 },
    { 0x001CF8EAu, sub_001CF8EA },
    { 0x001CF913u, sub_001CF913 },
    { 0x001CF962u, sub_001CF962 },
    { 0x001CF979u, sub_001CF979 },
    { 0x001CFDD0u, sub_001CFDD0 },
    { 0x001CFF0Au, sub_001CFF0A },
    { 0x001CFF4Du, sub_001CFF4D },
    { 0x001CFF7Au, sub_001CFF7A },
    { 0x001CFF80u, sub_001CFF80 },
    { 0x001D0134u, sub_001D0134 },
    { 0x001D0172u, sub_001D0172 },
    { 0x001D01D8u, sub_001D01D8 },
    { 0x001D0256u, sub_001D0256 },
    { 0x001D0275u, sub_001D0275 },
    { 0x001D0DE6u, sub_001D0DE6 },
    { 0x001D0FC7u, sub_001D0FC7 },
    { 0x001D10B4u, sub_001D10B4 },
    { 0x001D120Eu, sub_001D120E },
    { 0x001D13D0u, sub_001D13D0 },
    { 0x001D1470u, sub_001D1470 },
    { 0x001D14D1u, sub_001D14D1 },
    { 0x001D154Cu, sub_001D154C },
    { 0x001D1572u, sub_001D1572 },
    { 0x001D15B6u, sub_001D15B6 },
    { 0x001D1608u, sub_001D1608 },
    { 0x001D161Au, sub_001D161A },
    { 0x001D1660u, sub_001D1660 },
    { 0x001D16B2u, sub_001D16B2 },
    { 0x001D1706u, sub_001D1706 },
    { 0x001D1781u, sub_001D1781 },
    { 0x001D18B0u, sub_001D18B0 },
    { 0x001D191Eu, sub_001D191E },
    { 0x001D192Bu, sub_001D192B },
    { 0x001D1953u, sub_001D1953 },
    { 0x001D1981u, sub_001D1981 },
    { 0x001D19FDu, sub_001D19FD },
    { 0x001D1A1Bu, sub_001D1A1B },
    { 0x001D20ACu, sub_001D20AC },
    { 0x001D20BDu, sub_001D20BD },
    { 0x001D21D4u, sub_001D21D4 },
    { 0x001D2238u, sub_001D2238 },
    { 0x001D273Eu, sub_001D273E },
    { 0x001D276Bu, sub_001D276B },
    { 0x001D2879u, sub_001D2879 },
    { 0x001D2919u, sub_001D2919 },
    { 0x001D2955u, sub_001D2955 },
    { 0x001D3378u, sub_001D3378 },
    { 0x001D3DF3u, sub_001D3DF3 },
    { 0x001D3E1Bu, sub_001D3E1B },
    { 0x001D405Fu, sub_001D405F },
    { 0x001D4076u, sub_001D4076 },
    { 0x001D407Cu, sub_001D407C },
    { 0x001D4099u, sub_001D4099 },
    { 0x001D418Cu, sub_001D418C },
    { 0x001D42ACu, sub_001D42AC },
    { 0x001D42CDu, sub_001D42CD },
    { 0x001D4360u, sub_001D4360 },
    { 0x001D451Du, sub_001D451D },
    { 0x001D47C2u, sub_001D47C2 },
    { 0x001D4D94u, sub_001D4D94 },
    { 0x001D4EB2u, sub_001D4EB2 },
    { 0x001D5039u, sub_001D5039 },
    { 0x001D5707u, sub_001D5707 },
    { 0x001D5E6Fu, sub_001D5E6F },
    { 0x001D5E82u, sub_001D5E82 },
    { 0x001D6063u, sub_001D6063 },
    { 0x001D68C0u, sub_001D68C0 },
    { 0x001D7024u, sub_001D7024 },
    { 0x001D7040u, sub_001D7040 },
    { 0x001D7D10u, sub_001D7D10 },
    { 0x001D7D50u, sub_001D7D50 },
    { 0x001D91F0u, b3_dispatch_light_pipeline_destruct },
    { 0x001D9230u, b3_dispatch_light_pipeline_construct },
    { 0x001D9280u, sub_001D9280 },
    { 0x001D9290u, sub_001D9290 },
    { 0x001D92A0u, sub_001D92A0 },
    { 0x001D9360u, sub_001D9360 },
    { 0x001D9420u, sub_001D9420 },
    { 0x001D9450u, sub_001D9450 },
    { 0x001D94A0u, sub_001D94A0 },
    { 0x001D94D0u, sub_001D94D0 },
    { 0x001D9510u, sub_001D9510 },
    { 0x001DABA0u, sub_001DABA0 },
    { 0x001DABD0u, sub_001DABD0 },
    { 0x001DAC00u, sub_001DAC00 },
    { 0x001DAC10u, sub_001DAC10 },
    { 0x001DAC30u, sub_001DAC30 },
    { 0x001DAC40u, sub_001DAC40 },
    { 0x001DACF0u, sub_001DACF0 },
    { 0x001DADC0u, sub_001DADC0 },
    { 0x001DAE20u, sub_001DAE20 },
    { 0x001DAE60u, sub_001DAE60 },
    { 0x001DB090u, sub_001DB090 },
    { 0x001DB150u, sub_001DB150 },
    { 0x001DB200u, sub_001DB200 },
    { 0x001DB6D0u, b3_dispatch_transform_points },
    { 0x001DBA70u, sub_001DBA70 },
    { 0x001DBB70u, sub_001DBB70 },
    { 0x001DBC70u, b3_dispatch_im2d_destruct },
    { 0x001DBC80u, b3_dispatch_im2d_construct },
    { 0x001DBCC0u, sub_001DBCC0 },
    { 0x001DCF80u, b3_dispatch_world_sector_construct },
    { 0x001DCFE0u, b3_dispatch_world_sector_destruct },
    { 0x001DD020u, sub_001DD020 },
    { 0x001DD080u, sub_001DD080 },
    { 0x001DD160u, sub_001DD160 },
    { 0x001DD220u, sub_001DD220 },
    { 0x001DD2A0u, sub_001DD2A0 },
    { 0x001DD310u, sub_001DD310 },
    { 0x001DD330u, sub_001DD330 },
    { 0x001DD3A0u, sub_001DD3A0 },
    { 0x001DD420u, sub_001DD420 },
    { 0x001DD490u, sub_001DD490 },
    { 0x001DD760u, sub_001DD760 },
    { 0x001DDAF0u, b3_dispatch_render_toggle },
    { 0x001DE3C0u, sub_001DE3C0 },
    { 0x001DE51Au, b3_dispatch_device_copy_caps },
    { 0x001DE53Fu, b3_dispatch_device_open },
    { 0x001DE5D6u, b3_dispatch_device_stop },
    { 0x001DE5E0u, b3_dispatch_device_start },
    { 0x001DE608u, b3_dispatch_device_get_standards },
    { 0x001DE64Eu, sub_001DE64E },
    { 0x001DE6C0u, sub_001DE6C0 },
    { 0x001DE710u, sub_001DE710 },
    { 0x001DE750u, sub_001DE750 },
    { 0x001DE7E0u, sub_001DE7E0 },
    { 0x001DE810u, sub_001DE810 },
    { 0x001DE870u, sub_001DE870 },
    { 0x001DE930u, b3_dispatch_material_pipeline_destruct },
    { 0x001DE970u, b3_dispatch_material_pipeline_construct },
    { 0x001DEA10u, b3_dispatch_mesh_pipeline_construct },
    { 0x001DEA60u, b3_dispatch_mesh_pipeline_destruct },
    { 0x001DEEB0u, sub_001DEEB0 },
    { 0x001DEEF0u, sub_001DEEF0 },
    { 0x001DF030u, b3_dispatch_raster_pipeline_destruct },
    { 0x001DFA20u, sub_001DFA20 },
    { 0x001DFAD0u, b3_dispatch_raster_pipeline_construct },
    { 0x001E04A0u, b3_dispatch_world_pipeline_destruct },
    { 0x001E0860u, b3_dispatch_world_pipeline_construct },
    { 0x001E0900u, sub_001E0900 },
    { 0x001E0950u, sub_001E0950 },
    { 0x001E0970u, sub_001E0970 },
    { 0x001E0980u, sub_001E0980 },
    { 0x001E09E0u, sub_001E09E0 },
    { 0x001E0C80u, sub_001E0C80 },
    { 0x001E0E00u, sub_001E0E00 },
    { 0x001E0E10u, sub_001E0E10 },
    { 0x001E0E70u, sub_001E0E70 },
    { 0x001E0FD0u, sub_001E0FD0 },
    { 0x001E1000u, sub_001E1000 },
    { 0x001E1010u, sub_001E1010 },
    { 0x001E1070u, sub_001E1070 },
    { 0x001E1420u, b3_dispatch_plugin_identity },
    { 0x001E1440u, b3_dispatch_plugin_identity },
    { 0x001E16D0u, b3_dispatch_rw_object_construct },
    { 0x001E1700u, b3_dispatch_rw_object_destruct },
    { 0x001E1710u, sub_001E1710 },
    { 0x001E1770u, sub_001E1770 },
    { 0x001E17F0u, sub_001E17F0 },
    { 0x001E18B0u, sub_001E18B0 },
    { 0x001E18F0u, sub_001E18F0 },
    { 0x001E1AF0u, sub_001E1AF0 },
    { 0x001E1B50u, sub_001E1B50 },
    { 0x001E1C40u, b3_dispatch_plugin_identity },
    { 0x001E1CD0u, sub_001E1CD0 },
    { 0x001E1F60u, b3_dispatch_plugin_identity },
    { 0x001E21D0u, b3_dispatch_plugin_identity },
    { 0x001E2210u, b3_dispatch_plugin_identity },
    { 0x001E22B0u, b3_dispatch_plugin_identity },
    { 0x001E2300u, b3_dispatch_plugin_identity },
    { 0x001E3760u, b3_dispatch_plugin_identity },
    { 0x001E3830u, b3_dispatch_plugin_identity },
    { 0x001E3980u, b3_dispatch_im3d_construct },
    { 0x001E3990u, b3_dispatch_im3d_destruct },
    { 0x001E3A90u, sub_001E3A90 },
    { 0x001E8760u, sub_001E8760 },
    { 0x001ED1A0u, sub_001ED1A0 },
    { 0x001ED1D0u, sub_001ED1D0 },
    { 0x001ED200u, sub_001ED200 },
    { 0x001ED770u, sub_001ED770 },
    { 0x001ED920u, sub_001ED920 },
    { 0x001ED950u, sub_001ED950 },
    { 0x001ED980u, sub_001ED980 },
    { 0x001EDBA0u, sub_001EDBA0 },
    { 0x001EDBD0u, sub_001EDBD0 },
    { 0x001F0250u, b3_dispatch_rw_plugin_construct },
    { 0x001F04A0u, sub_001F04A0 },
    { 0x001F0800u, sub_001F0800 },
    { 0x001F0DE0u, sub_001F0DE0 },
    { 0x001F0F50u, sub_001F0F50 },
    { 0x001F0F80u, sub_001F0F80 },
    { 0x001F1100u, b3_dispatch_skin_pipeline_construct },
    { 0x001F1150u, b3_dispatch_skin_pipeline_destruct },
    { 0x001F1190u, sub_001F1190 },
    { 0x001F11C0u, sub_001F11C0 },
    { 0x001F3870u, sub_001F3870 },
    { 0x001F3A60u, sub_001F3A60 },
    { 0x001F56A0u, sub_001F56A0 },
    { 0x001F56B0u, sub_001F56B0 },
    { 0x001F5810u, sub_001F5810 },
    { 0x001F5840u, sub_001F5840 },
    { 0x001F5A00u, sub_001F5A00 },
    { 0x001F5A10u, sub_001F5A10 },
    { 0x001F5A30u, sub_001F5A30 },
    { 0x001F5A60u, sub_001F5A60 },
    { 0x001F5AA0u, sub_001F5AA0 },
    { 0x001F5B10u, sub_001F5B10 },
    { 0x001F5C40u, sub_001F5C40 },
    { 0x001F5CB0u, sub_001F5CB0 },
    { 0x001F5D40u, sub_001F5D40 },
    { 0x001F5E30u, sub_001F5E30 },
    { 0x001F5E40u, sub_001F5E40 },
    { 0x001F5F30u, sub_001F5F30 },
    { 0x001F6050u, sub_001F6050 },
    { 0x001F6340u, sub_001F6340 },
    { 0x001F6350u, sub_001F6350 },
    { 0x001F6370u, sub_001F6370 },
    { 0x001F63B0u, sub_001F63B0 },
    { 0x001F63F0u, sub_001F63F0 },
    { 0x001F64F0u, sub_001F64F0 },
    { 0x001F6530u, sub_001F6530 },
    { 0x001F6590u, sub_001F6590 },
    { 0x001F65A0u, sub_001F65A0 },
    { 0x001F6600u, sub_001F6600 },
    { 0x001F6630u, sub_001F6630 },
    { 0x001F6720u, sub_001F6720 },
    { 0x001F6890u, sub_001F6890 },
    { 0x001F68D0u, sub_001F68D0 },
    { 0x001F6930u, sub_001F6930 },
    { 0x001F6A20u, sub_001F6A20 },
    { 0x001F6AD0u, sub_001F6AD0 },
    { 0x001F6B20u, sub_001F6B20 },
    { 0x001F6C40u, sub_001F6C40 },
    { 0x001F6CA0u, sub_001F6CA0 },
    { 0x001F6D40u, sub_001F6D40 },
    { 0x001F6E40u, sub_001F6E40 },
    { 0x001F6EB0u, sub_001F6EB0 },
    { 0x001F70C0u, sub_001F70C0 },
    { 0x001F7150u, sub_001F7150 },
    { 0x001F77C0u, sub_001F77C0 },
    { 0x001F7800u, sub_001F7800 },
    { 0x001F7810u, sub_001F7810 },
    { 0x001F7840u, sub_001F7840 },
    { 0x001F79B0u, sub_001F79B0 },
    { 0x001F7A90u, sub_001F7A90 },
    { 0x001F7BC0u, sub_001F7BC0 },
    { 0x001F8580u, sub_001F8580 },
    { 0x001F85A0u, sub_001F85A0 },
    { 0x001F8640u, sub_001F8640 },
    { 0x001F8690u, sub_001F8690 },
    { 0x001F8720u, sub_001F8720 },
    { 0x001F8750u, sub_001F8750 },
    { 0x001F8B10u, sub_001F8B10 },
    { 0x001F9050u, sub_001F9050 },
    { 0x001F9170u, sub_001F9170 },
    { 0x001F9220u, sub_001F9220 },
    { 0x001F9310u, sub_001F9310 },
    { 0x001F9350u, sub_001F9350 },
    { 0x001F93C0u, sub_001F93C0 },
    { 0x001F9400u, sub_001F9400 },
    { 0x001F9410u, sub_001F9410 },
    { 0x001F9460u, sub_001F9460 },
    { 0x001F94A0u, sub_001F94A0 },
    { 0x001F9670u, sub_001F9670 },
    { 0x001F9DE0u, sub_001F9DE0 },
    { 0x001F9EE0u, sub_001F9EE0 },
    { 0x001FA200u, sub_001FA200 },
    { 0x001FA210u, sub_001FA210 },
    { 0x001FA380u, sub_001FA380 },
    { 0x001FA7D0u, sub_001FA7D0 },
    { 0x001FAB00u, sub_001FAB00 },
    { 0x001FABD0u, sub_001FABD0 },
    { 0x001FACB0u, sub_001FACB0 },
    { 0x001FAFA0u, sub_001FAFA0 },
    { 0x001FB100u, sub_001FB100 },
    { 0x001FB140u, sub_001FB140 },
    { 0x001FB1A0u, sub_001FB1A0 },
    { 0x001FBA20u, sub_001FBA20 },
    { 0x001FBAE0u, sub_001FBAE0 },
    { 0x001FBB10u, sub_001FBB10 },
    { 0x001FBB40u, sub_001FBB40 },
    { 0x001FBB70u, sub_001FBB70 },
    { 0x001FBBB0u, sub_001FBBB0 },
    { 0x001FBBF0u, sub_001FBBF0 },
    { 0x001FBC90u, sub_001FBC90 },
    { 0x001FBDF0u, sub_001FBDF0 },
    { 0x001FBE70u, sub_001FBE70 },
    { 0x001FC070u, sub_001FC070 },
    { 0x001FC130u, sub_001FC130 },
    { 0x001FC3A0u, sub_001FC3A0 },
    { 0x001FC640u, sub_001FC640 },
    { 0x001FC690u, sub_001FC690 },
    { 0x001FC930u, sub_001FC930 },
    { 0x001FC950u, sub_001FC950 },
    { 0x001FD330u, sub_001FD330 },
    { 0x001FD370u, sub_001FD370 },
    { 0x001FD6C0u, sub_001FD6C0 },
    { 0x001FD770u, sub_001FD770 },
    { 0x001FE110u, sub_001FE110 },
    { 0x001FE140u, sub_001FE140 },
    { 0x001FE170u, sub_001FE170 },
    { 0x001FE1C0u, sub_001FE1C0 },
    { 0x001FE1E0u, sub_001FE1E0 },
    { 0x001FE220u, sub_001FE220 },
    { 0x001FE270u, sub_001FE270 },
    { 0x001FE2A0u, sub_001FE2A0 },
    { 0x001FE320u, sub_001FE320 },
    { 0x001FE3D0u, sub_001FE3D0 },
    { 0x001FE500u, sub_001FE500 },
    { 0x001FE590u, sub_001FE590 },
    { 0x001FE620u, sub_001FE620 },
    { 0x001FE660u, sub_001FE660 },
    { 0x001FE6B0u, sub_001FE6B0 },
    { 0x001FE710u, sub_001FE710 },
    { 0x001FE770u, sub_001FE770 },
    { 0x001FE820u, sub_001FE820 },
    { 0x001FE900u, sub_001FE900 },
    { 0x001FEA30u, sub_001FEA30 },
    { 0x001FEB10u, sub_001FEB10 },
    { 0x001FEBF0u, sub_001FEBF0 },
    { 0x001FED80u, sub_001FED80 },
    { 0x001FED90u, sub_001FED90 },
    { 0x001FEDC0u, sub_001FEDC0 },
    { 0x001FEDE0u, b3_dispatch_alloc_callback },
    { 0x001FEE90u, sub_001FEE90 },
    { 0x001FFD80u, sub_001FFD80 },
    { 0x001FFE00u, sub_001FFE00 },
    { 0x00200C70u, sub_00200C70 },
    { 0x00200CD0u, sub_00200CD0 },
    { 0x00201EC0u, sub_00201EC0 },
    { 0x00201EF0u, sub_00201EF0 },
    { 0x00201F00u, sub_00201F00 },
    { 0x00201F20u, sub_00201F20 },
    { 0x00201F80u, sub_00201F80 },
    { 0x00201F90u, sub_00201F90 },
    { 0x00202240u, sub_00202240 },
    { 0x00202270u, sub_00202270 },
    { 0x002025B0u, sub_002025B0 },
    { 0x00202610u, sub_00202610 },
    { 0x002087B0u, sub_002087B0 },
    { 0x0020A1B0u, sub_0020A1B0 },
    { 0x0020A1F0u, sub_0020A1F0 },
    { 0x0020A200u, sub_0020A200 },
    { 0x0020B450u, sub_0020B450 },
    { 0x0020B4B0u, sub_0020B4B0 },
    { 0x0020B590u, sub_0020B590 },
    { 0x0020BC00u, sub_0020BC00 },
    { 0x0020BC20u, sub_0020BC20 },
    { 0x0020BC40u, sub_0020BC40 },
    { 0x0020BC60u, sub_0020BC60 },
    { 0x0020BC80u, sub_0020BC80 },
    { 0x0020BCB0u, sub_0020BCB0 },
    { 0x0020BCD0u, sub_0020BCD0 },
    { 0x0020BCE0u, sub_0020BCE0 },
    { 0x0020BD20u, sub_0020BD20 },
    { 0x0020BD30u, sub_0020BD30 },
    { 0x0020BDB0u, sub_0020BDB0 },
    { 0x0020BDC0u, sub_0020BDC0 },
    { 0x0020BDF0u, sub_0020BDF0 },
    { 0x0020BEB0u, sub_0020BEB0 },
    { 0x0020C280u, sub_0020C280 },
    { 0x0020C290u, sub_0020C290 },
    { 0x0020C2D0u, sub_0020C2D0 },
    { 0x0020DFD0u, sub_0020DFD0 },
    { 0x0020F9AEu, sub_0020F9AE },
    { 0x00210940u, sub_00210940 },
    { 0x002109F0u, sub_002109F0 },
    { 0x00210C60u, sub_00210C60 },
    { 0x00210CB0u, sub_00210CB0 },
    { 0x00210D80u, sub_00210D80 },
    { 0x00210E70u, sub_00210E70 },
    { 0x00210EA0u, sub_00210EA0 },
    { 0x00211500u, sub_00211500 },
    { 0x00211580u, sub_00211580 },
    { 0x00211690u, sub_00211690 },
    { 0x00211750u, sub_00211750 },
    { 0x00211800u, sub_00211800 },
    { 0x00211BC0u, sub_00211BC0 },
    { 0x00211BE0u, sub_00211BE0 },
    { 0x00211EF0u, sub_00211EF0 },
    { 0x00212910u, sub_00212910 },
    { 0x00213230u, sub_00213230 },
    { 0x00213280u, sub_00213280 },
    { 0x002134B0u, sub_002134B0 },
    { 0x00213580u, sub_00213580 },
    { 0x002135F0u, sub_002135F0 },
    { 0x00213630u, sub_00213630 },
    { 0x002138E0u, sub_002138E0 },
    { 0x00213970u, sub_00213970 },
    { 0x00213AB0u, sub_00213AB0 },
    { 0x00213DA0u, sub_00213DA0 },
    { 0x00213DF0u, sub_00213DF0 },
    { 0x00213E80u, sub_00213E80 },
    { 0x00214040u, sub_00214040 },
    { 0x002141D0u, sub_002141D0 },
    { 0x002147A0u, sub_002147A0 },
    { 0x00214820u, sub_00214820 },
    { 0x00214840u, sub_00214840 },
    { 0x00214910u, sub_00214910 },
    { 0x00214A30u, sub_00214A30 },
    { 0x00214AB0u, sub_00214AB0 },
    { 0x00214BF0u, sub_00214BF0 },
    { 0x00214C20u, sub_00214C20 },
    { 0x00214C50u, sub_00214C50 },
    { 0x00214C90u, sub_00214C90 },
    { 0x00214CD0u, sub_00214CD0 },
    { 0x002151D0u, sub_002151D0 },
    { 0x002155A0u, sub_002155A0 },
    { 0x00215910u, sub_00215910 },
    { 0x002159B0u, sub_002159B0 },
    { 0x0021BEC0u, sub_0021BEC0 },
    { 0x0021BFF0u, sub_0021BFF0 },
    { 0x0021C030u, sub_0021C030 },
    { 0x0021C0C0u, sub_0021C0C0 },
    { 0x0021C180u, sub_0021C180 },
    { 0x0021C190u, sub_0021C190 },
    { 0x0021C200u, sub_0021C200 },
    { 0x0021C230u, sub_0021C230 },
    { 0x0021C240u, sub_0021C240 },
    { 0x0021C270u, sub_0021C270 },
    { 0x0021C2D0u, sub_0021C2D0 },
    { 0x0021C2F0u, sub_0021C2F0 },
    { 0x0021C310u, sub_0021C310 },
    { 0x0021C5C0u, sub_0021C5C0 },
    { 0x0021C650u, sub_0021C650 },
    { 0x0021C680u, sub_0021C680 },
    { 0x0021C710u, sub_0021C710 },
    { 0x0021C870u, sub_0021C870 },
    { 0x0021C930u, sub_0021C930 },
    { 0x0021C9A0u, sub_0021C9A0 },
    { 0x0021CA20u, sub_0021CA20 },
    { 0x0021CAB0u, sub_0021CAB0 },
    { 0x0021CAF0u, sub_0021CAF0 },
    { 0x0021CB70u, sub_0021CB70 },
    { 0x0021CCF0u, sub_0021CCF0 },
    { 0x0021D0E0u, sub_0021D0E0 },
    { 0x0021D230u, sub_0021D230 },
    { 0x0021D2F0u, sub_0021D2F0 },
    { 0x0021D550u, sub_0021D550 },
    { 0x0021D700u, sub_0021D700 },
    { 0x0021D960u, sub_0021D960 },
    { 0x0021D9F0u, sub_0021D9F0 },
    { 0x0021DBD0u, sub_0021DBD0 },
    { 0x0021DE90u, sub_0021DE90 },
    { 0x0021E1A0u, sub_0021E1A0 },
    { 0x0021E390u, sub_0021E390 },
    { 0x0021E3A0u, sub_0021E3A0 },
    { 0x0021E5F0u, sub_0021E5F0 },
    { 0x0021E6E0u, sub_0021E6E0 },
    { 0x0021EB80u, sub_0021EB80 },
    { 0x0021EBD0u, sub_0021EBD0 },
    { 0x0021EEE0u, sub_0021EEE0 },
    { 0x0021F630u, sub_0021F630 },
    { 0x00220460u, sub_00220460 },
    { 0x002206A0u, sub_002206A0 },
    { 0x00220760u, sub_00220760 },
    { 0x002207E0u, sub_002207E0 },
    { 0x002208D0u, sub_002208D0 },
    { 0x00220900u, sub_00220900 },
    { 0x002209B0u, sub_002209B0 },
    { 0x00220A40u, sub_00220A40 },
    { 0x00220AD0u, sub_00220AD0 },
    { 0x00220B90u, sub_00220B90 },
    { 0x00220C70u, sub_00220C70 },
    { 0x00220DF0u, sub_00220DF0 },
    { 0x00221050u, sub_00221050 },
    { 0x00221190u, sub_00221190 },
    { 0x00221290u, sub_00221290 },
    { 0x00221320u, sub_00221320 },
    { 0x00221470u, sub_00221470 },
    { 0x00221570u, sub_00221570 },
    { 0x002215B0u, sub_002215B0 },
    { 0x00221630u, sub_00221630 },
    { 0x00221B40u, sub_00221B40 },
    { 0x00221C60u, sub_00221C60 },
    { 0x00221D20u, sub_00221D20 },
    { 0x00221D90u, sub_00221D90 },
    { 0x00221E80u, sub_00221E80 },
    { 0x00221EC0u, sub_00221EC0 },
    { 0x00221F20u, sub_00221F20 },
    { 0x00221F80u, sub_00221F80 },
    { 0x00222010u, sub_00222010 },
    { 0x00222080u, sub_00222080 },
    { 0x002220D0u, sub_002220D0 },
    { 0x002222B0u, sub_002222B0 },
    { 0x00222AE0u, sub_00222AE0 },
    { 0x00222EB0u, sub_00222EB0 },
    { 0x00222F40u, sub_00222F40 },
    { 0x00223070u, sub_00223070 },
    { 0x00223240u, sub_00223240 },
    { 0x00223350u, sub_00223350 },
    { 0x00223390u, sub_00223390 },
    { 0x002233D0u, sub_002233D0 },
    { 0x00223440u, sub_00223440 },
    { 0x002234B0u, sub_002234B0 },
    { 0x00223500u, sub_00223500 },
    { 0x00224160u, sub_00224160 },
    { 0x00224190u, sub_00224190 },
    { 0x002241B0u, sub_002241B0 },
    { 0x00224240u, sub_00224240 },
    { 0x00224400u, sub_00224400 },
    { 0x00224AC0u, sub_00224AC0 },
    { 0x00224B40u, sub_00224B40 },
    { 0x00224C50u, sub_00224C50 },
    { 0x00224CA0u, sub_00224CA0 },
    { 0x00225550u, sub_00225550 },
    { 0x00225580u, sub_00225580 },
    { 0x002255E0u, sub_002255E0 },
    { 0x002256C0u, sub_002256C0 },
    { 0x00225710u, sub_00225710 },
    { 0x00225760u, sub_00225760 },
    { 0x00225830u, sub_00225830 },
    { 0x002258E0u, sub_002258E0 },
    { 0x00225980u, sub_00225980 },
    { 0x002259F0u, sub_002259F0 },
    { 0x00225A80u, sub_00225A80 },
    { 0x00225AB0u, sub_00225AB0 },
    { 0x00225AC0u, sub_00225AC0 },
    { 0x00225B00u, sub_00225B00 },
    { 0x00225B60u, sub_00225B60 },
    { 0x00225D20u, sub_00225D20 },
    { 0x00225F10u, sub_00225F10 },
    { 0x00225FB0u, sub_00225FB0 },
    { 0x00225FD0u, sub_00225FD0 },
    { 0x00226240u, sub_00226240 },
    { 0x002262E0u, sub_002262E0 },
    { 0x002262F0u, sub_002262F0 },
    { 0x00226330u, sub_00226330 },
    { 0x00226380u, sub_00226380 },
    { 0x002263B0u, sub_002263B0 },
    { 0x00226430u, sub_00226430 },
    { 0x00226460u, sub_00226460 },
    { 0x00226480u, sub_00226480 },
    { 0x002264E0u, sub_002264E0 },
    { 0x00226970u, sub_00226970 },
    { 0x00226AD0u, sub_00226AD0 },
    { 0x00226B40u, sub_00226B40 },
    { 0x00226B90u, sub_00226B90 },
    { 0x00226D70u, sub_00226D70 },
    { 0x00226DB0u, sub_00226DB0 },
    { 0x00226E70u, sub_00226E70 },
    { 0x00226F40u, sub_00226F40 },
    { 0x00226F90u, sub_00226F90 },
    { 0x00226FE0u, sub_00226FE0 },
    { 0x00227160u, sub_00227160 },
    { 0x002271F0u, sub_002271F0 },
    { 0x002275A0u, sub_002275A0 },
    { 0x00227600u, sub_00227600 },
    { 0x002276A0u, sub_002276A0 },
    { 0x002276C0u, sub_002276C0 },
    { 0x002276E9u, sub_002276E9 },
    { 0x00242060u, sub_00242060 },
    { 0x00242160u, sub_00242160 },
    { 0x00242230u, sub_00242230 },
    { 0x002422C0u, sub_002422C0 },
    { 0x002423E0u, sub_002423E0 },
    { 0x002425D0u, sub_002425D0 },
    { 0x00242640u, sub_00242640 },
    { 0x00242740u, sub_00242740 },
    { 0x00242750u, sub_00242750 },
    { 0x00242760u, sub_00242760 },
    { 0x00242770u, sub_00242770 },
    { 0x00242900u, sub_00242900 },
    { 0x002429F0u, sub_002429F0 },
    { 0x00242A20u, sub_00242A20 },
    { 0x00242A50u, sub_00242A50 },
    { 0x00242B00u, sub_00242B00 },
    { 0x00242C70u, sub_00242C70 },
    { 0x00242C90u, sub_00242C90 },
    { 0x002430B0u, sub_002430B0 },
    { 0x00243150u, sub_00243150 },
    { 0x00243170u, sub_00243170 },
    { 0x00243210u, sub_00243210 },
    { 0x00243215u, sub_00243215 },
    { 0x00243373u, sub_00243373 },
    { 0x00243450u, sub_00243450 },
    { 0x002434C0u, sub_002434C0 },
    { 0x00243743u, sub_00243743 },
    { 0x00243816u, sub_00243816 },
    { 0x0024386Du, sub_0024386D },
    { 0x00243872u, sub_00243872 },
    { 0x00243880u, sub_00243880 },
    { 0x002439E9u, sub_002439E9 },
    { 0x00243A41u, sub_00243A41 },
    { 0x00243AC0u, sub_00243AC0 },
    { 0x00243AD0u, sub_00243AD0 },
    { 0x00243BD0u, sub_00243BD0 },
    { 0x00243C60u, sub_00243C60 },
    { 0x00243D95u, sub_00243D95 },
    { 0x00243DB7u, sub_00243DB7 },
    { 0x00243E49u, sub_00243E49 },
    { 0x00243ED7u, sub_00243ED7 },
    { 0x00243F09u, sub_00243F09 },
    { 0x00243F9Eu, sub_00243F9E },
    { 0x002440A5u, b3_dispatch_free_callback },
    { 0x002440F4u, sub_002440F4 },
    { 0x002440FDu, sub_002440FD },
    { 0x0024414Au, sub_0024414A },
    { 0x00244171u, sub_00244171 },
    { 0x0024419Du, sub_0024419D },
    { 0x002442A0u, sub_002442A0 },
    { 0x002445E0u, sub_002445E0 },
    { 0x0024468Au, sub_0024468A },
    { 0x002446F8u, sub_002446F8 },
    { 0x00244750u, sub_00244750 },
    { 0x00244784u, sub_00244784 },
    { 0x002447BFu, sub_002447BF },
    { 0x0024490Au, sub_0024490A },
    { 0x0024499Eu, sub_0024499E },
    { 0x002449B6u, sub_002449B6 },
    { 0x00244A20u, sub_00244A20 },
    { 0x00244C10u, sub_00244C10 },
    { 0x00244C51u, sub_00244C51 },
    { 0x00244CA0u, sub_00244CA0 },
    { 0x00244D08u, sub_00244D08 },
    { 0x00244DF0u, sub_00244DF0 },
    { 0x00244E9Cu, sub_00244E9C },
    { 0x00244E9Eu, sub_00244E9E },
    { 0x00244EC0u, sub_00244EC0 },
    { 0x0024B145u, sub_0024B145 },
    { 0x0024B189u, sub_0024B189 },
    { 0x0024B1B3u, sub_0024B1B3 },
    { 0x0024B1E0u, sub_0024B1E0 },
    { 0x0024B275u, sub_0024B275 },
    { 0x0024B2A1u, sub_0024B2A1 },
    { 0x0024B2C3u, sub_0024B2C3 },
    { 0x0024B332u, sub_0024B332 },
    { 0x0024B616u, sub_0024B616 },
    { 0x0024B626u, sub_0024B626 },
    { 0x0024B687u, sub_0024B687 },
    { 0x0024BC68u, sub_0024BC68 },
    { 0x0024BC71u, sub_0024BC71 },
    { 0x0024BD94u, sub_0024BD94 },
    { 0x0024BDDDu, sub_0024BDDD },
    { 0x0024BE1Eu, sub_0024BE1E },
    { 0x0024BEB5u, sub_0024BEB5 },
    { 0x0024BEBEu, sub_0024BEBE },
    { 0x0024C05Cu, sub_0024C05C },
    { 0x0024C3C8u, sub_0024C3C8 },
    { 0x0024D2B4u, sub_0024D2B4 },
    { 0x0024D5A0u, sub_0024D5A0 },
    { 0x0024DBCDu, sub_0024DBCD },
    { 0x0024DC5Du, sub_0024DC5D },
    { 0x0024DC89u, sub_0024DC89 },
    { 0x0024DCE9u, sub_0024DCE9 },
    { 0x0024DD1Du, sub_0024DD1D },
    { 0x0024DD51u, sub_0024DD51 },
    { 0x0024DDA4u, sub_0024DDA4 },
    { 0x0024DDF7u, sub_0024DDF7 },
    { 0x0024DF71u, sub_0024DF71 },
    { 0x0024DFFAu, sub_0024DFFA },
    { 0x0024E004u, sub_0024E004 },
    { 0x0024E020u, sub_0024E020 },
    { 0x0024E060u, sub_0024E060 },
    { 0x0024E084u, sub_0024E084 },
    { 0x0024E0D4u, sub_0024E0D4 },
    { 0x0024E137u, sub_0024E137 },
    { 0x0024E13Cu, sub_0024E13C },
    { 0x0024E2D5u, sub_0024E2D5 },
    { 0x0024E308u, sub_0024E308 },
    { 0x0024EFFBu, sub_0024EFFB },
    { 0x0024F298u, sub_0024F298 },
    { 0x0024F2D3u, sub_0024F2D3 },
    { 0x0024F7F6u, sub_0024F7F6 },
    { 0x0024FAAFu, sub_0024FAAF },
    { 0x0024FC8Cu, sub_0024FC8C },
    { 0x002574B0u, sub_002574B0 },
    { 0x002574CDu, sub_002574CD },
};

#define B3_DISPATCH_N (sizeof k_dispatch / sizeof k_dispatch[0])

size_t b3_dispatch_size(void) { return B3_DISPATCH_N; }

/* How much of the game's computed dispatch this build can actually
 * answer. Set B3_DISPATCH_TRACE to see it. A large unresolved count is
 * the measure of how much game code is still missing from the build.
 *
 * Reported as it happens rather than at exit: the run that matters boots
 * the game on a thread that is still executing when main returns, so a
 * destructor never gets to speak. */
static unsigned long s_resolved, s_unresolved;

static void trace(uint32_t va, int hit)
{
    static int on = -1;
    if (on < 0) on = getenv("B3_DISPATCH_TRACE") != NULL;
    if (!on) return;
    /* One line per distinct target: the interesting quantity is which
     * functions the game asks for, not how often. */
    static uint32_t seen[256];
    static int n;
    for (int i = 0; i < n; i++) if (seen[i] == va) return;
    if (n < (int)(sizeof seen / sizeof seen[0])) seen[n++] = va;
    fprintf(stderr, "  [DISPATCH] %s %#x (%lu resolved, %lu unresolved)\n",
            hit ? "->" : "??", va, s_resolved, s_unresolved);
}

recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    /* The retail frontend object is reached exclusively through its vtable.
     * These two methods are now part of the verified native boundary and
     * must not depend on the legacy whole-table experiment switch. */
    if (xbox_va == 0x00014860u) return sub_00014860;
    if (xbox_va == 0x00014D20u) return sub_00014D20;
    if (xbox_va == 0x00014FB0u) return sub_00014FB0;
    if (xbox_va == 0x000151D0u) return sub_000151D0;
    if (xbox_va == 0x000190F0u) return sub_000190F0;
    /* The retail frontend manager enters/leaves screen objects through these
     * vtable slots.  Keep this narrow verified chain live without enabling
     * the legacy whole-table experiment. */
    if (xbox_va == 0x001B42B0u) return sub_001B42B0;
    if (xbox_va == 0x001B42E0u) return sub_001B42E0;
    if (xbox_va == 0x00067880u) return sub_00067880;
    if (xbox_va == 0x0006C210u) return sub_0006C210;
    if (xbox_va == 0x0006C280u) return sub_0006C280;
    if (xbox_va == 0x000871D0u) return sub_000871D0;
    if (xbox_va == 0x00017790u) return sub_00017790;
    if (xbox_va == 0x000179D0u) return sub_000179D0;
    /* Screen state 1 builds the retail frontend's RenderWare element graph.
     * These are Criterion UI routines with an already-closed direct-call set,
     * so keep them on the verified menu path without enabling the unrelated
     * whole-XBE dispatch experiment. */
    if (xbox_va == 0x000BA990u) return sub_000BA990;
    if (xbox_va == 0x001C57C0u) return sub_001C57C0;
    if (xbox_va == 0x000B9D10u) return sub_000B9D10;
    if (xbox_va == 0x000BA100u) return sub_000BA100;
    if (xbox_va == 0x000CB9D0u) return sub_000CB9D0;
    if (xbox_va == 0x000B9620u) return sub_000B9620;
    /* RenderWare frontend command-list callbacks.  These are the retail
     * sprite/text batchers installed into each menu item's +0x44 callback
     * and consumed by sub_001C6500 during the normal frame flush. */
    if (xbox_va == 0x000B53F0u) return sub_000B53F0;
    if (xbox_va == 0x000F9CE0u) return sub_000F9CE0;
    if (xbox_va == 0x001C1930u) return sub_001C1930;
    if (xbox_va == 0x001C1A60u) return sub_001C1A60;
    if (xbox_va == 0x00020CD0u) return sub_00020CD0;
    if (xbox_va == 0x000F9650u) return sub_000F9650;
    if (xbox_va == 0x001C59A0u) return sub_001C59A0;
    /* The retail CRT allocator/free callbacks are portable guest-memory
     * boundaries, not optional game/plugin dispatch.  Core resource pools
     * use them before the experimental whole-table switch is enabled. */
    if (xbox_va == 0x001FEDE0u) return b3_dispatch_alloc_callback;
    if (xbox_va == 0x002440A5u) return b3_dispatch_free_callback;

    /* Off by default, and deliberately so.
     *
     * Resolving computed calls is correct and is what the game needs — with
     * it on, the dispatch trace shows real hits (0x1FEDE0, 0x1DAC00) where
     * every lookup used to return NULL. But it also changes which code the
     * boot runs, and today that path stalls before the renderer is reached:
     * draws fall from 120 to 0 and the D3D call log empties entirely.
     *
     * Returning NULL is what the game got for the whole of its working
     * history here, so that stays the default until the stall is understood.
     * Set B3_DISPATCH=1 to run the resolved path and work on it. */
    static int enabled = -1;
    if (enabled < 0) enabled = getenv("B3_DISPATCH") != NULL;
    if (!enabled) { s_unresolved++; trace(xbox_va, 0); return NULL; }

    size_t lo = 0, hi = B3_DISPATCH_N;
    while (lo < hi) {
        size_t mid = lo + (hi - lo) / 2;
        if (k_dispatch[mid].va < xbox_va) lo = mid + 1;
        else                              hi = mid;
    }
    if (lo < B3_DISPATCH_N && k_dispatch[lo].va == xbox_va) {
        s_resolved++;
        trace(xbox_va, 1);
        return k_dispatch[lo].fn;
    }
    s_unresolved++;
    if (xbox_va <= 4u) {
        static uint32_t diagnosed[5];
        if (!diagnosed[xbox_va]) {
            diagnosed[xbox_va] = 1;
            fprintf(stderr,
                    "b3_dispatch: small indirect target=%08X esp=%08X "
                    "eax=%08X ecx=%08X edx=%08X ebx=%08X esi=%08X "
                    "edi=%08X stack=%08X,%08X,%08X,%08X\n",
                    xbox_va, g_esp, g_eax, g_ecx, g_edx, g_ebx, g_esi,
                    g_edi, MEM32(g_esp), MEM32(g_esp + 4u),
                    MEM32(g_esp + 8u), MEM32(g_esp + 12u));
            fprintf(stderr, "b3_dispatch: prior indirect targets:");
            uint64_t available = g_icall_trace_idx < 12u
                ? g_icall_trace_idx : 12u;
            for (uint64_t i = available; i != 0; i--) {
                uint64_t index = g_icall_trace_idx - i;
                fprintf(stderr, " %08X",
                        g_icall_trace[index & (ICALL_TRACE_SIZE - 1u)]);
            }
            fprintf(stderr, "\n");
#if defined(__linux__)
            void *frames[12];
            int frame_count = backtrace(frames, 12);
            backtrace_symbols_fd(frames, frame_count, 2);
#endif
        }
    }
    trace(xbox_va, 0);
    return NULL;
}
