// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Trace if needed resolved test source
// summary: Test source verifying that TraceIfNeeded calls on non-template types count as tracing the fields.
// ---

#include "trace_if_needed_resolved.h"

namespace blink {

void HeapObject::Trace(Visitor* visitor) const {
  // Using TraceIfNeeded with a non-template type should count as tracing a
  // field.
  TraceIfNeeded<Member<HeapObject>>::Trace(visitor, m_one);
  TraceIfNeeded<int>::Trace(visitor, m_two);
  TraceIfNeeded<std::unique_ptr<Foo>>::Trace(visitor, m_three);
}

}  // namespace blink
