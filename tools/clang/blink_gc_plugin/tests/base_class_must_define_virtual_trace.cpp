// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Base class must define virtual trace test source
// summary: C++ test input for the blink-gc plugin defining Trace methods for classes whose bases lack a virtual Trace method.
// ---

#include "base_class_must_define_virtual_trace.h"

namespace blink {

void PartDerived::Trace(Visitor* visitor) const {}

void HeapDerived::Trace(Visitor* visitor) const {
  visitor->Trace(m_part);
}
}
