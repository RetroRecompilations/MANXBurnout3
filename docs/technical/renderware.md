# RenderWare Engine Analysis

> Criterion's custom RenderWare ~3.7 fork statically linked into Burnout 3

## TODO — Document:

- RenderWare version identification (~3.7, custom Criterion fork)
- 2,758 functions classified as RW across 67 source modules
- Engine initialization sequence and memory pool allocation (~32 MB)
- Binary stream format (TXD, world, scene)
- World/scene pipeline architecture
- RW plugin system
- How the game uses RW vs custom Criterion code
- NV2A push buffer integration (Xbox-specific rendering path)
- Pipeline stubs needed to prevent crashes (rw_world_pipe_xbox)
