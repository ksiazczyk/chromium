// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cycle super negative test source
// summary: Negative test source defining Trace methods that should not trigger a leaking cycle diagnostic.
// ---

#include "cycle_super_neg.h"

namespace blink {

void B::Trace(Visitor* visitor) const {
  A::Trace(visitor);
}

void D::Trace(Visitor* visitor) const {
  visitor->Trace(m_c);
  A::Trace(visitor);
}
}
