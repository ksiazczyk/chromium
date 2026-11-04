// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock build state observer
// summary: Declares a gmock-based BuildStateObserver that records OnUpdate notifications for use in upgrade detector tests.
// ---

#ifndef CHROME_BROWSER_UPGRADE_DETECTOR_MOCK_BUILD_STATE_OBSERVER_H_
#define CHROME_BROWSER_UPGRADE_DETECTOR_MOCK_BUILD_STATE_OBSERVER_H_

#include "chrome/browser/upgrade_detector/build_state_observer.h"
#include "testing/gmock/include/gmock/gmock.h"

class MockBuildStateObserver : public BuildStateObserver {
 public:
  MockBuildStateObserver();
  ~MockBuildStateObserver() override;
  MOCK_METHOD(void, OnUpdate, (const BuildState*), (override));
};

#endif  // CHROME_BROWSER_UPGRADE_DETECTOR_MOCK_BUILD_STATE_OBSERVER_H_
