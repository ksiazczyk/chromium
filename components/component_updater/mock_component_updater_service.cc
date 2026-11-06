// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock component update service implementation
// summary: Provides default gmock return values for the mock component update service used in tests.
// ---

#include "components/component_updater/mock_component_updater_service.h"

#include "components/component_updater/component_installer.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace component_updater {

MockComponentUpdateService::MockComponentUpdateService() {
  ON_CALL(*this, GetRegisteredVersion)
      .WillByDefault(testing::Return(base::Version(kNullVersion)));
  ON_CALL(*this, GetMaxPreviousProductVersion)
      .WillByDefault(testing::Return(base::Version(kNullVersion)));
}

MockComponentUpdateService::~MockComponentUpdateService() = default;

}  // namespace component_updater
