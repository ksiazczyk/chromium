// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSafeModeDelegate implementation
// summary: Implements the gmock MockSafeModeDelegate used to stand in for SafeModeDelegate during tests.
// ---

#include "chromeos/ash/components/login/auth/mock_safe_mode_delegate.h"

namespace ash {

MockSafeModeDelegate::MockSafeModeDelegate() = default;

MockSafeModeDelegate::~MockSafeModeDelegate() = default;

}  // namespace ash
