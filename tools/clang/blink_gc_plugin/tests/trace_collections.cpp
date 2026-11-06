// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Trace collections test source
// summary: Test source for the blink-gc plugin with a heap object whose Trace method leaves its collection fields untraced.
// ---

#include "trace_collections.h"

namespace blink {

void HeapObject::Trace(Visitor* visitor) const {}
}
