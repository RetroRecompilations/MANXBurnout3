# Xbox Kernel Replacement

> Replacing 147 Xbox kernel imports with Windows equivalents

## TODO — Document:

- Kernel thunk bridge architecture (ordinal → function pointer table)
- Synthetic VA range (0xFE000000-0xFE000248) for kernel function pointers
- Categories of kernel imports:
  - Memory management (MmAllocateContiguousMemory, etc.)
  - File I/O (NtCreateFile, NtReadFile, etc.)
  - Threading (KeCreateThread, etc.) → single-threaded model
  - Synchronization (critical sections → no-op for single thread)
  - Graphics (D3D device creation, push buffer)
  - Input (XInputGetState, XGetDevices)
  - Audio (DirectSound buffer creation)
- Implementation breakdown: 68 bridged, 79 stubbed
- File I/O override: how game files are loaded from disk into Xbox memory
- Resource load queue handler (sub_00011240): ring buffer, name resolution from .rdata
