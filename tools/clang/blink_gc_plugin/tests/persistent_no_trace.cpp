// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Persistent no trace test source
// summary: Test source that traces persistent, weak persistent, and cross-thread persistent fields to exercise the Blink GC plugin's untraceable field checks.
// ---

#include "persistent_no_trace.h"

namespace blink {

void Object::Trace(Visitor* visitor) const {
  visitor->Trace(m_persistent);
  visitor->Trace(m_weakPersistent);
  visitor->Trace(m_crossThreadPersistent);
  visitor->Trace(m_crossThreadWeakPersistent);
}
}
