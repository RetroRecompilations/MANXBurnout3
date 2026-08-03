// burnout3_kernel_shim.c — Minimal Xbox kernel for MANX integration.
//
// Provides the 5 kernel functions that burnout3_bridge.c calls, using
// Linux-native APIs (mmap/munmap) instead of the full Windows kernel port.
// This gives us a bootable game infrastructure immediately, without
// needing to port 15 Windows-dependent kernel files.
//
// The full kernel port (Burnout3Recomp/src/kernel/*.c) is behind the
// CMake option BURNOUT3_KERNEL_PORT=ON for future work.

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <dirent.h>
#include <limits.h>

/* Xbox memory macros — inlined here because recomp_types.h pulls in
 * __forceinline and other MSVC constructs that fail under GCC. */
#define MEM32(addr) (*(volatile uint32_t *)((uintptr_t)(addr) + (uintptr_t)g_xbox_mem_offset))
#define MEM16(addr) (*(volatile uint16_t *)((uintptr_t)(addr) + (uintptr_t)g_xbox_mem_offset))
#define MEM8(addr)  (*(volatile uint8_t  *)((uintptr_t)(addr) + (uintptr_t)g_xbox_mem_offset))

#ifndef _WIN32
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#endif

// ═══════════════════════════════════════════════════════════════
//  Xbox memory access (definitions)
// ═══════════════════════════════════════════════════════════════

// Offset from Xbox virtual address to native pointer.
// Initialised in xbox_MemoryLayoutInit. The MEM32/MEM16/MEM8
// macros and XBOX_TO_NATIVE are defined in windows.h.
ptrdiff_t g_xbox_mem_offset = 0;

// ═══════════════════════════════════════════════════════════════
//  CPU register stubs (referenced by recompiled code)
// ═══════════════════════════════════════════════════════════════

uint32_t g_esp = 0;
uint32_t g_eax = 0;
uint32_t g_ecx = 0;
uint32_t g_edx = 0;
uint32_t g_ebx = 0;
uint32_t g_esi = 0;
uint32_t g_edi = 0;
uint32_t g_ebp = 0;

/* ═══════════════════════════════════════════════════════════════
 *  Xbox memory layout — 64 MB unified RAM
 * ═══════════════════════════════════════════════════════════════ */

#define XBOX_TOTAL_RAM (64 * 1024 * 1024)

static void *s_xbox_memory = NULL;
static size_t s_xbox_memory_size = 0;
static char s_game_dir[1024] = {0};
static char s_save_dir[1024] = {0};

#define HOST_FILE_MAX 64
typedef struct {
    uint32_t handle;
    FILE *file;
    char path[1024];
} host_file_entry;
static host_file_entry s_host_files[HOST_FILE_MAX];
static uint32_t s_host_file_next = 0x00001000u;

int xbox_MemoryLayoutInit(const void *xbe_data, unsigned long xbe_size) {
    if (s_xbox_memory) return 1;  // Already initialised
    if (!xbe_data || xbe_size < 0x400) return 0;

#ifdef _WIN32
    s_xbox_memory = VirtualAlloc(NULL, XBOX_TOTAL_RAM,
        MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
#else
    /* The 4 GB alignment is load-bearing.  xbox_ptr_resolve() in
     * recomp_types.h decides whether an address is already a native
     * pointer by testing (addr - (uint32_t)g_xbox_mem_offset).  When
     * the low 32 bits of the offset are non-zero, that subtraction
     * wraps for Xbox VAs below the offset and the function returns the
     * VA raw — a host address that is not mapped.  A 4 GB-aligned base
     * makes the low 32 bits zero and skips the test entirely. */
    s_xbox_memory = mmap((void *)0x200000000ull, XBOX_TOTAL_RAM,
        PROT_READ | PROT_WRITE | PROT_EXEC,
        MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (s_xbox_memory != (void *)0x200000000ull) {
        /* The hint was not honoured — unmap whatever we got and try
         * with MAP_FIXED.  FIXED will replace anything at that
         * address; on a normal desktop the range is unused. */
        if (s_xbox_memory != MAP_FAILED)
            munmap(s_xbox_memory, XBOX_TOTAL_RAM);
        s_xbox_memory = mmap((void *)0x200000000ull, XBOX_TOTAL_RAM,
            PROT_READ | PROT_WRITE | PROT_EXEC,
            MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED, -1, 0);
    }
#endif

    if (!s_xbox_memory || s_xbox_memory == MAP_FAILED) {
        fprintf(stderr, "kernel_shim: failed to allocate 64 MB Xbox RAM\n");
        return 0;
    }

    s_xbox_memory_size = XBOX_TOTAL_RAM;
    memset(s_xbox_memory, 0, XBOX_TOTAL_RAM);

    g_xbox_mem_offset = (ptrdiff_t)s_xbox_memory;

    // ── Load XBE sections into the Xbox address space ────────
    // Without this, the kernel thunk table, D3D vtable, and all
    // global data are zero — the game thread's indirect calls
    // resolve to NULL and its render loop never starts.
    const uint8_t *xb = (const uint8_t *)xbe_data;
    const uint32_t base = *(const uint32_t *)(xb + 0x104);
    const uint32_t nsec = *(const uint32_t *)(xb + 0x11C);
    const uint32_t hdr  = *(const uint32_t *)(xb + 0x120) - base;
    int loaded = 0;
    for (uint32_t i = 0; i < nsec; i++) {
        const uint32_t *s = (const uint32_t *)(xb + hdr + i * 0x38);
        const uint32_t va = s[1], raw = s[3], rsz = s[4];
        if ((unsigned long)raw + rsz > xbe_size) continue;
        // Section VA 0x00010000 → offset 0x00010000 in the 64MB mapping.
        // Sections beyond the 64MB boundary are clipped (they're BSS/data
        // near the end of the address space and harmless to drop).
        if (va < XBOX_TOTAL_RAM && (unsigned long)va + rsz <= XBOX_TOTAL_RAM) {
            memcpy((uint8_t *)s_xbox_memory + va, xb + raw, rsz);
            loaded++;
        }
    }

    fprintf(stderr, "kernel_shim: 64 MB Xbox memory at %p (offset=%td, %d/%u sections)\n",
            s_xbox_memory, g_xbox_mem_offset, loaded, nsec);
    return 1;
}

void xbox_MemoryLayoutShutdown(void) {
    if (!s_xbox_memory) return;

#ifdef _WIN32
    VirtualFree(s_xbox_memory, 0, MEM_RELEASE);
#else
    munmap(s_xbox_memory, s_xbox_memory_size);
#endif

    s_xbox_memory = NULL;
    s_xbox_memory_size = 0;
    fprintf(stderr, "kernel_shim: Xbox memory freed\n");
}

/* ═══════════════════════════════════════════════════════════════
 *  Kernel thunk table
 * ═══════════════════════════════════════════════════════════════ */

/* Forward declarations — defined after the stubs. */
static void kernel_data_init(void);
static uint32_t kernel_data_va_for_ordinal(uint32_t ordinal);

#define KERNEL_THUNK_BASE  0x0036B7C0u
#define KERNEL_THUNK_COUNT 147u
#define KERNEL_SYNTH_BASE  0x003F0000u
#define KERNEL_SYNTH_END   (KERNEL_SYNTH_BASE + KERNEL_THUNK_COUNT * 4u)

static uint16_t s_kernel_ordinals[KERNEL_THUNK_COUNT];
static int s_kernel_dispatch_slot = -1;

void xbox_kernel_init(void) {
    /* Populate the 147-entry kernel thunk table at 0x36B7C0.
     * Save the original ordinal for each slot so we can map
     * synthetic VAs back to kernel function names later. */
    uint32_t remapped = 0;
    /* Synthetic VAs must be INSIDE the 64 MB mapping so they work as
     * both call targets (RECOMP_ICALL) AND data pointers (sub_001CFF80
     * reads a thunk entry and dereferences it with MEM32).  0x003F0000
     * lives below the RECOMP_ICALL guard and above the game's data. */
    memset(s_kernel_ordinals, 0, sizeof(s_kernel_ordinals));

    /* DATA exports need real, dereferenceable Xbox addresses. */
    kernel_data_init();

    for (uint32_t i = 0; i < KERNEL_THUNK_COUNT; i++) {
        uint32_t entry = MEM32(KERNEL_THUNK_BASE + i * 4);
        if (entry & 0x80000000u) {
            uint32_t ordinal = entry & 0x7FFFFFFFu;
            uint32_t data_va = kernel_data_va_for_ordinal(ordinal);
            s_kernel_ordinals[i] = (uint16_t)ordinal;
            MEM32(KERNEL_THUNK_BASE + i * 4) =
                data_va ? data_va : KERNEL_SYNTH_BASE + i * 4;
            remapped++;
        }
    }
    fprintf(stderr, "kernel_shim: kernel init (%u/%u thunks remapped)\n",
            remapped, KERNEL_THUNK_COUNT);

    /* Print ordinal mapping for ALL slots. */
    fprintf(stderr, "kernel_shim:   slot ordinals:");
    for (int j = 0; j < 60; j++) {
        if (s_kernel_ordinals[j])
            fprintf(stderr, " %d:%u", j, s_kernel_ordinals[j]);
    }
    fprintf(stderr, "\n");
}

void xbox_kernel_shutdown(void) {
    fprintf(stderr, "kernel_shim: kernel shutdown\n");
}

/* ═══════════════════════════════════════════════════════════════
 *  Kernel thunk dispatch — strong recomp_lookup_kernel()
 * ═══════════════════════════════════════════════════════════════ */

/* ── Xbox heap allocator (simple bump allocator) ─────────────
 * Allocates from the top of Xbox RAM (0x03E00000 → downward).
 * Returns an Xbox VA that the game can access through MEM32(). */

#define XBOX_HEAP_START 0x01000000u
#define XBOX_HEAP_END   0x03F00000u  /* 47 MB, just below 64 MB ceiling */

static uint32_t s_heap_next = XBOX_HEAP_START;
static uint32_t s_fake_handle_next = 0xBEEF1000u;

static bool xbox_va_writable(uint32_t va, uint32_t size) {
    return va != 0 && va < XBOX_TOTAL_RAM && size <= XBOX_TOTAL_RAM - va;
}

static uint32_t xbox_heap_alloc(uint32_t size, uint32_t align) {
    if (align < 4) align = 4;
    if ((align & (align - 1)) != 0)
        align = 4096;
    uint32_t addr = (s_heap_next + align - 1) & ~(align - 1);
    if (addr >= XBOX_HEAP_END || size > XBOX_HEAP_END - addr) {
        fprintf(stderr, "kernel_shim: HEAP EXHAUSTED (need %u, have %u)\n",
                size, XBOX_HEAP_END - addr);
        return 0;
    }
    s_heap_next = addr + size;
    /* Zero the allocation so the game doesn't see stale data. */
    memset((uint8_t *)g_xbox_mem_offset + addr, 0, size);
    return addr;
}

static void xbox_heap_free(uint32_t va) {
    /* Bump allocator — no individual free.  The whole heap is
     * released when the kernel shuts down. */
    (void)va;
}

/* Portable RenderWare/CRT callbacks use the same guest heap as kernel pool
 * allocations. Exporting these two narrow operations avoids duplicating a
 * second allocator in the indirect-call bridge. */
uint32_t burnout3_kernel_heap_alloc(uint32_t size, uint32_t align) {
    return xbox_heap_alloc(size, align);
}

void burnout3_kernel_heap_free(uint32_t va) {
    xbox_heap_free(va);
}

/* ── Kernel stubs — one per function ──────────────────────────
 * Each stub reads its arguments from the emulated stack via
 * STACK_ARG(n), does the work, and sets g_eax. The generic kernel
 * dispatcher performs the emulated stdcall stack cleanup. */

#define STACK_ARG(n) MEM32(g_esp + 4 + (uint32_t)((n) * 4))

/* Ordinal 0x00A6 (166): MmAllocateContiguousMemoryEx
 *   5 args: size, low_addr, high_addr, alignment, protect */
static void stub_MmAllocateContiguousMemoryEx(void) {
    uint32_t size  = STACK_ARG(0);
    uint32_t align = STACK_ARG(3);
    if (align < 4096) align = 4096;
    uint32_t va = xbox_heap_alloc(size, align);
    static int calls = 0;
    if (calls++ < 5)
        fprintf(stderr, "  [KERN] MmAllocContigMemEx(%u, align=%u) -> 0x%08X\n",
                size, align, va);
    g_eax = va;
}

/* Ordinal 165: MmAllocateContiguousMemory(size). */
static void stub_MmAllocateContiguousMemory(void) {
    g_eax = xbox_heap_alloc(STACK_ARG(0), 4096);
}

/* Ordinal 16: ExAllocatePoolWithTag
 *   2 args: size, tag */
static void stub_ExAllocatePoolWithTag(void) {
    uint32_t size = STACK_ARG(0);
    uint32_t tag  = STACK_ARG(1);
    uint32_t va = xbox_heap_alloc(size, 16);
    static int calls = 0;
    if (calls++ < 10)
        fprintf(stderr, "  [KERN] ExAllocPool(%u, tag='%c%c%c%c') -> 0x%08X\n",
                size,
                (char)(tag & 0xFF), (char)((tag >> 8) & 0xFF),
                (char)((tag >> 16) & 0xFF), (char)((tag >> 24) & 0xFF), va);
    g_eax = va;
}

/* MmFreeContiguousMemory (ordinal 171). The bump heap has no per-block free.
 * One argument: pointer. */
static void stub_ExFreePool(void) {
    uint32_t va = STACK_ARG(0);
    xbox_heap_free(va);
    g_eax = 0;  /* void return */
}

/* Ordinal 15: ExAllocatePool
 *   1-2 args: size[, tag].  Allocates from pool, returns Xbox VA. */
static void stub_ExAllocatePool(void) {
    uint32_t size = STACK_ARG(0);
    uint32_t va = xbox_heap_alloc(size, 16);
    static int calls = 0;
    if (calls++ < 5)
        fprintf(stderr, "  [KERN] ExAllocPool(%u) -> 0x%08X\n", size, va);
    g_eax = va;
}

/* Ordinal 24: ExQueryPoolBlockSize. We do not yet retain allocation
 * metadata, so report zero instead of reading arbitrary memory. */
static void stub_ExQueryPoolBlockSize(void) {
    (void)STACK_ARG(0);
    g_eax = 0;
}

/* Ordinal 197: NtDuplicateObject(SourceHandle, TargetHandle*, Options). */
static void stub_NtDuplicateObject(void) {
    uint32_t source = STACK_ARG(0);
    uint32_t target_va = STACK_ARG(1);
    if (target_va)
        MEM32(target_va) = source;
    g_eax = 0;
}

/* NtCreateEvent(PHANDLE, POBJECT_ATTRIBUTES, Type, InitialState). */
static void stub_NtCreateEvent(void) {
    uint32_t handle_va = STACK_ARG(0);
    uint32_t handle = s_fake_handle_next++;
    if (xbox_va_writable(handle_va, 4)) MEM32(handle_va) = handle;
    g_eax = 0;
}

/* sub_00156400 already runs on the host regression thread. Any thread made
 * after that point is a worker and cannot run synchronously through the
 * process-global recompiled register file without corrupting its caller. */
static void stub_PsCreateSystemThreadEx(void) {
    uint32_t handle_va = STACK_ARG(0);
    uint32_t thread_id_va = STACK_ARG(4);
    uint32_t context1 = STACK_ARG(5);
    uint32_t context2 = STACK_ARG(6);
    uint32_t start_routine = STACK_ARG(9);
    uint32_t handle = s_fake_handle_next++;
    static uint32_t thread_id = 1;
    if (xbox_va_writable(handle_va, 4)) MEM32(handle_va) = handle;
    if (xbox_va_writable(thread_id_va, 4)) MEM32(thread_id_va) = thread_id++;
    fprintf(stderr,
            "  [KERN] PsCreateSystemThreadEx: deferred worker=0x%08X "
            "ctx1=0x%08X ctx2=0x%08X handle=0x%08X\n",
            start_routine, context1, context2, handle);
    g_eax = 0;
}

/* ObReferenceObjectByHandle(HANDLE, ObjectType, Object**). */
static void stub_ObReferenceObjectByHandle(void) {
    uint32_t handle = STACK_ARG(0);
    uint32_t object_va = STACK_ARG(2);
    if (xbox_va_writable(object_va, 4)) MEM32(object_va) = handle;
    g_eax = 0;
}

static void stub_KeQueryBasePriorityThread(void) {
    (void)STACK_ARG(0);
    g_eax = 0;
}

static void stub_KeSetBasePriorityThread(void) {
    (void)STACK_ARG(0);
    (void)STACK_ARG(1);
    g_eax = 0;
}

/* Ordinal 289: RtlInitAnsiString(PANSI_STRING, const char *).
 * ANSI_STRING is { USHORT Length, USHORT MaximumLength, PCHAR Buffer }. */
static void stub_RtlInitAnsiString(void) {
    uint32_t string_va = STACK_ARG(0);
    uint32_t source_va = STACK_ARG(1);
    size_t length = 0;

    if (source_va && source_va < XBOX_TOTAL_RAM) {
        const char *source = (const char *)((uintptr_t)g_xbox_mem_offset + source_va);
        length = strnlen(source, 0xFFFFu);
    }
    if (string_va && string_va + 8 <= XBOX_TOTAL_RAM) {
        MEM16(string_va + 0) = (uint16_t)length;
        MEM16(string_va + 2) = (uint16_t)(source_va ? length + 1 : 0);
        MEM32(string_va + 4) = source_va;
    }
    g_eax = 0;
}

/* RTL critical sections only protect host-side work while the original XBE
 * boot is single-threaded. Initialising the guest structure and treating
 * enter/leave as successful keeps its state deterministic. */
static void stub_RtlInitializeCriticalSection(void) {
    uint32_t critical_section_va = STACK_ARG(0);
    if (critical_section_va && critical_section_va + 24 <= XBOX_TOTAL_RAM)
        memset((uint8_t *)g_xbox_mem_offset + critical_section_va, 0, 24);
    g_eax = 0;
}

static void stub_RtlCriticalSectionNoop(void) {
    (void)STACK_ARG(0);
    g_eax = 0;
}

static host_file_entry *host_file_find(uint32_t handle) {
    for (int i = 0; i < HOST_FILE_MAX; i++)
        if (s_host_files[i].file && s_host_files[i].handle == handle)
            return &s_host_files[i];
    return NULL;
}

static host_file_entry *host_file_claim(FILE *file, const char *path) {
    for (int i = 0; i < HOST_FILE_MAX; i++) {
        if (!s_host_files[i].file) {
            s_host_files[i].handle = s_host_file_next++;
            s_host_files[i].file = file;
            snprintf(s_host_files[i].path, sizeof(s_host_files[i].path),
                     "%s", path ? path : "");
            return &s_host_files[i];
        }
    }
    return NULL;
}

static const char *guest_object_name(uint32_t object_attributes_va) {
    if (!xbox_va_writable(object_attributes_va, 12)) return NULL;
    uint32_t ansi_va = MEM32(object_attributes_va + 4u);
    if (!xbox_va_writable(ansi_va, 8)) return NULL;
    uint32_t buffer_va = MEM32(ansi_va + 4u);
    if (!buffer_va || buffer_va >= XBOX_TOTAL_RAM) return NULL;
    return (const char *)((uintptr_t)g_xbox_mem_offset + buffer_va);
}

static bool host_path_from_xbox(const char *xbox_path, char *host_path,
                                size_t host_path_size) {
    if (!xbox_path || !*xbox_path || !host_path || host_path_size == 0)
        return false;

    char relative[1024];
    size_t n = strnlen(xbox_path, sizeof(relative) - 1u);
    if (n == sizeof(relative) - 1u) return false;
    memcpy(relative, xbox_path, n);
    relative[n] = '\0';
    for (size_t i = 0; i < n; i++)
        if (relative[i] == '\\') relative[i] = '/';

    const char *root = s_game_dir;
    char *path = relative;
    if ((path[0] == 'D' || path[0] == 'd') && path[1] == ':') {
        path += 2;
    } else if ((path[0] == 'T' || path[0] == 't' ||
                path[0] == 'U' || path[0] == 'u' ||
                path[0] == 'E' || path[0] == 'e') && path[1] == ':') {
        root = s_save_dir[0] ? s_save_dir : s_game_dir;
        path += 2;
    } else if (strncmp(path, "/Device/CdRom0/", 15) == 0) {
        path += 15;
    } else if (strncmp(path, "/Device/Harddisk0/Partition1/", 29) == 0) {
        root = s_save_dir[0] ? s_save_dir : s_game_dir;
        path += 29;
    }
    while (*path == '/') path++;
    if (strstr(path, "../") || strcmp(path, "..") == 0) return false;

    int written = snprintf(host_path, host_path_size, "%s/%s", root, path);
    return written > 0 && (size_t)written < host_path_size;
}

/* Xbox DVD paths are case-insensitive. Extracted game data lives on a
 * case-sensitive host filesystem (including Android), so resolve each path
 * component against the spelling that is actually present on disk. */
static bool host_resolve_case_path(const char *requested, char *resolved,
                                   size_t resolved_size) {
    if (!requested || !*requested || resolved_size < 2u) return false;
    const bool absolute = requested[0] == '/';
    snprintf(resolved, resolved_size, "%s", absolute ? "/" : ".");

    const char *cursor = requested + (absolute ? 1 : 0);
    if (!absolute && cursor[0] == '.' && cursor[1] == '/') cursor += 2;
    while (*cursor) {
        while (*cursor == '/') cursor++;
        if (!*cursor) break;
        const char *end = strchr(cursor, '/');
        size_t component_len = end ? (size_t)(end - cursor) : strlen(cursor);
        if (!component_len || component_len >= 256u) return false;

        char component[256];
        memcpy(component, cursor, component_len);
        component[component_len] = '\0';

        DIR *directory = opendir(resolved);
        if (directory) {
            struct dirent *item;
            while ((item = readdir(directory)) != NULL) {
                if (strcasecmp(item->d_name, component) == 0) {
                    snprintf(component, sizeof(component), "%s", item->d_name);
                    break;
                }
            }
            closedir(directory);
        }

        size_t used = strlen(resolved);
        int written = snprintf(resolved + used, resolved_size - used,
                               "%s%s", strcmp(resolved, "/") != 0 ? "/" : "",
                               component);
        if (written < 0 || (size_t)written >= resolved_size - used)
            return false;
        cursor = end ? end + 1 : cursor + component_len;
    }
    return true;
}

static host_file_entry *host_open_xbox_path(const char *guest_path,
                                            uint32_t desired_access,
                                            uint32_t disposition) {
    char requested_path[2048];
    char host_path[2048];
    if (!host_path_from_xbox(guest_path, requested_path,
                             sizeof(requested_path)) ||
        !host_resolve_case_path(requested_path, host_path, sizeof(host_path)))
        return NULL;

    const bool write_access = (desired_access & 0x40000000u) != 0;
    FILE *file = NULL;
    if (!write_access || disposition == 1u) {
        file = fopen(host_path, write_access ? "r+b" : "rb");
    } else if (disposition == 3u) { /* FILE_OPEN_IF */
        file = fopen(host_path, "r+b");
        if (!file) file = fopen(host_path, "w+b");
    } else {
        file = fopen(host_path, "w+b");
    }
    if (!file) {
        fprintf(stderr, "  [FILE] open failed '%s': %s\n",
                host_path, strerror(errno));
        return NULL;
    }

    host_file_entry *entry = host_file_claim(file, host_path);
    if (!entry) fclose(file);
    return entry;
}

static uint32_t host_open_guest_file(uint32_t handle_va, uint32_t desired_access,
                                     uint32_t object_attributes_va,
                                     uint32_t ios_va, uint32_t disposition) {
    const char *guest_path = guest_object_name(object_attributes_va);
    host_file_entry *entry = host_open_xbox_path(guest_path, desired_access,
                                                 disposition);
    if (!entry)
        return 0xC0000034u;
    if (xbox_va_writable(handle_va, 4)) MEM32(handle_va) = entry->handle;
    if (xbox_va_writable(ios_va, 8)) {
        MEM32(ios_va) = 0;
        MEM32(ios_va + 4u) = 1u;
    }
    fprintf(stderr, "  [FILE] open 0x%08X '%s'\n", entry->handle, entry->path);
    return 0;
}

/* Ordinal 0x00BB (187): NtClose — 1 arg: handle
 * Closes an object handle. Returns STATUS_SUCCESS. */
static void stub_NtClose(void) {
    uint32_t handle = STACK_ARG(0);
    host_file_entry *entry = host_file_find(handle);
    if (entry) {
        fclose(entry->file);
        memset(entry, 0, sizeof(*entry));
    }
    g_eax = 0;  /* STATUS_SUCCESS */
}

/* NtCreateFile(PHANDLE, Access, ObjectAttributes, IoStatus, AllocationSize,
 * Attributes, Share, Disposition, Options). */
static void stub_NtCreateFile(void) {
    g_eax = host_open_guest_file(STACK_ARG(0), STACK_ARG(1), STACK_ARG(2),
                                 STACK_ARG(3), STACK_ARG(7));
}

static void stub_NtReadFile(void) {
    uint32_t handle = STACK_ARG(0);
    uint32_t ios_va = STACK_ARG(4);
    uint32_t buffer_va = STACK_ARG(5);
    uint32_t length = STACK_ARG(6);
    uint32_t offset_va = STACK_ARG(7);
    host_file_entry *entry = host_file_find(handle);
    if (!entry || !xbox_va_writable(buffer_va, length)) {
        g_eax = 0xC0000008u; /* STATUS_INVALID_HANDLE */
        return;
    }
    if (xbox_va_writable(offset_va, 8)) {
        uint64_t offset = (uint64_t)MEM32(offset_va) |
                          ((uint64_t)MEM32(offset_va + 4u) << 32);
        if (offset <= LONG_MAX) fseek(entry->file, (long)offset, SEEK_SET);
    }
    size_t read = fread((uint8_t *)g_xbox_mem_offset + buffer_va, 1,
                        length, entry->file);
    if (xbox_va_writable(ios_va, 8)) {
        MEM32(ios_va) = 0;
        MEM32(ios_va + 4u) = (uint32_t)read;
    }
    g_eax = (read == 0 && feof(entry->file)) ? 0xC0000011u : 0;
}

static void stub_NtWriteFile(void) {
    uint32_t handle = STACK_ARG(0);
    uint32_t ios_va = STACK_ARG(4);
    uint32_t buffer_va = STACK_ARG(5);
    uint32_t length = STACK_ARG(6);
    uint32_t offset_va = STACK_ARG(7);
    host_file_entry *entry = host_file_find(handle);
    if (!entry || !xbox_va_writable(buffer_va, length)) {
        g_eax = 0xC0000008u;
        return;
    }
    if (xbox_va_writable(offset_va, 8)) {
        uint64_t offset = (uint64_t)MEM32(offset_va) |
                          ((uint64_t)MEM32(offset_va + 4u) << 32);
        if (offset <= LONG_MAX) fseek(entry->file, (long)offset, SEEK_SET);
    }
    size_t written = fwrite((uint8_t *)g_xbox_mem_offset + buffer_va, 1,
                            length, entry->file);
    fflush(entry->file);
    if (xbox_va_writable(ios_va, 8)) {
        MEM32(ios_va) = written == length ? 0 : 0xC0000185u;
        MEM32(ios_va + 4u) = (uint32_t)written;
    }
    g_eax = written == length ? 0 : 0xC0000185u;
}

static void stub_NtSetInformationFile(void) {
    uint32_t handle = STACK_ARG(0);
    uint32_t ios_va = STACK_ARG(1);
    uint32_t info_va = STACK_ARG(2);
    uint32_t info_class = STACK_ARG(4);
    host_file_entry *entry = host_file_find(handle);
    if (!entry) { g_eax = 0xC0000008u; return; }
    if (info_class == 14u && xbox_va_writable(info_va, 8)) {
        uint64_t offset = (uint64_t)MEM32(info_va) |
                          ((uint64_t)MEM32(info_va + 4u) << 32);
        g_eax = (offset <= LONG_MAX &&
                 fseek(entry->file, (long)offset, SEEK_SET) == 0)
                    ? 0 : 0xC000000Du;
    } else if (info_class == 20u && xbox_va_writable(info_va, 8)) {
        uint64_t size = (uint64_t)MEM32(info_va) |
                        ((uint64_t)MEM32(info_va + 4u) << 32);
#ifndef _WIN32
        g_eax = (size <= LONG_MAX &&
                 ftruncate(fileno(entry->file), (off_t)size) == 0)
                    ? 0 : 0xC000000Du;
#else
        g_eax = 0xC00000BBu;
#endif
    } else {
        g_eax = 0xC00000BBu;
    }
    if (xbox_va_writable(ios_va, 8)) {
        MEM32(ios_va) = g_eax;
        MEM32(ios_va + 4u) = 0;
    }
}

/* Ordinal 0x00DA (218): NtQueryVolumeInformationFile — 5 args
 * Returns filesystem info. We report a virtual 4 GB Xbox partition. */
static void stub_NtQueryVolumeInformationFile(void) {
    uint32_t ios_va    = STACK_ARG(1);  /* PIO_STATUS_BLOCK */
    uint32_t info_va   = STACK_ARG(2);  /* output buffer */
    uint32_t infoclass = STACK_ARG(4);  /* FS_INFORMATION_CLASS */

    switch (infoclass) {
    case 3: { /* FileFsSizeInformation (24 bytes) */
        MEM32(info_va +  0) = 1048576;   /* TotalAllocationUnits.Lo */
        MEM32(info_va +  4) = 0;
        MEM32(info_va +  8) = 524288;    /* AvailableAllocationUnits.Lo */
        MEM32(info_va + 12) = 0;
        MEM32(info_va + 16) = 8;         /* SectorsPerAllocationUnit */
        MEM32(info_va + 20) = 512;       /* BytesPerSector */
        if (ios_va) {
            MEM32(ios_va + 0) = 0;       /* STATUS_SUCCESS */
            MEM32(ios_va + 4) = 24;      /* Information (bytes written) */
        }
        g_eax = 0;  /* STATUS_SUCCESS */
        break;
    }
    default:
        fprintf(stderr, "  [FILE] NtQueryVolumeInformationFile: unhandled class %u\n",
                infoclass);
        g_eax = 0xC00000BBu;  /* STATUS_NOT_SUPPORTED */
        break;
    }
}

/* Ordinal 0x00CA (202): NtOpenFile — 6 args
 * Opens an existing file. Returns a fake handle on success. */
static void stub_NtOpenFile(void) {
    g_eax = host_open_guest_file(STACK_ARG(0), STACK_ARG(1), STACK_ARG(2),
                                 STACK_ARG(3), 1u);
}

/* Ordinal 0x0021 (33): Unknown init function — 2 args?
 * Slot 11 in the thunk table. Zero-initialises the caller's memory
 * so garbage patterns (0x55555555 from MSVC debug fill) don't leak
 * into later allocations. */
static void stub_init_size_ptr(void) {
    uint32_t arg0 = STACK_ARG(0);
    uint32_t arg1 = STACK_ARG(1);
    /* Common pattern: init func takes a pointer and zeroes its struct.
     * If arg1 looks like a size (< 64KB), zero arg0 up to arg1 bytes.
     * Otherwise zero a fixed 256-byte block at arg0. */
    if (arg0 && arg0 >= 0x00010000u && arg0 < 0x03F00000u) {
        uint32_t len = (arg1 > 0 && arg1 < 65536) ? arg1 : 256;
        memset((uint8_t *)g_xbox_mem_offset + arg0, 0, len);
    }
    g_eax = arg0;  /* return the pointer (common init pattern) */
}

/* Ordinal 0x0026 (38): Unknown init function — likely KeInitializeEvent
 * Slot 47 in the thunk table. Same zero-init strategy. */
static void stub_init_event_like(void) {
    uint32_t arg0 = STACK_ARG(0);
    if (arg0 && arg0 >= 0x00010000u && arg0 < 0x03F00000u) {
        /* KeInitializeEvent writes 16-32 bytes. Be generous. */
        memset((uint8_t *)g_xbox_mem_offset + arg0, 0, 64);
        /* Write the event type at offset 0: 1 = NotificationEvent, 0 = SynchronizationEvent.
         * Most game events are SynchronizationEvent (auto-reset). */
        MEM32(arg0) = 0;  /* Type = SynchronizationEvent */
    }
    g_eax = arg0;
}

/* ── Kernel data init ────────────────────────────────────────
 * Initialises the Xbox kernel data exports at a reserved area near
 * the top of the 64 MB mapping.  These are DATA exports (not
 * function calls) — the game reads them through MEM32().
 *
 * Placed just below the synthetic VA region at 0x003F0000. */

#define KDATA_BASE 0x003EF000u  /* just below synthetic VAs, above heap */

#define KDATA_HARDWARE_INFO       0x000u
#define KDATA_KRNL_VERSION        0x010u
#define KDATA_TICK_COUNT          0x020u
#define KDATA_LAUNCH_DATA_PAGE    0x030u
#define KDATA_THREAD_OBJ_TYPE     0x040u
#define KDATA_EVENT_OBJ_TYPE      0x050u
#define KDATA_XE_IMAGE_FILENAME   0x060u
#define KDATA_IO_COMPLETION_TYPE  0x070u
#define KDATA_IO_DEVICE_TYPE      0x080u
#define KDATA_HD_KEY              0x100u
#define KDATA_SIGNATURE_KEY       0x110u
#define KDATA_LAN_KEY             0x120u
#define KDATA_ALT_SIGNATURE_KEYS  0x130u
#define KDATA_XE_PUBLIC_KEY       0x300u

static uint32_t kernel_data_va_for_ordinal(uint32_t ordinal) {
    switch (ordinal) {
    case  17: return KDATA_BASE + KDATA_EVENT_OBJ_TYPE;
    case  65: return KDATA_BASE + KDATA_IO_COMPLETION_TYPE;
    case  71: return KDATA_BASE + KDATA_IO_DEVICE_TYPE;
    case 156: return KDATA_BASE + KDATA_TICK_COUNT;
    case 164: return KDATA_BASE + KDATA_LAUNCH_DATA_PAGE;
    case 259: return KDATA_BASE + KDATA_THREAD_OBJ_TYPE;
    case 322: return KDATA_BASE + KDATA_HARDWARE_INFO;
    case 323: return KDATA_BASE + KDATA_HD_KEY;
    case 324: return KDATA_BASE + KDATA_KRNL_VERSION;
    case 325: return KDATA_BASE + KDATA_SIGNATURE_KEY;
    case 326:
    case 355: return KDATA_BASE + KDATA_LAN_KEY;
    case 327:
    case 356: return KDATA_BASE + KDATA_ALT_SIGNATURE_KEYS;
    case 328: return KDATA_BASE + KDATA_XE_IMAGE_FILENAME;
    case 357: return KDATA_BASE + KDATA_XE_PUBLIC_KEY;
    default:  return 0;
    }
}

static void kernel_data_init(void) {
    memset((uint8_t *)g_xbox_mem_offset + KDATA_BASE, 0, 0x500);

    /* XboxHardwareInfo (ordinal 322): Flags=0 (retail), GPU=A1, MCP=B1 */
    MEM32(KDATA_BASE + KDATA_HARDWARE_INFO) = 0;
    MEM8(KDATA_BASE + KDATA_HARDWARE_INFO + 4) = 0xA1;
    MEM8(KDATA_BASE + KDATA_HARDWARE_INFO + 5) = 0xB1;

    /* XboxKrnlVersion (ordinal 324): Major=1, Minor=0, Build=5849, Qfe=0 */
    MEM16(KDATA_BASE + KDATA_KRNL_VERSION + 0) = 1;
    MEM16(KDATA_BASE + KDATA_KRNL_VERSION + 2) = 0;
    MEM16(KDATA_BASE + KDATA_KRNL_VERSION + 4) = 5849;
    MEM16(KDATA_BASE + KDATA_KRNL_VERSION + 6) = 0;

    /* KeTickCount (ordinal 156) — initialised to 1 so the game doesn't
     * think zero time has elapsed and skip init. */
    MEM32(KDATA_BASE + KDATA_TICK_COUNT) = 1;

    /* LaunchDataPage (ordinal 164) — NULL */
    MEM32(KDATA_BASE + KDATA_LAUNCH_DATA_PAGE) = 0;

    fprintf(stderr, "kernel_shim: kernel data exports at VA 0x%08X\n", KDATA_BASE);
}

/* ── Per-slot dispatch table ───────────────────────────────── */

typedef void (*recomp_func_t)(void);

static int kernel_arg_bytes(uint32_t ordinal) {
    switch (ordinal) {
    case 1: case 8: case 23: case 42: case 126: case 127: case 129:
    case 160: case 161: case 238: case 250: case 358: case 360:
        return 0;
    case 4: case 15: case 24: case 40: case 49: case 69: case 97:
    case 99: case 100: case 124: case 128: case 137: case 139: case 142:
    case 151: case 165: case 171: case 173: case 179: case 180: case 181:
    case 187: case 195: case 258: case 277: case 291: case 294: case 301:
    case 302: case 345: case 359:
        return 4;
    case 16: case 41: case 44: case 46: case 83: case 113: case 143:
    case 168: case 169: case 170: case 176: case 198: case 203: case 210:
    case 225: case 228: case 253: case 289: case 304: case 305: case 339:
    case 353:
        return 8;
    case 74: case 84: case 107: case 119: case 145: case 153: case 175:
    case 177: case 178: case 182: case 197: case 215: case 222: case 234:
    case 246: case 256: case 260: case 269: case 279: case 308: case 335:
    case 336: case 338: case 340: case 344: case 346: case 349: case 354:
        return 12;
    case 2: case 85: case 149: case 189: case 193: case 217: case 312:
        return 16;
    case 86: case 98: case 150: case 159: case 166: case 184: case 211:
    case 218: case 226: case 247: case 347:
        return 20;
    case 3: case 47:
        return 24;
    case 109:
        return 28;
    case 62: case 190: case 207:
        return 36;
    case 158: case 219: case 236:
        return 32;
    case 67: case 196: case 200: case 255:
        return 40;
    default:
        return 0;
    }
}

static recomp_func_t kernel_stub_for_ordinal(uint32_t ordinal) {
    switch (ordinal) {
    case 15:  return stub_ExAllocatePool;
    case 16:  return stub_ExAllocatePoolWithTag;
    case 24:  return stub_ExQueryPoolBlockSize;
    case 165: return stub_MmAllocateContiguousMemory;
    case 166: return stub_MmAllocateContiguousMemoryEx;
    case 171: return stub_ExFreePool;
    case 187: return stub_NtClose;
    case 189: return stub_NtCreateEvent;
    case 190: return stub_NtCreateFile;
    case 197: return stub_NtDuplicateObject;
    case 202: return stub_NtOpenFile;
    case 218: return stub_NtQueryVolumeInformationFile;
    case 219: return stub_NtReadFile;
    case 226: return stub_NtSetInformationFile;
    case 236: return stub_NtWriteFile;
    case 124: return stub_KeQueryBasePriorityThread;
    case 143: return stub_KeSetBasePriorityThread;
    case 246: return stub_ObReferenceObjectByHandle;
    case 255: return stub_PsCreateSystemThreadEx;
    case 277:
    case 294: return stub_RtlCriticalSectionNoop;
    case 289: return stub_RtlInitAnsiString;
    case 291: return stub_RtlInitializeCriticalSection;
    default:  return NULL;
    }
}

static void kernel_thunk_dispatch(void) {
    int slot = s_kernel_dispatch_slot;
    uint32_t ordinal;
    recomp_func_t stub;
    static unsigned call_count = 0;
    static bool warned[KERNEL_THUNK_COUNT];

    if (slot < 0 || slot >= (int)KERNEL_THUNK_COUNT) {
        g_eax = 0;
        g_esp += 4;
        return;
    }

    ordinal = s_kernel_ordinals[slot];
    stub = kernel_stub_for_ordinal(ordinal);
    call_count++;

    if (call_count <= 80) {
        fprintf(stderr, "  [KERN] #%u ordinal %u slot %d esp=0x%08X%s\n",
                call_count, ordinal, slot, g_esp, stub ? "" : " (stubbed)");
    } else if (!stub && !warned[slot]) {
        warned[slot] = true;
        fprintf(stderr, "  [KERN] ordinal %u slot %d is a value-only stub\n",
                ordinal, slot);
    }

    /* STACK_ARG is relative to the dummy return address, so invoke the
     * implementation before emulating RET N. */
    if (stub)
        stub();
    else
        g_eax = 0;

    g_esp += 4u + (uint32_t)kernel_arg_bytes(ordinal);
}

recomp_func_t recomp_lookup_kernel(uint32_t xbox_va) {
    if (xbox_va < KERNEL_SYNTH_BASE || xbox_va >= KERNEL_SYNTH_END)
        return NULL;

    int slot = (int)((xbox_va - KERNEL_SYNTH_BASE) / 4);

    /* Log each slot once. */
    static uint32_t seen[32];
    static int nseen = 0;
    int i;
    for (i = 0; i < nseen; i++)
        if (seen[i] == (uint32_t)slot) break;
    if (i == nseen && nseen < 32) {
        seen[nseen++] = (uint32_t)slot;
        fprintf(stderr, "kernel_shim: kernel call slot %d (VA=%08X)\n",
                slot, xbox_va);
    }

    s_kernel_dispatch_slot = slot;
    return kernel_thunk_dispatch;
}

/* ═══════════════════════════════════════════════════════════════
 *  Path translation
 * ═══════════════════════════════════════════════════════════════ */

void xbox_path_init(const char *game_dir, const char *save_dir) {
    if (game_dir) {
        strncpy(s_game_dir, game_dir, sizeof(s_game_dir) - 1);
    }
    if (save_dir) {
        strncpy(s_save_dir, save_dir, sizeof(s_save_dir) - 1);
    }
    fprintf(stderr, "kernel_shim: path init — game=%s save=%s\n",
            s_game_dir, s_save_dir);
}

const char *xbox_get_game_dir(void) {
    return s_game_dir;
}

/* Cooperative implementation of the retail async file worker. The original
 * worker owns five 0x160-byte slots at 0x003F9040. Recompiled registers are
 * still shared by the main XBE thread, so host I/O is serviced between frames
 * while preserving the slot state and completion fields the XBE polls. */
void burnout3_kernel_service_resource_worker(void) {
    const uint32_t worker = 0x003F9040u;
    uint32_t count = MEM32(worker + 0x0Cu);
    uint32_t slots = MEM32(worker + 0x1Cu);
    if (!slots || count > 256u || !xbox_va_writable(slots, count * 0x160u))
        return;

    for (uint32_t i = 0; i < count; i++) {
        uint32_t slot = slots + i * 0x160u;
        uint32_t state = MEM32(slot + 0x140u);
        if (state == 1u) {
            const char *guest_path = (const char *)((uintptr_t)g_xbox_mem_offset +
                                                    slot + 0x38u);
            host_file_entry *opened = host_open_xbox_path(guest_path,
                                                          0x80000000u, 1u);
            if (!opened) {
                MEM32(slot + 0x140u) = 0;
                MEM32(slot + 0x20u) = 0;
                fprintf(stderr, "  [FILE] worker slot %u cannot open '%.*s'\n",
                        i, 260, guest_path);
                continue;
            }
            MEM32(slot + 0x30u) = opened->handle;
            MEM32(slot + 0x10u) = 0;
            MEM32(slot + 0x14u) = 0;
            MEM32(slot + 0x140u) = 0;
            MEM32(slot + 0x20u) = 1u;
            fprintf(stderr, "  [FILE] worker slot %u opened 0x%08X '%s'\n",
                    i, opened->handle, opened->path);
            continue;
        }
        if (state != 2u) continue;

        host_file_entry *entry = host_file_find(MEM32(slot + 0x30u));
        uint32_t remaining = MEM32(slot + 0x38u);
        uint32_t destination = MEM32(slot + 0x3Cu);
        if (!entry) {
            static uint32_t warned_slot[256];
            if (warned_slot[i] != MEM32(slot + 0x30u) + 1u) {
                warned_slot[i] = MEM32(slot + 0x30u) + 1u;
                fprintf(stderr,
                        "  [FILE] worker slot %u waiting for source handle "
                        "0x%08X\n", i, MEM32(slot + 0x30u));
            }
            continue;
        }
        if (!remaining || destination >= XBOX_TOTAL_RAM) {
            MEM32(slot + 0x140u) = 0;
            MEM32(slot + 0x20u) = 3u;
            fprintf(stderr,
                    "  [FILE] worker slot %u failed: handle=0x%08X "
                    "remaining=%u destination=0x%08X\n",
                    i, MEM32(slot + 0x30u), remaining, destination);
            continue;
        }

        uint32_t chunk = remaining < 0x20000u ? remaining : 0x20000u;
        if (!xbox_va_writable(destination, chunk)) {
            MEM32(slot + 0x140u) = 0;
            MEM32(slot + 0x20u) = 3u;
            continue;
        }
        size_t got = fread((uint8_t *)g_xbox_mem_offset + destination,
                           1, chunk, entry->file);
        uint64_t position = (uint64_t)MEM32(slot + 0x18u) |
                            ((uint64_t)MEM32(slot + 0x1Cu) << 32);
        position += got;
        MEM32(slot + 0x18u) = (uint32_t)position;
        MEM32(slot + 0x1Cu) = (uint32_t)(position >> 32);
        MEM32(slot + 0x38u) = remaining - (uint32_t)got;
        MEM32(slot + 0x3Cu) = destination + (uint32_t)got;

        if (got < chunk || got == remaining) {
            MEM32(slot + 0x140u) = 0;
            MEM32(slot + 0x20u) = 1u;
            fprintf(stderr,
                    "  [FILE] worker slot %u complete: '%s' (%llu bytes)\n",
                    i, entry->path, (unsigned long long)position);
        }
    }
}

/* ═══════════════════════════════════════════════════════════════
 *  Game loop globals (always available for the bridge)
 * ═══════════════════════════════════════════════════════════════ */

int  g_game_ready        = 0;   // Set to 1 by burnout3_init() after the boot pump
int  g_backbuffer_width   = 640;
int  g_backbuffer_height  = 480;
uint8_t *g_host_backbuffer = NULL;

// Xbox input state globals (referenced by bridge input injection)
uint16_t g_xinput_buttons       = 0;
/* One-shot activity edge for retail frontend code.  Key-up can arrive on the
 * SDL thread before the XBE's next controller-activity query, so this is kept
 * separately from the live XInput state and consumed by sub_00017790. */
volatile uint32_t g_xinput_activity_latched = 0;
volatile uint32_t g_b3_movie_finished_latched = 0;
int16_t  g_xinput_thumb_lx      = 0;
int16_t  g_xinput_thumb_ly      = 0;
uint8_t  g_xinput_left_trigger  = 0;
uint8_t  g_xinput_right_trigger = 0;

// game_frame_pump() is now in burnout3_game_frame_pump.c.
// The native Linux implementation replaces the Windows version
// from Burnout3Recomp/src/game/main.c.
