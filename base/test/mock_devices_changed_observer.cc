// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Implementation of MockDevicesChangedObserver
// summary: Implements the constructor and destructor of MockDevicesChangedObserver, a gmock mock of SystemMonitor's devices changed observer.
// ---

#include "base/test/mock_devices_changed_observer.h"

namespace base {

MockDevicesChangedObserver::MockDevicesChangedObserver() = default;

MockDevicesChangedObserver::~MockDevicesChangedObserver() = default;

}  // namespace base
