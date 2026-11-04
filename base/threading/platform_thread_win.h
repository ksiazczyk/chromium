// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows platform thread memory priority assertion
// summary: Declares the internal AssertMemoryPriority helper that verifies a Windows thread's memory priority, exposed for use by unit tests.
// ---

#ifndef BASE_THREADING_PLATFORM_THREAD_WIN_H_
#define BASE_THREADING_PLATFORM_THREAD_WIN_H_

#include "base/base_export.h"
#include "base/threading/platform_thread.h"
#include "base/win/windows_types.h"

namespace base {
namespace internal {

// Assert that the memory priority of `thread` is `memory_priority`. Exposed
// for unit tests.
BASE_EXPORT void AssertMemoryPriority(HANDLE thread, int memory_priority);

}  // namespace internal

}  // namespace base

#endif  // BASE_THREADING_PLATFORM_THREAD_WIN_H_
