// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SourceStream base class implementation
// summary: Implements the SourceStream constructor, destructor and default Description method for the net filter layer.
// ---

#include "net/filter/source_stream.h"

namespace net {

SourceStream::SourceStream(SourceStreamType type) : type_(type) {}

SourceStream::~SourceStream() = default;

std::string SourceStream::Description() const {
  return "";
}

}  // namespace net
