// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock ambient view observer
// summary: Declares a GoogleMock mock of AmbientViewDelegateObserver that stubs OnMarkerHit for ambient mode unit tests.
// relations:
//   - implements /ash/ambient/ui/ambient_view_delegate.h
//   - depends_on /testing/gmock/include/gmock/gmock.h
// ---

#ifndef ASH_AMBIENT_TEST_MOCK_AMBIENT_VIEW_OBSERVER_H_
#define ASH_AMBIENT_TEST_MOCK_AMBIENT_VIEW_OBSERVER_H_

#include "ash/ambient/ui/ambient_view_delegate.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace ash {

class MockAmbientViewObserver : public AmbientViewDelegateObserver {
 public:
  MockAmbientViewObserver();
  MockAmbientViewObserver(const MockAmbientViewObserver&) = delete;
  MockAmbientViewObserver& operator=(const MockAmbientViewObserver&) = delete;
  ~MockAmbientViewObserver() override;

  MOCK_METHOD(void,
              OnMarkerHit,
              (AmbientPhotoConfig::Marker marker),
              (override));
};

}  // namespace ash

#endif  // ASH_AMBIENT_TEST_MOCK_AMBIENT_VIEW_OBSERVER_H_
