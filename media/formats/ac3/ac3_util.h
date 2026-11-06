// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ac3_util.h
// summary: Declares the media::Ac3Util class with static methods for counting audio samples in AC3 and E-AC3 syncframe buffers.
// ---

#ifndef MEDIA_FORMATS_AC3_AC3_UTIL_H_
#define MEDIA_FORMATS_AC3_AC3_UTIL_H_

#include <stddef.h>
#include <stdint.h>

#include "base/containers/span.h"
#include "media/base/media_export.h"

namespace media {

class MEDIA_EXPORT Ac3Util {
 public:
  Ac3Util(const Ac3Util&) = delete;
  Ac3Util& operator=(const Ac3Util&) = delete;

  // Returns the total number of audio samples in the given buffer, which
  // contains several complete AC3 syncframes.
  static size_t ParseTotalAc3SampleCount(base::span<const uint8_t> data);

  // Returns the total number of audio samples in the given buffer, which
  // contains several complete E-AC3 syncframes.
  static size_t ParseTotalEac3SampleCount(base::span<const uint8_t> data);
};

}  // namespace media

#endif  // MEDIA_FORMATS_AC3_AC3_UTIL_H_
