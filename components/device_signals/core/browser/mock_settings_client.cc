// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSettingsClient implementation
// summary: Defines the constructor and destructor of the MockSettingsClient gmock test double used by device signals unit tests.
// ---

#include "components/device_signals/core/browser/mock_settings_client.h"

namespace device_signals {

MockSettingsClient::MockSettingsClient() = default;
MockSettingsClient::~MockSettingsClient() = default;

}  // namespace device_signals
