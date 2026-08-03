#include "manx/runtime.hpp"
#include "burnout3_input.h"

#include <SDL3/SDL.h>

#include <algorithm>
#include <array>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <string>
#include <thread>
#include <vector>

extern "C" {
bool burnout3_init(const char* game_data_path);
void burnout3_shutdown(void);
bool burnout3_run_frame(uint8_t* pixels, int* width, int* height);
void burnout3_inject_input(const b3_pad_state* pad);
void burnout3_inject_keyboard(const bool* keys, int key_count);
int burnout3_audio_callback(int16_t* buffer, int max_frames);
}

namespace {

void SDLCALL fill_audio(void*, SDL_AudioStream* stream,
                        int additional_amount, int) {
    constexpr int chunk_frames = 1024;
    constexpr int bytes_per_frame = 2 * static_cast<int>(sizeof(int16_t));
    std::array<int16_t, chunk_frames * 2> samples{};
    int needed = (additional_amount + bytes_per_frame - 1) / bytes_per_frame;
    while (needed > 0) {
        const int requested = std::min(needed, chunk_frames);
        const int produced = std::clamp(
            burnout3_audio_callback(samples.data(), requested), 0, requested);
        std::fill(samples.begin() + produced * 2,
                  samples.begin() + requested * 2, 0);
        SDL_PutAudioStreamData(stream, samples.data(),
                               requested * bytes_per_frame);
        needed -= requested;
    }
}

b3_pad_state translate_input(const manx::gamepad_state& input) {
    b3_pad_state pad{};
    pad.steer = input.steering;
    pad.gas = input.gas;
    pad.brake = input.brake;
    pad.start = input.start;
    pad.confirm = input.confirm;
    pad.back = input.back;
    pad.up = input.up;
    pad.down = input.down;
    pad.left = input.left;
    pad.right = input.right;
    return pad;
}

} // namespace

int main(int argc, char** argv) {
    const std::filesystem::path game_dir =
        argc > 1 ? argv[1] : "game_data";
    if (!std::filesystem::exists(game_dir / "default.xbe")) {
        std::fprintf(stderr,
            "MANXBurnout3: %s does not contain default.xbe\n"
            "Pass the directory extracted from your own Xbox disc.\n",
            game_dir.string().c_str());
        return 2;
    }

#if !defined(_WIN32)
    if (!std::getenv("B3_INTRO") && !std::getenv("B3_SKIP_INTRO"))
        setenv("B3_INTRO", "1", 0);
#endif

    manx::video_options video;
    video.fullscreen = std::getenv("BURNOUT3_WINDOWED") == nullptr;
    video.integer_scaling = false;
    video.linear_filtering = true;
    manx::runtime host;
    if (!host.initialize("MANX - Burnout 3: Takedown", video)) {
        std::fprintf(stderr, "MANXBurnout3: video init failed: %s\n",
                     host.last_error().c_str());
        return 1;
    }

    if (!burnout3_init(game_dir.string().c_str())) {
        std::fprintf(stderr, "MANXBurnout3: game initialization failed\n");
        return 1;
    }

    SDL_AudioStream* audio = nullptr;
    if (SDL_InitSubSystem(SDL_INIT_AUDIO)) {
        SDL_AudioSpec spec{SDL_AUDIO_S16, 2, 48000};
        audio = SDL_OpenAudioDeviceStream(
            SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, fill_audio, nullptr);
        if (audio) SDL_ResumeAudioStreamDevice(audio);
    }

    std::vector<uint8_t> frame(640u * 480u * 4u);
    auto deadline = std::chrono::steady_clock::now();
    while (host.process_events() == manx::host_action::continue_running) {
        int key_count = 0;
        const bool* keys = SDL_GetKeyboardState(&key_count);
        burnout3_inject_keyboard(keys, key_count);
        const b3_pad_state pad = translate_input(host.input());
        burnout3_inject_input(&pad);

        int width = 640;
        int height = 480;
        if (burnout3_run_frame(frame.data(), &width, &height) &&
            width > 0 && height > 0)
            host.present_rgba(frame.data(), width, height, 4, 3);

        deadline += std::chrono::microseconds(16667);
        const auto now = std::chrono::steady_clock::now();
        if (now - deadline > std::chrono::milliseconds(50)) deadline = now;
        std::this_thread::sleep_until(deadline);
    }

    if (audio) SDL_DestroyAudioStream(audio);
    burnout3_shutdown();
    return 0;
}
