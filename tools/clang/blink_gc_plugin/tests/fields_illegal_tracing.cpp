// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fields illegal tracing test source
// summary: Test source with Trace methods that illegally trace fields such as scoped_refptr and std::unique_ptr members.
// ---

#include "fields_illegal_tracing.h"

namespace blink {

void PartObjectWithTrace::Trace(Visitor* visitor) const {
  visitor->Trace(m_obj2);
  visitor->Trace(m_obj3);
  visitor->Trace(m_obj4);
}

void HeapObject::Trace(Visitor* visitor) const {
  visitor->Trace(m_obj2);
  visitor->Trace(m_obj3);
  visitor->Trace(m_obj4);
}
}
