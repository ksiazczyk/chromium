// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Zstd disabled stub
// summary: Provides stub Zstd stream factory functions that return null when Zstd support is disabled in the build.
// ---

#include "net/filter/zstd_source_stream.h"

namespace net {

std::unique_ptr<FilterSourceStream> CreateZstdSourceStream(
    std::unique_ptr<SourceStream> previous) {
  return nullptr;
}

std::unique_ptr<FilterSourceStream> CreateZstdSourceStreamWithDictionary(
    std::unique_ptr<SourceStream> previous,
    scoped_refptr<IOBuffer> dictionary,
    size_t dictionary_size) {
  return nullptr;
}

}  // namespace net
