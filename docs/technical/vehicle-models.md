# Vehicle Model Pipeline

> Loading and rendering Criterion's BGV vehicle geometry

## TODO — Document:

- BGV file format (see docs/formats/bgv.md)
- Vehicle catalog: 67 models, 7 classes, directory scanning
- LOD selection (always using highest detail LOD 3)
- Packed normal decoding (D3DVSDT_NORMPACKED3: 11-11-10 bit signed)
- Triangle strip → triangle list with degenerate restart
- Draw call extraction via pattern scan
- Fake directional lighting baked into vertex colors
- 3D model viewer (turntable, auto-rotation, M/N/P keys)
- Traffic car rendering (6 variants with color tints)
- Player car rendering in chase camera view
