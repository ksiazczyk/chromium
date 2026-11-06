// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Blink GC plugin test for persistent fields in GC-managed classes
// summary: Test input defining a Trace method for a garbage-collected class that holds Persistent and related GC root fields.
// ---

#include "persistent_field_in_gc_managed_class.h"

namespace blink {

void HeapObject::Trace(Visitor* visitor) const {
  visitor->Trace(m_parts);
}
}
