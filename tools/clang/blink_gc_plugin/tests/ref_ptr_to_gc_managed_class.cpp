// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ref pointer to GC managed class test source
// summary: Test source implementing an empty Trace method for the reference pointer to GC managed class test case.
// ---

#include "ref_ptr_to_gc_managed_class.h"

namespace blink {

void HeapObject::Trace(Visitor*) const {}
}
