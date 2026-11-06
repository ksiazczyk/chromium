// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: traceimpl error test source
// summary: Defines out-of-line Trace methods for classes with untraced members and untraced bases to trigger plugin warnings.
// ---

#include "traceimpl_error.h"

namespace blink {

void TraceImplExternWithUntracedMember::Trace(Visitor* visitor) const {
  // Should get a warning as well.
}

void TraceImplExternWithUntracedBase::Trace(Visitor* visitor) const {
  // Ditto.
}
}
