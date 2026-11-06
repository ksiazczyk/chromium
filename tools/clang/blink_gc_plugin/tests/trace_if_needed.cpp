// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Trace if needed test source
// summary: Test source with a templated Trace method that omits tracing one field, exercising the plugin's untraced-field check.
// ---

#include "trace_if_needed.h"

namespace blink {

template <typename T>
void TemplatedObject<T>::Trace(Visitor* visitor) const {
  TraceIfNeeded<T>::Trace(visitor, &m_one);
  // Missing Trace of m_two
}
}
