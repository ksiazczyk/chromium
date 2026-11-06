// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PrefixIterator implementation
// summary: Implements the constructors of PrefixIterator, a random access iterator used to binary search within hash prefix buffers.
// ---

#include "components/safe_browsing/core/browser/db/prefix_iterator.h"

#include <string_view>

namespace safe_browsing {

PrefixIterator::PrefixIterator(std::string_view prefixes,
                               size_t index,
                               size_t size)
    : prefixes_(prefixes), index_(index), size_(size) {}

PrefixIterator::PrefixIterator(const PrefixIterator& rhs)
    : prefixes_(rhs.prefixes_), index_(rhs.index_), size_(rhs.size_) {}

}  // namespace safe_browsing
