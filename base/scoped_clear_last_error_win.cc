// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedClearLastError Windows implementation
// summary: Implements the Windows variant of ScopedClearLastError, saving and restoring the thread's last system error around the scope.
// ---

#include "base/scoped_clear_last_error.h"

#include <windows.h>

namespace base {

ScopedClearLastError::ScopedClearLastError()
    : ScopedClearLastErrorBase(), last_system_error_(GetLastError()) {
  SetLastError(0);
}

ScopedClearLastError::~ScopedClearLastError() {
  SetLastError(last_system_error_);
}

}  // namespace base
