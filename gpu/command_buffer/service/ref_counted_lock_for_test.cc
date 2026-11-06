// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: RefCountedLockForTest implementation
// summary: Provides a no-op RefCountedLock implementation that returns no lock, for use in tests.
// ---

#include "gpu/command_buffer/service/ref_counted_lock_for_test.h"

namespace gpu {

RefCountedLockForTest::RefCountedLockForTest() = default;

RefCountedLockForTest::~RefCountedLockForTest() = default;

base::Lock* RefCountedLockForTest::GetDrDcLockPtr() {
  return nullptr;
}

void RefCountedLockForTest::AssertAcquired() {}

}  // namespace gpu
