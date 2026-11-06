// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Skipped header fixture with unsafe template function
// summary: Small test header containing an unsafe template function expected to trigger a warning when used from checked code.
// ---

#ifndef SKIPPED_HEADER_H_
#define SKIPPED_HEADER_H_

template <typename T>
void unsafe_template_func(T* p) {
  p[5] = 0;  // This should warn
}

#endif  // SKIPPED_HEADER_H_
