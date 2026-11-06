// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SimpleGeolocationRequestTestMonitor implementation
// summary: Implements the default no-op hooks of the test monitor that observes geolocation request creation and start.
// ---

#include "chromeos/ash/components/geolocation/simple_geolocation_request_test_monitor.h"

namespace ash {

SimpleGeolocationRequestTestMonitor::SimpleGeolocationRequestTestMonitor() =
    default;

SimpleGeolocationRequestTestMonitor::~SimpleGeolocationRequestTestMonitor() =
    default;

void SimpleGeolocationRequestTestMonitor::OnRequestCreated(
    SimpleGeolocationRequest* request) {}

void SimpleGeolocationRequestTestMonitor::OnStart(
    SimpleGeolocationRequest* request) {}

}  // namespace ash
