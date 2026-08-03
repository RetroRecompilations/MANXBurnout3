/**
 * The draw path: Xbox vertex buffers and draws -> DXVK.
 *
 * Signatures, from Cxbx-Reloaded's D3D8 patch declarations:
 *   X_D3DVertexBuffer* CreateVertexBuffer2(UINT Length)
 *   BYTE*              VertexBuffer_Lock2(X_D3DVertexBuffer*, DWORD Flags)
 *   void               SetStreamSource(UINT Stream, X_D3DVertexBuffer*, UINT Stride)
 *   void               DrawVerticesUP(PrimitiveType, VertexCount, const void*, UINT Stride)
 *   void               DrawIndexedVertices(PrimitiveType, VertexCount, const WORD*)
 *
 * Two things make this more than a forwarding layer.
 *
 * The game holds 32-bit handles, so a host pointer cannot be handed back
 * as a vertex buffer — hence a handle table, with handles tagged so a
 * stray value is obvious rather than silently dereferenced.
 *
 * And Lock2 returns memory the game *writes vertices into*, so it has to
 * be an address inside the mapped Xbox space. Each buffer gets scratch
 * there, and the scratch is uploaded to the real DXVK buffer when the
 * game draws with it.
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

#include <d3d8.h>

extern "C" {

extern ptrdiff_t g_xbox_mem_offset;
void *b3_dxvk_device(void);
int b3_dxvk_movie_texture_bound(void);
void b3_dxvk_movie_texture_size(int *width, int *height);
void b3_dxvk_refresh_movie_texture(void);

/* Xbox primitive types do NOT match desktop D3D8, and the mistake is
 * silent: the values are the raw NV2A SET_BEGIN_END opcodes, which the
 * draw functions write straight into the push buffer. Passing one to
 * desktop D3D8 renders the wrong topology rather than failing — a
 * triangle list arrives as 5 and desktop reads 5 as TRIANGLESTRIP, so the
 * geometry appears, connected wrongly. The shift is not uniform: 1 and 2
 * are identity, 4..7 are off by one, and 3/8/9/10 have no desktop form. */
#define X_D3DPT_POINTLIST     1
#define X_D3DPT_LINELIST      2
#define X_D3DPT_LINELOOP      3
#define X_D3DPT_LINESTRIP     4
#define X_D3DPT_TRIANGLELIST  5
#define X_D3DPT_TRIANGLESTRIP 6
#define X_D3DPT_TRIANGLEFAN   7
#define X_D3DPT_QUADLIST      8
#define X_D3DPT_QUADSTRIP     9
#define X_D3DPT_POLYGON       10

} // extern "C"

namespace {

/* The game does not treat a vertex buffer as an opaque handle: it reads
 * the Xbox resource structure. From Cxbx's XbD3D8Types.h:
 *
 *   struct X_D3DResource { DWORD Common; DWORD Data; DWORD Lock; };
 *
 * Common carries a refcount in its low 16 bits and a type in bits 16-18
 * (0 = vertex buffer). Data points at the actual vertex memory. Handing
 * back a tagged integer instead made the game read nonsense and retry
 * forever — 156 million allocations in six seconds. */
struct X_D3DResource {
    uint32_t Common;
    uint32_t Data;
    uint32_t Lock;
};

#define X_D3DCOMMON_TYPE_VERTEXBUFFER 0x00000000u
#define X_D3DCOMMON_REFCOUNT_1        0x00000001u

struct VB {
    IDirect3DVertexBuffer8 *dev_vb = nullptr;
    uint32_t                resource_va = 0;  /* X_D3DResource the game sees */
    uint32_t                data_va = 0;      /* where it writes vertices */
    uint32_t                length = 0;
    bool                    dirty = false;
};

std::vector<VB> g_vbs;

/* Scratch lives high in the mapped space, clear of the XBE image (which
 * ends around 0x778200) and the test fixtures.
 *
 * Vertex data is deliberately allocated **above 0x80000000**. The Xbox
 * aliases physical memory there as an uncached view, and the game does
 * exactly that before filling a buffer:
 *
 *   edx = MEM32(ebp + 4) | 0x80000000;   // resource->Data, uncached
 *   ... writes vertices to [edx] ...
 *
 * With Data below 2 GB the OR sends every vertex 2 GB away from where we
 * read them back, and the buffers upload as zeroes. Allocating above the
 * line makes the game's OR a no-op, which is the cheap way to model the
 * alias without mapping the memory twice. */
uint32_t g_scratch_next = 0x02000000;    /* resource headers */
uint32_t g_vdata_next   = 0x80000000u;   /* vertex data, uncached alias */

/* Look up by the resource address the game holds. */
VB *resolve(uint32_t resource_va)
{
    for (auto &vb : g_vbs)
        if (vb.resource_va == resource_va) return &vb;
    return nullptr;
}

void *xbox_ptr(uint32_t va) { return (char *)(uintptr_t)g_xbox_mem_offset + va; }

/* Push whatever the game wrote into scratch across to the GPU buffer. */
void flush(VB *vb)
{
    if (!vb || !vb->dirty || !vb->dev_vb) return;
    BYTE *dst = nullptr;
    if (SUCCEEDED(vb->dev_vb->Lock(0, vb->length, &dst, 0)) && dst) {
        std::memcpy(dst, xbox_ptr(vb->data_va), vb->length);
        vb->dev_vb->Unlock();
    }
    vb->dirty = false;
}

uint32_t     g_stream_handle = 0;
unsigned     g_stream_stride = 0;

/* Primitive count from an Xbox vertex count. The Xbox draw calls carry
 * VERTEX counts; desktop D3D8 wants PRIMITIVE counts. */
UINT prim_count(unsigned type, unsigned vertices)
{
    switch (type) {
        case X_D3DPT_POINTLIST:     return vertices;
        case X_D3DPT_LINELIST:      return vertices / 2;
        case X_D3DPT_LINELOOP:      return vertices;               /* closes back to 0 */
        case X_D3DPT_LINESTRIP:     return vertices >= 2 ? vertices - 1 : 0;
        case X_D3DPT_TRIANGLELIST:  return vertices / 3;
        case X_D3DPT_TRIANGLESTRIP: return vertices >= 3 ? vertices - 2 : 0;
        case X_D3DPT_TRIANGLEFAN:   return vertices >= 3 ? vertices - 2 : 0;
        case X_D3DPT_QUADLIST:      return (vertices / 4) * 2;     /* two tris per quad */
        case X_D3DPT_QUADSTRIP:     return vertices >= 4 ? vertices - 2 : 0;
        case X_D3DPT_POLYGON:       return vertices >= 3 ? vertices - 2 : 0;
        default:                    return 0;
    }
}

/* Xbox topology -> desktop topology. Returns 0 for the types that have no
 * desktop equivalent and need the vertices rewritten instead; the caller
 * must handle those rather than draw them wrongly.
 *
 * QUADSTRIP maps to TRIANGLESTRIP and POLYGON to TRIANGLEFAN because those
 * are the same vertex orders, not merely similar ones. QUADLIST is not:
 * four independent corners per quad need a {0,1,2, 0,2,3} expansion, so it
 * is reported as unmappable and expanded by the draw path. */
D3DPRIMITIVETYPE xbox_prim_to_desktop(unsigned type)
{
    switch (type) {
        case X_D3DPT_POINTLIST:     return D3DPT_POINTLIST;
        case X_D3DPT_LINELIST:      return D3DPT_LINELIST;
        case X_D3DPT_LINESTRIP:     return D3DPT_LINESTRIP;
        case X_D3DPT_TRIANGLELIST:  return D3DPT_TRIANGLELIST;
        case X_D3DPT_TRIANGLESTRIP: return D3DPT_TRIANGLESTRIP;
        case X_D3DPT_TRIANGLEFAN:   return D3DPT_TRIANGLEFAN;
        case X_D3DPT_QUADSTRIP:     return D3DPT_TRIANGLESTRIP;
        case X_D3DPT_POLYGON:       return D3DPT_TRIANGLEFAN;
        default:                    return (D3DPRIMITIVETYPE)0;    /* LINELOOP, QUADLIST */
    }
}

/* ── The vertex layout, read from the game rather than guessed ──────
 *
 * Guessing a layout from the stride does not work and cannot be made to
 * work: 24 bytes was read as XYZ|DIFFUSE|TEX1 and the "diffuse" came back
 * 00000000 with texcoords (0,0), because those bytes are not a diffuse and
 * not texcoords.
 *
 * The game holds the real answer in its D3D device, and D3D8LTCG's own
 * vertex-format setup (0x003591F0, called at the top of every
 * DrawVerticesUP) shows exactly where. Decompiled, it walks 16 attribute
 * slots of the vertex declaration at device+0x794:
 *
 *   fmt = MEM32(decl + slot*0x10 + 0x1C);      // NV2A format word
 *   off = MEM32(decl + slot*0x10 + 0x18);      // offset within the vertex
 *   if (fmt == 2) continue;                    // slot disabled
 *   bytes = SIZE[fmt & 0xF] * COUNT[(fmt >> 4) & 0xF];
 *
 * SIZE and COUNT are two 16-byte tables in the D3D section, read out of the
 * XBE at 0x35BD90 and 0x35BD98 and reproduced below. The attribute remap
 * table at 0x3F7C48 is the identity for both variants, so slot numbering is
 * the NV2A assignment directly: 0 position, 3 diffuse, 9..12 texcoord0..3.
 *
 * That is the whole format system, and it is exact. */

const unsigned char NV_COMP_BYTES[16] = { 1,2,4,0, 1,2,4,0, 0,0,0,0, 0,0,0,0 };
const unsigned char NV_COMP_COUNT[16] = { 0,1,2,3, 4,0,0,3, 0,0,0,0, 0,0,0,0 };

#define NV_ATTR_POSITION 0
#define NV_ATTR_DIFFUSE  3
#define NV_ATTR_TEXCOORD0 9

struct Attr { unsigned offset, bytes, ncomp, type; bool present; };
struct Layout { Attr slot[16]; bool valid; };

/* 0x35FB48 holds the pointer to the static device at 0x35D6A0. */
#define D3D_G_PDEVICE_VA 0x0035FB48u
#define DEV_VERTEX_DECL  0x794u

Layout read_vertex_layout()
{
    Layout L{}; L.valid = false;
    const uint32_t dev = *(const uint32_t *)xbox_ptr(D3D_G_PDEVICE_VA);
    if (dev < 0x10000u) return L;
    const uint32_t decl = *(const uint32_t *)xbox_ptr(dev + DEV_VERTEX_DECL);
    if (decl < 0x10000u) return L;

    for (unsigned s = 0; s < 16; s++) {
        const uint32_t base = decl + s * 0x10u;
        const uint32_t fmt  = *(const uint32_t *)xbox_ptr(base + 0x1Cu);
        const uint32_t off  = *(const uint32_t *)xbox_ptr(base + 0x18u);
        if (fmt == 2) continue;                       /* slot disabled */
        const unsigned ncomp = NV_COMP_COUNT[(fmt >> 4) & 0xF];
        const unsigned csz   = NV_COMP_BYTES[fmt & 0xF];
        if (!ncomp || !csz) continue;
        L.slot[s] = { off, ncomp * csz, ncomp, fmt & 0xFu, true };
        L.valid = true;
    }
    return L;
}

unsigned long g_geo_unknown_stride = 0;

} // namespace
extern "C" unsigned long b3_geo_lit_max = 0;
extern "C" unsigned char *b3_geo_best_frame = NULL;
extern "C" int b3_geo_best_w = 0, b3_geo_best_h = 0;
namespace {

struct Converted { std::vector<unsigned char> data; DWORD fvf; unsigned stride; };

/* The FVF the game itself set, captured by the SetVertexShader binding.
 * Xbox FVF bit assignments are the standard D3DFVF ones, so this value is
 * meaningful to desktop D3D8 unchanged — there is nothing to derive. */
uint32_t g_game_fvf = 0;

bool convert_vertices(const void *src, unsigned count, unsigned stride,
                      Converted &out)
{
    /* Criterion's frontend immediate-mode format is six 32-bit words:
     * x, y, s, t, packed colour, pad. It is selected by the XBE's custom
     * Xbox vertex declaration, not by an FVF. Treating those bytes as
     * XYZ|DIFFUSE|TEX1 made u become Z and left desktop texcoords at 0,0,
     * reducing every movie/menu texture to one flat sampled pixel. Xbox
     * movie vertices carry s/t in texels (0..640, 0..480), whereas D3D8's
     * ordinary desktop textures need normalized coordinates. */
    if (stride == 24) {
        out.fvf = D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1;
        out.stride = 28;
        out.data.resize((size_t)count * out.stride);
        const unsigned char *input = (const unsigned char *)src;
        int texture_width = 1;
        int texture_height = 1;
        const bool normalize_movie_uv = b3_dxvk_movie_texture_bound() != 0;
        if (normalize_movie_uv)
            b3_dxvk_movie_texture_size(&texture_width, &texture_height);
        for (unsigned i = 0; i < count; i++) {
            const unsigned char *sv = input + (size_t)i * stride;
            unsigned char *dv = &out.data[(size_t)i * out.stride];
            const float z = 0.0f;
            const float rhw = 1.0f;
            const uint32_t white = 0xFFFFFFFFu;
            float u;
            float v;
            std::memcpy(&u, sv + 8, 4);
            std::memcpy(&v, sv + 12, 4);
            if (normalize_movie_uv && texture_width > 0 && texture_height > 0) {
                u /= (float)texture_width;
                v /= (float)texture_height;
            }
            std::memcpy(dv + 0, sv + 0, 8);       /* x, y */
            std::memcpy(dv + 8, &z, 4);
            std::memcpy(dv + 12, &rhw, 4);
            std::memcpy(dv + 16, &white, 4);
            std::memcpy(dv + 20, &u, 4);
            std::memcpy(dv + 24, &v, 4);
        }
        return true;
    }

    /* Prefer the FVF the game set. It does not always reach us: this title
     * has six SetVertexShader call sites but none of them fire on the boot
     * path that produces these draws, so the format is arriving through a
     * route not yet intercepted. Rather than drop every draw, fall back to
     * the FVF values this game demonstrably uses, matched by stride:
     *
     *   0x142 = XYZ|DIFFUSE|TEX1 = 12+4+8 = 24 bytes   (2 of 6 call sites)
     *   0x042 = XYZ|DIFFUSE      = 12+4   = 16 bytes   (1 of 6 call sites)
     *
     * Both are read from the game's own push instructions, so this is its
     * vocabulary rather than an invented one — but it is still an inference
     * from stride, and it is wrong the moment a draw uses a format with the
     * same size and different fields. Anything unrecognised is counted and
     * skipped, never guessed. */
    uint32_t fvf = g_game_fvf;
    if (!fvf) {
        if      (stride == 24) fvf = 0x142u;
        else if (stride == 16) fvf = 0x042u;
    }
    const unsigned postype = fvf & 0x00Eu;      /* 0x2 = XYZ, 0x4 = XYZRHW */
    if (!fvf || (postype != 0x2u && postype != 0x4u)) {
        g_geo_unknown_stride++;
        return false;
    }

    /* Already pre-transformed: hand the game's own bytes straight over. */
    if (postype == 0x4u) {
        out.fvf    = fvf;
        out.stride = stride;
        out.data.assign((const unsigned char *)src,
                        (const unsigned char *)src + (size_t)count * stride);
        return true;
    }

    /* XYZ, but the coordinates are screen space — measured (303.8, 189.0, 0),
     * (240, 378, 0), (242, 380, 0) in a 640x480 frame — and the game issues
     * no SetTransform at all during boot. Desktop D3D8 would apply an
     * identity world/view/projection to those, putting every vertex far
     * outside the clip volume and culling the lot, which is precisely the
     * observed result: draws accepted, nothing drawn.
     *
     * Widening the position to XYZRHW with RHW=1 is what "already
     * transformed" means to desktop D3D8. This is the bring-up reading of
     * the evidence, not a settled fact: if the Xbox instead supplies a
     * default projection that makes raw XYZ screen coordinates work, the
     * faithful fix is to supply that projection and pass the vertices
     * through untouched. Either way the game's bytes are not reinterpreted
     * here — only the position is widened, and every other field is copied
     * verbatim at its declared offset. */
    const unsigned tail = stride - 12;          /* everything after XYZ */
    out.fvf    = (fvf & ~0x00Eu) | 0x004u;      /* XYZ -> XYZRHW */
    out.stride = stride + 4;
    out.data.resize((size_t)count * out.stride);
    const unsigned char *in = (const unsigned char *)src;
    for (unsigned i = 0; i < count; i++) {
        const unsigned char *sv = in + (size_t)i * stride;
        unsigned char *dv = &out.data[(size_t)i * out.stride];
        std::memcpy(dv, sv, 12);                /* x, y, z            */
        const float rhw = 1.0f;
        std::memcpy(dv + 12, &rhw, 4);          /* w                  */
        std::memcpy(dv + 16, sv + 12, tail);    /* diffuse, texcoords */
    }
    return true;
}

/* QUADLIST -> triangle list, in place of a draw the hardware would have
 * done natively. Menu geometry is quads, so this is not a rare path. */
std::vector<unsigned char> expand_quads(const void *src, unsigned vertices,
                                        unsigned stride)
{
    const unsigned quads = vertices / 4;
    std::vector<unsigned char> out((size_t)quads * 6 * stride);
    const unsigned char *in = (const unsigned char *)src;
    static const unsigned order[6] = { 0, 1, 2, 0, 2, 3 };
    for (unsigned q = 0; q < quads; q++)
        for (unsigned i = 0; i < 6; i++)
            std::memcpy(&out[((size_t)q * 6 + i) * stride],
                        in + ((size_t)q * 4 + order[i]) * stride, stride);
    return out;
}

} // namespace

extern "C" {

/* ── Push buffer ────────────────────────────────────────────────────
 * The game writes NV2A commands itself, into space this hands out:
 *
 *   eax = MEM32(device);                     // write pointer
 *   if (eax < MEM32(device + 4)) goto write; // still room
 *   eax = MakeRequestedSpace(size/2, size);  // else refill, returns ptr
 * write:
 *   MEM32(eax) = cmd; MEM32(eax+4) = arg;
 *   MEM32(device) = eax + 8;                 // advance
 *
 * So device+0x00 is the write pointer, device+0x04 the limit, and
 * MakeRequestedSpace must *return* a writable address and raise the
 * limit. Returning nothing left the limit at zero, so every single write
 * took the refill path — that is the 168-million-call spin.
 *
 * Nothing consumes these commands: draws arrive through the API path
 * instead (measured: DrawIndexedVertices and DrawVerticesUP are ordinary
 * calls). So the ring is simply rewound each time, which models a GPU
 * that has already caught up. */
#define B3_PB_BASE 0x90000000u
#define B3_PB_SIZE 0x00100000u

unsigned long b3_pb_refills = 0;

uint32_t b3_dxvk_push_space(uint32_t device_va, uint32_t requested)
{
    b3_pb_refills++;
    if (requested == 0 || requested > B3_PB_SIZE) requested = B3_PB_SIZE;
    if (device_va >= 0x10000u) {
        uint32_t *dev = (uint32_t *)xbox_ptr(device_va);
        dev[0] = B3_PB_BASE;                 /* write pointer */
        dev[1] = B3_PB_BASE + requested;     /* limit */
    }
    return B3_PB_BASE;
}

/* Statistics, so a test can assert the game actually submitted geometry
 * rather than merely called something. */
unsigned long b3_geo_buffers_created = 0;
unsigned long b3_geo_buffers_reused = 0;
unsigned long b3_geo_locks = 0;
unsigned long b3_geo_draws = 0;
unsigned long b3_geo_primitives = 0;

void b3_geo_reset(void)
{
    b3_geo_buffers_created = b3_geo_buffers_reused = 0;
    b3_geo_locks = b3_geo_draws = b3_geo_primitives = 0;
}

/* Bring-up policy: a bounded, reusing pool.
 *
 * The game allocates vertex buffers and relies on Xbox resource
 * lifetimes to reclaim them; nothing here frees, so a straight
 * allocate-per-call leaked 315,000 DXVK buffers in six seconds until the
 * driver ran out and every later call failed. Reuse any pooled buffer at
 * least as large as the request, and only allocate when none fits. This
 * is not correct lifetime management — two live buffers could alias — but
 * it keeps the game running so the next problem is reachable, and it is
 * bounded rather than unbounded. Proper reclamation belongs with
 * D3DResource_Release. */
#define B3_VB_POOL_MAX 2048

uint32_t b3_dxvk_create_vertex_buffer(uint32_t length)
{
    IDirect3DDevice8 *dev = (IDirect3DDevice8 *)b3_dxvk_device();
    if (!dev || !length) return 0;

    if (g_vbs.size() >= B3_VB_POOL_MAX) {
        /* Reuse the smallest pooled buffer that still fits. */
        VB *best = nullptr;
        for (auto &c : g_vbs)
            if (c.length >= length && (!best || c.length < best->length))
                best = &c;
        if (best) {
            X_D3DResource *r = (X_D3DResource *)xbox_ptr(best->resource_va);
            r->Common = X_D3DCOMMON_TYPE_VERTEXBUFFER | X_D3DCOMMON_REFCOUNT_1;
            r->Data   = best->data_va;
            r->Lock   = 0;
            best->dirty = false;
            b3_geo_buffers_reused++;
            return best->resource_va;
        }
    }

    VB vb;
    vb.length = length;
    if (FAILED(dev->CreateVertexBuffer(length, D3DUSAGE_WRITEONLY, 0,
                                       D3DPOOL_MANAGED, &vb.dev_vb)))
        return 0;

    /* The resource header the game inspects, then the vertex memory it
     * writes into — both inside the mapped Xbox space so its 32-bit
     * pointers work. */
    vb.resource_va = g_scratch_next;
    g_scratch_next += 0x20;
    vb.data_va = g_vdata_next;
    g_vdata_next += (length + 0xFFF) & ~0xFFFu;
    std::memset(xbox_ptr(vb.data_va), 0, length);

    X_D3DResource *res = (X_D3DResource *)xbox_ptr(vb.resource_va);
    res->Common = X_D3DCOMMON_TYPE_VERTEXBUFFER | X_D3DCOMMON_REFCOUNT_1;
    res->Data   = vb.data_va;
    res->Lock   = 0;

    g_vbs.push_back(vb);
    b3_geo_buffers_created++;
    return vb.resource_va;
}

/* Returns an Xbox address: the game writes vertices straight into it. */
uint32_t b3_dxvk_lock_vertex_buffer(uint32_t resource_va)
{
    VB *vb = resolve(resource_va);
    if (!vb) return 0;
    vb->dirty = true;          /* assume written; flushed at draw time */
    b3_geo_locks++;
    return vb->data_va;
}

void b3_dxvk_set_stream_source(unsigned stream, uint32_t handle, unsigned stride)
{
    g_stream_handle = handle;
    g_stream_stride = stride;
    IDirect3DDevice8 *dev = (IDirect3DDevice8 *)b3_dxvk_device();
    VB *vb = resolve(handle);
    if (!dev || !vb) return;
    flush(vb);
    dev->SetStreamSource(stream, vb->dev_vb, stride);
}

void b3_dxvk_scene_ensure(void);

void b3_dxvk_draw_vertices(unsigned type, unsigned start, unsigned count)
{
    IDirect3DDevice8 *dev = (IDirect3DDevice8 *)b3_dxvk_device();
    if (!dev) return;
    const UINT prims = prim_count(type, count);
    const D3DPRIMITIVETYPE dtype = xbox_prim_to_desktop(type);
    if (!prims || !dtype) return;
    if (std::getenv("B3_SKIP_BOOT_DRAWS") && b3_geo_draws != 0) {
        b3_geo_draws++;
        b3_geo_primitives += prims;
        return;
    }
    if (VB *vb = resolve(g_stream_handle)) flush(vb);
    dev->DrawPrimitive(dtype, start, prims);
    b3_geo_draws++;
    b3_geo_primitives += prims;
}

void b3_dxvk_draw_vertices_up(unsigned type, unsigned count,
                              const void *vertices, unsigned stride)
{
    IDirect3DDevice8 *dev = (IDirect3DDevice8 *)b3_dxvk_device();
    if (!dev || !vertices || !stride) return;
    const UINT prims = prim_count(type, count);
    if (!prims) return;

    /* Fast-menu mode preserves the XBE call and statistics, but exits before
     * topology expansion, vertex conversion or any GPU synchronisation. */
    if (std::getenv("B3_SKIP_BOOT_DRAWS") && b3_geo_draws != 0) {
        b3_geo_draws++;
        b3_geo_primitives += prims;
        return;
    }

    b3_dxvk_scene_ensure();
    b3_dxvk_refresh_movie_texture();

    /* QUADLIST has no desktop topology; rewrite the vertices instead of
     * dropping the draw. Expansion happens first so the converter sees a
     * plain vertex run whatever the topology was. */
    std::vector<unsigned char> quads;
    const void *src = vertices;
    unsigned    n   = count;
    D3DPRIMITIVETYPE dtype;
    if (type == X_D3DPT_QUADLIST) {
        quads = expand_quads(vertices, count, stride);
        if (quads.empty()) return;
        src   = quads.data();
        n     = (count / 4) * 6;
        dtype = D3DPT_TRIANGLELIST;
    } else {
        dtype = xbox_prim_to_desktop(type);
        if (!dtype) return;
    }

    Converted cv;
    if (!convert_vertices(src, n, stride, cv)) return;

    const bool vertex_trace = std::getenv("B3_VERTEX_TRACE") != nullptr;
    static unsigned vertex_trace_count = 0;
    const bool trace_this = vertex_trace && vertex_trace_count++ < 16;
    if (trace_this) {
        const float *v = static_cast<const float *>(src);
        std::fprintf(stderr,
            "[VERTEX] type=%u count=%u stride=%u prims=%u fvf=%#lx "
            "out_stride=%u v0={%g,%g,%g,%g,%g,%g}\n",
            type, count, stride, prims, (unsigned long)cv.fvf, cv.stride,
            v[0], v[1], v[2], v[3], v[4], v[5]);
    }

    /* The game's render and texture-stage state is still going to recording
     * stubs, so none of it reaches DXVK and the device would otherwise draw
     * with whatever D3D8 defaults to — stage 0 modulating against a texture
     * that was never bound, which is black. Until those calls are bound,
     * give the device a defined, neutral state so geometry appears as the
     * vertices describe it: no lighting (the colours are baked into the
     * vertex diffuse), no culling (winding is not yet verified against the
     * Xbox convention), no depth test (these are pre-transformed 2D), and
     * colour taken straight from the vertex. */
    dev->SetRenderState(D3DRS_LIGHTING, FALSE);
    dev->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
    dev->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
    /* The game's vertex diffuse reads 00000000 and SetTexture is still an
     * unbound stub, so both of the usual colour sources are absent and any
     * honest stage setup renders black. Until textures are bound, take the
     * colour from TEXTUREFACTOR so the geometry the game is actually
     * submitting can be seen and measured. This is a bring-up
     * visualisation, not a rendering decision: it shows shape and coverage,
     * not the game's real colours. */
    if (b3_dxvk_movie_texture_bound()) {
        dev->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_SELECTARG1);
        dev->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
        dev->SetTextureStageState(0, D3DTSS_ALPHAOP, D3DTOP_SELECTARG1);
        dev->SetTextureStageState(0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
    } else {
        dev->SetRenderState(D3DRS_TEXTUREFACTOR, 0xFFC8C8C8u);
        dev->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_SELECTARG1);
        dev->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TFACTOR);
        dev->SetTextureStageState(0, D3DTSS_ALPHAOP, D3DTOP_SELECTARG1);
        dev->SetTextureStageState(0, D3DTSS_ALPHAARG1, D3DTA_TFACTOR);
    }

    dev->SetVertexShader(cv.fvf);
    const HRESULT draw_hr = dev->DrawPrimitiveUP(dtype, prims,
                                                  cv.data.data(), cv.stride);
    if (trace_this)
        std::fprintf(stderr, "[VERTEX] DrawPrimitiveUP hr=%#lx topology=%u\n",
                     (unsigned long)draw_hr, (unsigned)dtype);
    b3_geo_draws++;
    b3_geo_primitives += prims;

    /* Sampling the back buffer from another thread cannot tell a renderer
     * that draws nothing from one that draws between samples. Read it here,
     * on the drawing thread, immediately after a draw.  A numeric setting
     * is the sampling interval: synchronous readback on every retail draw
     * serialises the GPU and can turn the XBE's startup into minutes. */
    const char *probe_setting = std::getenv("B3_DRAW_PROBE");
    unsigned long probe_interval = probe_setting
        ? std::strtoul(probe_setting, nullptr, 10) : 0;
    if (probe_setting && probe_interval == 0) probe_interval = 1;
    if (probe_interval &&
        (b3_geo_draws == 1 || (b3_geo_draws % probe_interval) == 0)) {
        extern const unsigned char *b3_dxvk_readback(int *, int *);
        void b3_dxvk_begin(void);
        int w = 0, h = 0;
        const unsigned char *px = b3_dxvk_readback(&w, &h);
        if (px) {
            /* Count pixels that differ from the frame's dominant colour.
             * Counting "not black" stopped discriminating once the game
             * began clearing to its own dark background — a fully cleared
             * frame scored as fully lit. What matters is how much of the
             * frame is NOT the clear colour, i.e. how much is geometry. */
            const unsigned char *c0 = px + ((size_t)(h / 2) * w + 4) * 4;
            long diff = 0;
            for (int y = 0; y < h; y += 2)
                for (int x = 0; x < w; x += 2) {
                    const unsigned char *q = px + ((size_t)y * w + x) * 4;
                    if (abs(q[0]-c0[0]) + abs(q[1]-c0[1]) + abs(q[2]-c0[2]) > 24) diff++;
                }
            if (diff > (long)b3_geo_lit_max) {
                b3_geo_lit_max = diff;
                if (!b3_geo_best_frame) b3_geo_best_frame = (unsigned char *)malloc((size_t)w * h * 4);
                if (b3_geo_best_frame) {
                    memcpy(b3_geo_best_frame, px, (size_t)w * h * 4);
                    b3_geo_best_w = w; b3_geo_best_h = h;
                }
            }
        }
        b3_dxvk_begin();
    }
}

void b3_dxvk_draw_indexed(unsigned type, unsigned count, const void *indices)
{
    IDirect3DDevice8 *dev = (IDirect3DDevice8 *)b3_dxvk_device();
    if (!dev || !indices) return;
    const UINT prims = prim_count(type, count);
    if (!prims) return;
    if (std::getenv("B3_SKIP_BOOT_DRAWS") && b3_geo_draws != 0) {
        b3_geo_draws++;
        b3_geo_primitives += prims;
        return;
    }
    if (VB *vb = resolve(g_stream_handle)) flush(vb);
    /* The Xbox passes index data inline; desktop D3D8 has no equivalent
     * to DrawIndexedPrimitiveUP without a vertex array, so route through
     * the UP path using the bound stream's scratch as the vertex source. */
    VB *vb = resolve(g_stream_handle);
    if (!vb || !g_stream_stride) return;
    const D3DPRIMITIVETYPE dtype = xbox_prim_to_desktop(type);
    if (!dtype) return;
    dev->DrawIndexedPrimitiveUP(dtype, 0, count, prims,
                                indices, D3DFMT_INDEX16,
                                xbox_ptr(vb->data_va), g_stream_stride);
    b3_geo_draws++;
    b3_geo_primitives += prims;
}

} // extern "C"

extern "C" void b3_dxvk_set_fvf(unsigned fvf)
{
    /* Recorded from the game's own SetVertexShader. Bit 0 clear means the
     * handle IS an FVF; bit 0 set means a compiled vertex shader, which this
     * title never uses (all six call sites push 0x142, 0x42 or 0). */
    if (!(fvf & 1u)) g_game_fvf = fvf;
}
