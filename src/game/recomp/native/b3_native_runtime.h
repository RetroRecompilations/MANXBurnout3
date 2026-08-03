/**
 * Test-visible surface of the transformed game code's runtime.
 *
 * The XDK bindings record what the game asked for so tests can assert on
 * the sequence its own code produces. In the full MANX build the
 * same entry points are overridden with real calls into the Vulkan
 * presenter and audio output.
 */

#ifndef B3_NATIVE_RUNTIME_H
#define B3_NATIVE_RUNTIME_H

#include <stdint.h>

/* Arguments of the last call, decoded from the emulated stack. Asserting
 * on these is how the calling convention gets verified before anything is
 * wired to a GPU. */
typedef struct { uint32_t count, rects, flags, colour, stencil; float z; int valid; } b3_clear_args;
typedef struct { uint32_t state, matrix; int valid; } b3_xform_args;
extern b3_clear_args g_b3_clear;
extern b3_xform_args g_b3_xform;

/* Calls made through the XDK bindings, by the label in b3_native_runtime.c
 * (e.g. "D3DDevice_Clear"). */
void b3_call_reset(void);
/* Record a call from an overriding binding, so counts stay meaningful
 * when the recording stub is replaced by a real one. */
void b3_call_note(const char *label);
int  b3_call_count(const char *label);
int  b3_call_distinct(void);
void b3_call_dump(void);

/* Indirect-call targets the game requested. These are the vtable edges a
 * static call graph cannot see; they are discovered by running. */
void     b3_icall_reset(void);
int      b3_icall_distinct(void);
uint32_t b3_icall_at(int i);

#endif /* B3_NATIVE_RUNTIME_H */
