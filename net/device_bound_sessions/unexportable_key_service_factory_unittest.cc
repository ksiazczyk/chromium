// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unexportable key service factory unit tests
// summary: Unit tests verifying creation and destruction of the UnexportableKeyServiceFactory singleton in the device bound sessions module.
// ---

#include "net/device_bound_sessions/unexportable_key_service_factory.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace net::device_bound_sessions {

namespace {

TEST(UnexportableKeyServiceFactoryTest, CreateAndDestroy) {
  UnexportableKeyServiceFactory* instance =
      UnexportableKeyServiceFactory::GetInstanceForTesting();
  ASSERT_TRUE(instance);
  delete instance;
}

}  // namespace

}  // namespace net::device_bound_sessions
