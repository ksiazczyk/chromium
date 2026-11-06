// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Raw pointer to GC managed class error test source
// summary: Test source for the error variant of the raw pointer test, which is compiled with -Werror so plugin warnings become errors.
// ---

#include "raw_ptr_to_gc_managed_class_error.h"

namespace blink {

void HeapObject::Trace(Visitor* visitor) const {
  visitor->Trace(m_objs);
}
}
