// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: redecls-fragmentation-tp expected test output
// summary: Expected spanify output including a third_party header to test redeclaration-based rewrite suppression.
// ---

// clang-format off
#include "tools/clang/spanify/tests/chrome/redecls-fragmentation-original.h"
#include "tools/clang/spanify/tests/chrome/third_party/ignored.h"
// clang-format on
