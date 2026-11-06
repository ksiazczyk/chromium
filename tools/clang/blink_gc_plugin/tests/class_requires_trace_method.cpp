// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: class_requires_trace_method test source
// summary: Test input for the blink-gc plugin defining Trace methods for the mixin classes declared in the matching test header.
// ---

#include "class_requires_trace_method.h"

namespace blink {

void Mixin2::Trace(Visitor* visitor) const {
  Mixin::Trace(visitor);
}

void Mixin3::Trace(Visitor* visitor) const {
  Mixin::Trace(visitor);
}

} // namespace blink
