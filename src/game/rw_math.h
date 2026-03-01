/**
 * Burnout 3: Takedown - Math Utilities for 3D Rendering
 *
 * Inline 4x4 matrix and vector helpers shared between the pseudo-3D
 * renderer (main.c) and the RenderWare 3D renderer (rw_renderer.c).
 */

#ifndef RW_MATH_H
#define RW_MATH_H

#include <math.h>
#include <string.h>

static inline void mat4_identity(float m[16])
{
    memset(m, 0, 64);
    m[0] = m[5] = m[10] = m[15] = 1.0f;
}

static inline void mat4_perspective(float m[16], float fov_y_rad, float aspect,
                                    float znear, float zfar)
{
    float f = 1.0f / tanf(fov_y_rad * 0.5f);
    memset(m, 0, 64);
    m[0]  = f / aspect;
    m[5]  = f;
    m[10] = zfar / (zfar - znear);
    m[11] = 1.0f;
    m[14] = -(znear * zfar) / (zfar - znear);
}

static inline void mat4_lookat(float m[16],
                               float ex, float ey, float ez,
                               float tx, float ty, float tz,
                               float ux, float uy, float uz)
{
    float fx = tx - ex, fy = ty - ey, fz = tz - ez;
    float fl = sqrtf(fx*fx + fy*fy + fz*fz);
    if (fl > 0) { fx /= fl; fy /= fl; fz /= fl; }

    /* right = forward x up */
    float rx = fy*uz - fz*uy, ry = fz*ux - fx*uz, rz = fx*uy - fy*ux;
    float rl = sqrtf(rx*rx + ry*ry + rz*rz);
    if (rl > 0) { rx /= rl; ry /= rl; rz /= rl; }

    /* true up = right x forward */
    float tux = ry*fz - rz*fy, tuy = rz*fx - rx*fz, tuz = rx*fy - ry*fx;

    m[0] = rx;  m[1] = tux; m[2]  = fx;  m[3]  = 0;
    m[4] = ry;  m[5] = tuy; m[6]  = fy;  m[7]  = 0;
    m[8] = rz;  m[9] = tuz; m[10] = fz;  m[11] = 0;
    m[12] = -(rx*ex + ry*ey + rz*ez);
    m[13] = -(tux*ex + tuy*ey + tuz*ez);
    m[14] = -(fx*ex + fy*ey + fz*ez);
    m[15] = 1.0f;
}

static inline void mat4_rotation_y(float m[16], float angle_rad)
{
    float c = cosf(angle_rad), s = sinf(angle_rad);
    mat4_identity(m);
    m[0] = c;  m[2] = -s;
    m[8] = s;  m[10] = c;
}

static inline void mat4_translation(float m[16], float x, float y, float z)
{
    mat4_identity(m);
    m[12] = x;  m[13] = y;  m[14] = z;
}

static inline void mat4_scaling(float m[16], float sx, float sy, float sz)
{
    memset(m, 0, 64);
    m[0] = sx;  m[5] = sy;  m[10] = sz;  m[15] = 1.0f;
}

static inline void mat4_multiply(float out[16], const float a[16], const float b[16])
{
    float tmp[16];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            tmp[i*4+j] = a[i*4+0]*b[0*4+j] + a[i*4+1]*b[1*4+j]
                        + a[i*4+2]*b[2*4+j] + a[i*4+3]*b[3*4+j];
        }
    }
    memcpy(out, tmp, 64);
}

#endif /* RW_MATH_H */
