// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestReferenceReader implementation
// summary: Implements a trivial ReferenceReader that sequentially returns injected references, serving as a test double for unit tests.
// ---

#include "components/zucchini/test_reference_reader.h"

namespace zucchini {

TestReferenceReader::TestReferenceReader(const std::vector<Reference>& refs)
    : references_(refs) {}

TestReferenceReader::~TestReferenceReader() = default;

std::optional<Reference> TestReferenceReader::GetNext() {
  if (index_ == references_.size())
    return std::nullopt;
  return references_[index_++];
}

}  // namespace zucchini
