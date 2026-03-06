# Lessons Learned

> What worked, what didn't, and what we'd do differently

## Things That Worked Well

- **CreateFileMapping for memory layout**: True memory aliases are essential. VirtualAlloc copies would silently break everything.
- **Global register model**: Simple, correct, and the compiler optimizes it surprisingly well.
- **Bump allocator for Xbox heap**: Games don't free memory much; a simple allocator works fine.
- **ICALL dispatch table**: Binary search through 22K entries is fast enough at runtime.
- **Incremental approach**: Getting the game to boot first, then fixing one crash at a time.

## Things That Were Hard

- **Indirect calls with corrupted vtables**: The game has objects with garbage vtable pointers that the original code handles via SEH. Our recompiled code crashes instead. Required per-function guards.
- **Identifying the 11 statically-linked libraries**: CRT, RenderWare, D3D, DSOUND, etc. are all baked into one .text section. Pattern matching against known library signatures was essential.
- **D3D8 → D3D11 gap**: Xbox D3D8 is close to but not identical to PC D3D8. Fixed-function pipeline emulation via shaders requires understanding every render state.
- **Reverse engineering game file formats**: No documentation exists for Criterion's custom formats (BGV, streamed.dat, static.dat). Everything discovered through hex analysis and diagnostic scripts.

## Mistakes We Made

- **VEH DIV0 handler**: Initially handled division by zero in our Vectored Exception Handler, but this interfered with SEH recovery in recompiled code. Don't handle DIV0 in VEH.
- **VirtualAlloc mirror copies**: First attempt at memory mirrors used separate VirtualAlloc regions and memcpy. Writes in one region weren't visible in others. Wasted days debugging.
- **Procedural textures instead of game textures**: Spent time creating procedural road/building colors when we should have been loading the actual game textures from static.dat.
- **Edge cases in triangle strip conversion**: Index 0 appears as a draw call separator, creating giant spanning triangles. Took 3 diagnostic scripts to identify the root cause.

## What We'd Do Differently

- Start with file format reverse engineering earlier (textures, geometry)
- Build a proper memory access tracing system from day 1
- Invest in better ICALL diagnostics (caller identification) sooner
- Consider per-function register allocation instead of global registers (potential perf win)

## Key Insights for Xbox Static Recomp

1. The Xbox's x86 architecture makes recompilation easier than MIPS/PPC (no endian swap, similar instruction set)
2. But x86's variable-length instructions and complex addressing modes make disassembly harder
3. The Xbox SDK libraries baked into every game are a blessing (consistent patterns) and curse (must handle them all)
4. Memory layout reproduction is THE critical foundation — get this right first
5. Indirect calls are the hardest 10% — everything else is mechanical translation
