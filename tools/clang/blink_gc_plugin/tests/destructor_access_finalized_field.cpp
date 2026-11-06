// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Destructor access finalized field test source
// summary: Test source with a finalizer that validly and invalidly accesses fields to exercise finalized-field checks.
// ---

#include "destructor_access_finalized_field.h"

namespace blink {

HeapObject::~HeapObject()
{
    // Valid access to fields.
    if (m_ref->foo() && !m_obj) {
        m_objs.size();
        m_part.obj();
    }

    // Invalid access to fields.
    bar(m_obj);
    m_obj->foo();
    m_objs[0];
}

void HeapObject::Trace(Visitor* visitor) const {
  visitor->Trace(m_obj);
  visitor->Trace(m_objs);
  visitor->Trace(m_part);
}

void PartOther::Trace(Visitor* visitor) const {
  visitor->Trace(m_obj);
}
}
