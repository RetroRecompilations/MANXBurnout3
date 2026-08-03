/**
 * Host environment for the transformed game code (see b3_native_env.h).
 */

#include "b3_native_env.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

/* Owned by MANX's kernel shim in the full build. Defined weakly
 * here so this library and its tests link standalone; the shim's strong
 * definition wins when both are present. */
__attribute__((weak)) ptrdiff_t g_xbox_mem_offset = 0;

/* The whole 32-bit space. Anonymous and lazily faulted, so it costs
 * nothing resident, and it means no pointer the game forms can land
 * outside the mapping — which matters while parts of its object graph
 * are still null. */
#define B3_MAP_SIZE  0x100000000ull

/* 4 GB-aligned, and that alignment is load bearing. xbox_ptr_resolve()
 * decides whether an address is already a native pointer by testing
 * (addr - (uint32_t)g_xbox_mem_offset) against the mapped size. For a
 * small Xbox address that subtraction wraps, and whenever the low 32 bits
 * of the mapping are large the wrapped value lands inside the range, so
 * the raw Xbox address is returned and dereferenced. The check is skipped
 * when the low 32 bits are zero. b3_env_alignment_is_safe() pins this. */
#define B3_MAP_BASE  0x200000000ull

static void  *s_mem = NULL;
static int    s_sections = 0;

int b3_env_init(const char *xbe_path)
{
    if (s_mem) return 0;

    FILE *f = fopen(xbe_path, "rb");
    if (!f) return -1;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz < 0x400) { fclose(f); return -1; }
    unsigned char *d = (unsigned char *)malloc((size_t)sz);
    if (!d) { fclose(f); return -1; }
    if (fread(d, 1, (size_t)sz, f) != (size_t)sz) { free(d); fclose(f); return -1; }
    fclose(f);

    void *mem = mmap((void *)B3_MAP_BASE, B3_MAP_SIZE, PROT_READ | PROT_WRITE,
                     MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (mem == MAP_FAILED) { free(d); return -1; }
    if (((uintptr_t)mem & 0xFFFFFFFFu) != 0) {          /* see the note above */
        munmap(mem, B3_MAP_SIZE);
        free(d);
        return -1;
    }
    s_mem = mem;
    g_xbox_mem_offset = (ptrdiff_t)mem;

    const uint32_t base = *(uint32_t *)(d + 0x104);
    const uint32_t nsec = *(uint32_t *)(d + 0x11C);
    const uint32_t hdr  = *(uint32_t *)(d + 0x120) - base;
    s_sections = 0;
    for (uint32_t i = 0; i < nsec; i++) {
        const uint32_t *s = (const uint32_t *)(d + hdr + i * 0x38);
        const uint32_t va = s[1], raw = s[3], rsz = s[4];
        if ((unsigned long)raw + rsz > (unsigned long)sz) continue;
        memcpy((char *)mem + va, d + raw, rsz);
        s_sections++;
    }
    free(d);
    return 0;
}

void b3_env_shutdown(void)
{
    if (!s_mem) return;
    munmap(s_mem, B3_MAP_SIZE);
    s_mem = NULL;
    s_sections = 0;
    g_xbox_mem_offset = 0;
}

void *b3_env_ptr(uint32_t va)
{
    return s_mem ? (char *)s_mem + va : NULL;
}

uintptr_t b3_env_base(void)       { return (uintptr_t)s_mem; }
size_t    b3_env_size(void)       { return s_mem ? (size_t)B3_MAP_SIZE : 0; }
int       b3_env_section_count(void) { return s_sections; }
