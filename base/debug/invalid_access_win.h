// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows invalid access termination header
// summary: Declares Windows functions that terminate the process immediately with a heap corruption fast fail exception or a control flow guard violation.
// ---

#ifndef BASE_DEBUG_INVALID_ACCESS_WIN_H_
#define BASE_DEBUG_INVALID_ACCESS_WIN_H_

#include "base/base_export.h"

namespace base {
namespace debug {
namespace win {

// Creates a synthetic heap corruption that causes the current process to
// terminate immediately with a fast fail exception.
[[noreturn]] BASE_EXPORT void TerminateWithHeapCorruption();

// Creates a CFG violation.
[[noreturn]] BASE_EXPORT void TerminateWithControlFlowViolation();

}  // namespace win
}  // namespace debug
}  // namespace base

#endif  // BASE_DEBUG_INVALID_ACCESS_WIN_H_
