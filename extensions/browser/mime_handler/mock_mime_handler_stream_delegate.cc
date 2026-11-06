// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock mime handler stream delegate implementation
// summary: Provides the constructor and destructor for the gmock mock of MimeHandlerStreamDelegate used in mime handler tests.
// ---

#include "extensions/browser/mime_handler/mock_mime_handler_stream_delegate.h"

namespace extensions::mime_handler {

MockMimeHandlerStreamDelegate::MockMimeHandlerStreamDelegate() = default;
MockMimeHandlerStreamDelegate::~MockMimeHandlerStreamDelegate() = default;

}  // namespace extensions::mime_handler
