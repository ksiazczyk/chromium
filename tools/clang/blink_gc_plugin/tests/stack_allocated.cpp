// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Stack allocated test source
// summary: Test source verifying that the plugin also checks stack-allocated classes declared in an anonymous namespace.
// ---

#include "stack_allocated.h"

namespace blink {

// Verify that anon namespaces are checked.
namespace {

class AnonStackObject : public StackObject {
public:
    HeapObject* m_obj;
};

}

void HeapObject::Trace(Visitor* visitor) const {}
}
