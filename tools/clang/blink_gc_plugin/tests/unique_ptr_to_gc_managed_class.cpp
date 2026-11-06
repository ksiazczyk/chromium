// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unique pointer to GC-managed class test source
// summary: Source file for the unique_ptr_to_gc_managed_class test case of the Blink GC plugin checks.
// ---

#include "unique_ptr_to_gc_managed_class.h"

namespace blink {

void HeapObject::Trace(Visitor* visitor) const {}
}
