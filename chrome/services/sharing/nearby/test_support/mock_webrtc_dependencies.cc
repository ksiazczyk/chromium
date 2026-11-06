// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock WebRTC dependencies implementation
// summary: Implements the constructor and destructor of MockWebRtcDependencies, a gmock helper mimicking browser process and network service dependencies.
// ---

#include "chrome/services/sharing/nearby/test_support/mock_webrtc_dependencies.h"

namespace sharing {

MockWebRtcDependencies::MockWebRtcDependencies() = default;
MockWebRtcDependencies::~MockWebRtcDependencies() = default;

}  // namespace sharing
