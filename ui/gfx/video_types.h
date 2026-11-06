// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Protected video type enum
// summary: Defines the ProtectedVideoType enum distinguishing clear, software-protected, and hardware-protected video.
// ---

#ifndef UI_GFX_VIDEO_TYPES_H_
#define UI_GFX_VIDEO_TYPES_H_

namespace gfx {

enum class ProtectedVideoType : uint32_t {
  kClear = 0,
  kSoftwareProtected = 1,
  kHardwareProtected = 2,
  kMaxValue = kHardwareProtected,
};

}  // namespace gfx

#endif  // UI_GFX_VIDEO_TYPES_H_
