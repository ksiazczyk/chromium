// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: alias.cc
// summary: Implements the no-inline Alias() function that keeps variables alive in crash dumps and must be excluded from LTO so the compiler cannot see its body.
// ---

#include "partition_alloc/partition_alloc_base/debug/alias.h"

#include "partition_alloc/partition_alloc_base/compiler_specific.h"

namespace partition_alloc::internal::base::debug {

// This file/function should be excluded from LTO/LTCG to ensure that the
// compiler can't see this function's implementation when compiling calls to it.
PA_NOINLINE void Alias(const void* var) {}

}  // namespace partition_alloc::internal::base::debug
