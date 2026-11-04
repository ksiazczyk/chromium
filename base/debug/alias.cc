// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of base::debug::Alias
// summary: Implements the noinline Alias function that is excluded from LTO so the optimizer cannot see its implementation, letting callers preserve values in crash dumps.
// ---

#include "base/debug/alias.h"

#include "base/compiler_specific.h"

namespace base::debug {

// This file/function should be excluded from LTO/LTCG to ensure that the
// compiler can't see this function's implementation when compiling calls to it.
NOINLINE void Alias(const void* var) {}

}  // namespace base::debug
