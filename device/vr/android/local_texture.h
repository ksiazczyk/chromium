// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LocalTexture struct
// summary: Defines the LocalTexture struct holding an OpenGL texture target and id used by Android XR rendering.
// ---

#ifndef DEVICE_VR_ANDROID_LOCAL_TEXTURE_H_
#define DEVICE_VR_ANDROID_LOCAL_TEXTURE_H_

#include <cstdint>

namespace device {

struct LocalTexture {
  uint32_t target = 0;
  uint32_t id = 0;
};

}  // namespace device

#endif  // DEVICE_VR_ANDROID_LOCAL_TEXTURE_H_
