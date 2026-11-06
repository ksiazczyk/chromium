// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast audio device ID constants
// summary: Defines string constants for special Cast audio device identifiers such as local, platform, assistant alarm, TTS, bypass, default, and low latency.
// ---

#include "chromecast/media/base/audio_device_ids.h"

namespace chromecast {
namespace media {

const char kLocalAudioDeviceId[] = "local";
const char kPlatformAudioDeviceId[] = "platform";
const char kAlarmAudioDeviceId[] = "assistant-alarm";
const char kTtsAudioDeviceId[] = "assistant-tts";
const char kBypassAudioDeviceId[] = "bypass";
const char kNoDelayDeviceId[] = "no_delay";
const char kDefaultDeviceId[] = "default";
const char kLowLatencyDeviceId[] = "low_latency";

}  // namespace media
}  // namespace chromecast
