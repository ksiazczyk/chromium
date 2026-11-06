// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock SystemMediaControls implementation
// summary: Implements the constructor and destructor of the MockSystemMediaControls gmock class used to fake SystemMediaControls in tests.
// ---

#include "components/system_media_controls/mock_system_media_controls.h"

namespace system_media_controls {

namespace testing {

MockSystemMediaControls::MockSystemMediaControls() = default;

MockSystemMediaControls::~MockSystemMediaControls() = default;

}  // namespace testing

}  // namespace system_media_controls
