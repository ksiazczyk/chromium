// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SkottieWrapper Seek implementation
// summary: Implements the SkottieWrapper Seek overload by delegating to Seek with a default frame data callback.
// ---

#include "cc/paint/skottie_wrapper.h"

namespace cc {

void SkottieWrapper::Seek(float t) {
  Seek(t, FrameDataCallback());
}

}  // namespace cc
