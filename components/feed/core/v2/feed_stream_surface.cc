// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feed stream surface implementation
// summary: Implements FeedStreamSurface, assigning a unique surface ID to each surface for a given stream type.
// ---

#include "components/feed/core/v2/feed_stream_surface.h"

namespace feed {

FeedStreamSurface::FeedStreamSurface(StreamType stream_type)
    : stream_type_(stream_type) {
  static SurfaceId::Generator id_generator;
  surface_id_ = id_generator.GenerateNextId();
}

FeedStreamSurface::~FeedStreamSurface() = default;

SurfaceId FeedStreamSurface::GetSurfaceId() const {
  return surface_id_;
}

}  // namespace feed
