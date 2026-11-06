// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake managed guest session test helper header
// summary: Declares FakeManagedGuestSession, a test helper that fakes a logged-in managed guest session via the Ash login state.
// ---

#ifndef CHROMEOS_COMPONENTS_MGS_MANAGED_GUEST_SESSION_TEST_UTILS_H_
#define CHROMEOS_COMPONENTS_MGS_MANAGED_GUEST_SESSION_TEST_UTILS_H_

namespace chromeos {

class FakeManagedGuestSession {
 public:
  explicit FakeManagedGuestSession(bool initialize_login_state = true);
  FakeManagedGuestSession(const FakeManagedGuestSession&) = delete;
  FakeManagedGuestSession& operator=(const FakeManagedGuestSession&) = delete;
  ~FakeManagedGuestSession();

 private:
  void SetUpFakeManagedGuestSession();
  void TearDownFakeManagedGuestSession();

  bool initialize_login_state_ = true;
};

}  // namespace chromeos

#endif  // CHROMEOS_COMPONENTS_MGS_MANAGED_GUEST_SESSION_TEST_UTILS_H_
