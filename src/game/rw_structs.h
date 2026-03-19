/**
 * rw_structs.h — RenderWare 3.5-3.7 Struct Definitions (32-bit Xbox Layout)
 *
 * Derived from librw (github.com/aap/librw) clean-room reimplementation.
 * These are typed C structs matching the Xbox 32-bit binary layout that the
 * Criterion RenderWare fork uses. All pointer fields are uint32_t (Xbox VAs).
 *
 * Used as a "Rosetta Stone" to decode MEM32 offset accesses in gen code,
 * NOT as a replacement for the rendering pipeline.
 *
 * Key validation:
 *   - RwCamera base = 0x218 (536 bytes) — matches librw
 *   - camera+0x2478 frame counter = base 0x218 + plugin offset 0x2260
 *   - Device at 0x35D6A0 is D3D8LTCG-specific (see rw_d3d_device.h)
 */
#pragma once

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ═══════════════════════════════════════════════════════════════
 *  Primitive types
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwV2d {
    float x, y;
} RwV2d;  /* 8 bytes */

typedef struct RwV3d {
    float x, y, z;
} RwV3d;  /* 12 bytes */

typedef struct RwV4d {
    float x, y, z, w;
} RwV4d;  /* 16 bytes */

typedef struct RwRGBA {
    uint8_t r, g, b, a;
} RwRGBA;  /* 4 bytes */

typedef struct RwRGBAf {
    float r, g, b, a;
} RwRGBAf;  /* 16 bytes */

typedef struct RwTexCoords {
    float u, v;
} RwTexCoords;  /* 8 bytes */

/* ═══════════════════════════════════════════════════════════════
 *  Container types
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwLLLink {
    uint32_t next;  /* Xbox VA → RwLLLink* */
    uint32_t prev;  /* Xbox VA → RwLLLink* */
} RwLLLink;  /* 8 bytes */

typedef struct RwLinkList {
    RwLLLink link;  /* sentinel node */
} RwLinkList;  /* 8 bytes */

/* ═══════════════════════════════════════════════════════════════
 *  RwMatrix — 64 bytes
 *  Row-major: right(xyz,pad), up(xyz,pad), at(xyz,pad), pos(xyz,pad)
 *  The pad field per row holds flags in the pos row (row 3).
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwMatrix {
    RwV3d right;    /* +0x00 */
    uint32_t flags; /* +0x0C — or pad for non-pos rows */
    RwV3d up;       /* +0x10 */
    uint32_t pad1;  /* +0x1C */
    RwV3d at;       /* +0x20 */
    uint32_t pad2;  /* +0x2C */
    RwV3d pos;      /* +0x30 */
    uint32_t pad3;  /* +0x3C — matrix flags (rwMATRIXTYPExxx) */
} RwMatrix;  /* 64 bytes */

/* Raw 64-byte matrix without named rows (for device state blocks) */
typedef struct RwRawMatrix {
    float m[4][4];
} RwRawMatrix;  /* 64 bytes */

_Static_assert(sizeof(RwMatrix) == 64, "RwMatrix must be 64 bytes");
_Static_assert(sizeof(RwRawMatrix) == 64, "RwRawMatrix must be 64 bytes");

/* ═══════════════════════════════════════════════════════════════
 *  RwObject — 8 bytes
 *  Base for all RW objects.
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwObject {
    uint8_t type;          /* +0x00 */
    uint8_t subType;       /* +0x01 */
    uint8_t flags;         /* +0x02 */
    uint8_t privateFlags;  /* +0x03 */
    uint32_t parent;       /* +0x04 — Xbox VA → RwFrame* (or void*) */
} RwObject;  /* 8 bytes */

_Static_assert(sizeof(RwObject) == 8, "RwObject must be 8 bytes");

/* RW object type constants */
#define rwCAMERA    4
#define rwATOMIC    1
#define rwCLUMP     2
#define rwFRAME     0

/* ═══════════════════════════════════════════════════════════════
 *  RwObjectWithFrame — 20 bytes (padded)
 *  Object + link into parent frame's object list + sync callback.
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwObjectWithFrame {
    RwObject object;       /* +0x00 (8 bytes) */
    RwLLLink inFrame;      /* +0x08 (8 bytes) — link in RwFrame::objectList */
    uint32_t syncCB;       /* +0x10 — Xbox VA → sync callback func ptr */
} RwObjectWithFrame;  /* 20 bytes */

_Static_assert(sizeof(RwObjectWithFrame) == 20, "RwObjectWithFrame must be 20 bytes");

/* ═══════════════════════════════════════════════════════════════
 *  RwFrame — 164 bytes base (before plugin data)
 *  Scene graph node with local→world transform.
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwFrame {
    RwObject object;       /* +0x00 (8 bytes) */
    RwLLLink inDirtyList;  /* +0x08 (8 bytes) */
    RwLinkList objectList; /* +0x10 (8 bytes) — attached objects */
    RwMatrix modelling;    /* +0x18 (64 bytes) — local transform */
    RwMatrix ltm;          /* +0x58 (64 bytes) — local-to-world (computed) */
    uint32_t child;        /* +0x98 — Xbox VA → RwFrame* */
    uint32_t next;         /* +0x9C — Xbox VA → RwFrame* (sibling) */
    uint32_t root;         /* +0xA0 — Xbox VA → RwFrame* (root of hierarchy) */
} RwFrame;  /* 0xA4 = 164 bytes */

_Static_assert(sizeof(RwFrame) == 164, "RwFrame must be 164 bytes");
_Static_assert(offsetof(RwFrame, modelling) == 0x18, "RwFrame::modelling at +0x18");
_Static_assert(offsetof(RwFrame, ltm) == 0x58, "RwFrame::ltm at +0x58");
_Static_assert(offsetof(RwFrame, child) == 0x98, "RwFrame::child at +0x98");

/* ═══════════════════════════════════════════════════════════════
 *  RwRaster — ~88 bytes (platform-dependent)
 *  Represents a pixel buffer (texture, render target, z-buffer).
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwRaster {
    uint32_t parent;       /* +0x00 — Xbox VA → RwRaster* (for sub-rasters) */
    uint32_t cpPixels;     /* +0x04 — Xbox VA → pixel data */
    uint32_t palette;      /* +0x08 — Xbox VA → palette data */
    int32_t  width;        /* +0x0C */
    int32_t  height;       /* +0x10 */
    int32_t  depth;        /* +0x14 — bits per pixel */
    int32_t  stride;       /* +0x18 — bytes per scanline */
    int16_t  nOffsetX;     /* +0x1C */
    int16_t  nOffsetY;     /* +0x1E */
    uint8_t  cType;        /* +0x20 — raster type (0=normal, 4=zbuffer, 5=camera) */
    uint8_t  cFlags;       /* +0x21 */
    uint8_t  privateFlags; /* +0x22 */
    uint8_t  cFormat;      /* +0x23 — format packed byte */
    uint32_t originalPixels; /* +0x24 — Xbox VA → original pixel buffer */
    int32_t  originalWidth;  /* +0x28 */
    int32_t  originalHeight; /* +0x2C */
    int32_t  originalStride; /* +0x30 */
    /* Platform extension data follows (Xbox D3D8 texture handle etc.) */
    uint8_t  _platform[0x24]; /* +0x34..+0x57 — platform-specific (56 bytes total) */
} RwRaster;  /* 0x58 = 88 bytes */

_Static_assert(sizeof(RwRaster) == 88, "RwRaster must be 88 bytes");

/* Raster type constants */
#define rwRASTERTYPENORMAL       0
#define rwRASTERTYPEZBUFFER      1
#define rwRASTERTYPECAMERA       2
#define rwRASTERTYPETEXTURE      4
#define rwRASTERTYPECAMERATEXTURE 5

/* ═══════════════════════════════════════════════════════════════
 *  RwTexture — ~96 bytes
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwTexture {
    uint32_t raster;           /* +0x00 — Xbox VA → RwRaster* */
    uint32_t dict;             /* +0x04 — Xbox VA → RwTexDictionary* */
    RwLLLink inDict;           /* +0x08 (8 bytes) */
    char name[32];             /* +0x10 */
    char mask[32];             /* +0x30 */
    uint32_t filterAddressing; /* +0x50 — packed filter/address modes */
    int32_t  refCount;         /* +0x54 */
    uint8_t  _pad[4];          /* +0x58..+0x5B */
} RwTexture;  /* 0x5C = 92 bytes (may vary with plugins) */

/* ═══════════════════════════════════════════════════════════════
 *  RwBBox — 24 bytes
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwBBox {
    RwV3d sup;  /* +0x00 — max corner */
    RwV3d inf;  /* +0x0C — min corner */
} RwBBox;  /* 24 bytes */

/* ═══════════════════════════════════════════════════════════════
 *  RwPlane — 16 bytes (frustum plane)
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwPlane {
    RwV3d normal;   /* +0x00 */
    float distance; /* +0x0C */
} RwPlane;  /* 16 bytes */

/* ═══════════════════════════════════════════════════════════════
 *  RwFrustumPlane — 20 bytes
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwFrustumPlane {
    RwPlane plane;      /* +0x00 (16 bytes) */
    uint8_t closestX;   /* +0x10 */
    uint8_t closestY;   /* +0x11 */
    uint8_t closestZ;   /* +0x12 */
    uint8_t pad;        /* +0x13 */
} RwFrustumPlane;  /* 20 bytes */

/* ═══════════════════════════════════════════════════════════════
 *  RwCamera — 0x218 = 536 bytes base (before plugin data)
 *
 *  This is the standard RW camera. Criterion's fork adds substantial
 *  plugin data beyond the base struct (camera+0x2478 is a frame counter,
 *  which is base 0x218 + plugin offset 0x2260).
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwCamera {
    RwObjectWithFrame objwf;    /* +0x000 (20 bytes) */

    /* Projection callbacks */
    uint32_t beginUpdate;       /* +0x014 — Xbox VA → func ptr */
    uint32_t endUpdate;         /* +0x018 — Xbox VA → func ptr */

    /* View parameters */
    RwV2d viewWindow;           /* +0x01C (8 bytes) — half-width, half-height in cam space */
    RwV2d recipViewWindow;      /* +0x024 (8 bytes) */
    RwV2d viewOffset;           /* +0x02C (8 bytes) — view center offset */

    /* Clip planes */
    float nearPlane;            /* +0x034 */
    float farPlane;             /* +0x038 */
    float fogPlane;             /* +0x03C */

    /* Projection type: 1=perspective, 2=parallel */
    int32_t projectionType;     /* +0x040 */

    /* View matrix (world→camera) */
    RwMatrix viewMatrix;        /* +0x044 (64 bytes) */

    /* Frustum planes and corners */
    RwFrustumPlane frustumPlanes[6]; /* +0x084 (120 bytes) */
    RwBBox frustumBBox;              /* +0x0FC (24 bytes) */
    RwV3d frustumCorners[8];         /* +0x114 (96 bytes) */

    /* Raster references */
    uint32_t frameBuffer;       /* +0x174 — Xbox VA → RwRaster* */
    uint32_t zBuffer;           /* +0x178 — Xbox VA → RwRaster* */

    /* Z-buffer transform (maps camera Z to depth buffer range) */
    float zScale;               /* +0x17C */
    float zShift;               /* +0x180 */

    /* Device-level view/projection matrices (set by platform driver) */
    RwRawMatrix devView;        /* +0x184 (64 bytes) */
    RwRawMatrix devProj;        /* +0x1C4 (64 bytes) */

    /* References */
    uint32_t clump;             /* +0x204 — Xbox VA → RwClump* (if attached) */

    uint8_t _pad0[0x0C];       /* +0x208..+0x213 */

    uint32_t renderCallBack;    /* +0x214 — Xbox VA → render CB */
} RwCamera;  /* 0x218 = 536 bytes */

_Static_assert(sizeof(RwCamera) == 0x218, "RwCamera must be 0x218 bytes");
_Static_assert(offsetof(RwCamera, viewWindow) == 0x1C, "RwCamera::viewWindow at +0x1C");
_Static_assert(offsetof(RwCamera, nearPlane) == 0x34, "RwCamera::nearPlane at +0x34");
_Static_assert(offsetof(RwCamera, projectionType) == 0x40, "RwCamera::projectionType at +0x40");
_Static_assert(offsetof(RwCamera, viewMatrix) == 0x44, "RwCamera::viewMatrix at +0x44");
_Static_assert(offsetof(RwCamera, frustumPlanes) == 0x84, "RwCamera::frustumPlanes at +0x84");
_Static_assert(offsetof(RwCamera, frameBuffer) == 0x174, "RwCamera::frameBuffer at +0x174");
_Static_assert(offsetof(RwCamera, zBuffer) == 0x178, "RwCamera::zBuffer at +0x178");
_Static_assert(offsetof(RwCamera, devView) == 0x184, "RwCamera::devView at +0x184");
_Static_assert(offsetof(RwCamera, devProj) == 0x1C4, "RwCamera::devProj at +0x1C4");

/* ═══════════════════════════════════════════════════════════════
 *  RwSurfaceProperties — 12 bytes
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwSurfaceProperties {
    float ambient;   /* +0x00 */
    float specular;  /* +0x04 */
    float diffuse;   /* +0x08 */
} RwSurfaceProperties;  /* 12 bytes */

/* ═══════════════════════════════════════════════════════════════
 *  RwMaterial — 32 bytes base
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwMaterial {
    uint32_t texture;           /* +0x00 — Xbox VA → RwTexture* */
    RwRGBA color;               /* +0x04 */
    uint32_t pipeline;          /* +0x08 — Xbox VA → RxPipeline* */
    RwSurfaceProperties surf;   /* +0x0C (12 bytes) */
    int16_t  refCount;          /* +0x18 */
    int16_t  pad;               /* +0x1A */
    uint8_t  _ext[4];           /* +0x1C — plugin extension area */
} RwMaterial;  /* 0x20 = 32 bytes */

_Static_assert(sizeof(RwMaterial) == 32, "RwMaterial must be 32 bytes");

/* ═══════════════════════════════════════════════════════════════
 *  RwGeometry — ~80 bytes base (variable with plugin data)
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwGeometry {
    RwObject object;          /* +0x00 (8 bytes) */
    uint32_t flags;           /* +0x08 — geometry flags */
    uint16_t lockedSinceLastInst; /* +0x0C */
    int16_t  refCount;        /* +0x0E */
    int32_t  numTriangles;    /* +0x10 */
    int32_t  numVertices;     /* +0x14 */
    int32_t  numMorphTargets; /* +0x18 */
    int32_t  numTexCoordSets; /* +0x1C */
    uint32_t triangles;       /* +0x20 — Xbox VA → RpTriangle* */
    uint32_t preLitLum;       /* +0x24 — Xbox VA → RwRGBA* (vertex colors) */
    uint32_t texCoords[8];    /* +0x28 — Xbox VA → RwTexCoords*[8] */
    uint32_t meshHeader;      /* +0x48 — Xbox VA → RpMeshHeader* */
    uint32_t instData;        /* +0x4C — Xbox VA → platform instance data */
} RwGeometry;  /* 0x50 = 80 bytes */

_Static_assert(sizeof(RwGeometry) == 80, "RwGeometry must be 80 bytes");

/* ═══════════════════════════════════════════════════════════════
 *  RwAtomic — ~80 bytes base
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwAtomic {
    RwObjectWithFrame objwf;      /* +0x00 (20 bytes) */
    uint32_t geometry;            /* +0x14 — Xbox VA → RwGeometry* */
    RwV3d boundingSphere_center;  /* +0x18 */
    float   boundingSphere_radius;/* +0x24 */
    RwV3d worldBoundingSphere_center; /* +0x28 */
    float   worldBoundingSphere_radius;/* +0x34 */
    uint32_t clump;               /* +0x38 — Xbox VA → RwClump* */
    RwLLLink inClumpLink;         /* +0x3C (8 bytes) */
    uint32_t renderCallBack;      /* +0x44 — Xbox VA → func ptr */
    uint32_t interpolator;        /* +0x48 — Xbox VA */
    uint16_t renderFrame;         /* +0x4C */
    uint16_t pad;                 /* +0x4E */
} RwAtomic;  /* 0x50 = 80 bytes */

_Static_assert(sizeof(RwAtomic) == 80, "RwAtomic must be 80 bytes");

/* ═══════════════════════════════════════════════════════════════
 *  RwClump — ~40 bytes base
 * ═══════════════════════════════════════════════════════════════ */

typedef struct RwClump {
    RwObject object;          /* +0x00 (8 bytes) */
    RwLinkList atomicList;    /* +0x08 (8 bytes) */
    RwLinkList lightList;     /* +0x10 (8 bytes) */
    RwLinkList cameraList;    /* +0x18 (8 bytes) */
    RwLLLink inWorldLink;     /* +0x20 (8 bytes) */
} RwClump;  /* 0x28 = 40 bytes */

_Static_assert(sizeof(RwClump) == 40, "RwClump must be 40 bytes");

/* ═══════════════════════════════════════════════════════════════
 *  Identity matrix constant
 * ═══════════════════════════════════════════════════════════════ */

#define RW_IDENTITY_MATRIX { \
    { {1.0f, 0.0f, 0.0f}, 0, \
      {0.0f, 1.0f, 0.0f}, 0, \
      {0.0f, 0.0f, 1.0f}, 0, \
      {0.0f, 0.0f, 0.0f}, 0x00020001 } /* rwMATRIXTYPEORTHONORMAL|IDENTITY */ \
}

#define RW_IDENTITY_RAW { { \
    {1.0f, 0.0f, 0.0f, 0.0f}, \
    {0.0f, 1.0f, 0.0f, 0.0f}, \
    {0.0f, 0.0f, 1.0f, 0.0f}, \
    {0.0f, 0.0f, 0.0f, 1.0f}  \
} }

#ifdef __cplusplus
}
#endif
