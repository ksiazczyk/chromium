// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock VSync timing observer
// summary: Provides a GoogleMock implementation of the VSyncTimingManager observer interface for use in tests.
// ---

#include "components/exo/mock_vsync_timing_observer.h"

namespace exo {

MockVSyncTimingObserver::MockVSyncTimingObserver() = default;

MockVSyncTimingObserver::~MockVSyncTimingObserver() = default;

}  // namespace exo
