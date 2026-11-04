// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PlatformThreadRef stream output operator
// summary: Defines the ostream output operator for PlatformThreadRef, printing the underlying thread reference id.
// ---

#include "base/threading/platform_thread_ref.h"

#include <ostream>

namespace base {

std::ostream& operator<<(std::ostream& os, const PlatformThreadRef& ref) {
  os << ref.id_;
  return os;
}

}  // namespace base
