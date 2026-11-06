// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Leak detection request factory implementation
// summary: Implements LeakDetectionRequestFactory by creating LeakDetectionRequest instances for leak lookup network requests.
// ---

#include "components/password_manager/core/browser/leak_detection/leak_detection_request_factory.h"

#include "components/password_manager/core/browser/leak_detection/leak_detection_request.h"

namespace password_manager {

std::unique_ptr<LeakDetectionRequestInterface>
LeakDetectionRequestFactory::CreateNetworkRequest() const {
  return std::make_unique<LeakDetectionRequest>();
}

}  // namespace password_manager
