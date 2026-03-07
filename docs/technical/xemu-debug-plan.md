# Using xemu as a Reference Debugger for Burnout 3 Recompilation

> Use the running emulator to observe what the game *actually does*, then reproduce it in our recompiled version.

## The Idea

xemu runs Burnout 3 correctly (with minor visual issues). Our static recompilation has the game logic running but many subsystems are stubbed or broken. By instrumenting xemu, we can observe the game's exact runtime behavior — GPU commands, memory state, function call patterns — and use those observations to fix our recompiled version.

Think of xemu as a "known good" oracle. When our recompiled version does something wrong, we compare against what xemu shows the game actually does.

## Available xemu Debug Tools

### 1. GDB Stub (CPU-level debugging)
Start xemu with `-s -S` to enable GDB on port 1234, paused at startup.
```bash
xemu.exe -s -S
# In another terminal:
gdb
(gdb) target remote localhost:1234
(gdb) break *0x001D2807        # break at game entry point
(gdb) break *0x000636D0        # break at physics function
(gdb) break *0x000110E0        # break at frame pump
(gdb) x/10x 0x5FFF00           # examine fake physics body address
(gdb) info registers           # dump CPU state
(gdb) c                        # continue
```

### 2. QEMU Monitor (memory inspection)
Access via Ctrl+Alt+2 in xemu window:
```
x /10wx 0x557880        # examine car object
x /4wx 0x4D5370         # examine RW world pointer
x /10i 0x000636D0       # disassemble physics function
info registers          # CPU state
screendump frame.png    # capture current frame
```

### 3. NV2A Trace Events (GPU command stream)
Start with `--trace` flags to log GPU operations:
```bash
xemu.exe --trace "nv2a_pgraph_method" --trace "nv2a_pgraph_surface_*"
```
Or enable at runtime via monitor:
```
trace-event set nv2a_pgraph_method on
trace-event set nv2a_pgraph_method_unhandled on
trace-file set burnout3_gpu.log
trace-file on
```

### 4. RenderDoc Integration (GPU frame analysis)
xemu has built-in RenderDoc API support. With RenderDoc installed:
- Launch xemu through RenderDoc
- Capture individual frames
- Inspect every draw call, texture binding, shader, render target
- See the exact GPU command sequence the game issues

### 5. Performance Profiler
45 built-in counters: draw calls, surface operations, shader binds, etc.
300-frame rolling window accessible via code.

### 6. Screenshots
```
screendump burnout3_menu.png
screendump burnout3_gameplay.png
```

## What To Observe (Priority Order)

### Phase 1: Memory State at Key Points

**Goal**: Understand what values are at our known-important addresses during real gameplay.

| Address | What We Think It Is | What To Check |
|---------|-------------------|---------------|
| 0x557880 | Car object (esi in sub_000636D0) | Full structure dump — is it really a car? What's at +0x1B4 (vel_ptr)? |
| 0x4D5370 | "RW world pointer" (read 300+ times) | What actually lives here? Is it a valid RpWorld*? |
| 0x464018 | Track env object | Does it get populated? When? What's in it? |
| 0x4AEDDC | Load queue object | Full queue state during loading |
| 0x4D652C | Throttle accumulator | Values during gameplay |
| 0x4D6530 | Steering accumulator | Values during gameplay |
| 0x4A1C74-79 | Button states | Mapping from controller to game |

**Method**: GDB breakpoints + memory watches at state transitions.

```gdb
# Break when game enters state 4 (gameplay)
# We know sub_000110E0 is the frame pump
break *0x000110E0
commands
  x/10wx 0x557880
  x/4wx 0x4D5370
  x/wx 0x464018
  continue
end
```

### Phase 2: Rendering Pipeline Trace

**Goal**: Understand the exact sequence of D3D8 calls the game makes per frame.

This is the most valuable data for fixing our renderer. Use NV2A tracing + RenderDoc:

1. **Capture one gameplay frame** in RenderDoc
2. List every draw call — how many? What geometry?
3. For each draw call, record:
   - Active textures (from Global.txd? static.dat? vehicle textures?)
   - Render target (main buffer? shadow map? reflection?)
   - Vertex format and count
   - Render states (blend, depth, alpha test)
   - World/view/projection matrices
4. **Compare to our renderer**: we do ~1400 draw calls per track. How many does the real game do?

### Phase 3: State Machine Tracing

**Goal**: Understand the full boot sequence and state transitions.

We know the states go S1→S2→...→S13→gameplay, but we're fuzzy on what happens in each. GDB breakpoints at state transition points:

```gdb
# The main state switch is in the game loop
# Set watchpoint on the state variable
watch *(uint32_t*)0x4D53BE    # game state byte
commands
  printf "State changed to: %d\n", *(uint32_t*)0x4D53BE
  info registers
  continue
end
```

### Phase 4: Physics World Initialization

**Goal**: Understand how the real physics world is set up.

Our physics body at 0x5FFF00 is fake. In xemu, the real game creates actual physics objects. We need to see:
- When is the physics world created? (which function, which state)
- What's the structure layout? (position, velocity, heading format)
- How does sub_000636D0 access the real physics body vs our fake one?
- What does the velocity pointer at car+0x1B4 actually point to?

```gdb
break *0x000636D0
commands
  printf "sub_000636D0: esi=%08x\n", $esi
  x/20wx $esi
  printf "vel_ptr at esi+0x1B4: %08x\n", *(uint32_t*)($esi+0x1B4)
  x/8wx *(uint32_t*)($esi+0x1B4)
  continue
end
```

### Phase 5: RenderWare Initialization

**Goal**: Understand RW engine init so we can reconnect it.

Key RW functions to trace:
- RwEngineInit, RwEngineOpen, RwEngineStart
- RpWorldCreate, RwCameraCreate
- The texture dictionary setup (Global.txd processing)

Set breakpoints on the RW init functions (we have addresses from func_id) and log their parameters and return values.

### Phase 6: Audio Pipeline

**Goal**: Understand DirectSound buffer creation and audio streaming.

We have audio stubs but no playback. Trace:
- DirectSoundCreate calls
- Buffer creation (format, size, flags)
- Buffer writes (what data, how often)
- Streaming patterns (ring buffer? double buffer?)

## Automation Scripts

### Script 1: Memory Snapshot Tool

```python
#!/usr/bin/env python3
"""Connect to xemu GDB stub and dump key memory regions."""

import socket
import struct

GDB_HOST = 'localhost'
GDB_PORT = 1234

REGIONS = {
    'car_object':    (0x557880, 0x200),
    'rw_world_ptr':  (0x4D5370, 0x10),
    'track_env':     (0x464018, 0x100),
    'physics_body':  (0x5FFF00, 0x40),
    'game_state':    (0x4D53BE, 0x4),
    'load_queue':    (0x4AEDDC, 0x800),
    'throttle':      (0x4D652C, 0x8),
}

# ... GDB RSP protocol implementation ...
```

### Script 2: GPU Command Logger

```bash
#!/bin/bash
# Start xemu with GPU tracing, filter for draw calls and state changes
xemu.exe \
    --trace "nv2a_pgraph_method" \
    --trace "nv2a_pgraph_surface_create" \
    --trace "nv2a_pgraph_surface_download" \
    2>&1 | tee burnout3_gpu_trace.log
```

### Script 3: Frame-by-Frame Comparison

```python
#!/usr/bin/env python3
"""Capture screenshots from xemu at specific game states for comparison."""
# Uses QEMU monitor protocol to send screendump commands
# Captures at: boot, menu, loading, gameplay, different tracks
```

## Workflow

1. **Start xemu** with GDB stub and tracing enabled
2. **Let game boot** to gameplay (state 4)
3. **Capture memory snapshots** at key addresses
4. **Capture RenderDoc frame** during gameplay
5. **Compare** against our recompiled version:
   - Memory values match? If not, which subsystem is wrong?
   - Draw call count similar? If not, we're missing or duplicating geometry
   - Render states match? If not, fix our D3D8 translation
   - Textures correct? If not, fix our asset loading
6. **Fix discrepancies** in the recompiled version
7. **Repeat** for each subsystem (physics, rendering, audio, etc.)

## Expected Discoveries

Based on our known gaps, we expect to learn:
- **What 0x4D5370 really contains** — this will tell us if RW world init is happening
- **The real physics body layout** — so we can remove our fake body
- **Correct D3D8 render state sequence** — so our D3D11 translation matches
- **How Global.txd textures are used** — HUD rendering pipeline
- **The menu state machine** — how to get past the title screen in recompiled code
- **Audio buffer patterns** — how to connect our DirectSound stubs to real playback
