// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestContextData implementation
// summary: Implements the test ContextData subclass, reporting that the controlled frame capability is not available.
// ---

#include "extensions/test/test_context_data.h"

namespace extensions {

bool TestContextData::HasControlledFrameCapability() const {
  return false;
}

}  // namespace extensions
