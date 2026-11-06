// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unsafe buffers test for skipped header warnings
// summary: Test source including a skipped header to verify the plugin suppresses warnings for skipped files.
// ---

#include "unsafe_buffers_not_clean_dir/skipped_header.h"

void foo(int* p) {
  unsafe_template_func(p);
}
