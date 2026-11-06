// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Context result helper implementation
// summary: Implements IsFatalOrSurfaceFailure, which reports whether a context creation result is a fatal or surface failure.
// ---

#include "gpu/command_buffer/common/context_result.h"

namespace gpu {

bool IsFatalOrSurfaceFailure(ContextResult result) {
  return result == ContextResult::kFatalFailure ||
         result == ContextResult::kSurfaceFailure;
}

}  // namespace gpu
