// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IndexRect implementation
// summary: Implements IndexRect operations for clamping to another rect, containment checks for index coordinates, and string formatting of the rect bounds.
// ---

#include "cc/base/index_rect.h"

#include <algorithm>

#include "base/strings/stringprintf.h"

namespace cc {

void IndexRect::ClampTo(const IndexRect& other) {
  left_ = std::max(left_, other.left());
  top_ = std::max(top_, other.top());
  right_ = std::min(right_, other.right());
  bottom_ = std::min(bottom_, other.bottom());
}

bool IndexRect::Contains(int index_x, int index_y) const {
  return index_x >= left_ && index_x <= right_ && index_y >= top_ &&
         index_y <= bottom_;
}

std::string IndexRect::ToString() const {
  return base::StringPrintf("%d,%d,%d,%d", left(), right(), top(), bottom());
}

}  // namespace cc
