// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Session option key name constants
// summary: Defines inline constant strings for the session option key names used when parsing client session options.
// ---

#ifndef REMOTING_BASE_SESSION_OPTIONS_CONSTANTS_H_
#define REMOTING_BASE_SESSION_OPTIONS_CONSTANTS_H_

#include "build/build_config.h"

namespace remoting {

// Session option key names.
inline constexpr char kSessionOptionDetectUpdatedRegion[] =
    "Detect-Updated-Region";
inline constexpr char kSessionOptionCaptureVideoOnDedicatedThread[] =
    "Capture-Video-On-Dedicated-Thread";
#if BUILDFLAG(IS_MAC)
inline constexpr char kSessionOptionEnableSckCapturer[] = "Enable-Sck-Capturer";
#endif  // BUILDFLAG(IS_MAC)
#if BUILDFLAG(IS_WIN)
inline constexpr char kSessionOptionAllowDxgiCapturer[] = "Allow-Dxgi-Capturer";
#endif  // BUILDFLAG(IS_WIN)
inline constexpr char kSessionOptionDisableUdp[] = "Disable-UDP";
inline constexpr char kSessionOptionVp9EncoderSpeed[] = "Vp9-Encoder-Speed";
inline constexpr char kSessionOptionAv1ActiveMap[] = "Av1-Active-Map";
inline constexpr char kSessionOptionAv1EncoderSpeed[] = "Av1-Encoder-Speed";

}  // namespace remoting

#endif  // REMOTING_BASE_SESSION_OPTIONS_CONSTANTS_H_
