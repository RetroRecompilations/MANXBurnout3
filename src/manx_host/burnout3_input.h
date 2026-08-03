/**
 * burnout3_input.h — pad state handed from the MANX session (C++)
 * to the Burnout 3 bridge (C).
 *
 * This struct exists because the bridge previously mirrored MANX's
 * C++ `input_state` layout by hand and drifted out of sync (missing
 * fields, wrong order), so every button read landed on the wrong byte.
 * The session translates the real input_state into this explicit,
 * ABI-stable form; the bridge maps it onto the game's XInput globals.
 */

#ifndef BURNOUT3_INPUT_H
#define BURNOUT3_INPUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct b3_pad_state {
    int16_t steer;    /* -32767..32767, positive = right */
    uint8_t gas;      /* 0..255 */
    uint8_t brake;    /* 0..255 */
    uint8_t start;    /* momentary */
    uint8_t confirm;  /* A — menu confirm, also boost while driving */
    uint8_t back;     /* B — menu back / leave race */
    uint8_t up, down, left, right;  /* d-pad / left stick directions */
} b3_pad_state;

void burnout3_inject_input(const b3_pad_state *pad);

#ifdef __cplusplus
}
#endif

#endif /* BURNOUT3_INPUT_H */
