// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Base class must define virtual trace test header
// summary: Header declaring part and heap base classes that intentionally omit a virtual Trace method to trigger plugin warnings.
// ---

#ifndef BASE_CLASS_MUST_DEFINE_VIRTUAL_TRACE_H_
#define BASE_CLASS_MUST_DEFINE_VIRTUAL_TRACE_H_

#include "heap/stubs.h"

namespace blink {

class PartBase {
    DISALLOW_NEW();
    // Missing virtual Trace.
};

class PartDerived : public PartBase {
    DISALLOW_NEW();
public:
 virtual void Trace(Visitor*) const;
};

class HeapBase : public GarbageCollected<HeapBase> {
    // Missing virtual Trace.
};


class HeapDerived : public HeapBase {
public:
 virtual void Trace(Visitor*) const;

private:
    PartDerived m_part;
};


}

#endif  // BASE_CLASS_MUST_DEFINE_VIRTUAL_TRACE_H_
