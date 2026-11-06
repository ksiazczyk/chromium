// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock platform delegate implementation
// summary: Provides the default constructor and destructor for the MockPlatformDelegate test double.
// ---

#include "components/device_signals/core/system_signals/mock_platform_delegate.h"

namespace device_signals {

MockPlatformDelegate::MockPlatformDelegate() = default;
MockPlatformDelegate::~MockPlatformDelegate() = default;

}  // namespace device_signals
