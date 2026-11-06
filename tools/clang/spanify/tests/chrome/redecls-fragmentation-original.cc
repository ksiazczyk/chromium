// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: redecls-fragmentation original test input
// summary: Original test input defining ProcessBuffer to check spanify behavior when a function has redeclarations.
// ---

#include "tools/clang/spanify/tests/chrome/redecls-fragmentation-original.h"

// No rewrite expected: ProcessBuffer has a third_party redeclaration.
void ProcessBuffer(int* p) {
  p++;
}
