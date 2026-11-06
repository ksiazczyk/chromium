// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock SMS provider implementation
// summary: Implements the MockSmsProvider test double with default constructor and destructor for use in SMS feature tests.
// ---

#include "content/browser/sms/test/mock_sms_provider.h"

namespace content {

MockSmsProvider::MockSmsProvider() = default;

MockSmsProvider::~MockSmsProvider() = default;

}  // namespace content
