// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test source for third-party exclusion of the stack-allocated check
// summary: C++ test input including a third-party header to verify that the stack-allocated check skips third-party code.
// ---

#include "third_party/raw_ptr_to_stack_allocated_third_party_test.h"
