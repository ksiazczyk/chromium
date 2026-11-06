// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Pure virtual trace test header
// summary: Test header for the Blink GC plugin declaring a garbage-collected class with a pure-virtual Trace method that should trigger a warning.
// ---

#ifndef PURE_VIRTUAL_TRACE_H_
#define PURE_VIRTUAL_TRACE_H_

#include "heap/stubs.h"

namespace blink {

class A : public GarbageCollected<A> {
public:
 virtual void Trace(Visitor*) const = 0;
};

}

#endif  // PURE_VIRTUAL_TRACE_H_
