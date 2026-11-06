// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AV1 video rate control wrapper declarations
// summary: Declares the AV1RateControl alias and template specializations that adapt the generic rate control wrapper to libaom's AV1 rate control.
// ---

#ifndef MEDIA_GPU_WINDOWS_AV1_VIDEO_RATE_CONTROL_WRAPPER_H_
#define MEDIA_GPU_WINDOWS_AV1_VIDEO_RATE_CONTROL_WRAPPER_H_

#include "third_party/libaom/source/libaom/av1/ratectrl_rtc.h"
#include "video_rate_control_wrapper.h"

namespace media {

using AV1RateControl =
    VideoRateControlWrapperInternal<aom::AV1RateControlRtcConfig,
                                    aom::AV1RateControlRTC,
                                    aom::AV1FrameParamsRTC>;
template <>
int AV1RateControl::GetLoopfilterLevel() const;

template <>
void AV1RateControl::PostEncodeUpdate(uint64_t encoded_frame_size,
                                      const FrameParams& frame_params);

template <>
aom::AV1RateControlRtcConfig AV1RateControl::ConvertControlConfig(
    const RateControlConfig& config);

template <>
aom::AV1FrameParamsRTC AV1RateControl::ConvertFrameParams(
    const FrameParams& frame_params);

}  // namespace media

#endif  // MEDIA_GPU_WINDOWS_AV1_VIDEO_RATE_CONTROL_WRAPPER_H_
