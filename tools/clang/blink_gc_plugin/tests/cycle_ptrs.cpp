// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cycle pointers test source
// summary: Test implementing Trace methods for classes A and B that reference each other, exercising cycle handling in the blink-gc plugin.
// ---

#include "cycle_ptrs.h"

namespace blink {

void A::Trace(Visitor* visitor) const {
  visitor->Trace(m_b);
}

void B::Trace(Visitor* visitor) const {
  visitor->Trace(m_a);
}
}
