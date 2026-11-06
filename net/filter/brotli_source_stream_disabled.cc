// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Brotli source stream disabled stub
// summary: Provides stub factory functions that return null when Brotli support is excluded from the build.
// ---

#include "net/filter/brotli_source_stream.h"

namespace net {

std::unique_ptr<FilterSourceStream> CreateBrotliSourceStream(
    std::unique_ptr<SourceStream> previous) {
  return nullptr;
}

std::unique_ptr<FilterSourceStream> CreateBrotliSourceStreamWithDictionary(
    std::unique_ptr<SourceStream> previous,
    scoped_refptr<IOBuffer> dictionary,
    size_t dictionary_size) {
  return nullptr;
}

}  // namespace net
