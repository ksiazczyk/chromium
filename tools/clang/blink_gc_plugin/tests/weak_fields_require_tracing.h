// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Weak fields require tracing test header
// summary: Header declaring a garbage-collected class with member, weak member and weak set fields for the weak tracing test.
// ---

#ifndef WEAK_FIELDS_REQUIRE_TRACING_H_
#define WEAK_FIELDS_REQUIRE_TRACING_H_

#include "heap/stubs.h"

namespace blink {

class HeapObject : public GarbageCollected<HeapObject> {
public:
 void Trace(Visitor*) const;
 void clearWeakMembers(Visitor*);

private:
    Member<HeapObject> m_obj1;
    WeakMember<HeapObject> m_obj2;
    WeakMember<HeapObject> m_obj3;
    HeapHashSet<WeakMember<HeapObject> > m_set1;
    HeapHashSet<WeakMember<HeapObject> > m_set2;
};

}

#endif  // WEAK_FIELDS_REQUIRE_TRACING_H_
