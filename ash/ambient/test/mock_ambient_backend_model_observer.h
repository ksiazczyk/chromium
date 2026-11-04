// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock ambient backend model observer
// summary: Declares a GoogleMock mock of AmbientBackendModelObserver that stubs OnImageAdded and OnImagesReady for ambient mode unit tests.
// relations:
//   - implements /ash/ambient/model/ambient_backend_model_observer.h
//   - depends_on /testing/gmock/include/gmock/gmock.h
// ---

#ifndef ASH_AMBIENT_TEST_MOCK_AMBIENT_BACKEND_MODEL_OBSERVER_H_
#define ASH_AMBIENT_TEST_MOCK_AMBIENT_BACKEND_MODEL_OBSERVER_H_

#include "ash/ambient/model/ambient_backend_model_observer.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace ash {

class MockAmbientBackendModelObserver : public AmbientBackendModelObserver {
 public:
  MockAmbientBackendModelObserver();
  ~MockAmbientBackendModelObserver() override;

  // AmbientBackendModelObserver:
  MOCK_METHOD(void, OnImageAdded, (), (override));
  MOCK_METHOD(void, OnImagesReady, (), (override));
};

}  // namespace ash

#endif  // ASH_AMBIENT_TEST_MOCK_AMBIENT_BACKEND_MODEL_OBSERVER_H_
