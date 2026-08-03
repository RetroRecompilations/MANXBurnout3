// vulkan_d3d8.c — Standalone Vulkan D3D8 backend for Burnout3.
//
// Creates its own VkInstance / VkDevice / VkRenderPass and implements
// the Xbox IDirect3DDevice8 COM vtable on Vulkan draw commands.
// Every D3D8 call becomes a real GPU operation — no CPU rasterizer.
//
// Present() submits the command buffer, waits for the GPU, and copies
// the finished RGBA8 frame to host memory.  MANX feeds that
// frame through its own Vulkan presenter (present_rgba_frame).
//
// Cross-platform C99 — compiles on Linux, Windows, Android with the
// Vulkan SDK.  Uses shaderc for runtime GLSL→SPIR-V compilation.

#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>
#include <shaderc/shaderc.h>

#define D3D8_USE_PORTABLE
#include "d3d8_xbox.h"
#include "vulkan_d3d8.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifdef __linux__
#include <dlfcn.h>
#endif

/* ═══════════════════════════════════════════════════════════════
 *  Vulkan loader (vkGetInstanceProcAddr)
 * ═══════════════════════════════════════════════════════════════ */

static PFN_vkGetInstanceProcAddr  pvkGetInstanceProcAddr;
static PFN_vkCreateInstance       pvkCreateInstance;
static PFN_vkEnumeratePhysicalDevices pvkEnumeratePhysicalDevices;
static PFN_vkGetPhysicalDeviceProperties pvkGetPhysicalDeviceProperties;
static PFN_vkGetPhysicalDeviceFeatures pvkGetPhysicalDeviceFeatures;
static PFN_vkCreateDevice         pvkCreateDevice;
static PFN_vkGetDeviceProcAddr    pvkGetDeviceProcAddr;
static PFN_vkDestroyInstance      pvkDestroyInstance;
static PFN_vkDestroyDevice        pvkDestroyDevice;
static PFN_vkGetDeviceQueue       pvkGetDeviceQueue;
static PFN_vkQueueSubmit          pvkQueueSubmit;
static PFN_vkQueueWaitIdle        pvkQueueWaitIdle;
static PFN_vkDeviceWaitIdle       pvkDeviceWaitIdle;
static PFN_vkCreateRenderPass     pvkCreateRenderPass;
static PFN_vkDestroyRenderPass    pvkDestroyRenderPass;
static PFN_vkCreateFramebuffer    pvkCreateFramebuffer;
static PFN_vkDestroyFramebuffer   pvkDestroyFramebuffer;
static PFN_vkCreateImageView      pvkCreateImageView;
static PFN_vkDestroyImageView     pvkDestroyImageView;
static PFN_vkCreateImage          pvkCreateImage;
static PFN_vkDestroyImage         pvkDestroyImage;
static PFN_vkGetImageMemoryRequirements pvkGetImageMemoryRequirements;
static PFN_vkAllocateMemory       pvkAllocateMemory;
static PFN_vkFreeMemory           pvkFreeMemory;
static PFN_vkBindImageMemory      pvkBindImageMemory;
static PFN_vkCreateBuffer         pvkCreateBuffer;
static PFN_vkDestroyBuffer        pvkDestroyBuffer;
static PFN_vkGetBufferMemoryRequirements pvkGetBufferMemoryRequirements;
static PFN_vkBindBufferMemory     pvkBindBufferMemory;
static PFN_vkMapMemory            pvkMapMemory;
static PFN_vkUnmapMemory          pvkUnmapMemory;
static PFN_vkCreateCommandPool    pvkCreateCommandPool;
static PFN_vkDestroyCommandPool   pvkDestroyCommandPool;
static PFN_vkAllocateCommandBuffers pvkAllocateCommandBuffers;
static PFN_vkFreeCommandBuffers   pvkFreeCommandBuffers;
static PFN_vkBeginCommandBuffer   pvkBeginCommandBuffer;
static PFN_vkEndCommandBuffer     pvkEndCommandBuffer;
static PFN_vkCmdBeginRenderPass   pvkCmdBeginRenderPass;
static PFN_vkCmdEndRenderPass     pvkCmdEndRenderPass;
static PFN_vkCmdClearAttachments  pvkCmdClearAttachments;
static PFN_vkCmdBindPipeline      pvkCmdBindPipeline;
static PFN_vkCmdBindVertexBuffers pvkCmdBindVertexBuffers;
static PFN_vkCmdBindIndexBuffer   pvkCmdBindIndexBuffer;
static PFN_vkCmdBindDescriptorSets pvkCmdBindDescriptorSets;
static PFN_vkCmdDraw              pvkCmdDraw;
static PFN_vkCmdDrawIndexed       pvkCmdDrawIndexed;
static PFN_vkCmdCopyImageToBuffer pvkCmdCopyImageToBuffer;
static PFN_vkCmdPipelineBarrier   pvkCmdPipelineBarrier;
static PFN_vkCmdCopyBufferToImage pvkCmdCopyBufferToImage;
static PFN_vkCreateShaderModule   pvkCreateShaderModule;
static PFN_vkDestroyShaderModule  pvkDestroyShaderModule;
static PFN_vkCreatePipelineLayout pvkCreatePipelineLayout;
static PFN_vkDestroyPipelineLayout pvkDestroyPipelineLayout;
static PFN_vkCreateGraphicsPipelines pvkCreateGraphicsPipelines;
static PFN_vkDestroyPipeline      pvkDestroyPipeline;
static PFN_vkCreateDescriptorSetLayout pvkCreateDescriptorSetLayout;
static PFN_vkDestroyDescriptorSetLayout pvkDestroyDescriptorSetLayout;
static PFN_vkCreateDescriptorPool pvkCreateDescriptorPool;
static PFN_vkDestroyDescriptorPool pvkDestroyDescriptorPool;
static PFN_vkAllocateDescriptorSets pvkAllocateDescriptorSets;
static PFN_vkFreeDescriptorSets   pvkFreeDescriptorSets;
static PFN_vkUpdateDescriptorSets pvkUpdateDescriptorSets;
static PFN_vkCreateSampler        pvkCreateSampler;
static PFN_vkDestroySampler       pvkDestroySampler;
static PFN_vkCreateSemaphore      pvkCreateSemaphore;
static PFN_vkDestroySemaphore     pvkDestroySemaphore;
static PFN_vkCreateFence          pvkCreateFence;
static PFN_vkDestroyFence         pvkDestroyFence;
static PFN_vkWaitForFences        pvkWaitForFences;
static PFN_vkResetFences          pvkResetFences;
static PFN_vkResetCommandBuffer   pvkResetCommandBuffer;
static PFN_vkGetPhysicalDeviceMemoryProperties pvkGetPhysicalDeviceMemoryProperties;
static PFN_vkCmdSetViewport       pvkCmdSetViewport;
static PFN_vkCmdSetScissor        pvkCmdSetScissor;
static PFN_vkCmdPushConstants     pvkCmdPushConstants;

#define VK_LOAD(fn) p##fn = (PFN_##fn)pvkGetInstanceProcAddr(inst, #fn)
#define VK_LOAD_DEV(fn) p##fn = (PFN_##fn)pvkGetDeviceProcAddr(dev, #fn)

static int load_vulkan(VkInstance inst) {
    VK_LOAD(vkCreateInstance); VK_LOAD(vkEnumeratePhysicalDevices);
    VK_LOAD(vkGetPhysicalDeviceProperties); VK_LOAD(vkGetPhysicalDeviceFeatures);
    VK_LOAD(vkCreateDevice);
    VK_LOAD(vkGetDeviceProcAddr); VK_LOAD(vkDestroyInstance);
    VK_LOAD(vkGetPhysicalDeviceMemoryProperties);
    return 1;
}

static int load_vulkan_device(VkInstance inst, VkDevice dev) {
    (void)inst;
    VK_LOAD_DEV(vkDestroyDevice); VK_LOAD_DEV(vkGetDeviceQueue);
    VK_LOAD_DEV(vkQueueSubmit); VK_LOAD_DEV(vkQueueWaitIdle); VK_LOAD_DEV(vkDeviceWaitIdle);
    VK_LOAD_DEV(vkCreateRenderPass); VK_LOAD_DEV(vkDestroyRenderPass);
    VK_LOAD_DEV(vkCreateFramebuffer); VK_LOAD_DEV(vkDestroyFramebuffer);
    VK_LOAD_DEV(vkCreateImageView); VK_LOAD_DEV(vkDestroyImageView);
    VK_LOAD_DEV(vkCreateImage); VK_LOAD_DEV(vkDestroyImage);
    VK_LOAD_DEV(vkGetImageMemoryRequirements); VK_LOAD_DEV(vkAllocateMemory);
    VK_LOAD_DEV(vkFreeMemory); VK_LOAD_DEV(vkBindImageMemory);
    VK_LOAD_DEV(vkCreateBuffer); VK_LOAD_DEV(vkDestroyBuffer);
    VK_LOAD_DEV(vkGetBufferMemoryRequirements); VK_LOAD_DEV(vkBindBufferMemory);
    VK_LOAD_DEV(vkMapMemory); VK_LOAD_DEV(vkUnmapMemory);
    VK_LOAD_DEV(vkCreateCommandPool); VK_LOAD_DEV(vkDestroyCommandPool);
    VK_LOAD_DEV(vkAllocateCommandBuffers); VK_LOAD_DEV(vkFreeCommandBuffers);
    VK_LOAD_DEV(vkBeginCommandBuffer); VK_LOAD_DEV(vkEndCommandBuffer);
    VK_LOAD_DEV(vkCmdBeginRenderPass); VK_LOAD_DEV(vkCmdEndRenderPass);
    VK_LOAD_DEV(vkCmdClearAttachments); VK_LOAD_DEV(vkCmdBindPipeline);
    VK_LOAD_DEV(vkCmdBindVertexBuffers); VK_LOAD_DEV(vkCmdBindIndexBuffer);
    VK_LOAD_DEV(vkCmdDrawIndexed);
    VK_LOAD_DEV(vkCmdBindDescriptorSets);
    VK_LOAD_DEV(vkCmdDraw); VK_LOAD_DEV(vkCmdCopyImageToBuffer);
    VK_LOAD_DEV(vkCmdPipelineBarrier); VK_LOAD_DEV(vkCmdCopyBufferToImage);
    VK_LOAD_DEV(vkCreateShaderModule); VK_LOAD_DEV(vkDestroyShaderModule);
    VK_LOAD_DEV(vkCreatePipelineLayout); VK_LOAD_DEV(vkDestroyPipelineLayout);
    VK_LOAD_DEV(vkCreateGraphicsPipelines); VK_LOAD_DEV(vkDestroyPipeline);
    VK_LOAD_DEV(vkCreateDescriptorSetLayout); VK_LOAD_DEV(vkDestroyDescriptorSetLayout);
    VK_LOAD_DEV(vkCreateDescriptorPool); VK_LOAD_DEV(vkDestroyDescriptorPool);
    VK_LOAD_DEV(vkAllocateDescriptorSets); VK_LOAD_DEV(vkFreeDescriptorSets);
    VK_LOAD_DEV(vkUpdateDescriptorSets);
    VK_LOAD_DEV(vkCreateSampler); VK_LOAD_DEV(vkDestroySampler);
    VK_LOAD_DEV(vkCreateSemaphore); VK_LOAD_DEV(vkDestroySemaphore);
    VK_LOAD_DEV(vkCreateFence); VK_LOAD_DEV(vkDestroyFence);
    VK_LOAD_DEV(vkWaitForFences); VK_LOAD_DEV(vkResetFences);
    VK_LOAD_DEV(vkResetCommandBuffer);
    VK_LOAD_DEV(vkCmdSetViewport);
    VK_LOAD_DEV(vkCmdSetScissor);
    VK_LOAD_DEV(vkCmdPushConstants);
    return 1;
}

#undef VK_LOAD
#undef VK_LOAD_DEV

/* ═══════════════════════════════════════════════════════════════
 *  GLSL → SPIR-V (shaderc runtime compilation)
 * ═══════════════════════════════════════════════════════════════ */

static VkShaderModule compile_glsl(VkDevice dev, const char *source,
                                    shaderc_shader_kind kind, const char *name) {
    shaderc_compiler_t compiler = shaderc_compiler_initialize();
    shaderc_compile_options_t opts = shaderc_compile_options_initialize();
    shaderc_compile_options_set_target_env(opts, shaderc_target_env_vulkan,
                                           shaderc_env_version_vulkan_1_0);
    shaderc_compile_options_set_optimization_level(opts,
                                                   shaderc_optimization_level_performance);
    shaderc_compilation_result_t result =
        shaderc_compile_into_spv(compiler, source, strlen(source), kind,
                                  name, "main", opts);
    int status = shaderc_result_get_compilation_status(result);
    if (status != shaderc_compilation_status_success) {
        fprintf(stderr, "Vulkan: %s shader compile failed:\n%s\n",
                name, shaderc_result_get_error_message(result));
        shaderc_result_release(result);
        shaderc_compile_options_release(opts);
        shaderc_compiler_release(compiler);
        return VK_NULL_HANDLE;
    }
    size_t len = shaderc_result_get_length(result);
    const char *bytes = shaderc_result_get_bytes(result);
    VkShaderModuleCreateInfo ci = { VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO };
    ci.codeSize = len;
    ci.pCode = (const uint32_t *)bytes;
    VkShaderModule mod = VK_NULL_HANDLE;
    pvkCreateShaderModule(dev, &ci, NULL, &mod);
    shaderc_result_release(result);
    shaderc_compile_options_release(opts);
    shaderc_compiler_release(compiler);
    return mod;
}

/* ═══════════════════════════════════════════════════════════════
 *  Shaders — D3D8 fixed-function → Vulkan
 * ═══════════════════════════════════════════════════════════════ */

static const char *VERT_SHADER =
    "#version 450\n"
    "layout(location=0) in vec4 in_pos;       // XYZRHW (D3D screen coords)\n"
    "layout(location=1) in vec4 in_diffuse;   // D3DCOLOR (BGRA)\n"
    "layout(location=2) in vec2 in_texcoord;\n"
    "layout(location=0) out vec4 v_color;\n"
    "layout(location=1) out vec2 v_uv;\n"
    // Push constants — viewport dimensions pushed at dev_BeginScene() so the
    // shader can map D3D screen coords (0..w, 0..h) to Vulkan clip space
    // (-1..1). The viewport state itself can't do this because Vulkan's
    // viewport always maps clip space [-1,1] to its rect.
    "layout(push_constant) uniform PC { vec2 vp_size; } pc;\n"
    "void main() {\n"
    // D3D screen coords have Y pointing down — and so does Vulkan NDC
    // (unlike OpenGL). Both axes map the same way; a GL-style Y flip
    // here renders the whole frame upside down.
    "  vec2 clip = vec2(in_pos.x / pc.vp_size.x * 2.0 - 1.0,\n"
    "                   in_pos.y / pc.vp_size.y * 2.0 - 1.0);\n"
    "  gl_Position = vec4(clip, 0.0, 1.0);\n"
    // in_diffuse is VK_FORMAT_B8G8R8A8_UNORM, which already unpacks the
    // little-endian D3DCOLOR bytes into correct RGBA — no swizzle needed.
    // An extra .bgra here double-swaps and turns orange into blue.
    "  v_color = in_diffuse;\n"
    "  v_uv = in_texcoord;\n"
    "}\n";

// 3D path: canonical 24-byte vertices {vec3 pos, D3DCOLOR, vec2 uv},
// transformed by the fixed-function WORLD*VIEW*PROJECTION product.
// The push constant holds raw D3D row-major WVP bytes; with GLSL's
// column-major load, `M * v` computes exactly D3D's row-vector `v * WVP`.
// D3D projection already puts z in [0,1] (matches Vulkan); only the clip
// Y axis differs, so it is negated.
static const char *VERT_SHADER_3D =
    "#version 450\n"
    "layout(location=0) in vec3 in_pos;\n"
    "layout(location=1) in vec4 in_diffuse;\n"
    "layout(location=2) in vec2 in_texcoord;\n"
    "layout(location=0) out vec4 v_color;\n"
    "layout(location=1) out vec2 v_uv;\n"
    "layout(push_constant) uniform PC { mat4 wvp; } pc;\n"
    "void main() {\n"
    "  vec4 p = pc.wvp * vec4(in_pos, 1.0);\n"
    "  p.y = -p.y;\n"
    "  gl_Position = p;\n"
    "  v_color = in_diffuse;\n"
    "  v_uv = in_texcoord;\n"
    "}\n";

/* 3D uses an alpha test rather than blending: the track's foliage,
 * railings and fences are cutout textures, and with neither test nor
 * blend they fill their whole quad with the transparent texels' colour
 * (solid black bushes). A test keeps them order-independent, which
 * blending would not be for opaque scene geometry. */
static const char *FRAG_SHADER_3D =
    "#version 450\n"
    "layout(location=0) in vec4 v_color;\n"
    "layout(location=1) in vec2 v_uv;\n"
    "layout(binding=0) uniform sampler2D tex0;\n"
    "layout(location=0) out vec4 out_color;\n"
    "void main() {\n"
    "  vec4 tex = texture(tex0, v_uv);\n"
    "  if (tex.a < 0.35) discard;\n"
    "  out_color = vec4((v_color * tex).rgb, 1.0);\n"
    "}\n";

static const char *FRAG_SHADER =
    "#version 450\n"
    "layout(location=0) in vec4 v_color;\n"
    "layout(location=1) in vec2 v_uv;\n"
    "layout(binding=0) uniform sampler2D tex0;\n"
    "layout(location=0) out vec4 out_color;\n"
    "void main() {\n"
    "  vec4 tex = texture(tex0, v_uv);\n"
    "  out_color = v_color * tex;\n"
    "}\n";

/* ═══════════════════════════════════════════════════════════════
 *  Internal Vulkan resource types
 * ═══════════════════════════════════════════════════════════════ */

typedef struct VK_Texture {
    IDirect3DTexture8   iface;
    int                 ref_count;
    VkImage             image;
    VkImageView         view;
    VkDeviceMemory      memory;
    VkSampler           sampler;
    VkDescriptorSet     dset;        // per-texture descriptor set, written once at creation
    int                 width, height;
    bool                locked;
    bool                is_p8;       // D3DFMT_P8 paletted texture
    VkFormat            vkfmt;       // BC1/BC2/BC3 for DXT sources, else BGRA8
    size_t              upload_size; // total staging bytes across every mip level
    int                 mip_levels;  // >1 when the source ships a mip chain
    size_t              mip_off[16]; // staging offset of each level
    uint8_t            *staging;    // host-visible upload buffer (1bpp for P8, else upload_size)
    int                 slot;       // index in g.tex_pool, -1 once removed
} VK_Texture;

typedef struct VK_VB {
    IDirect3DVertexBuffer8 iface;
    int                    ref_count;
    VkBuffer               buffer;      // persistent canonical-vertex GPU buffer
    VkDeviceMemory         memory;
    unsigned int           size;
    unsigned int           fvf;         // from CreateVertexBuffer — drives canonicalization
    unsigned int           canon_count; // vertices in the GPU buffer
    bool                   locked;
    uint8_t               *staging;
    int                    slot;        // index in g.vb_pool, -1 once removed
} VK_VB;

typedef struct VK_IB {
    IDirect3DIndexBuffer8 iface;
    int                   ref_count;
    VkBuffer              buffer;      // persistent 16-bit index GPU buffer
    VkDeviceMemory        memory;
    unsigned int          size;
    bool                  locked;
    uint8_t              *staging;
    int                   slot;        // index in g.ib_pool, -1 once removed
} VK_IB;

typedef struct VK_Surface {
    IDirect3DSurface8   iface;
    int                 ref_count;
    VkImage             image;
    VkImageView         view;
    VkDeviceMemory      memory;
    int                 width, height;
} VK_Surface;

/* ═══════════════════════════════════════════════════════════════
 *  Global Vulkan state
 * ═══════════════════════════════════════════════════════════════ */

#define VK_MAX_TEXTURES 2048
#define VK_MAX_VBS     4096
/* One index buffer per track object: the largest track (AS/M1) has 162
 * sections of ~30 objects each, so 4096 was not enough and its last
 * ~800 objects silently failed to create. */
#define VK_MAX_IBS     8192

static struct {
    IDirect3DDevice8    dev_iface;
    int                 ref_count;

    // Vulkan objects
    VkInstance          inst;
    VkPhysicalDevice    phys;
    VkDevice            dev;
    VkQueue             queue;
    uint32_t            qfam;
    VkRenderPass        rp;
    VkFramebuffer       fb;
    VkImage             rt_image;
    VkImageView         rt_view;
    VkDeviceMemory      rt_mem;
    VkImage             depth_image;
    VkImageView         depth_view;
    VkDeviceMemory      depth_mem;
    VkCommandPool       cmd_pool;
    VkCommandBuffer     cmd;
    VkCommandBuffer     upload_cmd;   // texture uploads — never touches the frame's cmd
    VkFence             fence;
    VkFence             upload_fence;

    // Pipelines: 2D (pre-transformed XYZRHW, no depth) and 3D (world-space
    // XYZ through the fixed-function WORLD*VIEW*PROJECTION, depth-tested).
    VkPipelineLayout    pipe_layout;      // 2D: push constant = viewport vec2
    VkPipeline          pipe;
    VkPipelineLayout    pipe3d_layout;    // 3D: push constant = WVP mat4
    VkPipeline          pipe3d;
    VkDescriptorSetLayout dset_layout;
    VkDescriptorPool    dset_pool;
    VK_Texture         *white_tex;    // 1×1 white — sampled by untextured draws
    VkSampler           default_sampler;
    DWORD               fvf;          // current FVF from SetVertexShader

    // Per-frame vertex arena for user-pointer draws. The frontend emits
    // one quad per character, so the old path performed a VkBuffer +
    // VkDeviceMemory allocation per draw — hundreds per frame, which is
    // exactly what allocators are not built for. Sub-allocate here and
    // reset at Present, which has already waited on the frame fence.
    // (Measured: the menu holds ~60 fps either way on this machine, so
    // this is headroom rather than a fix for an observed stall.)
    VkBuffer            up_buf;
    VkDeviceMemory      up_mem;
    uint8_t            *up_mapped;
    VkDeviceSize        up_size;
    VkDeviceSize        up_off;

    // Readback
    VkBuffer            readback_buf;
    VkDeviceMemory      readback_mem;
    uint8_t            *readback_host;
    int                 width, height;
    bool                in_scene;

    // D3D8 state
    DWORD               rs[256];
    DWORD               tss[4][32];
    D3DMATRIX           transform[512];
    VK_Texture          *textures[4];
    VK_VB               *streams[4];
    unsigned int         stream_strides[4];
    VK_IB               *indices;
    unsigned int         base_vertex;
    D3DVIEWPORT8         viewport;

    // Palette (256 entries, D3DCOLOR = XRGB)
    uint32_t             d3d_palette[256];
    int                  d3d_palette_stage;  // which palette stage was set

    // Pools
    VK_Texture          *tex_pool[VK_MAX_TEXTURES];
    int                  tex_count;
    VK_VB               *vb_pool[VK_MAX_VBS];
    int                  vb_count;
    VK_IB               *ib_pool[VK_MAX_IBS];
    int                  ib_count;
    VK_Surface          *rt_surf;

    bool                 frame_ready;
    uint8_t             *host_frame;
    int                  host_frame_size;

    bool                 initialized;  // true = Vulkan init fully succeeded

    // Deferred temp buffer cleanup (GPU use-after-free prevention).
    // dev_DrawPrimitiveUP creates temp VkBuffers per draw call;
    // they must survive until the GPU finishes executing the command
    // buffer.  We destroy them in dev_Present() after the fence wait.
//
// The menu renderer in fe_menu.c emits one DrawPrimitiveUP per character
// (each is a 6-vertex textured quad from fe_draw_rect). A full menu frame
// (title screen with menu items) easily hits 100–250 calls before
// Present() runs, and a busy main menu with all 5 items + footer pushes
// that past 300. 8192 slots × 6 verts × ~32 bytes = ~1.5 MB of pending
// GPU memory at peak, which is fine for typical Vulkan allocations.
// Going below this and the pool exhausts within 2–3 frames, silently
// dropping draws and leaving the menu unrendered.
    #define VK_MAX_PENDING_BUFS 8192
    VkBuffer             pending_bufs[VK_MAX_PENDING_BUFS];
    VkDeviceMemory       pending_mems[VK_MAX_PENDING_BUFS];
    int                  pending_count;
} g;

/* ═══════════════════════════════════════════════════════════════
 *  Helpers
 * ═══════════════════════════════════════════════════════════════ */

#define VK_CHECK(expr, msg) do { \
    VkResult _r = (expr); \
    if (_r != VK_SUCCESS) { fprintf(stderr, "Vulkan %s: %d\n", msg, _r); return 0; } \
} while(0)

#define VK_CHECK_NULL(expr, msg) do { \
    VkResult _r = (expr); \
    if (_r != VK_SUCCESS) { fprintf(stderr, "Vulkan %s: %d\n", msg, _r); return NULL; } \
} while(0)

#define VK_CHECK_HR(expr, msg) do { \
    VkResult _r = (expr); \
    if (_r != VK_SUCCESS) { fprintf(stderr, "Vulkan %s: %d\n", msg, _r); return E_FAIL; } \
} while(0)

static uint32_t find_memory_type(uint32_t bits, VkMemoryPropertyFlags props) {
    VkPhysicalDeviceMemoryProperties mem;
    pvkGetPhysicalDeviceMemoryProperties(g.phys, &mem);
    for (uint32_t i = 0; i < mem.memoryTypeCount; i++)
        if ((bits & (1u << i)) && (mem.memoryTypes[i].propertyFlags & props) == props)
            return i;
    return ~0u;
}

/* ── FVF-aware vertex canonicalization ───────────────────────────
 * Every draw uses one of two canonical vertex forms:
 *   2D (FVF has XYZRHW): 28B {x,y,z,rhw, D3DCOLOR, u,v} → g.pipe
 *   3D (FVF has XYZ):    24B {x,y,z,     D3DCOLOR, u,v} → g.pipe3d
 * This absorbs every stride the game uses (20B ScreenVert, 28B FEVertex,
 * 36B BGV_Vertex with normals) without one pipeline per layout. Normals
 * are dropped — vertex colors already carry the baked lighting/AO. */

typedef struct {
    int pos_floats;   // 4 = XYZRHW, 3 = XYZ
    int color_off;    // -1 if FVF lacks DIFFUSE (defaults to white)
    int uv_off;       // -1 if FVF lacks TEX coords
    int is3d;
} FVF_Layout;

static FVF_Layout fvf_layout(DWORD fvf) {
    FVF_Layout L;
    L.is3d = (fvf & D3DFVF_XYZRHW) != D3DFVF_XYZRHW;
    L.pos_floats = L.is3d ? 3 : 4;
    int off = L.pos_floats * 4;
    if (fvf & D3DFVF_NORMAL) off += 12;
    if (fvf & D3DFVF_DIFFUSE) { L.color_off = off; off += 4; } else L.color_off = -1;
    L.uv_off = ((fvf >> 8) & 0xF) ? off : -1;   // texture coord set count
    return L;
}

/* Source vertex stride implied by the FVF. */
static UINT fvf_src_stride(DWORD fvf) {
    UINT s = (fvf & D3DFVF_XYZRHW) == D3DFVF_XYZRHW ? 16 : 12;
    if (fvf & D3DFVF_NORMAL)  s += 12;
    if (fvf & D3DFVF_DIFFUSE) s += 4;
    s += ((fvf >> 8) & 0xF) * 8;
    return s;
}

static void fvf_canon(const FVF_Layout *L, const uint8_t *src, uint8_t *dst) {
    memcpy(dst, src, (size_t)L->pos_floats * 4);
    int d = L->pos_floats * 4;
    uint32_t color = 0xFFFFFFFFu;
    if (L->color_off >= 0) memcpy(&color, src + L->color_off, 4);
    memcpy(dst + d, &color, 4); d += 4;
    float uv[2] = {0.0f, 0.0f};
    if (L->uv_off >= 0) memcpy(uv, src + L->uv_off, 8);
    memcpy(dst + d, uv, 8);
}

/* Create a HOST_VISIBLE buffer and leave it mapped just long enough for
 * the caller-provided fill. Used for persistent VB/IB uploads. */
static int host_buffer_create(VkDeviceSize size, VkBufferUsageFlags usage,
                              VkBuffer *out_buf, VkDeviceMemory *out_mem,
                              void **out_mapped) {
    VkBufferCreateInfo bci = { VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO };
    bci.size = size; bci.usage = usage;
    if (pvkCreateBuffer(g.dev, &bci, NULL, out_buf) != VK_SUCCESS) return 0;
    VkMemoryRequirements mr;
    pvkGetBufferMemoryRequirements(g.dev, *out_buf, &mr);
    VkMemoryAllocateInfo mai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_memory_type(mr.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    if (pvkAllocateMemory(g.dev, &mai, NULL, out_mem) != VK_SUCCESS) {
        pvkDestroyBuffer(g.dev, *out_buf, NULL); *out_buf = VK_NULL_HANDLE;
        return 0;
    }
    pvkBindBufferMemory(g.dev, *out_buf, *out_mem, 0);
    pvkMapMemory(g.dev, *out_mem, 0, size, 0, out_mapped);
    return 1;
}

/* ═══════════════════════════════════════════════════════════════
 *  Pipeline creation
 * ═══════════════════════════════════════════════════════════════ */

// Build one graphics pipeline. is3d selects the vertex layout
// (24-byte world-space XYZ vs 28-byte pre-transformed XYZRHW) and
// enables depth test/write; the 2D pipeline ignores depth entirely.
static int build_pipeline(VkShaderModule vs, VkShaderModule fs, int is3d,
                          VkPipelineLayout layout, VkPipeline *out) {
    VkVertexInputBindingDescription vib = {0};
    vib.binding = 0; vib.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
    VkVertexInputAttributeDescription via[3] = {{0}, {0}, {0}};
    if (is3d) {
        vib.stride = 24;  // {vec3 pos, D3DCOLOR, vec2 uv}
        via[0].location = 0; via[0].format = VK_FORMAT_R32G32B32_SFLOAT;    via[0].offset = 0;
        via[1].location = 1; via[1].format = VK_FORMAT_B8G8R8A8_UNORM;      via[1].offset = 12;
        via[2].location = 2; via[2].format = VK_FORMAT_R32G32_SFLOAT;       via[2].offset = 16;
    } else {
        vib.stride = 28;  // {vec4 xyzrhw, D3DCOLOR, vec2 uv}
        via[0].location = 0; via[0].format = VK_FORMAT_R32G32B32A32_SFLOAT; via[0].offset = 0;
        via[1].location = 1; via[1].format = VK_FORMAT_B8G8R8A8_UNORM;      via[1].offset = 16;
        via[2].location = 2; via[2].format = VK_FORMAT_R32G32_SFLOAT;       via[2].offset = 20;
    }

    VkPipelineVertexInputStateCreateInfo vis = { VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO };
    vis.vertexBindingDescriptionCount = 1; vis.pVertexBindingDescriptions = &vib;
    vis.vertexAttributeDescriptionCount = 3; vis.pVertexAttributeDescriptions = via;

    VkPipelineInputAssemblyStateCreateInfo ias = { VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO };
    ias.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    VkPipelineRasterizationStateCreateInfo rs = { VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO };
    rs.polygonMode = VK_POLYGON_MODE_FILL; rs.cullMode = VK_CULL_MODE_NONE;
    rs.frontFace = VK_FRONT_FACE_CLOCKWISE; rs.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo ms = { VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO };
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineDepthStencilStateCreateInfo dss = { VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO };
    int depth_on = is3d && !getenv("B3_VK_NO_DEPTH");
    dss.depthTestEnable = depth_on ? VK_TRUE : VK_FALSE;
    dss.depthWriteEnable = depth_on ? VK_TRUE : VK_FALSE;
    dss.depthCompareOp = VK_COMPARE_OP_LESS_OR_EQUAL;

    VkPipelineColorBlendAttachmentState cba = {0};
    // 3D scene draws run opaque (rw_renderer sets ALPHABLENDENABLE=FALSE;
    // DXT1 punch-through alpha would otherwise cut holes in every building).
    // 2D overlay draws keep src-alpha blending for menu/HUD transparency.
    cba.blendEnable = is3d ? VK_FALSE : VK_TRUE;
    cba.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
    cba.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    cba.colorBlendOp = VK_BLEND_OP_ADD;
    cba.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    cba.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    cba.alphaBlendOp = VK_BLEND_OP_ADD;
    cba.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;

    VkPipelineColorBlendStateCreateInfo cbs = { VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO };
    cbs.attachmentCount = 1; cbs.pAttachments = &cba;

    VkDynamicState dyn[] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR };
    VkPipelineDynamicStateCreateInfo ds = { VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO };
    ds.dynamicStateCount = 2; ds.pDynamicStates = dyn;

    VkPipelineViewportStateCreateInfo vps = { VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO };
    vps.viewportCount = 1; vps.scissorCount = 1;

    VkPipelineShaderStageCreateInfo stages[2] = {{0}, {0}};
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT; stages[0].module = vs; stages[0].pName = "main";
    stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT; stages[1].module = fs; stages[1].pName = "main";

    VkGraphicsPipelineCreateInfo pci = { VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO };
    pci.stageCount = 2; pci.pStages = stages;
    pci.pVertexInputState = &vis; pci.pInputAssemblyState = &ias;
    pci.pRasterizationState = &rs; pci.pMultisampleState = &ms;
    pci.pDepthStencilState = &dss;
    pci.pColorBlendState = &cbs; pci.pDynamicState = &ds;
    pci.pViewportState = &vps; pci.layout = layout;
    pci.renderPass = g.rp; pci.subpass = 0;

    return pvkCreateGraphicsPipelines(g.dev, VK_NULL_HANDLE, 1, &pci, NULL, out)
           == VK_SUCCESS;
}

static int create_pipeline(void) {
    VkShaderModule vs = compile_glsl(g.dev, VERT_SHADER,
                                      shaderc_vertex_shader, "d3d8.vert");
    VkShaderModule vs3d = compile_glsl(g.dev, VERT_SHADER_3D,
                                        shaderc_vertex_shader, "d3d8_3d.vert");
    VkShaderModule fs = compile_glsl(g.dev, FRAG_SHADER,
                                      shaderc_fragment_shader, "d3d8.frag");
    VkShaderModule fs3d = compile_glsl(g.dev, FRAG_SHADER_3D,
                                        shaderc_fragment_shader, "d3d8_3d.frag");
    if (!vs || !vs3d || !fs || !fs3d) return 0;

    // Descriptor set layout: texture at binding 0
    VkDescriptorSetLayoutBinding bind = {0};
    bind.binding = 0; bind.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    bind.descriptorCount = 1; bind.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo dlci = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO };
    dlci.bindingCount = 1; dlci.pBindings = &bind;
    pvkCreateDescriptorSetLayout(g.dev, &dlci, NULL, &g.dset_layout);

    // 2D layout: push constant = viewport size (vec2)
    VkPipelineLayoutCreateInfo plci = { VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO };
    plci.setLayoutCount = 1; plci.pSetLayouts = &g.dset_layout;
    VkPushConstantRange pcr = {0};
    pcr.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
    pcr.offset = 0; pcr.size = sizeof(float) * 2;
    plci.pushConstantRangeCount = 1; plci.pPushConstantRanges = &pcr;
    pvkCreatePipelineLayout(g.dev, &plci, NULL, &g.pipe_layout);

    // 3D layout: push constant = WVP matrix (mat4)
    VkPushConstantRange pcr3d = {0};
    pcr3d.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
    pcr3d.offset = 0; pcr3d.size = sizeof(float) * 16;
    plci.pPushConstantRanges = &pcr3d;
    pvkCreatePipelineLayout(g.dev, &plci, NULL, &g.pipe3d_layout);

    int ok = build_pipeline(vs, fs, 0, g.pipe_layout, &g.pipe) &&
             build_pipeline(vs3d, fs3d, 1, g.pipe3d_layout, &g.pipe3d);

    pvkDestroyShaderModule(g.dev, vs, NULL);
    pvkDestroyShaderModule(g.dev, vs3d, NULL);
    pvkDestroyShaderModule(g.dev, fs, NULL);
    pvkDestroyShaderModule(g.dev, fs3d, NULL);
    return ok;
}

/* ═══════════════════════════════════════════════════════════════
 *  Render pass + framebuffer creation
 * ═══════════════════════════════════════════════════════════════ */

static int create_render_target(int w, int h) {
    VkImageCreateInfo ici = { VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
    ici.imageType = VK_IMAGE_TYPE_2D; ici.format = VK_FORMAT_B8G8R8A8_UNORM;
    ici.extent = (VkExtent3D){ (uint32_t)w, (uint32_t)h, 1 };
    ici.mipLevels = 1; ici.arrayLayers = 1; ici.samples = VK_SAMPLE_COUNT_1_BIT;
    ici.tiling = VK_IMAGE_TILING_OPTIMAL;
    ici.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    ici.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VK_CHECK(pvkCreateImage(g.dev, &ici, NULL, &g.rt_image), "Create RT image");

    VkMemoryRequirements mr;
    pvkGetImageMemoryRequirements(g.dev, g.rt_image, &mr);
    VkMemoryAllocateInfo mai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_memory_type(mr.memoryTypeBits,
        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    VK_CHECK(pvkAllocateMemory(g.dev, &mai, NULL, &g.rt_mem), "Alloc RT mem");
    VK_CHECK(pvkBindImageMemory(g.dev, g.rt_image, g.rt_mem, 0), "Bind RT mem");

    VkImageViewCreateInfo vci = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
    vci.image = g.rt_image; vci.viewType = VK_IMAGE_VIEW_TYPE_2D;
    vci.format = VK_FORMAT_B8G8R8A8_UNORM;
    vci.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    vci.subresourceRange.levelCount = 1; vci.subresourceRange.layerCount = 1;
    VK_CHECK(pvkCreateImageView(g.dev, &vci, NULL, &g.rt_view), "Create RT view");

    // Depth buffer (D32) — the 3D pipeline needs Z; the 2D pipeline ignores it.
    VkImageCreateInfo dici = ici;
    dici.format = VK_FORMAT_D32_SFLOAT;
    dici.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
    VK_CHECK(pvkCreateImage(g.dev, &dici, NULL, &g.depth_image), "Create depth image");
    pvkGetImageMemoryRequirements(g.dev, g.depth_image, &mr);
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_memory_type(mr.memoryTypeBits,
        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    VK_CHECK(pvkAllocateMemory(g.dev, &mai, NULL, &g.depth_mem), "Alloc depth mem");
    VK_CHECK(pvkBindImageMemory(g.dev, g.depth_image, g.depth_mem, 0), "Bind depth mem");
    VkImageViewCreateInfo dvci = vci;
    dvci.image = g.depth_image; dvci.format = VK_FORMAT_D32_SFLOAT;
    dvci.subresourceRange.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
    VK_CHECK(pvkCreateImageView(g.dev, &dvci, NULL, &g.depth_view), "Create depth view");

    // Render pass: color + depth
    VkAttachmentDescription atts[2] = {{0}, {0}};
    atts[0].format = VK_FORMAT_B8G8R8A8_UNORM; atts[0].samples = VK_SAMPLE_COUNT_1_BIT;
    atts[0].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR; atts[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    atts[0].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    atts[0].finalLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    atts[1].format = VK_FORMAT_D32_SFLOAT; atts[1].samples = VK_SAMPLE_COUNT_1_BIT;
    atts[1].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR; atts[1].storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    atts[1].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    atts[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkAttachmentReference ref = {0}; ref.attachment = 0;
    ref.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    VkAttachmentReference dref = {0}; dref.attachment = 1;
    dref.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkSubpassDescription sp = {0};
    sp.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    sp.colorAttachmentCount = 1; sp.pColorAttachments = &ref;
    sp.pDepthStencilAttachment = &dref;

    VkRenderPassCreateInfo rpi = { VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO };
    rpi.attachmentCount = 2; rpi.pAttachments = atts;
    rpi.subpassCount = 1; rpi.pSubpasses = &sp;
    VK_CHECK(pvkCreateRenderPass(g.dev, &rpi, NULL, &g.rp), "Create RP");

    VkImageView fb_views[2] = { g.rt_view, g.depth_view };
    VkFramebufferCreateInfo fci = { VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO };
    fci.renderPass = g.rp; fci.attachmentCount = 2; fci.pAttachments = fb_views;
    fci.width = (uint32_t)w; fci.height = (uint32_t)h; fci.layers = 1;
    VK_CHECK(pvkCreateFramebuffer(g.dev, &fci, NULL, &g.fb), "Create FB");

    // Default sampler
    VkSamplerCreateInfo sci = { VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO };
    sci.magFilter = VK_FILTER_LINEAR; sci.minFilter = VK_FILTER_LINEAR;
    sci.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sci.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    pvkCreateSampler(g.dev, &sci, NULL, &g.default_sampler);

    // Readback buffer
    VkBufferCreateInfo bci = { VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO };
    bci.size = (VkDeviceSize)w * h * 4;
    bci.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT;
    VK_CHECK(pvkCreateBuffer(g.dev, &bci, NULL, &g.readback_buf), "Create readback buf");
    pvkGetBufferMemoryRequirements(g.dev, g.readback_buf, &mr);
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_memory_type(mr.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    VK_CHECK(pvkAllocateMemory(g.dev, &mai, NULL, &g.readback_mem), "Alloc readback mem");
    VK_CHECK(pvkBindBufferMemory(g.dev, g.readback_buf, g.readback_mem, 0), "Bind readback");
    pvkMapMemory(g.dev, g.readback_mem, 0, bci.size, 0, (void**)&g.readback_host);

    g.width = w; g.height = h;
    g.host_frame_size = w * h * 4;
    g.host_frame = malloc((size_t)g.host_frame_size);
    return 1;
}

/* ═══════════════════════════════════════════════════════════════
 *  D3D8 COM vtable: Texture
 * ═══════════════════════════════════════════════════════════════ */

static HRESULT STDCALL vtex_QI(IDirect3DTexture8 *s, const IID *i, void **p)
    { (void)s;(void)i;(void)p; return E_NOINTERFACE; }
/* Reclaim a pool slot on Release. The pools used to be append-only: an
 * object's slot was never returned and the entry was left dangling, so
 * every track change burned ~1700 vertex- and index-buffer slots and the
 * third track in a session got E_OUTOFMEMORY for every mesh it tried to
 * create — which surfaces as a track that loads its geometry and then
 * renders nothing. Swap-remove keeps the arrays dense; the moved entry is
 * told its new index. */
#define VK_POOL_REMOVE(pool, count, obj, type)                          \
    do {                                                                \
        int _s = (obj)->slot;                                           \
        if (_s >= 0 && _s < (count) && (pool)[_s] == (obj)) {           \
            type *_last = (pool)[--(count)];                            \
            (pool)[_s] = _last;                                         \
            _last->slot = _s;                                           \
            (obj)->slot = -1;                                           \
        }                                                               \
    } while (0)

static ULONG   STDCALL vtex_AddRef(IDirect3DTexture8 *s)
    { return (ULONG)++((VK_Texture*)s)->ref_count; }
static ULONG   STDCALL vtex_Release(IDirect3DTexture8 *s) {
    VK_Texture *t = (VK_Texture*)s;
    if (--t->ref_count==0) {
        VK_POOL_REMOVE(g.tex_pool, g.tex_count, t, VK_Texture);
        if (t->dset) pvkFreeDescriptorSets(g.dev, g.dset_pool, 1, &t->dset);
        pvkDestroySampler(g.dev, t->sampler, NULL);
        pvkDestroyImageView(g.dev, t->view, NULL);
        pvkDestroyImage(g.dev, t->image, NULL);
        pvkFreeMemory(g.dev, t->memory, NULL);
        free(t->staging); free(t); return 0;
    } return (ULONG)t->ref_count;
}
static HRESULT STDCALL vtex_GetDevice(IDirect3DTexture8 *s, IDirect3DDevice8 **d)
    { *d=&g.dev_iface; (void)s; return S_OK; }
static DWORD STDCALL vtex_SetPriority(IDirect3DTexture8 *s, DWORD p) { (void)s; return p; }
static DWORD STDCALL vtex_GetPriority(IDirect3DTexture8 *s) { (void)s; return 0; }
static void  STDCALL vtex_PreLoad(IDirect3DTexture8 *s) { (void)s; }
static DWORD STDCALL vtex_GetType(IDirect3DTexture8 *s) { (void)s; return 0; }
static DWORD STDCALL vtex_GetLevelCount(IDirect3DTexture8 *s) { return 1; }
static HRESULT STDCALL vtex_GetLevelDesc(IDirect3DTexture8 *s, UINT lv, D3DSURFACE_DESC *d) {
    VK_Texture *t=(VK_Texture*)s; d->Format=D3DFMT_A8R8G8B8; d->Width=(UINT)t->width; d->Height=(UINT)t->height; (void)lv; return S_OK;
}
static HRESULT STDCALL vtex_GetSurfaceLevel(IDirect3DTexture8 *s, UINT lv, IDirect3DSurface8 **p)
    { (void)s;(void)lv;(void)p; return E_NOTIMPL; }
static HRESULT STDCALL vtex_LockRect(IDirect3DTexture8 *s, UINT lv, D3DLOCKED_RECT *lr, const RECT *r, DWORD f) {
    VK_Texture *t=(VK_Texture*)s; if(t->locked)return E_FAIL;
    if ((int)lv >= t->mip_levels) return E_FAIL;
    t->locked=true;
    int lw = t->width >> lv, lh = t->height >> lv;
    if (lw < 1) lw = 1;
    if (lh < 1) lh = 1;
    (void)lh;
    if (t->is_p8)
        lr->Pitch = lw;
    else if (t->vkfmt != VK_FORMAT_B8G8R8A8_UNORM)   // block-compressed
        lr->Pitch = (int)(((lw + 3) / 4) *
                          (t->vkfmt == VK_FORMAT_BC1_RGBA_UNORM_BLOCK ? 8 : 16));
    else
        lr->Pitch = lw * 4;
    lr->pBits = t->staging + t->mip_off[lv]; (void)r;(void)f; return S_OK;
}
static HRESULT STDCALL vtex_UnlockRect(IDirect3DTexture8 *s, UINT lv) {
    VK_Texture *t=(VK_Texture*)s; t->locked=false; (void)lv;

    // For P8 textures, expand palette indices → RGBA8 in-place.
    // Replace t->staging (1bpp indices) with a 4bpp RGBA buffer.
    if (t->is_p8) {
        int px = t->width * t->height;
        uint8_t *rgba = malloc((size_t)px * 4);
        if (rgba) {
            for (int i = 0; i < px; i++) {
                uint8_t idx = t->staging[i];
                uint32_t c = g.d3d_palette[idx];
                // D3DCOLOR is ARGB → BGRA (Vulkan) with A=255
                rgba[i*4 + 0] = (uint8_t)((c      ) & 0xFF);  // B
                rgba[i*4 + 1] = (uint8_t)((c >>  8) & 0xFF);  // G
                rgba[i*4 + 2] = (uint8_t)((c >> 16) & 0xFF);  // R
                rgba[i*4 + 3] = 0xFF;                          // A
            }
        }
        if (!rgba) {
            fprintf(stderr, "Vulkan: OOM expanding P8 texture %dx%d\n",
                    t->width, t->height);
            return E_OUTOFMEMORY;
        }
        free(t->staging);
        t->staging = rgba;
    }

    // Upload staging → GPU on the dedicated upload command buffer.
    // Never touch g.cmd here: a texture created mid-scene (between
    // BeginScene and Present) would otherwise destroy the frame's
    // in-progress render pass recording.
    VkCommandBufferBeginInfo bi={VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    pvkResetCommandBuffer(g.upload_cmd,0);
    pvkBeginCommandBuffer(g.upload_cmd,&bi);
    VkImageMemoryBarrier b={VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    b.oldLayout=VK_IMAGE_LAYOUT_UNDEFINED; b.newLayout=VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    b.srcQueueFamilyIndex=VK_QUEUE_FAMILY_IGNORED; b.dstQueueFamilyIndex=VK_QUEUE_FAMILY_IGNORED;
    b.image=t->image; b.subresourceRange.aspectMask=VK_IMAGE_ASPECT_COLOR_BIT;
    b.subresourceRange.levelCount=(uint32_t)t->mip_levels; b.subresourceRange.layerCount=1;
    b.srcAccessMask=0; b.dstAccessMask=VK_ACCESS_TRANSFER_WRITE_BIT;
    pvkCmdPipelineBarrier(g.upload_cmd,VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,VK_PIPELINE_STAGE_TRANSFER_BIT,0,0,NULL,0,NULL,1,&b);
    /* One copy region per mip level; the staging buffer holds the whole
     * chain back-to-back at t->mip_off[]. */
    VkBufferImageCopy copies[16];
    for (int i = 0; i < t->mip_levels; i++) {
        int lw = t->width >> i, lh = t->height >> i;
        if (lw < 1) lw = 1;
        if (lh < 1) lh = 1;
        memset(&copies[i], 0, sizeof(copies[i]));
        copies[i].bufferOffset = (VkDeviceSize)t->mip_off[i];
        copies[i].imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        copies[i].imageSubresource.mipLevel = (uint32_t)i;
        copies[i].imageSubresource.layerCount = 1;
        copies[i].imageExtent = (VkExtent3D){(uint32_t)lw, (uint32_t)lh, 1};
    }
    // Create staging buffer for texture upload
    VkBufferCreateInfo sbci={VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    sbci.size=(VkDeviceSize)t->upload_size;
    sbci.usage=VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    VkBuffer stage_buf; VkDeviceMemory stage_mem;
    pvkCreateBuffer(g.dev,&sbci,NULL,&stage_buf);
    VkMemoryRequirements smr;
    pvkGetBufferMemoryRequirements(g.dev,stage_buf,&smr);
    VkMemoryAllocateInfo smai={VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    smai.allocationSize=smr.size;
    smai.memoryTypeIndex=find_memory_type(smr.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    pvkAllocateMemory(g.dev,&smai,NULL,&stage_mem);
    pvkBindBufferMemory(g.dev,stage_buf,stage_mem,0);
    void *smapped; pvkMapMemory(g.dev,stage_mem,0,sbci.size,0,&smapped);
    memcpy(smapped,t->staging,t->upload_size);
    pvkUnmapMemory(g.dev,stage_mem);
    pvkCmdCopyBufferToImage(g.upload_cmd,stage_buf,t->image,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,(uint32_t)t->mip_levels,copies);
    b.oldLayout=VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL; b.newLayout=VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    b.srcAccessMask=VK_ACCESS_TRANSFER_WRITE_BIT; b.dstAccessMask=VK_ACCESS_SHADER_READ_BIT;
    pvkCmdPipelineBarrier(g.upload_cmd,VK_PIPELINE_STAGE_TRANSFER_BIT,VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,0,0,NULL,0,NULL,1,&b);
    pvkEndCommandBuffer(g.upload_cmd);
    VkSubmitInfo si={VK_STRUCTURE_TYPE_SUBMIT_INFO}; si.commandBufferCount=1; si.pCommandBuffers=&g.upload_cmd;
    pvkQueueSubmit(g.queue,1,&si,g.upload_fence);
    pvkWaitForFences(g.dev,1,&g.upload_fence,VK_TRUE,UINT64_MAX);
    pvkResetFences(g.dev,1,&g.upload_fence);
    // Destroy staging buffer after upload completes
    pvkDestroyBuffer(g.dev,stage_buf,NULL);
    pvkFreeMemory(g.dev,stage_mem,NULL);
    return S_OK;
}

static const IDirect3DTexture8Vtbl g_vtex_vtbl = {
    vtex_QI,vtex_AddRef,vtex_Release,vtex_GetDevice,vtex_SetPriority,vtex_GetPriority,
    vtex_PreLoad,vtex_GetType,vtex_GetLevelCount,vtex_GetLevelDesc,vtex_GetSurfaceLevel,
    vtex_LockRect,vtex_UnlockRect,
};

/* ═══════════════════════════════════════════════════════════════
 *  D3D8 COM vtable: VertexBuffer / IndexBuffer / Surface (minimal)
 * ═══════════════════════════════════════════════════════════════ */

// These are minimal stubs — the game uses DrawPrimitiveUP (user-pointer),
// not DrawPrimitive with bound buffers.

static HRESULT STDCALL vvb_QI(IDirect3DVertexBuffer8 *s, const IID *i, void **p)
    { (void)s;(void)i;(void)p; return E_NOINTERFACE; }
static ULONG   STDCALL vvb_AddRef(IDirect3DVertexBuffer8 *s) { return (ULONG)++((VK_VB*)s)->ref_count; }
static ULONG   STDCALL vvb_Release(IDirect3DVertexBuffer8 *s) {
    VK_VB *v=(VK_VB*)s;
    if(--v->ref_count==0){
        VK_POOL_REMOVE(g.vb_pool, g.vb_count, v, VK_VB);
        pvkDestroyBuffer(g.dev,v->buffer,NULL);pvkFreeMemory(g.dev,v->memory,NULL);
        free(v->staging);free(v);return 0;
    }
    return (ULONG)v->ref_count;
}
static HRESULT STDCALL vvb_GetDevice(IDirect3DVertexBuffer8 *s, IDirect3DDevice8 **d) { *d=&g.dev_iface;(void)s;return S_OK;}
static DWORD STDCALL vvb_SetPriority(IDirect3DVertexBuffer8 *s, DWORD p){(void)s;return p;}
static DWORD STDCALL vvb_GetPriority(IDirect3DVertexBuffer8 *s){(void)s;return 0;}
static void  STDCALL vvb_PreLoad(IDirect3DVertexBuffer8 *s){(void)s;}
static DWORD STDCALL vvb_GetType(IDirect3DVertexBuffer8 *s){(void)s;return 0;}
static HRESULT STDCALL vvb_Lock(IDirect3DVertexBuffer8 *s, UINT off, UINT sz, BYTE **d, DWORD f)
    { VK_VB *v=(VK_VB*)s; if(v->locked)return E_FAIL; v->locked=true; *d=v->staging+off; (void)sz;(void)f; return S_OK; }
static HRESULT STDCALL vvb_Unlock(IDirect3DVertexBuffer8 *s) {
    VK_VB *v=(VK_VB*)s; v->locked=false;
    // Canonicalize the freshly written vertices into a persistent GPU
    // buffer so DrawIndexedPrimitive is a plain vkCmdDrawIndexed — the
    // per-draw CPU expansion path ran a whole track at ~1.7 fps.
    UINT sstride = fvf_src_stride(v->fvf);
    if (!sstride || v->size < sstride) return S_OK;
    FVF_Layout L = fvf_layout(v->fvf);
    UINT count = v->size / sstride;
    UINT cstride = L.is3d ? 24 : 28;

    if (v->buffer) {  // re-lock: replace contents (sizes here never change)
        pvkDestroyBuffer(g.dev, v->buffer, NULL);
        pvkFreeMemory(g.dev, v->memory, NULL);
        v->buffer = VK_NULL_HANDLE; v->memory = VK_NULL_HANDLE;
    }
    void *mapped = NULL;
    if (!host_buffer_create((VkDeviceSize)count * cstride,
                            VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                            &v->buffer, &v->memory, &mapped))
        return S_OK;  // CPU fallback path still works
    for (UINT i = 0; i < count; i++)
        fvf_canon(&L, v->staging + (size_t)i * sstride,
                  (uint8_t *)mapped + (size_t)i * cstride);
    pvkUnmapMemory(g.dev, v->memory);
    v->canon_count = count;
    return S_OK;
}
static HRESULT STDCALL vvb_GetDesc(IDirect3DVertexBuffer8 *s, void *d){(void)s;(void)d;return S_OK;}

static const IDirect3DVertexBuffer8Vtbl g_vvb_vtbl = {
    vvb_QI,vvb_AddRef,vvb_Release,vvb_GetDevice,vvb_SetPriority,vvb_GetPriority,
    vvb_PreLoad,vvb_GetType,vvb_Lock,vvb_Unlock,vvb_GetDesc,
};

// IndexBuffer — identical pattern, minimal
static HRESULT STDCALL vib_QI(IDirect3DIndexBuffer8 *s, const IID *i, void **p)
    {(void)s;(void)i;(void)p;return E_NOINTERFACE;}
static ULONG STDCALL vib_AddRef(IDirect3DIndexBuffer8 *s){return(ULONG)++((VK_IB*)s)->ref_count;}
static ULONG STDCALL vib_Release(IDirect3DIndexBuffer8 *s){
    VK_IB *ib=(VK_IB*)s;
    if(--ib->ref_count==0){
        VK_POOL_REMOVE(g.ib_pool, g.ib_count, ib, VK_IB);
        pvkDestroyBuffer(g.dev,ib->buffer,NULL);pvkFreeMemory(g.dev,ib->memory,NULL);
        free(ib->staging);free(ib);return 0;
    }
    return(ULONG)ib->ref_count;}
static HRESULT STDCALL vib_GetDevice(IDirect3DIndexBuffer8*s,IDirect3DDevice8**d){*d=&g.dev_iface;(void)s;return S_OK;}
static DWORD STDCALL vib_SetPriority(IDirect3DIndexBuffer8*s,DWORD p){(void)s;return p;}
static DWORD STDCALL vib_GetPriority(IDirect3DIndexBuffer8*s){(void)s;return 0;}
static void STDCALL vib_PreLoad(IDirect3DIndexBuffer8*s){(void)s;}
static DWORD STDCALL vib_GetType(IDirect3DIndexBuffer8*s){(void)s;return 0;}
static HRESULT STDCALL vib_Lock(IDirect3DIndexBuffer8*s,UINT off,UINT sz,BYTE**d,DWORD f)
    {VK_IB*ib=(VK_IB*)s;if(ib->locked)return E_FAIL;ib->locked=true;*d=ib->staging+off;(void)sz;(void)f;return S_OK;}
static HRESULT STDCALL vib_Unlock(IDirect3DIndexBuffer8*s){
    VK_IB *ib=(VK_IB*)s; ib->locked=false;
    if (ib->buffer) {
        pvkDestroyBuffer(g.dev, ib->buffer, NULL);
        pvkFreeMemory(g.dev, ib->memory, NULL);
        ib->buffer = VK_NULL_HANDLE; ib->memory = VK_NULL_HANDLE;
    }
    void *mapped = NULL;
    if (!host_buffer_create(ib->size, VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
                            &ib->buffer, &ib->memory, &mapped))
        return S_OK;
    memcpy(mapped, ib->staging, ib->size);
    pvkUnmapMemory(g.dev, ib->memory);
    return S_OK;
}
static HRESULT STDCALL vib_GetDesc(IDirect3DIndexBuffer8*s,void*d){(void)s;(void)d;return S_OK;}

static const IDirect3DIndexBuffer8Vtbl g_vib_vtbl = {
    vib_QI,vib_AddRef,vib_Release,vib_GetDevice,vib_SetPriority,vib_GetPriority,
    vib_PreLoad,vib_GetType,vib_Lock,vib_Unlock,vib_GetDesc,
};

// Surface — minimal (for render targets)
static HRESULT STDCALL vsurf_QI(IDirect3DSurface8*s,const IID*i,void**p){(void)s;(void)i;(void)p;return E_NOINTERFACE;}
static ULONG STDCALL vsurf_AddRef(IDirect3DSurface8*s){return(ULONG)++((VK_Surface*)s)->ref_count;}
static ULONG STDCALL vsurf_Release(IDirect3DSurface8*s){
    VK_Surface*sf=(VK_Surface*)s;if(--sf->ref_count==0){pvkDestroyImageView(g.dev,sf->view,NULL);pvkDestroyImage(g.dev,sf->image,NULL);pvkFreeMemory(g.dev,sf->memory,NULL);free(sf);return 0;}return(ULONG)sf->ref_count;}
static HRESULT STDCALL vsurf_GetDevice(IDirect3DSurface8*s,IDirect3DDevice8**d){*d=&g.dev_iface;(void)s;return S_OK;}
static HRESULT STDCALL vsurf_GetDesc(IDirect3DSurface8*s,D3DSURFACE_DESC*d){VK_Surface*sf=(VK_Surface*)s;d->Format=D3DFMT_A8R8G8B8;d->Width=(UINT)sf->width;d->Height=(UINT)sf->height;return S_OK;}

static const IDirect3DSurface8Vtbl g_vsurf_vtbl = {
    vsurf_QI,vsurf_AddRef,vsurf_Release,vsurf_GetDevice,vsurf_GetDesc,NULL,NULL,
};

/* ═══════════════════════════════════════════════════════════════
 *  D3D8 Device vtable
 * ═══════════════════════════════════════════════════════════════ */

static HRESULT STDCALL dev_QI(IDirect3DDevice8*s,const IID*i,void**p){(void)s;(void)i;(void)p;return E_NOINTERFACE;}
static ULONG   STDCALL dev_AddRef(IDirect3DDevice8*s){(void)s;return(ULONG)++g.ref_count;}
static ULONG   STDCALL dev_Release(IDirect3DDevice8*s){(void)s;return(ULONG)--g.ref_count;}
static HRESULT STDCALL dev_GetDirect3D(IDirect3DDevice8*s,IDirect3D8**p){(void)s;(void)p;return E_NOTIMPL;}
static HRESULT STDCALL dev_GetDeviceCaps(IDirect3DDevice8*s,void*p){(void)s;(void)p;return S_OK;}
static HRESULT STDCALL dev_GetDisplayMode(IDirect3DDevice8*s,void*p){(void)s;(void)p;return S_OK;}
static HRESULT STDCALL dev_GetCreationParameters(IDirect3DDevice8*s,void*p){(void)s;(void)p;return S_OK;}
static HRESULT STDCALL dev_Reset(IDirect3DDevice8*s,D3DPRESENT_PARAMETERS*p){(void)s;(void)p;return S_OK;}

static HRESULT STDCALL dev_Present(IDirect3DDevice8*s,const RECT*sr,const RECT*ds,HWND w,void*dd) {
    (void)s;(void)sr;(void)ds;(void)w;(void)dd;
    if (!g.in_scene) return S_OK;

    // End render pass
    pvkCmdEndRenderPass(g.cmd);
    pvkEndCommandBuffer(g.cmd);

    // Submit
    VkSubmitInfo si = { VK_STRUCTURE_TYPE_SUBMIT_INFO };
    si.commandBufferCount = 1; si.pCommandBuffers = &g.cmd;
    pvkQueueSubmit(g.queue, 1, &si, g.fence);

    // Wait for GPU
    pvkWaitForFences(g.dev, 1, &g.fence, VK_TRUE, UINT64_MAX);

    // Copy render target → readback buffer → host memory
    VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
    pvkResetCommandBuffer(g.cmd, 0);
    pvkBeginCommandBuffer(g.cmd, &bi);
    VkImageMemoryBarrier barrier = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
    barrier.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    barrier.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = g.rt_image;
    barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.levelCount = 1; barrier.subresourceRange.layerCount = 1;
    barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    pvkCmdPipelineBarrier(g.cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
        VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, NULL, 0, NULL, 1, &barrier);
    VkBufferImageCopy region = {0};
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1;
    region.imageExtent = (VkExtent3D){(uint32_t)g.width, (uint32_t)g.height, 1};
    pvkCmdCopyImageToBuffer(g.cmd, g.rt_image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
        g.readback_buf, 1, &region);
    pvkEndCommandBuffer(g.cmd);

    VkSubmitInfo si2 = { VK_STRUCTURE_TYPE_SUBMIT_INFO };
    si2.commandBufferCount = 1; si2.pCommandBuffers = &g.cmd;
    pvkQueueSubmit(g.queue, 1, &si2, g.upload_fence);
    pvkWaitForFences(g.dev, 1, &g.upload_fence, VK_TRUE, UINT64_MAX);

    // Copy readback buffer → host frame (BGRA → RGBA swap)
    memcpy(g.host_frame, g.readback_host, (size_t)g.host_frame_size);
    // Swap R/B channels: BGRA → RGBA
    for (int i = 0; i < g.width * g.height; i++) {
        uint8_t b = g.host_frame[i*4];
        g.host_frame[i*4  ] = g.host_frame[i*4+2];
        g.host_frame[i*4+2] = b;
    }

    pvkResetFences(g.dev, 1, &g.upload_fence);
    pvkResetFences(g.dev, 1, &g.fence);

    g.frame_ready = true;
    g.in_scene = false;
    g.up_off = 0;   // GPU is done with this frame's arena (fence waited above)

    // Destroy pending temp buffers from this frame's draw calls.
    // Done after the GPU fence wait so the GPU is done with them.
    for (int i = 0; i < g.pending_count; i++) {
        pvkDestroyBuffer(g.dev, g.pending_bufs[i], NULL);
        pvkFreeMemory(g.dev, g.pending_mems[i], NULL);
    }
    g.pending_count = 0;

    return S_OK;
}

static HRESULT STDCALL dev_GetBackBuffer(IDirect3DDevice8*s,INT i,DWORD t,IDirect3DSurface8**p)
    {(void)s;(void)i;(void)t;(void)p;return E_NOTIMPL;}

static HRESULT STDCALL dev_BeginScene(IDirect3DDevice8*s) {
    (void)s;
    // Begin command buffer + render pass
    VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
    pvkResetCommandBuffer(g.cmd, 0);
    pvkBeginCommandBuffer(g.cmd, &bi);
    VkClearValue cv[2];
    cv[0].color = (VkClearColorValue){{0.2f, 0.2f, 0.25f, 1.0f}};
    cv[1].depthStencil = (VkClearDepthStencilValue){1.0f, 0};
    VkRenderPassBeginInfo rbi = { VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO };
    rbi.renderPass = g.rp; rbi.framebuffer = g.fb;
    rbi.renderArea.extent = (VkExtent2D){(uint32_t)g.width, (uint32_t)g.height};
    rbi.clearValueCount = 2; rbi.pClearValues = cv;
    pvkCmdBeginRenderPass(g.cmd, &rbi, VK_SUBPASS_CONTENTS_INLINE);

    // Set viewport + scissor
    VkViewport vp = {0, 0, (float)g.width, (float)g.height, 0.0f, 1.0f};
    VkRect2D sc = {{0,0},{(uint32_t)g.width,(uint32_t)g.height}};
    pvkCmdBindPipeline(g.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, g.pipe);
    pvkCmdSetViewport(g.cmd, 0, 1, &vp);
    pvkCmdSetScissor(g.cmd, 0, 1, &sc);

    // Push viewport size so the vertex shader can map D3D screen coords
    // (0..w, 0..h) to Vulkan clip space.
    float vp_size[2] = { (float)g.width, (float)g.height };
    pvkCmdPushConstants(g.cmd, g.pipe_layout, VK_SHADER_STAGE_VERTEX_BIT,
                        0, sizeof(vp_size), vp_size);

    // Bind the white default so a draw that never sets a texture still has
    // a valid descriptor. dev_DrawPrimitiveUP rebinds per draw.
    if (g.white_tex) pvkCmdBindDescriptorSets(g.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS,
        g.pipe_layout, 0, 1, &g.white_tex->dset, 0, NULL);

    g.in_scene = true;
    return S_OK;
}
static HRESULT STDCALL dev_EndScene(IDirect3DDevice8*s) { (void)s; return S_OK; }

static HRESULT STDCALL dev_Clear(IDirect3DDevice8*s,DWORD n,const D3DRECT*r,DWORD f,D3DCOLOR c,float z,DWORD st) {
    (void)s;(void)n;(void)r;(void)f;(void)z;(void)st;
    if (g.in_scene) {
        VkClearAttachment ca[2] = {{0}, {0}};
        ca[0].aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        float rv = ((c>>16)&0xFF)/255.0f, gv=((c>>8)&0xFF)/255.0f, bv=(c&0xFF)/255.0f, av=((c>>24)&0xFF)/255.0f;
        ca[0].clearValue.color = (VkClearColorValue){{rv,gv,bv,av}};
        ca[1].aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
        ca[1].clearValue.depthStencil = (VkClearDepthStencilValue){z, 0};
        VkClearRect cr = {{{0,0},{(uint32_t)g.width,(uint32_t)g.height}},0,1};
        pvkCmdClearAttachments(g.cmd,2,ca,1,&cr);
    }
    return S_OK;
}

// Transforms
static HRESULT STDCALL dev_SetTransform(IDirect3DDevice8*s,D3DTRANSFORMSTATETYPE st,const D3DMATRIX*m)
    {(void)s;if((DWORD)st<512&&m)memcpy(&g.transform[st],m,sizeof(D3DMATRIX));return S_OK;}
static HRESULT STDCALL dev_GetTransform(IDirect3DDevice8*s,D3DTRANSFORMSTATETYPE st,D3DMATRIX*m)
    {(void)s;if((DWORD)st<512&&m)memcpy(m,&g.transform[st],sizeof(D3DMATRIX));return S_OK;}

// Render states
static HRESULT STDCALL dev_SetRenderState(IDirect3DDevice8*s,D3DRENDERSTATETYPE st,DWORD v)
    {(void)s;if((DWORD)st<256)g.rs[st]=v;return S_OK;}
static HRESULT STDCALL dev_GetRenderState(IDirect3DDevice8*s,D3DRENDERSTATETYPE st,DWORD*v)
    {(void)s;if((DWORD)st<256&&v)*v=g.rs[st];return S_OK;}

// Texture stage states
static HRESULT STDCALL dev_SetTextureStageState(IDirect3DDevice8*s,DWORD stage,D3DTEXTURESTAGESTATETYPE t,DWORD v)
    {(void)s;if(stage<4&&(DWORD)t<32)g.tss[stage][t]=v;return S_OK;}
static HRESULT STDCALL dev_GetTextureStageState(IDirect3DDevice8*s,DWORD stage,D3DTEXTURESTAGESTATETYPE t,DWORD*v)
    {(void)s;if(stage<4&&(DWORD)t<32&&v)*v=g.tss[stage][t];return S_OK;}

// Textures
static HRESULT STDCALL dev_SetTexture(IDirect3DDevice8*s,DWORD stage,IDirect3DBaseTexture8*tex) {
    // Just record the binding. Each texture carries its own descriptor set
    // (written once at creation); dev_DrawPrimitiveUP binds it per draw.
    // Updating a shared descriptor set here while the frame's command
    // buffer is recording is invalid Vulkan and made every draw sample
    // whichever texture happened to be set last.
    (void)s;if(stage<4)g.textures[stage]=(VK_Texture*)tex;
    return S_OK;
}
static HRESULT STDCALL dev_GetTexture(IDirect3DDevice8*s,DWORD stage,IDirect3DBaseTexture8**tex)
    {(void)s;if(stage<4&&tex)*tex=(IDirect3DBaseTexture8*)g.textures[stage];return S_OK;}

// Stream sources
static HRESULT STDCALL dev_SetStreamSource(IDirect3DDevice8*s,UINT stream,IDirect3DVertexBuffer8*vb,UINT stride)
    {(void)s;if(stream<4){g.streams[stream]=(VK_VB*)vb;g.stream_strides[stream]=stride;}return S_OK;}
static HRESULT STDCALL dev_GetStreamSource(IDirect3DDevice8*s,UINT stream,IDirect3DVertexBuffer8**vb,UINT*stride)
    {(void)s;if(stream<4){if(vb)*vb=(IDirect3DVertexBuffer8*)g.streams[stream];if(stride)*stride=g.stream_strides[stream];}return S_OK;}
static HRESULT STDCALL dev_SetIndices(IDirect3DDevice8*s,IDirect3DIndexBuffer8*ib,UINT base)
    {(void)s;g.indices=(VK_IB*)ib;g.base_vertex=base;return S_OK;}
static HRESULT STDCALL dev_GetIndices(IDirect3DDevice8*s,IDirect3DIndexBuffer8**ib,UINT*base)
    {(void)s;if(ib)*ib=(IDirect3DIndexBuffer8*)g.indices;if(base)*base=g.base_vertex;return S_OK;}

// D3D row-major 4×4 multiply: o = a * b
static void mat_mul44(const float *a, const float *b, float *o) {
    for (int r = 0; r < 4; r++)
        for (int c = 0; c < 4; c++)
            o[r*4+c] = a[r*4+0]*b[0*4+c] + a[r*4+1]*b[1*4+c]
                     + a[r*4+2]*b[2*4+c] + a[r*4+3]*b[3*4+c];
}

/* Bind pipeline, push constants and the current texture's descriptor
 * for a draw. 3D pushes the fixed-function WVP product; 2D pushes the
 * viewport size for the screen-space mapping. */
static void bind_draw_state(int is3d) {
    if (is3d) {
        pvkCmdBindPipeline(g.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, g.pipe3d);
        float wv[16], wvp[16];
        mat_mul44((const float *)&g.transform[D3DTS_WORLD],
                  (const float *)&g.transform[D3DTS_VIEW], wv);
        mat_mul44(wv, (const float *)&g.transform[D3DTS_PROJECTION], wvp);
        pvkCmdPushConstants(g.cmd, g.pipe3d_layout, VK_SHADER_STAGE_VERTEX_BIT,
                            0, sizeof(wvp), wvp);
    } else {
        pvkCmdBindPipeline(g.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, g.pipe);
        float vp_size[2] = { (float)g.width, (float)g.height };
        pvkCmdPushConstants(g.cmd, g.pipe_layout, VK_SHADER_STAGE_VERTEX_BIT,
                            0, sizeof(vp_size), vp_size);
    }

    VK_Texture *t = g.textures[0] ? g.textures[0] : g.white_tex;
    if (t && t->dset)
        pvkCmdBindDescriptorSets(g.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS,
            is3d ? g.pipe3d_layout : g.pipe_layout, 0, 1, &t->dset, 0, NULL);
}

/* Create a temp vertex buffer, fill it via `emit`, bind the right
 * pipeline + descriptor + push constants, and draw. The emit callback
 * writes exactly out_verts canonical vertices into the mapped memory. */
static void draw_canonical(int is3d, UINT out_verts,
                           void (*emit)(uint8_t *dst, const void *ctx),
                           const void *emit_ctx) {
    if (!g.in_scene || out_verts == 0) return;
    const UINT canon_stride = is3d ? 24 : 28;

    /* Fast path: sub-allocate from the per-frame arena. */
    if (g.up_mapped) {
        VkDeviceSize need = (VkDeviceSize)out_verts * canon_stride;
        VkDeviceSize off = (g.up_off + 63) & ~(VkDeviceSize)63;
        if (off + need <= g.up_size) {
            emit(g.up_mapped + off, emit_ctx);
            bind_draw_state(is3d);
            pvkCmdBindVertexBuffers(g.cmd, 0, 1, &g.up_buf, &off);
            pvkCmdDraw(g.cmd, out_verts, 1, 0, 0);
            g.up_off = off + need;
            return;
        }
        static int warned = 0;
        if (!warned++)
            fprintf(stderr, "Vulkan: UP arena full (%llu bytes), falling back\n",
                    (unsigned long long)g.up_size);
    }

    VkBufferCreateInfo bci = { VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO };
    bci.size = (VkDeviceSize)out_verts * canon_stride;
    bci.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
    VkBuffer tmp_buf;
    if (pvkCreateBuffer(g.dev, &bci, NULL, &tmp_buf) != VK_SUCCESS) return;
    VkMemoryRequirements mr;
    pvkGetBufferMemoryRequirements(g.dev, tmp_buf, &mr);
    VkMemoryAllocateInfo mai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_memory_type(mr.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    VkDeviceMemory tmp_mem;
    if (pvkAllocateMemory(g.dev, &mai, NULL, &tmp_mem) != VK_SUCCESS) {
        pvkDestroyBuffer(g.dev, tmp_buf, NULL); return;
    }
    pvkBindBufferMemory(g.dev, tmp_buf, tmp_mem, 0);
    uint8_t *mapped;
    pvkMapMemory(g.dev, tmp_mem, 0, bci.size, 0, (void**)&mapped);
    emit(mapped, emit_ctx);
    pvkUnmapMemory(g.dev, tmp_mem);

    bind_draw_state(is3d);

    VkDeviceSize vb_offsets[] = {0};
    pvkCmdBindVertexBuffers(g.cmd, 0, 1, &tmp_buf, vb_offsets);
    pvkCmdDraw(g.cmd, out_verts, 1, 0, 0);

    if (g.pending_count < VK_MAX_PENDING_BUFS) {
        g.pending_bufs[g.pending_count] = tmp_buf;
        g.pending_mems[g.pending_count] = tmp_mem;
        g.pending_count++;
    } else {
        fprintf(stderr, "Vulkan: pending buffer pool full, leaking\n");
    }
}

// Drawing
static HRESULT STDCALL dev_DrawPrimitive(IDirect3DDevice8*s,D3DPRIMITIVETYPE pt,UINT start,UINT count)
    {(void)s;(void)pt;(void)start;(void)count;return S_OK;}

/* Indexed draw from the bound stream-0 VB + index buffer. The game
 * writes vertices/indices into the staging copies via Lock/Unlock;
 * we expand index → vertex on the CPU (16-bit indices, triangle list). */
struct emit_indexed_ctx {
    FVF_Layout L;
    const uint8_t *verts; UINT stride;
    const uint16_t *indices; UINT index_count; UINT base;
};
static void emit_indexed(uint8_t *dst, const void *vctx) {
    const struct emit_indexed_ctx *c = vctx;
    const UINT canon = c->L.is3d ? 24 : 28;
    for (UINT i = 0; i < c->index_count; i++) {
        UINT vi = (UINT)c->indices[i] + c->base;
        fvf_canon(&c->L, c->verts + (size_t)vi * c->stride, dst + (size_t)i * canon);
    }
}

static HRESULT STDCALL dev_DrawIndexedPrimitive(IDirect3DDevice8*s,D3DPRIMITIVETYPE pt,UINT minV,UINT numV,UINT startI,UINT count) {
    (void)s;(void)minV;(void)numV;
    if (pt != D3DPT_TRIANGLELIST || count == 0) return S_OK;
    VK_VB *vb = g.streams[0];
    VK_IB *ib = g.indices;
    if (!vb || !vb->staging || !ib || !ib->staging) return S_OK;

    // Fast path: both buffers already live on the GPU in canonical form
    // (uploaded at Unlock) — one vkCmdDrawIndexed, zero per-frame CPU work.
    if (g.in_scene && vb->buffer && ib->buffer) {
        FVF_Layout L = fvf_layout(vb->fvf);
        bind_draw_state(L.is3d);
        VkDeviceSize zero = 0;
        pvkCmdBindVertexBuffers(g.cmd, 0, 1, &vb->buffer, &zero);
        pvkCmdBindIndexBuffer(g.cmd, ib->buffer, 0, VK_INDEX_TYPE_UINT16);
        pvkCmdDrawIndexed(g.cmd, count * 3, 1, startI,
                          (int32_t)g.base_vertex, 0);
        return S_OK;
    }

    struct emit_indexed_ctx c;
    c.L = fvf_layout(g.fvf);
    c.verts = vb->staging; c.stride = g.stream_strides[0];
    c.indices = (const uint16_t *)ib->staging + startI;
    c.index_count = count * 3; c.base = g.base_vertex;
    if (c.stride == 0) return S_OK;
    draw_canonical(c.L.is3d, c.index_count, emit_indexed, &c);
    return S_OK;
}

/* User-pointer draw. Strips, fans and quads are expanded to triangle
 * lists during canonicalization (both pipelines are LIST-topology). */
struct emit_up_ctx {
    FVF_Layout L;
    const uint8_t *src; UINT stride;
    D3DPRIMITIVETYPE pt; UINT prim_count;
};
static void emit_up(uint8_t *dst, const void *vctx) {
    const struct emit_up_ctx *c = vctx;
    const UINT canon = c->L.is3d ? 24 : 28;
    #define SRC(i) (c->src + (size_t)(i) * c->stride)
    switch (c->pt) {
    case D3DPT_TRIANGLELIST:
        for (UINT i = 0; i < c->prim_count * 3; i++)
            fvf_canon(&c->L, SRC(i), dst + (size_t)i * canon);
        break;
    case D3DPT_TRIANGLESTRIP:   // triangle i = (v[i], v[i+1], v[i+2])
        for (UINT i = 0; i < c->prim_count; i++) {
            fvf_canon(&c->L, SRC(i),     dst + (size_t)(i*3    ) * canon);
            fvf_canon(&c->L, SRC(i + 1), dst + (size_t)(i*3 + 1) * canon);
            fvf_canon(&c->L, SRC(i + 2), dst + (size_t)(i*3 + 2) * canon);
        }
        break;
    case D3DPT_TRIANGLEFAN:     // triangle i = (v[0], v[i+1], v[i+2])
        for (UINT i = 0; i < c->prim_count; i++) {
            fvf_canon(&c->L, SRC(0),     dst + (size_t)(i*3    ) * canon);
            fvf_canon(&c->L, SRC(i + 1), dst + (size_t)(i*3 + 1) * canon);
            fvf_canon(&c->L, SRC(i + 2), dst + (size_t)(i*3 + 2) * canon);
        }
        break;
    case D3DPT_QUADLIST:        // quad → (q0,q1,q2) + (q0,q2,q3)
        for (UINT i = 0; i < c->prim_count; i++) {
            static const int quad_tri[6] = {0, 1, 2, 0, 2, 3};
            for (int k = 0; k < 6; k++)
                fvf_canon(&c->L, SRC(i * 4 + quad_tri[k]),
                          dst + (size_t)(i*6 + k) * canon);
        }
        break;
    default: break;
    }
    #undef SRC
}

static HRESULT STDCALL dev_DrawPrimitiveUP(IDirect3DDevice8*s,D3DPRIMITIVETYPE pt,UINT count,const void*vdata,UINT stride) {
    (void)s;
    if (!vdata || count == 0 || stride == 0) return S_OK;

    UINT out_verts = 0;
    switch (pt) {
        case D3DPT_TRIANGLELIST:  out_verts = count * 3; break;
        case D3DPT_TRIANGLESTRIP: out_verts = count * 3; break;
        case D3DPT_TRIANGLEFAN:   out_verts = count * 3; break;
        case D3DPT_QUADLIST:      out_verts = count * 6; break;
        default: {
            // Lines/points can't go through a triangle-list pipeline.
            static int warned = 0;
            if (!warned++) fprintf(stderr, "Vulkan: DrawPrimitiveUP type %d unsupported, skipped\n", (int)pt);
            return S_OK;
        }
    }

    struct emit_up_ctx c;
    c.L = fvf_layout(g.fvf);
    c.src = (const uint8_t *)vdata; c.stride = stride;
    c.pt = pt; c.prim_count = count;
    draw_canonical(c.L.is3d, out_verts, emit_up, &c);
    return S_OK;
}

/* User-pointer indexed draw (16-bit indices, triangle list). */
struct emit_iup_ctx {
    FVF_Layout L;
    const uint8_t *verts; UINT stride;
    const uint16_t *indices; UINT index_count;
};
static void emit_iup(uint8_t *dst, const void *vctx) {
    const struct emit_iup_ctx *c = vctx;
    const UINT canon = c->L.is3d ? 24 : 28;
    for (UINT i = 0; i < c->index_count; i++)
        fvf_canon(&c->L, c->verts + (size_t)c->indices[i] * c->stride,
                  dst + (size_t)i * canon);
}

static HRESULT STDCALL dev_DrawIndexedPrimitiveUP(IDirect3DDevice8*s,D3DPRIMITIVETYPE pt,UINT minV,UINT numV,UINT count,const void*idata,D3DFORMAT ifmt,const void*vdata,UINT stride) {
    (void)s;(void)minV;(void)numV;
    if (pt != D3DPT_TRIANGLELIST || !idata || !vdata || count == 0 || stride == 0)
        return S_OK;
    if (ifmt != D3DFMT_INDEX16) {
        static int warned = 0;
        if (!warned++) fprintf(stderr, "Vulkan: 32-bit indices unsupported, skipped\n");
        return S_OK;
    }
    struct emit_iup_ctx c;
    c.L = fvf_layout(g.fvf);
    c.verts = (const uint8_t *)vdata; c.stride = stride;
    c.indices = (const uint16_t *)idata; c.index_count = count * 3;
    draw_canonical(c.L.is3d, c.index_count, emit_iup, &c);
    return S_OK;
}

// Resource creation
/* Bytes for one mip level of a given format. */
static size_t vk_level_bytes(VkFormat f, int w, int h) {
    if (w < 1) w = 1;
    if (h < 1) h = 1;
    if (f == VK_FORMAT_BC1_RGBA_UNORM_BLOCK)
        return (size_t)((w + 3) / 4) * ((h + 3) / 4) * 8;
    if (f == VK_FORMAT_BC2_UNORM_BLOCK || f == VK_FORMAT_BC3_UNORM_BLOCK)
        return (size_t)((w + 3) / 4) * ((h + 3) / 4) * 16;
    return (size_t)w * h * 4;
}

static HRESULT STDCALL dev_CreateTexture(IDirect3DDevice8*s,UINT w,UINT h,UINT lv,DWORD usage,D3DFORMAT fmt,D3DPOOL pool,IDirect3DTexture8**p) {
    (void)s;(void)usage;(void)pool;
    if (g.tex_count >= VK_MAX_TEXTURES) return E_OUTOFMEMORY;
    VK_Texture *t = calloc(1, sizeof(VK_Texture));
    t->iface.lpVtbl = &g_vtex_vtbl; t->ref_count = 1;
    t->width = (int)w; t->height = (int)h;
    // P8 paletted textures: 1 byte per pixel (palette index).
    // We still create a BGRA8 GPU image — the expansion from
    // 8-bit indices to 32-bit RGBA happens at UnlockRect time.
    t->is_p8 = (fmt == 0x0B);  // D3DFMT_P8
    // DXT textures (track static.dat) carry raw compressed blocks; they
    // upload straight into BC-format images — never into BGRA8, which
    // renders the block data as per-pixel noise.
    switch ((int)fmt) {
    case 12: t->vkfmt = VK_FORMAT_BC1_RGBA_UNORM_BLOCK; break;  // DXT1
    case 14: t->vkfmt = VK_FORMAT_BC2_UNORM_BLOCK;      break;  // DXT2/3
    case 15: t->vkfmt = VK_FORMAT_BC3_UNORM_BLOCK;      break;  // DXT4/5
    default: t->vkfmt = VK_FORMAT_B8G8R8A8_UNORM;       break;
    }

    // Mip chain. Without one, minified track textures alias into
    // multicoloured speckle at distance and grazing angles — every pixel
    // samples one arbitrary texel of a detailed 256×256 surface.
    int max_levels = 1;
    for (UINT d = (w > h ? w : h); d > 1; d >>= 1) max_levels++;
    if (max_levels > 16) max_levels = 16;
    t->mip_levels = (lv == 0 || (int)lv > max_levels) ? max_levels : (int)lv;
    if (t->is_p8) t->mip_levels = 1;   // paletted menu art ships one level

    t->upload_size = 0;
    for (int i = 0; i < t->mip_levels; i++) {
        t->mip_off[i] = t->upload_size;
        t->upload_size += vk_level_bytes(t->vkfmt, (int)w >> i, (int)h >> i);
    }
    t->staging = calloc(1, t->is_p8 ? (size_t)w * h : t->upload_size);

    VkImageCreateInfo ici = { VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
    ici.imageType = VK_IMAGE_TYPE_2D; ici.format = t->vkfmt;
    ici.extent = (VkExtent3D){w, h, 1};
    ici.mipLevels = (uint32_t)t->mip_levels; ici.arrayLayers = 1;
    ici.samples = VK_SAMPLE_COUNT_1_BIT; ici.tiling = VK_IMAGE_TILING_OPTIMAL;
    ici.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
    ici.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VK_CHECK_HR(pvkCreateImage(g.dev, &ici, NULL, &t->image), "tex image");
    VkMemoryRequirements mr;
    pvkGetImageMemoryRequirements(g.dev, t->image, &mr);
    VkMemoryAllocateInfo mai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_memory_type(mr.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    pvkAllocateMemory(g.dev, &mai, NULL, &t->memory);
    pvkBindImageMemory(g.dev, t->image, t->memory, 0);
    VkImageViewCreateInfo vci = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
    vci.image = t->image; vci.viewType = VK_IMAGE_VIEW_TYPE_2D;
    vci.format = t->vkfmt;
    vci.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    vci.subresourceRange.levelCount = (uint32_t)t->mip_levels;
    vci.subresourceRange.layerCount = 1;
    pvkCreateImageView(g.dev, &vci, NULL, &t->view);

    VkSamplerCreateInfo sci = { VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO };
    sci.magFilter = VK_FILTER_LINEAR; sci.minFilter = VK_FILTER_LINEAR;
    sci.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;   // trilinear
    sci.maxLod = (float)t->mip_levels;
    sci.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sci.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    pvkCreateSampler(g.dev, &sci, NULL, &t->sampler);

    // Per-texture descriptor set, written once. The imageLayout recorded
    // here is a promise about draw time: vtex_UnlockRect transitions the
    // image to SHADER_READ_ONLY_OPTIMAL when the pixels are uploaded.
    VkDescriptorSetAllocateInfo dsai = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO };
    dsai.descriptorPool = g.dset_pool; dsai.descriptorSetCount = 1;
    dsai.pSetLayouts = &g.dset_layout;
    if (pvkAllocateDescriptorSets(g.dev, &dsai, &t->dset) == VK_SUCCESS) {
        VkDescriptorImageInfo ii = {0};
        ii.sampler = t->sampler; ii.imageView = t->view;
        ii.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        VkWriteDescriptorSet wr = { VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET };
        wr.dstSet = t->dset; wr.dstBinding = 0; wr.descriptorCount = 1;
        wr.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        wr.pImageInfo = &ii;
        pvkUpdateDescriptorSets(g.dev, 1, &wr, 0, NULL);
    } else {
        fprintf(stderr, "Vulkan: descriptor set alloc failed for %ux%u texture\n", w, h);
        t->dset = VK_NULL_HANDLE;
    }

    t->slot = g.tex_count;
    g.tex_pool[g.tex_count++] = t;
    *p = &t->iface; return S_OK;
}

/* Live pooled-resource counts. These are the numbers that reveal a leak:
 * they must return to their between-track baseline after an unload. */
void vulkan_d3d8_pool_counts(int *vb, int *ib, int *tex)
{
    if (vb)  *vb  = g.vb_count;
    if (ib)  *ib  = g.ib_count;
    if (tex) *tex = g.tex_count;
}

static HRESULT STDCALL dev_CreateVertexBuffer(IDirect3DDevice8*s,UINT len,DWORD usage,DWORD fvf,D3DPOOL pool,IDirect3DVertexBuffer8**p) {
    (void)s;(void)usage;(void)fvf;(void)pool;
    if (g.vb_count >= VK_MAX_VBS) {
        fprintf(stderr, "Vulkan: VB pool exhausted (%d)\n", VK_MAX_VBS);
        return E_OUTOFMEMORY;
    }
    VK_VB *v=calloc(1,sizeof(VK_VB)); v->iface.lpVtbl=&g_vvb_vtbl; v->ref_count=1; v->size=len;
    v->fvf=fvf;  // drives canonical GPU upload at Unlock
    v->staging=calloc(1,len);
    v->slot=g.vb_count; g.vb_pool[g.vb_count++]=v; *p=&v->iface; return S_OK;
}
static HRESULT STDCALL dev_CreateIndexBuffer(IDirect3DDevice8*s,UINT len,DWORD usage,D3DFORMAT fmt,D3DPOOL pool,IDirect3DIndexBuffer8**p) {
    (void)s;(void)usage;(void)fmt;(void)pool;
    if (g.ib_count >= VK_MAX_IBS) {
        // The old 16-slot pool silently overflowed here — a 59-section
        // track corrupted the device state and crashed.
        fprintf(stderr, "Vulkan: IB pool exhausted (%d)\n", VK_MAX_IBS);
        return E_OUTOFMEMORY;
    }
    VK_IB *ib=calloc(1,sizeof(VK_IB)); ib->iface.lpVtbl=&g_vib_vtbl; ib->ref_count=1; ib->size=len;
    // Staging-only — see dev_CreateVertexBuffer.
    ib->staging=calloc(1,len);
    ib->slot=g.ib_count; g.ib_pool[g.ib_count++]=ib; *p=&ib->iface; return S_OK;
}
static HRESULT STDCALL dev_CreateRenderTarget(IDirect3DDevice8*s,UINT w,UINT h,D3DFORMAT fmt,D3DMULTISAMPLE_TYPE ms,BOOL lockable,IDirect3DSurface8**p)
    {(void)s;(void)w;(void)h;(void)fmt;(void)ms;(void)lockable;(void)p;return E_NOTIMPL;}
static HRESULT STDCALL dev_CreateDepthStencilSurface(IDirect3DDevice8*s,UINT w,UINT h,D3DFORMAT fmt,D3DMULTISAMPLE_TYPE ms,IDirect3DSurface8**p)
    {(void)s;(void)w;(void)h;(void)fmt;(void)ms;*p=NULL;return E_NOTIMPL;}
static HRESULT STDCALL dev_SetRenderTarget(IDirect3DDevice8*s,IDirect3DSurface8*rt,IDirect3DSurface8*ds){(void)s;(void)rt;(void)ds;return S_OK;}
static HRESULT STDCALL dev_GetRenderTarget(IDirect3DDevice8*s,IDirect3DSurface8**rt){(void)s;if(rt)*rt=NULL;return S_OK;}
static HRESULT STDCALL dev_GetDepthStencilSurface(IDirect3DDevice8*s,IDirect3DSurface8**ds){(void)s;if(ds)*ds=NULL;return S_OK;}
static HRESULT STDCALL dev_SetViewport(IDirect3DDevice8*s,const D3DVIEWPORT8*vp){(void)s;if(vp)memcpy(&g.viewport,vp,sizeof(D3DVIEWPORT8));return S_OK;}
static HRESULT STDCALL dev_GetViewport(IDirect3DDevice8*s,D3DVIEWPORT8*vp){(void)s;if(vp)memcpy(vp,&g.viewport,sizeof(D3DVIEWPORT8));return S_OK;}

// Material / Light / Shader stubs
static HRESULT STDCALL dev_SetMaterial(IDirect3DDevice8*s,const D3DMATERIAL8*m){(void)s;(void)m;return S_OK;}
static HRESULT STDCALL dev_GetMaterial(IDirect3DDevice8*s,D3DMATERIAL8*m){(void)s;(void)m;return S_OK;}
static HRESULT STDCALL dev_SetLight(IDirect3DDevice8*s,DWORD i,const D3DLIGHT8*l){(void)s;(void)i;(void)l;return S_OK;}
static HRESULT STDCALL dev_GetLight(IDirect3DDevice8*s,DWORD i,D3DLIGHT8*l){(void)s;(void)i;(void)l;return E_FAIL;}
static HRESULT STDCALL dev_LightEnable(IDirect3DDevice8*s,DWORD i,BOOL e){(void)s;(void)i;(void)e;return S_OK;}
static HRESULT STDCALL dev_SetVertexShader(IDirect3DDevice8*s,DWORD h){(void)s;g.fvf=h;return S_OK;}
static HRESULT STDCALL dev_GetVertexShader(IDirect3DDevice8*s,DWORD*h){(void)s;if(h)*h=0;return S_OK;}
static HRESULT STDCALL dev_SetVertexShaderConstant(IDirect3DDevice8*s,INT r,const void*d,DWORD c){(void)s;(void)r;(void)d;(void)c;return S_OK;}
static HRESULT STDCALL dev_SetPixelShader(IDirect3DDevice8*s,DWORD h){(void)s;(void)h;return S_OK;}
static HRESULT STDCALL dev_GetPixelShader(IDirect3DDevice8*s,DWORD*h){(void)s;if(h)*h=0;return S_OK;}
static HRESULT STDCALL dev_SetPixelShaderConstant(IDirect3DDevice8*s,INT r,const void*d,DWORD c){(void)s;(void)r;(void)d;(void)c;return S_OK;}
static void STDCALL dev_SetGammaRamp(IDirect3DDevice8*s,DWORD f,const D3DGAMMARAMP*r){(void)s;(void)f;(void)r;}
static void STDCALL dev_GetGammaRamp(IDirect3DDevice8*s,D3DGAMMARAMP*r){(void)s;(void)r;}
static HRESULT STDCALL dev_SetPalette(IDirect3DDevice8*s,DWORD stage,const void*entries) {
    (void)s;
    if (entries && stage < 256) {
        memcpy(g.d3d_palette, entries, 256 * sizeof(uint32_t));
        g.d3d_palette_stage = (int)stage;
    }
    return S_OK;
}
static HRESULT STDCALL dev_BeginPush(IDirect3DDevice8*s,DWORD c,DWORD**p){(void)s;(void)c;(void)p;return E_NOTIMPL;}
static HRESULT STDCALL dev_EndPush(IDirect3DDevice8*s,DWORD*p){(void)s;(void)p;return E_NOTIMPL;}
static HRESULT STDCALL dev_Swap(IDirect3DDevice8*s,DWORD f){(void)s;(void)f;return S_OK;}

static const IDirect3DDevice8Vtbl g_dev_vtbl = {
    dev_QI,dev_AddRef,dev_Release,
    dev_GetDirect3D,dev_GetDeviceCaps,dev_GetDisplayMode,dev_GetCreationParameters,
    dev_Reset,dev_Present,dev_GetBackBuffer,
    dev_BeginScene,dev_EndScene,dev_Clear,
    dev_SetTransform,dev_GetTransform,
    dev_SetRenderState,dev_GetRenderState,
    dev_SetTextureStageState,dev_GetTextureStageState,
    dev_SetTexture,dev_GetTexture,
    dev_SetStreamSource,dev_GetStreamSource,
    dev_SetIndices,dev_GetIndices,
    dev_DrawPrimitive,dev_DrawIndexedPrimitive,
    dev_DrawPrimitiveUP,dev_DrawIndexedPrimitiveUP,
    dev_CreateTexture,dev_CreateVertexBuffer,dev_CreateIndexBuffer,
    dev_CreateRenderTarget,dev_CreateDepthStencilSurface,
    dev_SetRenderTarget,dev_GetRenderTarget,dev_GetDepthStencilSurface,
    dev_SetViewport,dev_GetViewport,
    dev_SetMaterial,dev_GetMaterial,
    dev_SetLight,dev_GetLight,dev_LightEnable,
    dev_SetVertexShader,dev_GetVertexShader,dev_SetVertexShaderConstant,
    dev_SetPixelShader,dev_GetPixelShader,dev_SetPixelShaderConstant,
    dev_SetGammaRamp,dev_GetGammaRamp,
    dev_SetPalette,
    dev_BeginPush,dev_EndPush,
    dev_Swap,
};

/* ═══════════════════════════════════════════════════════════════
 *  IDirect3D8 factory
 * ═══════════════════════════════════════════════════════════════ */

static HRESULT STDCALL d3d8_QI(IDirect3D8*s,const IID*i,void**p){(void)s;(void)i;(void)p;return E_NOINTERFACE;}
static ULONG   STDCALL d3d8_AddRef(IDirect3D8*s){(void)s;return 1;}
static ULONG   STDCALL d3d8_Release(IDirect3D8*s){(void)s;return 1;}
static HRESULT STDCALL d3d8_CreateDevice(IDirect3D8*s,UINT adapter,DWORD type,HWND wnd,DWORD flags,D3DPRESENT_PARAMETERS*pp,IDirect3DDevice8**out) {
    (void)s;(void)adapter;(void)type;(void)wnd;(void)flags;(void)pp;
    g.dev_iface.lpVtbl=&g_dev_vtbl; g.ref_count=1; *out=&g.dev_iface; return S_OK;
}
static const IDirect3D8Vtbl g_d3d8_vtbl = { d3d8_QI,d3d8_AddRef,d3d8_Release,d3d8_CreateDevice };
static IDirect3D8 g_d3d8 = { &g_d3d8_vtbl };

/* ═══════════════════════════════════════════════════════════════
 *  Public API
 * ═══════════════════════════════════════════════════════════════ */

int vulkan_d3d8_init(int width, int height) {
    memset(&g, 0, sizeof(g));

    // Load vulkan loader via dlopen (Linux/Android) or LoadLibrary (Windows)
#ifdef _WIN32
    HMODULE lib = LoadLibraryA("vulkan-1.dll");
    if (lib) {
        pvkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)
            GetProcAddress(lib, "vkGetInstanceProcAddr");
    }
#else
    void *lib = dlopen("libvulkan.so.1", RTLD_NOW);
    if (!lib) lib = dlopen("libvulkan.so", RTLD_NOW);
    if (lib) {
        pvkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)
            dlsym(lib, "vkGetInstanceProcAddr");
    }
#endif
    if (!pvkGetInstanceProcAddr) { fprintf(stderr,"Vulkan: no loader\n"); return 0; }

    // Create instance
    VkApplicationInfo ai = { VK_STRUCTURE_TYPE_APPLICATION_INFO };
    ai.pApplicationName = "Burnout3"; ai.apiVersion = VK_API_VERSION_1_0;
    VkInstanceCreateInfo ici = { VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO };
    ici.pApplicationInfo = &ai;
    if (!load_vulkan(VK_NULL_HANDLE)) return 0;
    VK_CHECK(pvkCreateInstance(&ici, NULL, &g.inst), "CreateInstance");
    if (!load_vulkan(g.inst)) return 0;

    // Pick a GPU deliberately. Taking devs[0] blindly is wrong on any
    // machine with more than one: the first enumerated device can be an
    // integrated part or a software rasteriser, and if it lacks
    // textureCompressionBC then every BC1/2/3 track texture fails to
    // upload and the world renders untextured white — indistinguishable
    // on screen from the track failing to load. Prefer a discrete GPU
    // that supports BC, and say which one was chosen.
    uint32_t count = 0;
    pvkEnumeratePhysicalDevices(g.inst, &count, NULL);
    if (count == 0) { fprintf(stderr, "Vulkan: no physical devices\n"); return 0; }
    VkPhysicalDevice *devs = malloc(count * sizeof(VkPhysicalDevice));
    pvkEnumeratePhysicalDevices(g.inst, &count, devs);

    int chosen = -1, chosen_rank = -1;
    for (uint32_t i = 0; i < count; i++) {
        VkPhysicalDeviceProperties pr;
        VkPhysicalDeviceFeatures   fe;
        pvkGetPhysicalDeviceProperties(devs[i], &pr);
        pvkGetPhysicalDeviceFeatures(devs[i], &fe);
        const int bc = fe.textureCompressionBC ? 1 : 0;
        /* discrete+BC beats integrated+BC beats anything without BC */
        int rank = (bc ? 2 : 0) +
                   (pr.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU ? 1 : 0);
        fprintf(stderr, "Vulkan: GPU %u/%u \"%s\" type=%d BC=%s\n",
                i + 1, count, pr.deviceName, (int)pr.deviceType,
                bc ? "yes" : "NO");
        if (rank > chosen_rank) { chosen_rank = rank; chosen = (int)i; }
    }
    if (chosen_rank < 2)
        fprintf(stderr, "Vulkan: WARNING — no GPU reports textureCompressionBC; "
                        "DXT track textures will not upload and the world will "
                        "render untextured\n");
    {
        VkPhysicalDeviceProperties pr;
        pvkGetPhysicalDeviceProperties(devs[chosen], &pr);
        fprintf(stderr, "Vulkan: using \"%s\"\n", pr.deviceName);
    }
    g.phys = devs[chosen]; free(devs);

    // Find graphics queue
    uint32_t qcount = 0;
    VkDeviceQueueCreateInfo qci = { VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO };
    qci.queueCount = 1;
    float prio = 1.0f; qci.pQueuePriorities = &prio;
    VkDeviceCreateInfo dci = { VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
    dci.queueCreateInfoCount = 1; dci.pQueueCreateInfos = &qci;
    // BC1/2/3 sampled images (track DXT textures) need this feature bit;
    // it is universally available on desktop GPUs.
    VkPhysicalDeviceFeatures feats = {0};
    feats.textureCompressionBC = VK_TRUE;
    dci.pEnabledFeatures = &feats;
    VK_CHECK(pvkCreateDevice(g.phys, &dci, NULL, &g.dev), "CreateDevice");
    if (!load_vulkan_device(g.inst, g.dev)) return 0;
    pvkGetDeviceQueue(g.dev, 0, 0, &g.queue);
    g.qfam = 0;

    // Command pool + command buffers (frame + texture upload)
    VkCommandPoolCreateInfo cpci = { VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO };
    cpci.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    VK_CHECK(pvkCreateCommandPool(g.dev, &cpci, NULL, &g.cmd_pool), "cmd pool");
    VkCommandBufferAllocateInfo cbai = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    cbai.commandPool = g.cmd_pool; cbai.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cbai.commandBufferCount = 1;
    VK_CHECK(pvkAllocateCommandBuffers(g.dev, &cbai, &g.cmd), "alloc cmd");
    VK_CHECK(pvkAllocateCommandBuffers(g.dev, &cbai, &g.upload_cmd), "alloc upload cmd");

    // Fences
    VkFenceCreateInfo fci = { VK_STRUCTURE_TYPE_FENCE_CREATE_INFO };
    pvkCreateFence(g.dev, &fci, NULL, &g.fence);
    VkFenceCreateInfo fci2 = { VK_STRUCTURE_TYPE_FENCE_CREATE_INFO };
    pvkCreateFence(g.dev, &fci2, NULL, &g.upload_fence);

    // Descriptor pool: one set per texture plus the white default.
    VkDescriptorPoolSize dps = {0};
    dps.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    dps.descriptorCount = VK_MAX_TEXTURES + 1;
    VkDescriptorPoolCreateInfo dpci = { VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO };
    dpci.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    dpci.maxSets = VK_MAX_TEXTURES + 1; dpci.poolSizeCount = 1; dpci.pPoolSizes = &dps;
    pvkCreateDescriptorPool(g.dev, &dpci, NULL, &g.dset_pool);

    // Render target + render pass
    if (!create_render_target(width, height)) return 0;

    // Pipeline (creates g.dset_layout — required before any texture exists)
    if (!create_pipeline()) return 0;

    // Per-frame vertex arena for user-pointer draws (see the struct).
    g.up_size = 16u * 1024u * 1024u;
    {
        void *mapped = NULL;
        if (host_buffer_create(g.up_size, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                               &g.up_buf, &g.up_mem, &mapped))
            g.up_mapped = (uint8_t *)mapped;   // stays mapped for its lifetime
        else
            fprintf(stderr, "Vulkan: UP arena alloc failed; per-draw fallback\n");
    }

    // Identity transforms — a 3D draw before the game's first SetTransform
    // must not collapse through zeroed matrices.
    for (int i = 0; i < 512; i++) {
        float *m = (float *)&g.transform[i];
        m[0] = m[5] = m[10] = m[15] = 1.0f;
    }

    g.dev_iface.lpVtbl = &g_dev_vtbl;
    g.ref_count = 1;
    g.initialized = true;

    // 1×1 white default texture. The fragment shader unconditionally
    // multiplies by the bound texture, so untextured draws (menu rects,
    // text glyphs) sample this and come out as pure vertex color.
    // Without it they'd sample an unwritten descriptor — undefined, and
    // in practice invisible: the bug that left the screen showing only
    // the clear color.
    IDirect3DTexture8 *wt_iface = NULL;
    if (dev_CreateTexture(&g.dev_iface, 1, 1, 1, 0, D3DFMT_A8R8G8B8, 0,
                          &wt_iface) == S_OK && wt_iface) {
        VK_Texture *wt = (VK_Texture *)wt_iface;
        memset(wt->staging, 0xFF, 4);
        vtex_UnlockRect(wt_iface, 0);  // uploads + transitions to SHADER_READ_ONLY
        g.white_tex = wt;
    } else {
        fprintf(stderr, "Vulkan: white default texture creation failed\n");
    }

    return 1;
}

void vulkan_d3d8_shutdown(void) {
    if (!g.initialized) { memset(&g, 0, sizeof(g)); return; }
    g.initialized = false;

    // Flush pending GPU work so the last frame completes before the
    // renderer tears down.  We deliberately skip ALL pvkDestroy* calls:
    // the NVIDIA driver can call back into freed shaderc memory during
    // Vulkan resource destruction, causing SIGSEGV.  The OS reclaims
    // GPU resources on process exit.  This matches the System 246
    // pattern (never dlclose the PCSX2 module).
    pvkDeviceWaitIdle(g.dev);

    // CPU-side memory: textures/VBs/IBs are already freed by txd_release
    // and vtex_Release before shutdown.  Only free host_frame which is
    // allocated directly in create_render_target.
    free(g.host_frame);
    memset(&g, 0, sizeof(g));
}

const uint8_t *vulkan_d3d8_present(int *out_w, int *out_h) {
    if (!g.frame_ready && g.host_frame) {
        if (out_w) *out_w = g.width;
        if (out_h) *out_h = g.height;
        return g.host_frame;
    }
    if (!g.frame_ready) return NULL;
    g.frame_ready = false;
    if (out_w) *out_w = g.width;
    if (out_h) *out_h = g.height;
    return g.host_frame;
}

IDirect3D8       *vulkan_d3d8_get_d3d8(void)   { return &g_d3d8; }
IDirect3DDevice8 *vulkan_d3d8_get_device(void) { return &g.dev_iface; }

// Implement the Xbox D3D8 factory so the recompiled game code (main.c)
// can create D3D8 objects through our Vulkan backend.
IDirect3D8 *xbox_Direct3DCreate8(UINT SDKVersion) {
    (void)SDKVersion;
    return &g_d3d8;
}

void vulkan_d3d8_inject_input(int throttle, int steering, int boost) {
    (void)throttle; (void)steering; (void)boost;
}
int vulkan_d3d8_game_ready(void) { return g.frame_ready ? 1 : 0; }
