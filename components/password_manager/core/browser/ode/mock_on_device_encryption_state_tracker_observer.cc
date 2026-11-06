// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock ODE state tracker observer implementation
// summary: Implements the constructor and destructor of the mock on-device encryption state tracker observer used in unit tests.
// ---

#include "components/password_manager/core/browser/ode/mock_on_device_encryption_state_tracker_observer.h"

namespace password_manager {

MockOnDeviceEncryptionStateTrackerObserver::
    MockOnDeviceEncryptionStateTrackerObserver() = default;

MockOnDeviceEncryptionStateTrackerObserver::
    ~MockOnDeviceEncryptionStateTrackerObserver() = default;

}  // namespace password_manager
