// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock browser bound key deleter service implementation
// summary: Implements the constructor and destructor of the gmock mock for the browser bound key deleter service used in tests.
// ---

#include "chrome/browser/payments/browser_binding/mock_browser_bound_key_deleter_service.h"

namespace payments {

MockBrowserBoundKeyDeleterService::MockBrowserBoundKeyDeleterService() =
    default;

MockBrowserBoundKeyDeleterService::~MockBrowserBoundKeyDeleterService() =
    default;

}  // namespace payments
