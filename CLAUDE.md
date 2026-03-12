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

## Current Work State (Session 38)

### Status: Im2d rendering pipeline + game audio events working
Game boots, reaches state 5 (menus), renders debug HUD via im2d, plays audio on state transitions.
**Current blockers**: Frontend object vtable not initialized (camera obj at 0x4D4008 has zero render method), game's menu rendering code never called.

### Session 38 Changes
- **Im2d rendering pipeline WORKING**: RwIm2DRenderPrimitive (sub_001DE900) overridden
  - Routes pre-transformed 2D vertices through rw_bridge_im2d_render() → D3D8→D3D11
  - Driver entry 0x0F (sub_001DBDE0) also overridden as safety net
  - Auto BeginScene/EndScene management for im2d calls outside 3D render pass
  - Debug HUD overlay: top bar = game state color, bottom bar = pulsing im2d active indicator
- **Im2d callback table populated**: MEM32(0x7592CC) = 0x1E2930 (render triangle), 0x7592D0 = 0x1E2330 (render line)
- **VEH divide-by-zero handler**: Catches EXCEPTION_INT_DIVIDE_BY_ZERO, decodes x86-64 idiv instruction, sets EAX/EDX=0, skips past. Prevents SEH unwinding game loop.
- **Game audio events connected**: AWD sounds trigger on state machine transitions
  - State 7→4: "Zoom" sound, State 4→5: "MenuIn" sound, Boot: "GlobeHigh" chime
  - Audio played through APU software mixer (waveOut 48kHz)
- **recomp_0005.c**: `#if 0` around gen sub_001DBDE0, sub_001DE900

### Session 37 Changes
- **sub_001AA100 overridden** in recomp_manual.c: forces return 1 after 30 frames
  - Enables state 4→5 transition in outer state machine (sub_000165F0)
- **Frontend render path activated**: sub_000171A0 now fires every frame
  - Frontend obj at 0x4D4008, vtable at 0x1C45BA68 (native ptr, not Xbox VA)
- **recomp_0004.c**: `#if 0` around gen sub_001AA100

### Previous Status
Game boots, loads, runs gameplay loop. **Two rendering modes** toggled with V key:
1. **Pseudo-3D** (default): OutRun-style 2.5D rendering (unchanged from Session 21)
2. **True 3D** (V key): Full 3D world-space rendering with chase camera, time-of-day cycling, roadside scenery, tunnels, night stars, rain weather, and 3D vehicle models.

### RenderWare 3D Renderer
- **rw_renderer.c/h**: Full 3D scene renderer using D3D8→D3D11 layer
  - `RW_Camera`, `RW_Mesh`, `RW_Object`, `RW_Scene` data structures
  - Persistent GPU vertex/index buffers (no per-frame upload)
  - Chase camera: follows player car along heading with speed-adaptive distance
  - Procedural road: 80 segments with curve offsets, center dashes, edge lines
  - Ground plane: large grass quad following player position
  - Mountain backdrop: 24-peak ring of triangle silhouettes (time-of-day colored)
  - HUD: speed bar, boost bar, score/multiplier, "3D MODE" indicator
  - **Time-of-day** (NEW Session 24): 4-phase color cycling (dawn→day→sunset→night, 3000-unit period)
    - Sky gradient, ground plane, mountains, road all cycle colors
    - Road darkens at night, building windows light up
  - **Roadside objects** (NEW Session 24): 6 types placed along procedural road
    - Guard posts, trees (regular/tall), buildings (with night windows), road signs, billboards
    - Deterministic hash-based placement, 18-unit spacing, both sides of road
  - **Tunnel sections** (NEW Session 24): every 2000 units, 200 units long
    - Ceiling, walls, orange strip lights, curve-following segments
  - **Night stars** (NEW Session 24): 40 twinkling stars during night phase (cycle 0.55-0.95)
  - **Rain weather** (NEW Session 24): 6000-unit cycle with rain streaks, fog overlay
- **rw_math.h**: Shared math utilities extracted from main.c
  - mat4_identity, mat4_perspective, mat4_lookat, mat4_rotation_y
  - mat4_translation, mat4_scaling, mat4_multiply (new)
- **V key toggle**: switches between pseudo-3D and true 3D at runtime
- Both rendering paths coexist — pseudo-3D code is NOT removed

### Physics Model (sub_000636D0 + sub_000110E0)
- **Heading angle** at fake physics body +0x18 (radians, 0=north, CW positive)
- **Scalar speed** at +0x1C (units/s, max 50 normal / 75 boosting, drag 0.8)
- W/S: forward/reverse acceleration, A/D: steering (speed-dependent)
- Road curves apply centripetal force (0x5FFD10) pushing car outward
- Position integrated: pos += speed * heading_dir * dt

### 3D Vehicle Models (NEW - Session 21)
- **BGV loader** (`bgv_loader.c`): parses Criterion .bgv vehicle geometry files
  - Xbox D3DVSDT_NORMPACKED3 packed normals (11-11-10 bit signed)
  - Triangle strip → triangle list conversion with degenerate restart markers
  - Draw call extraction from sub-entry descriptors (pattern scan)
  - Fake directional lighting baked into vertex colors
- **Vehicle catalog**: 67 models across 7 classes (COMP/CUPE/HEVY/HSPC/MSCL/SPRT/SUPR)
- **3D model viewer** (M key): turntable view with auto-rotation, ground plane, grid
- **Model cycling** (N/P keys): browse all 67 vehicles, window title shows stats
- **Player car**: actual 3D model in gameplay view (off-center projection positioning)
- **Traffic cars**: 6 different 3D models with color tints (red/blue/yellow/green/silver/grey)
- Vehicle textures are in .btv files (paint variants) - format not yet decoded

### D3D8 Rendering (main.c)
- **Pseudo-3D perspective** (OutRun-style): camera behind car, road to horizon
- 50 road segments with accumulated curve AND hill offsets
- Sky gradient with **stars during night phase** (twinkle, color variation)
- Mountain silhouettes with parallax, grass ground plane
- **Time-of-day**: dawn→day→sunset→night color cycling every 3000 world units
- Alternating road stripes, rumble strip edges, yellow center dashes, white lane dividers
- **6 roadside object types**: guard posts, trees (2 sizes), buildings, road signs, billboards
- **Tunnel sections** every 2000 units: ceiling, walls, orange strip lights
- **Rain puddles** on road surface during rain weather
- 12 traffic obstacles (8 same-dir + 4 oncoming) with taillights and headlights
- AI traffic: sine-wave lane drifting + **braking when player approaches**
- Player car with shadow, steering tilt, windshield, taillights, boost exhaust flames
- **Headlight beams** projecting forward during night phase
- **Wall collision sparks**: orange/yellow particle burst
- Speed lines at 25+ speed
- **Rain weather**: diagonal streaks + fog overlay cycling every 6000 units
- Screen shake on crash
- **Rear-view mirror** at top center showing traffic behind player
- HUD: speed bar, boost bar, takedown pips, **score/multiplier bar**, checkpoint banner
- Flash overlay: white=takedown, red=crash, **green=checkpoint**

### Memory Layout
- 0x5FFF00: Fake physics body (+08 accel, +0C turn, +10 px, +14 py, +18 hdg, +1C spd)
- 0x5FFE00: Obstacle array (12 × 16B: pos_x, pos_y, speed, flags)
- 0x5FFD00: Takedown count (uint32)
- 0x5FFD04: Flash timer (float)
- 0x5FFD08: Boost meter 0-100 (float)
- 0x5FFD0C: Boost button state (uint32)
- 0x5FFD10: Road curve at player (float)
- 0x5FFD14: Distance traveled (uint32)
- 0x5FFD18: Screen shake timer (float)
- 0x5FFD1C: Last checkpoint distance (uint32)
- 0x5FFD20: Checkpoint flash timer (float)
- 0x5FFD24: Score (uint32)
- 0x5FFD28: Score multiplier (float, 1.0-8.0)
- 0x5FFD2C: Combo timer (float, resets multiplier decay)
- 0x5FFD30: Spark timer (float)
- 0x5FFD34: Spark side (uint32, 0=left, 1=right)

### Gameplay Features
- Road curves and hills with centripetal physics
- Wall collision: bounce, half speed, sparks, multiplier reset
- TAKEDOWN (same-dir): speed boost + 500pts × multiplier + boost +25
- CRASH (oncoming): 85% speed loss + shake + multiplier reset
- Near-miss: boost fill + 50-100pts × multiplier (continuous)
- Boost: Shift/gamepad drains meter for +50% max speed
- **Score system**: points from near-misses, takedowns, checkpoints
- **Combo multiplier**: 1x-8x, builds with actions, decays when idle, resets on crash/wall
- **Checkpoints** every 500m: green flash + 15 boost + 1000pts × multiplier
- Difficulty ramps with distance (traffic density + speed)
- AI braking when player approaches from behind in same lane

### Session 31: xemu Live Debugging (NEW)
- **xemu GDB stub analysis**: Connected to running game via GDB RSP on port 1234
- **Game state machine discovered**: 0x4D53B8 values: 5=menus AND regular racing, 4=crash mode only, 7=loading
- **Camera pointer as gameplay indicator**: 0x4D5370 == 0x4D45D0 means gameplay (any mode), 0x4D4008 means menus
- **Gameplay detection FIXED**: Changed `B8==4` check to `B8==4 || cam_ptr==0x4D45D0` in both recomp_manual.c and main.c
- **Race state writeback**: Countdown timer (0x411BF8), lap counter (0x411BDC/0x411B30), position (0x550520)
- **Boost meter**: 0x40FD7C is performance accumulator (100→1800+ range), NOT max speed cap
- **Race control block**: 0x411B20 active flag, 0x411BE0 race type, 0x411BE8 total laps
- **Standings array**: Player position at 0x550520, car IDs at 0x550524+ (player = car 8)
- **Career takedowns**: Cumulative gold/silver/bronze at 0x44D14C/0x44D154/0x44D150
- **AI car state**: Base 0x410600, stride 0xF0 (240 bytes/car), contains hit/damage counts
- **Crash physics**: Parts array at 0x5492B0 (80B stride), spreads 3000+ units during explosions
- **Scoring display**: 0x5566E0-0x556708, rewritten per results screen
- Tested across 5 game modes: menus, crash junction, regular race, burning lap, road rage

### Session 30 Progress
- Created **xboxrecomp** toolkit repo (https://github.com/sp00nznet/xboxrecomp)
  - 4 toolchain modules (xbe_parser, disasm, func_id, recomp)
  - 6 pipeline guides, 8 technical deep dives, 3 format references
  - 3 runtime templates (recomp_types.h, xbox_memory.h, kernel_stubs.h)
  - 15,196 lines across 55 files

### Next Steps
1. Decode .btv vehicle texture format and apply to 3D models
2. Populate AI car state block (0x410600) for traffic interactions
3. Connect original RW rendering pipeline to D3D11 backend
4. Long-term: fix the real physics world initialization
5. Long-term: audio playback (DirectSound → XAudio2)

### Key Input Addresses
- Accumulators: 0x4D652C (throttle), 0x4D6530 (steering) - written by game_frame_pump()
- Car object: 0x557880 (esi in sub_000636D0), +0x1B4 → velocity ptr (= 0x5FFF00)
- Boost button: 0x5FFD0C (from VK_SHIFT or gamepad A/RB in game_frame_pump)
- Button events: 0x4A1C74-0x4A1C79 (processed by sub_00013F10)

### Controls
- **Keyboard**: WASD = drive, Shift = boost, ESC = quit
- **V key**: toggle true 3D rendering mode (chase camera)
- **T key**: cycle through 37 tracks (loads track geometry in 3D mode)
- **M key**: toggle 3D model viewer (turntable view)
- **N/P keys**: next/previous vehicle model (in model viewer)
- **Gamepad**: Left stick = steer, RT/LT = gas/brake, A or RB = boost

### Gen File Patches (must re-apply after regen)
1. **recomp_0000.c**: extern g_tick_110e0_count, sub_000165F0 entry/ESP traces, sub_00015570 vtable guard, sub_0003D9E0 #if 0, **sub_000636D0 #if 0**, jump table→C switch (replace_all), state traces, exit path traces, case 3 traces
2. **recomp_0002.c**: #if 0 around sub_00135040, sub_00135240
3. **recomp_0003.c**: extern g_tick_110e0_count, flag clear, ESP+callee-saved save/restore, game loop traces
4. **recomp_0004.c**: #if 0 around sub_001CFDD0, sub_001BEFF0, sub_001C1670, sub_001C1740, sub_001C66F0, sub_001AA100; vtable guards in sub_001B4170, sub_001B41F0, sub_001AEE20
5. **recomp_0005.c**: #if 0 around 35 functions + sub_001DBDE0, sub_001DE900
6. **recomp_0006.c**: #if 0 around sub_001FE1E0, sub_00221F20
7. **recomp_0007.c**: #if 0 around sub_00244C51, sub_00249B7C, sub_00249B9C
8. **recomp_0022.c**: #if 0 around sub_00351770, sub_003518E0, sub_0034D530
9. **recomp_stubs.c**: #if 0 around sub_00351A20
10. **recomp_dispatch.c**: add sub_001D1818/sub_001D2793 entries, size=22097
11. **recomp_funcs.h**: add sub_001D1818/sub_001D2793 declarations

### Manual Function Overrides (recomp_manual.c) - 34 functions
Including sub_000636D0 (physics force), sub_0003D9E0 (render orchestrator stub), sub_000110E0 (frame pump), sub_001AA100 (state 4→5 transition), sub_001DE900 (im2d render → bridge), sub_001DBDE0 (im2d driver entry → bridge)
