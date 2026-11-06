// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: redecls-fragmentation original header
// summary: Original header declaring ProcessBuffer for the redecls fragmentation spanify test.
// ---

#ifndef TOOLS_CLANG_SPANIFY_TESTS_CHROME_REDECLS_FRAGMENTATION_ORIGINAL_H_
#define TOOLS_CLANG_SPANIFY_TESTS_CHROME_REDECLS_FRAGMENTATION_ORIGINAL_H_

// No rewrite expected: ProcessBuffer has a third_party redeclaration.
void ProcessBuffer(int* p);

#endif  // TOOLS_CLANG_SPANIFY_TESTS_CHROME_REDECLS_FRAGMENTATION_ORIGINAL_H_
