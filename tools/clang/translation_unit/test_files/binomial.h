// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// ---docerion
// type: source
// title: binomial.h test fixture header
// summary: Header with a recursive binomial function that is included by the translation unit tool test sources.
// ---

#ifndef TOOLS_CLANG_TRANSLATION_UNIT_TEST_FILES_BINOMIAL_H_
#define TOOLS_CLANG_TRANSLATION_UNIT_TEST_FILES_BINOMIAL_H_

int binomial(int n, int k) {
  return k > 0 ? binomial(n - 1, k - 1) * n / k : 1;
}

#endif  // TOOLS_CLANG_TRANSLATION_UNIT_TEST_FILES_BINOMIAL_H_
