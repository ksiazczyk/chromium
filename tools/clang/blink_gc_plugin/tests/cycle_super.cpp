// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: cycle_super.cpp
// summary: Implements the Trace methods used by the cycle_super leaking-cycle test case.
// ---

#include "cycle_super.h"

namespace blink {

void A::Trace(Visitor* visitor) const {
  visitor->Trace(m_d);
}

void B::Trace(Visitor* visitor) const {
  A::Trace(visitor);
}

void C::Trace(Visitor* visitor) const {
  B::Trace(visitor);
}
}
