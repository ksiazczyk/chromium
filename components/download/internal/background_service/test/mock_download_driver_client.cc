// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock download driver client implementation
// summary: Defines the constructor and destructor for the MockDriverClient test double used in download service unit tests.
// ---

#include "components/download/internal/background_service/test/mock_download_driver_client.h"

namespace download {

MockDriverClient::MockDriverClient() = default;

MockDriverClient::~MockDriverClient() = default;

}  // namespace download
