# Xbox Memory Layout Reproduction

> How we faithfully reproduce the Xbox's 64 MB unified memory space on Windows 11

## The Problem

Xbox games expect memory at specific virtual addresses. The Xbox has 64 MB of unified RAM starting at physical address 0, mapped at virtual address 0x00010000 (after the XBE header). The game code contains thousands of hardcoded memory addresses — globals, vtable pointers, stack addresses — all assuming this Xbox memory layout.

On Windows, we can't just `malloc()` 64 MB and hope it lands at the right address. We need *exact* address placement.

## The Solution: CreateFileMapping + MapViewOfFileEx

We create a **shared memory object** (`CreateFileMapping`) and then map **28 views** of it at specific addresses using `MapViewOfFileEx`:

```c
// Create 64 MB shared memory object
HANDLE hMapping = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, 64*1024*1024, NULL);

// Map views at Xbox virtual addresses
MapViewOfFileEx(hMapping, FILE_MAP_ALL_ACCESS, 0, 0, size, target_address);
```

### Why File Mapping Instead of VirtualAlloc?

The Xbox has **mirror regions** — the same physical memory accessible at multiple virtual addresses (e.g., 0x80000000+ is an uncached mirror of the main RAM). `VirtualAlloc` would give us separate copies; `CreateFileMapping` gives us **true aliases** where a write at address A is immediately visible at address B.

## Memory Map

| Region | Xbox VA | Size | Purpose |
|--------|---------|------|---------|
| XBE Header | 0x00010000 | 3 KB | XBE file header |
| .text | 0x00011000 | 2.73 MB | Game code (for memory walker only) |
| .rdata | 0x0036B7C0 | 282 KB | Read-only data, kernel thunks |
| .data | 0x003B2360 | 3.72 MB | Global variables + BSS |
| TLS | 0x00760000 | varies | Thread-local storage |
| Stack | 0x00780000 | 8 MB | Xbox stack (ESP = 0x00F7FFF0) |
| Heap | 0x00F80000 | 48 MB | Xbox heap (bump allocator) |
| Kernel | 0x80010000 | 4 KB | Fake PE header for kernel |
| NV2A | 0xFD000000+ | on-demand | GPU registers (stubbed) |
| Kernel thunks | 0xFE000000+ | varies | Synthetic kernel function pointers |

## Mirror Views

28 mirror views are mapped to cover different address ranges. 27 of 28 succeed — the ones around 0x76000000 fail because Windows has its own allocations there. This is fine because no game code accesses those mirrors.

## The Heap

Xbox games use `MmAllocateContiguousMemory` and similar kernel calls. We implement a simple bump allocator starting at 0x00F80000 with ~48 MB of space. This gives us Xbox-compatible virtual addresses without implementing a full memory manager.

## Gotchas

- `.rdata` is NOT write-protected — the game writes to it at runtime (text strings get corrupted). We work around this by reading strings from the original XBE data.
- Some BSS addresses (around 0x76000000) can't be mapped due to Windows address space conflicts. We rate-limit the error messages.
- The NV2A GPU register space (0xFD000000+) uses on-demand VirtualAlloc page mapping via VEH — pages are allocated only when first accessed.

## TODO

- [ ] Document the full list of mirror view addresses and which succeed/fail
- [ ] Document the VEH handler for on-demand NV2A page mapping
- [ ] Document the heap allocator implementation details
- [ ] Measure actual heap usage at runtime
