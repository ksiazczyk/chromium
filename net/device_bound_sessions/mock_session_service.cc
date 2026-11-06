// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Session service mock implementation
// summary: Implements the constructor and destructor of the SessionServiceMock test double.
// ---

#include "net/device_bound_sessions/mock_session_service.h"

namespace net::device_bound_sessions {

SessionServiceMock::SessionServiceMock() = default;
SessionServiceMock::~SessionServiceMock() = default;

}  // namespace net::device_bound_sessions
