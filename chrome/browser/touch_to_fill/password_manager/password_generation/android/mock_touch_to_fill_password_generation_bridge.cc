// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock Touch to Fill password generation bridge implementation
// summary: Implements a gmock mock of the password generation bridge with a default Show return value.
// ---

#include "chrome/browser/touch_to_fill/password_manager/password_generation/android/mock_touch_to_fill_password_generation_bridge.h"

#include "testing/gmock/include/gmock/gmock.h"

MockTouchToFillPasswordGenerationBridge::
    MockTouchToFillPasswordGenerationBridge() {
  ON_CALL(*this, Show).WillByDefault(testing::Return(true));
}
MockTouchToFillPasswordGenerationBridge::
    ~MockTouchToFillPasswordGenerationBridge() = default;
