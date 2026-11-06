// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockAllowHttpAuthPreferences implementation
// summary: Implements a mock HttpAuthPreferences that allows default credentials and unconstrained delegation for all origins in unit tests.
// ---

#include "net/http/mock_allow_http_auth_preferences.h"
#include "build/build_config.h"

namespace net {

MockAllowHttpAuthPreferences::MockAllowHttpAuthPreferences() = default;

MockAllowHttpAuthPreferences::~MockAllowHttpAuthPreferences() = default;

bool MockAllowHttpAuthPreferences::CanUseDefaultCredentials(
    const url::SchemeHostPort& auth_scheme_host_port) const {
  return true;
}

HttpAuth::DelegationType MockAllowHttpAuthPreferences::GetDelegationType(
    const url::SchemeHostPort& auth_scheme_host_port) const {
  return HttpAuth::DelegationType::kUnconstrained;
}

}  // namespace net
