// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Weak fields require tracing test source
// summary: Test source with weak member fields whose required Trace calls are missing from the visitor and weak-members callback.
// ---

#include "weak_fields_require_tracing.h"

namespace blink {

void HeapObject::Trace(Visitor* visitor) const {
  // Missing visitor->Trace(m_obj1);
  // Missing visitor->Trace(m_obj2);
  // visitor->Trace(m_obj3) in callback.
  // Missing visitor->Trace(m_set1);
  visitor->Trace(m_set2);
  visitor->RegisterWeakMembers<HeapObject, &HeapObject::clearWeakMembers>(this);
}

void HeapObject::clearWeakMembers(Visitor* visitor)
{
    visitor->Trace(m_obj1);  // Does not count.
    // Missing visitor->Trace(m_obj2);
    visitor->Trace(m_obj3);  // OK.
    visitor->Trace(m_set1);  // Does not count.
}

}
