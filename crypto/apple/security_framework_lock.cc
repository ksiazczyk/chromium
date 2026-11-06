// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security framework lock implementation
// summary: Provides the process-wide base::Lock instance used to serialize calls to non-thread-safe macOS Security.framework APIs.
// ---

#include "crypto/apple/security_framework_lock.h"

#include "base/no_destructor.h"
#include "base/synchronization/lock.h"

namespace crypto::apple {

base::Lock& GetSecurityFrameworkLock() {
  static base::NoDestructor<base::Lock> s_lock;
  return *s_lock;
}

}  // namespace crypto::apple
