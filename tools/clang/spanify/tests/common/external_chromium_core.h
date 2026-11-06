// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: External Chromium Core Test Header
// summary: Test header simulating an external Chromium core function with buffer indexing, used to verify spanification exclusion behavior.
// ---

#ifndef TOOLS_CLANG_SPANIFY_TESTS_COMMON_EXTERNAL_CHROMIUM_CORE_H_
#define TOOLS_CLANG_SPANIFY_TESTS_COMMON_EXTERNAL_CHROMIUM_CORE_H_

// Simulates an external Chromium core function (e.g. in base/ or gpu/).
// It uses buffer indexing, which would trigger spanification if not excluded.
inline void ChromiumCoreFunction(const int* buffer) {
  int x = buffer[0];
}

#endif  // TOOLS_CLANG_SPANIFY_TESTS_COMMON_EXTERNAL_CHROMIUM_CORE_H_
