// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: inner_class test implementation
// summary: Test source defining SomeObject::InnerObject::Trace with a missing field trace to exercise plugin diagnostics for nested classes.
// ---

#include "inner_class.h"

namespace blink {

void SomeObject::InnerObject::Trace(Visitor* visitor) const {
  // Missing: visitor->Trace(m_obj);
}
}
