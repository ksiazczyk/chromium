// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Helper for detecting Google email addresses
// summary: Provides IsGoogleEmail, which checks whether an email address ends with the @google.com domain case-insensitively.
// ---

#include "remoting/base/is_google_email.h"

#include "base/strings/string_util.h"

namespace remoting {

namespace {
// The default email domain for Googlers.
constexpr char kGooglerEmailDomain[] = "@google.com";
}  // namespace

bool IsGoogleEmail(const std::string& email_address) {
  return base::EndsWith(email_address, kGooglerEmailDomain,
                        base::CompareCase::INSENSITIVE_ASCII);
}

}  // namespace remoting
