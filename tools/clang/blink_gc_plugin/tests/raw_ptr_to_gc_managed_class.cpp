// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Raw pointer to GC managed class test source
// summary: Test source implementing the Trace method for the raw pointer to GC managed class test case.
// ---

#include "raw_ptr_to_gc_managed_class.h"

namespace blink {

void HeapObject::Trace(Visitor* visitor) const {
  visitor->Trace(m_objs);
}
}
