# Game State Machine

> Boot sequence, state transitions, and the gameplay tick loop

## TODO — Document:

- Boot sequence: XBE entry point → thread creation → RW init → main loop
- State machine: S1(init) → S2(alloc) → S3(Global.txd) → S4(process) → ... → S13(track) → gameplay
- Load state progression (0x00 → 0x17 = fully loaded)
- Resource load queue: ring buffer with 24 entries × 80 bytes
  - Name resolution from .rdata VA range
  - File data written directly into resource_va
- Game state 4: in-race gameplay tick loop
- Physics body at 0x5FFF00 (fake, 28 bytes)
- Frame pump (sub_000110E0): physics integration, traffic, boost, curves
- Obstacle/traffic array at 0x5FFE00
- Memory-mapped game variables (speed, heading, boost, score, etc.)
