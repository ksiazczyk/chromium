// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BufferProvider function reference type
// summary: Defines a BufferProvider function reference that returns a byte span sized for cache content or an empty span.
// ---

#ifndef COMPONENTS_PERSISTENT_CACHE_BUFFER_PROVIDER_H_
#define COMPONENTS_PERSISTENT_CACHE_BUFFER_PROVIDER_H_

#include <stdint.h>

#include "base/containers/span.h"
#include "base/functional/function_ref.h"

namespace persistent_cache {

// A reference to a function that returns either a span over a buffer to hold
// precisely `content_size` bytes or an empty span.
using BufferProvider =
    base::FunctionRef<base::span<uint8_t>(size_t content_size)>;

}  // namespace persistent_cache

#endif  // COMPONENTS_PERSISTENT_CACHE_BUFFER_PROVIDER_H_
