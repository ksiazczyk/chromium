// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ref ptr to GC managed class test header
// summary: Test header declaring classes with scoped_refptr fields to GC-managed objects to exercise blink-gc plugin field checks.
// ---

#ifndef REF_PTR_TO_GC_MANAGED_CLASS_H_
#define REF_PTR_TO_GC_MANAGED_CLASS_H_

#include "heap/stubs.h"

namespace blink {

class HeapObject;

class PartObject {
    DISALLOW_NEW();
private:
    scoped_refptr<HeapObject> m_obj;
};

class HeapObject : public GarbageCollected<HeapObject> {
 public:
  void Trace(Visitor*) const;

 private:
  PartObject m_part;
  Vector<scoped_refptr<HeapObject>> m_objs;
};
}

#endif  // REF_PTR_TO_GC_MANAGED_CLASS_H_
