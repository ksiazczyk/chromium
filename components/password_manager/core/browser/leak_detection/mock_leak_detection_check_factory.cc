// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Leak detection check factory mock implementation
// summary: Implements the constructor and destructor of the mocked leak detection check factory used by unit tests.
// ---

#include "components/password_manager/core/browser/leak_detection/mock_leak_detection_check_factory.h"

#include "services/network/public/cpp/shared_url_loader_factory.h"

namespace password_manager {

MockLeakDetectionCheckFactory::MockLeakDetectionCheckFactory() = default;
MockLeakDetectionCheckFactory::~MockLeakDetectionCheckFactory() = default;

}  // namespace password_manager
