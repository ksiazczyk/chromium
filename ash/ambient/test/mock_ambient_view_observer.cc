// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock ambient view observer implementation
// summary: Implements the constructor and destructor of the GoogleMock mock of AmbientViewDelegateObserver used in ambient mode tests.
// relations:
//   - implements /ash/ambient/test/mock_ambient_view_observer.h
// ---

#include "ash/ambient/test/mock_ambient_view_observer.h"

namespace ash {

MockAmbientViewObserver::MockAmbientViewObserver() = default;

MockAmbientViewObserver::~MockAmbientViewObserver() = default;

}  // namespace ash
