// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Child account test utilities header
// summary: Declares a helper that returns a placeholder OAuth ID token for child log-in in tests.
// ---

#ifndef CHROME_TEST_SUPERVISED_USER_CHILD_ACCOUNT_TEST_UTILS_H_
#define CHROME_TEST_SUPERVISED_USER_CHILD_ACCOUNT_TEST_UTILS_H_

#include <string>

namespace supervised_user {

// Returns a base64-encoded placeholder token for child log-in.
std::string GetChildAccountOAuthIdToken();

}  // namespace supervised_user

#endif  // CHROME_TEST_SUPERVISED_USER_CHILD_ACCOUNT_TEST_UTILS_H_
