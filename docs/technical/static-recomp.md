# Static Recompilation: x86 → C

> Translating 22,097 Xbox functions from machine code to compilable C

## Overview

The recompiler (`tools/recomp/`) takes the raw x86 machine code from the Xbox executable and generates equivalent C code. Each x86 function becomes a C function that operates on a simulated register model.

## The Register Model

### Why Global Registers?

Xbox x86 has 8 general-purpose registers shared across all code. In the recompiled output, these become global variables:

```c
// Volatile (caller-saved) — any function can clobber these
uint32_t g_eax, g_ecx, g_edx, g_esp;

// Callee-saved — must be preserved across calls
uint32_t g_ebx, g_esi, g_edi;

// Per-function local (bridged via g_seh_ebp for SEH)
uint32_t ebp;  // local variable in each function
```

### The Stack

`g_esp` points into Xbox memory (starts at 0x00F7FFF0). PUSH/POP macros read/write through the memory mapping:

```c
#define PUSH32(val)  do { g_esp -= 4; MEM32(g_esp) = (val); } while(0)
#define POP32(var)   do { (var) = MEM32(g_esp); g_esp += 4; } while(0)
```

## Code Generation

### Instruction Translation Examples

```
x86:  mov eax, [ecx+0x10]
C:    g_eax = MEM32(g_ecx + 0x10);

x86:  add eax, ebx
C:    g_eax = g_eax + g_ebx;

x86:  push eax / call sub_12345 / add esp, 4
C:    PUSH32(g_eax); sub_00012345(); g_esp += 4;

x86:  cmp eax, 0 / jz label
C:    if (g_eax == 0) goto loc_XXXXX;
```

### Flags

The x86 FLAGS register is partially emulated. Comparison results are tracked for conditional jumps. Not all flags are emulated — only those actually tested by subsequent instructions.

## The RECOMP_ICALL Problem

The biggest challenge: **indirect calls**. When the game does `call [eax]` or `call [ecx+0x10]`, we don't know the target at compile time. The RECOMP_ICALL macro handles this:

```c
#define RECOMP_ICALL(target_va) do {            \
    void (*fn)(void) = dispatch_lookup(target_va); \
    if (fn) { fn(); }                              \
    else { g_esp += 4; /* pop dummy ret addr */ }  \
} while(0)
```

The dispatch lookup searches:
1. Manual override table (33+ hand-written functions)
2. Auto-generated dispatch table (22,097 entries)
3. Kernel bridge table (147 Xbox kernel functions)

### Stack Leak Fix

When an indirect call target isn't found, the caller has already pushed a return address. If we skip the call, that address stays on the stack forever. The `g_esp += 4` pops it to prevent stack growth over time.

## Function Detection

The disassembler finds function boundaries by:
- Following call targets
- Detecting function prologues (push ebp / mov ebp, esp)
- Jump table analysis for switch statements
- Cross-reference analysis (163,787 xrefs found)

## Challenges

### SEH (Structured Exception Handling)

Xbox code uses `__SEH_prolog` / `__SEH_epilog` which set up exception frames on the stack. We bridge this via `g_seh_ebp` — a global that the SEH prolog writes and calling functions read back.

### Switch Tables

x86 switch statements use jump tables in `.text`. When we regenerate code, these table addresses change. We hardcode the original XBE's jump table data for switch translation.

### fs: Segment Prefix

Xbox code accesses thread-local storage via `fs:[offset]`. The translator drops the segment prefix, so `mov eax, fs:[0x28]` becomes `g_eax = MEM32(0x28)`. We set up a fake TIB at address 0 to make these reads return sensible values.

## Code Size

- Input: 2.73 MB of x86 machine code (920K instructions)
- Output: 4.43 million lines of C across 23 files
- Compilation: ~65 seconds with MSVC (split into 23 translation units of ~1000 functions each)

## TODO

- [ ] Document the flag emulation strategy in detail
- [ ] Document FPU (x87) translation approach
- [ ] Document the jump table reconstruction algorithm
- [ ] Show performance comparison: original Xbox vs recompiled
- [ ] Document the function identification pass (RW, CRT, vtable classification)
