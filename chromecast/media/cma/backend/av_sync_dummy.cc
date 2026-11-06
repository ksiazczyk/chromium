// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dummy AvSync implementation
// summary: Provides a stub AvSync::Create that returns nullptr for builds without a real AV sync implementation.
// ---

#include "chromecast/media/cma/backend/av_sync.h"

namespace chromecast {
namespace media {

std::unique_ptr<AvSync> AvSync::Create(
    MediaPipelineBackendForMixer* const backend) {
  return nullptr;
}

}  // namespace media
}  // namespace chromecast
