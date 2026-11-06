// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock SMS web contents delegate implementation
// summary: Provides the default constructor and destructor for the MockSmsWebContentsDelegate test double.
// ---

#include "content/browser/sms/test/mock_sms_web_contents_delegate.h"

namespace content {

MockSmsWebContentsDelegate::MockSmsWebContentsDelegate() = default;

MockSmsWebContentsDelegate::~MockSmsWebContentsDelegate() = default;

}  // namespace content
