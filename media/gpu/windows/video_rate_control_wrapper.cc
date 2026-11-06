// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Video rate control wrapper implementation
// summary: Defines the constructors, destructors, and assignment operators for the VideoRateControlWrapper RateControlConfig struct.
// ---

#include "media/gpu/windows/video_rate_control_wrapper.h"

namespace media {

VideoRateControlWrapper::RateControlConfig::RateControlConfig() = default;
VideoRateControlWrapper::RateControlConfig::~RateControlConfig() = default;
VideoRateControlWrapper::RateControlConfig::RateControlConfig(
    const RateControlConfig&) = default;
VideoRateControlWrapper::RateControlConfig&
VideoRateControlWrapper::RateControlConfig::operator=(
    const RateControlConfig&) = default;

}  // namespace media
