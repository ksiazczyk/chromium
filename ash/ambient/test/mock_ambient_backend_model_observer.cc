// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock ambient backend model observer implementation
// summary: Implements the constructor and destructor of the GoogleMock mock of AmbientBackendModelObserver used in ambient mode tests.
// relations:
//   - depends_on /ash/ambient/test/mock_ambient_backend_model_observer.h
// ---

#include "ash/ambient/test/mock_ambient_backend_model_observer.h"

namespace ash {

MockAmbientBackendModelObserver::MockAmbientBackendModelObserver() = default;

MockAmbientBackendModelObserver::~MockAmbientBackendModelObserver() = default;

}  // namespace ash
