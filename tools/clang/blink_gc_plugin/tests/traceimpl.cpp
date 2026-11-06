// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Blink GC plugin test source for TraceImpl
// summary: C++ test input providing out-of-line Trace implementations for the TraceImplExtern and TraceImplBaseExtern classes.
// ---

#include "traceimpl.h"

namespace blink {

void TraceImplExtern::Trace(Visitor* visitor) const {
  visitor->Trace(x_);
}

void TraceImplBaseExtern::Trace(Visitor* visitor) const {
  visitor->Trace(x_);
  Base::Trace(visitor);
}
}
