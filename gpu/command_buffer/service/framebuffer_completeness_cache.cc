// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FramebufferCompletenessCache implementation
// summary: Implements a cache that stores framebuffer format signatures reported as complete by the GL driver and answers completeness queries.
// ---

#include "gpu/command_buffer/service/framebuffer_completeness_cache.h"


namespace gpu::gles2 {

FramebufferCompletenessCache::FramebufferCompletenessCache() = default;

FramebufferCompletenessCache::~FramebufferCompletenessCache() = default;

bool FramebufferCompletenessCache::IsComplete(
    const std::string& signature) const {
  return cache_.contains(signature);
}

void FramebufferCompletenessCache::SetComplete(const std::string& signature) {
  cache_.insert(signature);
}

}  // namespace gpu::gles2
