// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Overloaded trace test source
// summary: Implements Trace for ExternBase and ExternDerived, tracing fields and calling the base Trace, for the traceimpl_overloaded test.
// ---

#include "traceimpl_overloaded.h"

namespace blink {

void ExternBase::Trace(Visitor* visitor) const {
  visitor->Trace(x_base_);
}

void ExternDerived::Trace(Visitor* visitor) const {
  visitor->Trace(x_derived_);
  ExternBase::Trace(visitor);
}
}
