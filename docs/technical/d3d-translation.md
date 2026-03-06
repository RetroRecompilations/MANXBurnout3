# D3D8 → D3D11 Translation Layer

> Implementing Xbox's Direct3D 8 API on top of Direct3D 11

## TODO — Document:

- COM vtable emulation (IDirect3DDevice8, IDirect3DTexture8, etc.)
- Fixed-function pipeline → HLSL shader translation
  - World/View/Projection transform matrices
  - Texture stage states (COLOROP, COLORARG1, COLORARG2)
  - D3DTOP_MODULATE for texture × vertex color
  - D3DTOP_DISABLE for vertex-color-only rendering
- Vertex buffer / index buffer lifecycle (Create, Lock, Unlock, Release)
- Staging buffer pattern for Lock/Unlock on D3D11
- D3DPOOL_MANAGED emulation
- Render state translation (200+ D3D8 states → D3D11)
- FVF (Flexible Vertex Format) → D3D11 input layouts
  - D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_DIFFUSE | D3DFVF_TEX1
  - D3DFVF_XYZRHW | D3DFVF_DIFFUSE (screen-space HUD)
- DrawIndexedPrimitive / DrawPrimitiveUP translation
- DXT1/DXT3/DXT5 texture format support (native in D3D11)
- Xbox-specific D3D8 differences from PC D3D8
