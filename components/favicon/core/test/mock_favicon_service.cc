// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockFaviconService implementation
// summary: Provides the default constructor and destructor for the MockFaviconService used by favicon tests.
// ---

#include "components/favicon/core/test/mock_favicon_service.h"

namespace favicon {

MockFaviconService::MockFaviconService() = default;

MockFaviconService::~MockFaviconService() = default;

}  // namespace favicon
