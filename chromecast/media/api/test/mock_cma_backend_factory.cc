// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock CMA backend factory implementation
// summary: Implements the constructor and destructor of the MockCmaBackendFactory gmock class used in Cast media tests.
// ---

#include "chromecast/media/api/test/mock_cma_backend_factory.h"

namespace chromecast {
namespace media {

MockCmaBackendFactory::MockCmaBackendFactory() = default;
MockCmaBackendFactory::~MockCmaBackendFactory() = default;

}  // namespace media
}  // namespace chromecast
