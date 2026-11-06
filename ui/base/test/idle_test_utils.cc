// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Idle provider test utilities implementation
// summary: Implements ScopedIdleProviderForTest, which installs and removes a fake IdleTimeProvider on IdlePollingService for tests.
// ---

#include "ui/base/test/idle_test_utils.h"

#include "ui/base/idle/idle_polling_service.h"
#include "ui/base/idle/idle_time_provider.h"

namespace ui::test {

ScopedIdleProviderForTest::ScopedIdleProviderForTest(
    std::unique_ptr<IdleTimeProvider> provider) {
  IdlePollingService::GetInstance()->SetProviderForTest(std::move(provider));
}

ScopedIdleProviderForTest::~ScopedIdleProviderForTest() {
  IdlePollingService::GetInstance()->SetProviderForTest(nullptr);
}

}  // namespace ui::test
