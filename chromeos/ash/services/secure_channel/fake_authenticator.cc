// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake authenticator implementation
// summary: Implements the FakeAuthenticator test double whose Authenticate() call stores the most recent authentication callback for tests.
// ---

#include "chromeos/ash/services/secure_channel/fake_authenticator.h"

#include <utility>

namespace ash::secure_channel {

FakeAuthenticator::FakeAuthenticator() = default;

FakeAuthenticator::~FakeAuthenticator() = default;

void FakeAuthenticator::Authenticate(
    Authenticator::AuthenticationCallback callback) {
  last_callback_ = std::move(callback);
}

}  // namespace ash::secure_channel
