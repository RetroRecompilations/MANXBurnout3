# Transformed game code

Criterion's own functions, transformed from the XBE by `tools/recomp`, one
file per function (`f_0x<addr>.c`). This is the game's logic running
natively — not a reimplementation.

Two rules the build depends on, both learned the hard way:

**64-bit only.** `recomp_types.h` resolves Xbox addresses through
`xbox_ptr_resolve()`, which is written for a 64-bit host.

**The Xbox mapping must be 4 GB-aligned.** `xbox_ptr_resolve()` guesses
whether an address is already a native pointer by testing
`addr - (uint32_t)g_xbox_mem_offset` against the mapped size. For small
Xbox addresses that comparison succeeds by accident whenever the low 32
bits of the mapping are large, and the raw Xbox address is returned and
dereferenced. The guess is skipped entirely when those low bits are zero,
so map at a 4 GB boundary.

Which addresses are game code and which are XDK library comes from
`XbSymbolDatabase`; XDK entries must be bound to host services, never
transformed.
