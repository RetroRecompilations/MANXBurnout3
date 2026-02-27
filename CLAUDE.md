# Burnout 3: Takedown - Static Recompilation Project

## Project Overview
Static recompilation of Xbox Burnout 3: Takedown (2004) for Windows 11.
The goal is to translate the original x86 Xbox code into a native Windows executable.

## Key Facts
- **XBE**: `default.xbe` is a retail Xbox executable, XDK 5849, base address 0x00010000
- **Entry Point**: 0x001D2807 (retail, XOR-decoded with 0xA8FC57AB)
- **Engine**: Criterion's custom RenderWare fork (~3.7), statically linked
- **Code Size**: 2.73 MB in .text section (game + CRT + RW engine)
- **Kernel Imports**: 147 Xbox kernel functions to replace with Win32
- **Libraries**: 11 statically linked XDK libs (D3D8LTCG, DSOUND, XMV, XONLINE, etc.)

## Repository Structure
- `docs/` - Detailed analysis and documentation
- `tools/xbe_parser/` - XBE file parser (Python)
- `tools/disasm/` - Disassembly tools (planned)
- `tools/asset_tools/` - Asset conversion (planned)
- `src/kernel/` - Xbox kernel replacement layer (Win32)
- `src/d3d/` - D3D8→D3D11 graphics abstraction
- `src/audio/` - Audio system (DSOUND→XAudio2)
- `src/input/` - Input system (XPP→XInput)
- `src/game/` - Decompiled game code

## Git/GitHub
- Remote: https://github.com/sp00nznet/burnout3.git
- Game assets (`Burnout 3 Takedown/`) are gitignored (large binary files)
- All toolchain code and documentation IS committed

## Conventions
- Python tools use Python 3.10+
- C/C++ code targets MSVC (Visual Studio 2022) or MinGW-w64
- Addresses are always shown as hex with 0x prefix (e.g., 0x001D2807)
- Xbox kernel function names use their original Xbox names with `xbox_` prefix when reimplemented

## Current Work State (Session 17)

### Status: Physics force computation FIXED
Game boots, loads, runs gameplay loop in state 4 with ~18 ticks/sec. Car velocity now responds to input via overridden sub_000636D0. Two issues were resolved:

1. **Physics body pointer was NULL**: MEM32(esi+0x1B4)=0 because game's physics world init doesn't run. Fixed by allocating fake physics body at Xbox address 0x5FFF00.
2. **Scale factors were garbage**: Memory values at 0x557870/0x3B1C40/0x5592C8/0x3B1C38 contained denormalized floats (~2e-6), making forces effectively zero. Fixed by using hardcoded sensible scales (0.001 sensitivity, 1.0 multiplier).

### Verified Working
- Keyboard W/A/S/D → throttle/steering accumulators → sub_000636D0 → velocity at 0x5FFF00+8/0xC
- force = raw_input * 0.001 * 1.0 (e.g., W key: 255 * 0.001 = 0.255 units/tick)
- Window title displays live velocity from fake physics body
- Boost state machine preserved (currently in state 6, boost flag active)

### Next Steps
1. Verify with interactive keyboard/gamepad input (press W to see velocity change)
2. Investigate position integration: does velocity at 0x5FFF00 actually move the car entity?
3. The game's position update code needs to read from MEM32(esi+0x1B4) → our fake body
4. Consider hooking the position update to display car movement on screen
5. Long-term: fix the real physics world initialization so the proper physics body is created

### Key Input Addresses
- Accumulators: 0x4D652C (throttle), 0x4D6530 (steering) - written by game_frame_pump()
- Physics vel: MEM32(0x5FFF00+8) (X), MEM32(0x5FFF00+0xC) (Y) - fake physics body
- Car object: 0x557880 (esi in sub_000636D0), +0x1B4 → velocity ptr (= 0x5FFF00)
- Boost: MEM8(0x4A4B90) flag, MEM32(0x557880+0x1E4) state (currently 6)
- Button events: 0x4A1C74-0x4A1C79 (processed by sub_00013F10)

### Gen File Patches (must re-apply after regen)
1. **recomp_0000.c**: extern g_tick_110e0_count, sub_000165F0 entry/ESP traces, sub_00015570 vtable guard, sub_0003D9E0 #if 0, **sub_000636D0 #if 0**, jump table→C switch (replace_all), state traces, exit path traces, case 3 traces
2. **recomp_0002.c**: #if 0 around sub_00135040, sub_00135240
3. **recomp_0003.c**: extern g_tick_110e0_count, flag clear, ESP+callee-saved save/restore, game loop traces
4. **recomp_0004.c**: #if 0 around sub_001CFDD0, sub_001BEFF0, sub_001C1670, sub_001C1740, sub_001C66F0
5. **recomp_0005.c**: #if 0 around 35 functions
6. **recomp_0006.c**: #if 0 around sub_001FE1E0, sub_00221F20
7. **recomp_0007.c**: #if 0 around sub_00244C51, sub_00249B7C, sub_00249B9C
8. **recomp_0022.c**: #if 0 around sub_00351770, sub_003518E0, sub_0034D530
9. **recomp_stubs.c**: #if 0 around sub_00351A20
10. **recomp_dispatch.c**: add sub_001D1818/sub_001D2793 entries, size=22097
11. **recomp_funcs.h**: add sub_001D1818/sub_001D2793 declarations

### Manual Function Overrides (recomp_manual.c) - 31 functions
Including sub_000636D0 (physics force with scale fallbacks + fake body), sub_0003D9E0 (render orchestrator stub), sub_000110E0 (frame pump with MEM8(0x4D53BE)=1 signal)
