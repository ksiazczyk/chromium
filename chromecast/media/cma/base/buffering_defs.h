// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Buffering size definitions header
// summary: Declares the audio and video buffer size constants for the Cast media buffering pipeline.
// ---

#ifndef CHROMECAST_MEDIA_CMA_BASE_BUFFERING_DEFS_H_
#define CHROMECAST_MEDIA_CMA_BASE_BUFFERING_DEFS_H_

#include <stddef.h>

namespace chromecast {
namespace media {

extern const size_t kAppAudioBufferSize;
extern const size_t kAppVideoBufferSize;

}  // namespace media
}  // namespace chromecast

#endif  // CHROMECAST_MEDIA_CMA_BASE_BUFFERING_DEFS_H_
