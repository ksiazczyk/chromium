// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Leak detection request mock implementation
// summary: Implements constructors and destructors of the mocked leak detection request and its request factory.
// ---

#include "components/password_manager/core/browser/leak_detection/mock_leak_detection_request_factory.h"

namespace password_manager {

MockLeakDetectionRequest::MockLeakDetectionRequest() = default;
MockLeakDetectionRequest::~MockLeakDetectionRequest() = default;

MockLeakDetectionRequestFactory::MockLeakDetectionRequestFactory() = default;
MockLeakDetectionRequestFactory::~MockLeakDetectionRequestFactory() = default;

}  // namespace password_manager
