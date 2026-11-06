// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock devices changed observer implementation
// summary: Implements the constructor and destructor of the MockDevicesChangedObserver gmock helper used in video capture tests.
// ---

#include "services/video_capture/test/mock_devices_changed_observer.h"

namespace video_capture {

MockDevicesChangedObserver::MockDevicesChangedObserver() = default;

MockDevicesChangedObserver::~MockDevicesChangedObserver() = default;

}  // namespace video_capture
