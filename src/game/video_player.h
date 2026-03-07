/**
 * Burnout 3: Takedown - Video Player
 *
 * Plays pre-converted MP4 video files using Windows Media Foundation.
 * Renders decoded frames as fullscreen D3D11 textures through our
 * D3D8 compatibility layer.
 *
 * Used for boot sequence (Criterion logo, EA logo, title intro) and
 * in-game FMV (crash replays, signature takedowns, etc.).
 */

#ifndef BURNOUT3_VIDEO_PLAYER_H
#define BURNOUT3_VIDEO_PLAYER_H

#include <stdint.h>

/* Initialize/shutdown Media Foundation (call once at app start/end) */
int  video_init(void);
void video_shutdown(void);

/* Open a video file for playback. Returns 0 on success. */
int  video_open(const char *path);

/* Advance playback by dt seconds, decode next frame if needed.
 * Returns 1 if a new frame is ready, 0 if unchanged, -1 if finished. */
int  video_update(float dt);

/* Render the current video frame as a fullscreen quad.
 * Call between BeginScene/EndScene. */
void video_render(void);

/* Check if the video has finished playing. */
int  video_is_finished(void);

/* Close the current video and release resources. */
void video_close(void);

/* === Boot sequence state machine === */

/* Boot phases */
#define BOOT_PHASE_CRITERION_LOGO  0
#define BOOT_PHASE_EA_LOGO         1
#define BOOT_PHASE_TITLE_VIDEO     2
#define BOOT_PHASE_PRESS_START     3
#define BOOT_PHASE_MENU            4
#define BOOT_PHASE_GAMEPLAY        5

/* Get current boot phase */
int  boot_get_phase(void);

/* Advance boot state machine. Call once per frame.
 * skip=1 if user pressed a button to skip current video.
 * Returns the new phase. */
int  boot_update(float dt, int skip);

/* Render current boot phase (video frame or press-start screen). */
void boot_render(void);

#endif /* BURNOUT3_VIDEO_PLAYER_H */
