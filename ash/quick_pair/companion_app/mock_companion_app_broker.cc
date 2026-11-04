// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockCompanionAppBroker implementation
// summary: Implements observer registration for the mock companion app broker used in tests.
// relations:
//   - implements /ash/quick_pair/companion_app/mock_companion_app_broker.h
//   - references /testing/gmock/include/gmock/gmock.h
// ---

#include "ash/quick_pair/companion_app/mock_companion_app_broker.h"

#include "testing/gmock/include/gmock/gmock.h"

namespace ash::quick_pair {

MockCompanionAppBroker::MockCompanionAppBroker() = default;

MockCompanionAppBroker::~MockCompanionAppBroker() = default;

void MockCompanionAppBroker::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void MockCompanionAppBroker::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

}  // namespace ash::quick_pair
