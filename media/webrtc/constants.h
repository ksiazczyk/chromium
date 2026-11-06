// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// ---docerion
// type: source
// title: WebRTC audio processing sample rate constant
// summary: Declares the exported function returning the sample rate in Hz used by WebRTC audio processing algorithms in the media component.
// ---

#ifndef MEDIA_WEBRTC_CONSTANTS_H_
#define MEDIA_WEBRTC_CONSTANTS_H_

#include "base/component_export.h"

namespace media {

// The sample rate used by (WebRTC) audio processing algorithms.
COMPONENT_EXPORT(MEDIA_WEBRTC) int WebRtcAudioProcessingSampleRateHz();

}  // namespace media

#endif  // MEDIA_WEBRTC_CONSTANTS_H_
