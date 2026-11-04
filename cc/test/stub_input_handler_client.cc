// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Stub input handler client implementation
// summary: Implements StubInputHandlerClient, whose only defined method reports that no input is queued.
// ---

#include "cc/test/stub_input_handler_client.h"

namespace cc {

bool StubInputHandlerClient::HasQueuedInput() const {
  return false;
}

}  // namespace cc
