// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SessionAccess struct implementation
// summary: Implements constructors, move semantics, and equality for the SessionAccess record describing session creation, update, or termination.
// ---

#include "net/device_bound_sessions/session_access.h"

#include "base/check_op.h"

namespace net::device_bound_sessions {

SessionAccess::SessionAccess() = default;
SessionAccess::SessionAccess(AccessType access, SessionKey key)
    : access_type(access), session_key(key) {}
SessionAccess::SessionAccess(AccessType access,
                             SessionKey key,
                             const std::vector<std::string>& cookies)
    : access_type(access), session_key(key), cookies(cookies) {
  CHECK_EQ(access, AccessType::kTermination);
}
SessionAccess::~SessionAccess() = default;
SessionAccess::SessionAccess(const SessionAccess&) = default;
SessionAccess& SessionAccess::operator=(const SessionAccess&) = default;
SessionAccess::SessionAccess(SessionAccess&&) noexcept = default;
SessionAccess& SessionAccess::operator=(SessionAccess&&) noexcept = default;

bool SessionAccess::operator==(const SessionAccess& other) const = default;

}  // namespace net::device_bound_sessions
