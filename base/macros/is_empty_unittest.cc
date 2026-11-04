// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Compile-time tests for BASE_IS_EMPTY
// summary: Unit test using static_assert to verify BASE_IS_EMPTY returns 1 for no arguments, 0 for one or more arguments, and handles expanded empty macros correctly.
// ---

#include "base/macros/is_empty.h"

static_assert(BASE_IS_EMPTY() == 1);
static_assert(BASE_IS_EMPTY(a) == 0);
static_assert(BASE_IS_EMPTY(a, b) == 0);
static_assert(BASE_IS_EMPTY(a, b, c) == 0);

// Make sure that any args are expanded before emptiness is assessed.
#define EXPAND_EMPTY()
static_assert(BASE_IS_EMPTY(EXPAND_EMPTY()) == 1);
