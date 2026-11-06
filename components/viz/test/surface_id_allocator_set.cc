// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Surface ID allocator set implementation
// summary: Implements SurfaceIdAllocatorSet, which stores ParentLocalSurfaceIdAllocators per FrameSinkId and builds SurfaceIds with embed tokens for tests.
// ---

#include "components/viz/test/surface_id_allocator_set.h"

namespace viz {

SurfaceIdAllocatorSet::SurfaceIdAllocatorSet() = default;

SurfaceIdAllocatorSet::~SurfaceIdAllocatorSet() = default;

ParentLocalSurfaceIdAllocator* SurfaceIdAllocatorSet::GetAllocator(
    const FrameSinkId& frame_sink_id) {
  return &allocators_[frame_sink_id];
}

SurfaceId SurfaceIdAllocatorSet::MakeSurfaceId(const FrameSinkId& frame_sink_id,
                                               uint32_t parent_sequence_number,
                                               uint32_t child_sequence_number) {
  return SurfaceId(frame_sink_id,
                   LocalSurfaceId(parent_sequence_number, child_sequence_number,
                                  allocators_[frame_sink_id].GetEmbedToken()));
}

}  // namespace viz
