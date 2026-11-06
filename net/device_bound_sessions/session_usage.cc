// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SessionUsage helper functions
// summary: Implements helpers that classify per-request session usage as in scope and compute the maximum usage across a map of session keys for use counters.
// ---

#include "net/device_bound_sessions/session_usage.h"

namespace net::device_bound_sessions {

bool IsInScope(SessionUsage usage) {
  return usage >= SessionUsage::kInScopeRefreshNotYetNeeded;
}

SessionUsage GetMaxUsage(const base::flat_map<SessionKey, SessionUsage>&
                             device_bound_session_usage) {
  auto max_usage = SessionUsage::kNoSiteMatchNotInScope;
  for (const auto& [key, usage] : device_bound_session_usage) {
    if (usage > max_usage) {
      max_usage = usage;
    }
  }
  return max_usage;
}

}  // namespace net::device_bound_sessions
