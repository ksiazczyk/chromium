// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock DLP content observer implementation
// summary: Implements the constructor and destructor of the gmock mock DLP content observer used in DLP policy tests.
// ---

#include "chrome/browser/chromeos/policy/dlp/test/mock_dlp_content_observer.h"

namespace policy {

MockDlpContentObserver::MockDlpContentObserver() = default;

MockDlpContentObserver::~MockDlpContentObserver() = default;

}  // namespace policy
