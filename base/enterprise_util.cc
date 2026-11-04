// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Managed and enterprise device detection implementation
// summary: Implements IsManagedOrEnterpriseDevice by combining the managed device and enterprise device checks.
// ---

#include "base/enterprise_util.h"

namespace base {

bool IsManagedOrEnterpriseDevice() {
  return IsManagedDevice() || IsEnterpriseDevice();
}

}  // namespace base
