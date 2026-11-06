// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock model client implementation
// summary: Defines the constructor and destructor for the MockModelClient test double used in download service unit tests.
// ---

#include "components/download/internal/background_service/test/mock_model_client.h"

namespace download {
namespace test {

MockModelClient::MockModelClient() = default;
MockModelClient::~MockModelClient() = default;

}  // namespace test
}  // namespace download
