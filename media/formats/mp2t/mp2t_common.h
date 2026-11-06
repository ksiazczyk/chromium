// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MP2T common macros and constants
// summary: Shared macros, log levels and audio/video track ID constants for the MPEG-2 TS parsing code, including the RCHECK parsing guard macro.
// ---

#ifndef MEDIA_FORMATS_MP2T_MP2T_COMMON_H_
#define MEDIA_FORMATS_MP2T_MP2T_COMMON_H_

#include "base/logging.h"

#define LOG_LEVEL_TS  5
#define LOG_LEVEL_PES 4
#define LOG_LEVEL_ES  3

#define RCHECK(x) \
    do { \
      if (!(x)) { \
        DLOG(WARNING) << "Failure while parsing Mpeg2TS: " << #x; \
        return false; \
      } \
    } while (0)

namespace media {
namespace mp2t {
const int kMp2tAudioTrackId = 1;
const int kMp2tVideoTrackId = 2;
}  // namespace media
}  // namespace mp2t

#endif  // MEDIA_FORMATS_MP2T_MP2T_COMMON_H_
