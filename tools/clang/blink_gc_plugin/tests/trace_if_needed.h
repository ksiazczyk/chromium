// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Trace if needed test header
// summary: Test header declaring a templated garbage-collected object with two fields and an instantiated subclass.
// ---

#ifndef TRACE_IF_NEEDED_H_
#define TRACE_IF_NEEDED_H_

#include "heap/stubs.h"

namespace blink {

class HeapObject : public GarbageCollected<HeapObject> { };

template<typename T>
class TemplatedObject : public GarbageCollected<TemplatedObject<T> > {
public:
 virtual void Trace(Visitor*) const;

private:
    T m_one;
    T m_two;
};

class InstantiatedObject : public TemplatedObject<Member<HeapObject> > { };

}

#endif  // TRACE_IF_NEEDED_H_
