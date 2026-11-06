// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Trace if needed resolved test header
// summary: Test header declaring a heap object with member, integer and unique_ptr fields traced via TraceIfNeeded.
// ---

#ifndef TRACE_IF_NEEDED_RESOLVED_H_
#define TRACE_IF_NEEDED_RESOLVED_H_

#include "heap/stubs.h"

namespace blink {

struct Foo {};

class HeapObject : public GarbageCollected<HeapObject> {
 public:
  virtual void Trace(Visitor*) const;

 private:
  Member<HeapObject> m_one;
  int m_two;
  std::unique_ptr<Foo> m_three;
};

}  // namespace blink

#endif  // TRACE_IF_NEEDED_RESOLVED_H_
