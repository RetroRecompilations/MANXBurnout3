/**
 * Host environment for the transformed game code.
 *
 * Maps the Xbox address space and loads the XBE's sections into it, so
 * Criterion's own functions can run against the memory layout they were
 * compiled for. Kept separate from the MANX kernel shim so it can
 * be unit tested on its own — both of the bugs that stopped the render
 * path running were in exactly this setup, not in the game code.
 */

#ifndef B3_NATIVE_ENV_H
#define B3_NATIVE_ENV_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Map the Xbox space and load `xbe_path` into it. Returns 0 on success.
 * Sets g_xbox_mem_offset. Safe to call once per process. */
int  b3_env_init(const char *xbe_path);
void b3_env_shutdown(void);

/* Host pointer for an Xbox virtual address, or NULL when unmapped. */
void *b3_env_ptr(uint32_t va);

/* Where the mapping landed, and how big it is. */
uintptr_t b3_env_base(void);
size_t    b3_env_size(void);

/* Number of XBE sections loaded by the last b3_env_init(). */
int b3_env_section_count(void);

#ifdef __cplusplus
}
#endif

#endif /* B3_NATIVE_ENV_H */
