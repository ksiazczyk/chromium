// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Blink GC plugin test for part-object fields of GC derived classes
// summary: Test input defining a Trace method for a garbage-collected class that embeds a GC derived part object.
// ---

#include "part_object_to_gc_derived_class.h"

namespace blink {

void B::Trace(Visitor* visitor) const {
  visitor->Trace(m_a);
}
}
