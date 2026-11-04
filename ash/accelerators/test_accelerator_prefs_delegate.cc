// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test accelerator prefs delegate implementation
// summary: Stub implementation of AcceleratorPrefsDelegate that always reports the user as enterprise managed for use in tests.
// relations:
//   - depends_on /ash/accelerators/test_accelerator_prefs_delegate.h
// ---

#include "ash/accelerators/test_accelerator_prefs_delegate.h"

namespace ash {

bool TestAcceleratorPrefsDelegate::IsUserEnterpriseManaged() const {
  return true;
}

}  // namespace ash
