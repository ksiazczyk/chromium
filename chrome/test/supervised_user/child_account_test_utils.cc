// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Child account test utilities implementation
// summary: Builds a base64-encoded dummy OAuth ID token used for child account sign-in in tests.
// ---

#include "chrome/test/supervised_user/child_account_test_utils.h"

#include <string>

#include "base/base64.h"
#include "base/strings/string_util.h"
#include "base/strings/stringprintf.h"

namespace supervised_user {

std::string GetChildAccountOAuthIdToken() {
  std::string encoded = base::Base64Encode(R"({ "services": ["uca"] })");
  return base::StringPrintf("dummy-header.%s.dummy-signature", encoded.c_str());
}

}  // namespace supervised_user
