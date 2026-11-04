// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FakeRasterQueryQueue test double implementation
// summary: Implements FakeRasterQueryQueue, a stub RasterQueryQueue whose raster-finished query check always returns false for cc tests.
// ---

#include "cc/test/fake_raster_query_queue.h"

namespace cc {

FakeRasterQueryQueue::FakeRasterQueryQueue(
    viz::RasterContextProvider* const worker_context_provider)
    : RasterQueryQueue(worker_context_provider) {}

FakeRasterQueryQueue::~FakeRasterQueryQueue() = default;

bool FakeRasterQueryQueue::CheckRasterFinishedQueries() {
  return false;
}

}  // namespace cc
