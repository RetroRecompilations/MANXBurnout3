# Track Geometry Pipeline

> From streamed.dat to textured 3D meshes on screen

## TODO — Document:

- Section parsing and type-0/type-1 discrimination
- Vertex format (28-byte stride: pos, packed normal, color/AO, UV)
- Triangle strip → triangle list conversion
  - Per-object strip boundaries from descriptors at +0x84
  - Degenerate restart markers (repeated indices reset winding)
  - Winding order alternation
- Giant triangle filtering (edge length > 40 units = bridging artifact)
- Vertex color interpretation: baked ambient occlusion (greyscale 5-128)
- Per-object texture mapping from section header +0x84 uint16 array
- static.dat texture loading (DXT1/DXT3/DXT5 scan)
- Road spine extraction from section centers
- Spawn point calculation (nearest road surface vertex)
- Performance: ~1400 draw calls per track at ~18 FPS
