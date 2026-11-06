// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake status changed event args implementation
// summary: Implements fake IStatusChangedEventArgs that reports a fixed position status for geolocation tests.
// ---

#include "services/device/geolocation/win/fake_status_changed_event_args_winrt.h"

namespace device {
namespace {
using ABI::Windows::Devices::Geolocation::PositionStatus;
}

FakeStatusChangedEventArgs::FakeStatusChangedEventArgs(
    PositionStatus position_status)
    : position_status_(position_status) {}

FakeStatusChangedEventArgs::~FakeStatusChangedEventArgs() = default;

IFACEMETHODIMP FakeStatusChangedEventArgs::get_Status(PositionStatus* value) {
  *value = position_status_;
  return S_OK;
}

}  // namespace device