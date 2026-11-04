// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock HID device observer implementation
// summary: Implements the constructor and destructor of MockHidDeviceObserver, a gmock-based test double for HID device observers.
// ---

#include "chrome/browser/hid/mock_hid_device_observer.h"

MockHidDeviceObserver::MockHidDeviceObserver() = default;

MockHidDeviceObserver::~MockHidDeviceObserver() = default;
