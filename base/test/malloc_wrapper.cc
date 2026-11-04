// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Malloc wrapper implementation
// summary: Implements MallocWrapper, a C function that calls malloc directly for use in tests.
// ---

#include "malloc_wrapper.h"

#include <stdlib.h>

void* MallocWrapper(size_t size) {
  return malloc(size);
}
