// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockPlatformKeysService test double
// summary: Implements the gmock MockPlatformKeysService and a helper that builds it as a keyed service for tests.
// ---

#include "chrome/browser/ash/platform_keys/mock_platform_keys_service.h"

namespace ash {
namespace platform_keys {

MockPlatformKeysService::MockPlatformKeysService() = default;
MockPlatformKeysService::~MockPlatformKeysService() = default;

std::unique_ptr<KeyedService> BuildMockPlatformKeysService(
    content::BrowserContext*) {
  return std::make_unique<MockPlatformKeysService>();
}

}  // namespace platform_keys
}  // namespace ash
