// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Non-virtual trace test header
// summary: Header declaring garbage-collected classes whose Trace methods are non-virtual for the plugin test.
// ---

#ifndef NON_VIRTUAL_TRACE_H_
#define NON_VIRTUAL_TRACE_H_

#include "heap/stubs.h"

namespace blink {

class A : public GarbageCollected<A> {
public:
 void Trace(Visitor*) const;
};

class B : public A {
};

class C : public B {
public:
 void Trace(Visitor*) const;  // Cannot override a non-virtual Trace.
};

class D : public B {
public:
 virtual void Trace(Visitor*) const;  // Cannot override a non-virtual Trace.
};

}

#endif  // NON_VIRTUAL_TRACE_H_
