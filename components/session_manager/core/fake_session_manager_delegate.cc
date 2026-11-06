// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake session manager delegate implementation
// summary: Implements the fake delegate that counts sign-out requests and does nothing on restart, for use in tests.
// ---

#include "components/session_manager/core/fake_session_manager_delegate.h"

namespace session_manager {

FakeSessionManagerDelegate::FakeSessionManagerDelegate() = default;

FakeSessionManagerDelegate::~FakeSessionManagerDelegate() = default;

void FakeSessionManagerDelegate::RequestSignOut() {
  ++request_sign_out_count_;
}

void FakeSessionManagerDelegate::RequestRestart() {
  // Do nothing.
}

int FakeSessionManagerDelegate::request_sign_out_count() const {
  return request_sign_out_count_;
}

}  // namespace session_manager
