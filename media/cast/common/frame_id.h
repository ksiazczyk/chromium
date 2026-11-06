// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FrameId type alias
// summary: Aliases media::cast::FrameId to the Open Screen cast::FrameId, with a TODO to remove the alias and use the Open Screen type directly.
// ---

#ifndef MEDIA_CAST_COMMON_FRAME_ID_H_
#define MEDIA_CAST_COMMON_FRAME_ID_H_

#include "third_party/openscreen/src/cast/streaming/public/frame_id.h"

namespace media::cast {

// TODO(crbug.com/40231271): this typedef should be removed and
// the openscreen type used directly.
using FrameId = openscreen::cast::FrameId;

}  // namespace media::cast

#endif  // MEDIA_CAST_COMMON_FRAME_ID_H_
