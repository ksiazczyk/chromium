// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock origin trials settings storage implementation
// summary: Implements the constructor and destructor of the gmock MockOriginTrialsSettingsStorage used as test support for origin trials settings.
// ---

#include "components/embedder_support/origin_trials/mock_origin_trials_settings_storage.h"

namespace embedder_support {

MockOriginTrialsSettingsStorage::MockOriginTrialsSettingsStorage() = default;
MockOriginTrialsSettingsStorage::~MockOriginTrialsSettingsStorage() = default;

}  // namespace embedder_support
