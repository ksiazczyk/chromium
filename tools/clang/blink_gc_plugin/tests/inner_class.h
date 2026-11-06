// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Inner garbage-collected class test fixture
// summary: Test header declaring a nested GarbageCollected class with an untraced Member field for the inner-class plugin test.
// ---

#ifndef INNER_CLASS_H_
#define INNER_CLASS_H_

#include "heap/stubs.h"

namespace blink {

class SomeObject {
private:
    class InnerObject : public GarbageCollected<InnerObject> {
    public:
     void Trace(Visitor*) const;

    private:
        Member<InnerObject> m_obj;
    };
};

}

#endif  // INNER_CLASS_H_
