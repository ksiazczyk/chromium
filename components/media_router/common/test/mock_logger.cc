// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockLogger implementation
// summary: Implements the constructor and destructor of the MockLogger test double for the media router logger Mojo interface.
// ---

#include "components/media_router/common/test/mock_logger.h"

namespace media_router {

MockLogger::MockLogger() = default;

MockLogger::~MockLogger() = default;

}  // namespace media_router
