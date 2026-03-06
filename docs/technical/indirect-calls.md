# Indirect Call Dispatch

> Handling the thousands of virtual method calls and function pointers in recompiled code

## TODO — Document:

- RECOMP_ICALL macro implementation
- 3-tier dispatch: manual overrides → auto dispatch table → kernel bridge
- Vtable guard patterns for corrupted object pointers
- Garbage ICALL detection (VA range check: [0x00400000, 0xFE000000) = skip)
- Per-function vtable guards in sub_0017D790, sub_001B4170, sub_001B41F0, sub_001AEE20
- ICALL ring buffer diagnostics
- Stack leak fix (pop dummy return address on failed dispatch)
- Performance: ICALL rate dropped from 180/2s → 121/2s after centralized early-out
