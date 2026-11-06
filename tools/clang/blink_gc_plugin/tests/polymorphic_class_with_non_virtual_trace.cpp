// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Polymorphic class with non-virtual trace test source
// summary: Test source defining Trace methods for polymorphic classes to check the plugin's left-most polymorphic base rule.
// ---

#include "polymorphic_class_with_non_virtual_trace.h"

namespace blink {

void IsLeftMostPolymorphic::Trace(Visitor* visitor) const {
  visitor->Trace(m_obj);
}

void IsNotLeftMostPolymorphic::Trace(Visitor* visitor) const {
  visitor->Trace(m_obj);
}
}
