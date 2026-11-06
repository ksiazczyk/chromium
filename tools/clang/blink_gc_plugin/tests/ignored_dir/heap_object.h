// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Heap object test header for ignored directory
// summary: Test fixture header defining a GarbageCollected HeapObject in the blink namespace, used to verify that no diagnostics are emitted for directories ignored via ignore-directory=.
// ---

#ifndef TOOLS_CLANG_BLINK_GC_PLUGIN_TESTS_IGNORED_DIR_HEAP_OBJECT_H_
#define TOOLS_CLANG_BLINK_GC_PLUGIN_TESTS_IGNORED_DIR_HEAP_OBJECT_H_

#include "heap/stubs.h"

namespace blink {

// This class is in the 'blink' namespace (normally checked), but lives in a
// directory that is ignored via ignore-directory=. No diagnostics expected.
class HeapObject : public GarbageCollected<HeapObject> {
  Member<HeapObject> m_member;
};

}  // namespace blink

#endif  // TOOLS_CLANG_BLINK_GC_PLUGIN_TESTS_IGNORED_DIR_HEAP_OBJECT_H_
