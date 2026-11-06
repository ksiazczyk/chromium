// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: cycle_sub.cpp
// summary: Implements the Trace methods used by the cycle_sub leaking-cycle test case.
// ---

#include "cycle_sub.h"

namespace blink {

void B::Trace(Visitor* visitor) const {
  visitor->Trace(m_c);
  A::Trace(visitor);
}
}
