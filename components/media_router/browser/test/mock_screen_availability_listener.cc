// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockScreenAvailabilityListener implementation
// summary: Implements the mock presentation screen availability listener, storing and returning the availability URL it was constructed with.
// ---

#include "components/media_router/browser/test/mock_screen_availability_listener.h"

namespace media_router {

MockScreenAvailabilityListener::MockScreenAvailabilityListener(
    const GURL& availability_url)
    : availability_url_(availability_url) {}

MockScreenAvailabilityListener::~MockScreenAvailabilityListener() = default;

GURL MockScreenAvailabilityListener::GetAvailabilityUrl() {
  return availability_url_;
}

}  // namespace media_router
