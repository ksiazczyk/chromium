// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Test signin client builder implementation
// summary: Builds a test SigninClient keyed service from a profile's prefs for use where ChromeSigninClientFactory needs a test client.
// ---

#include "chrome/browser/signin/test_signin_client_builder.h"

#include "chrome/browser/profiles/profile.h"
#include "components/signin/public/base/test_signin_client.h"

namespace signin {

std::unique_ptr<KeyedService> BuildTestSigninClient(
    content::BrowserContext* context) {
  return std::make_unique<TestSigninClient>(
      static_cast<Profile*>(context)->GetPrefs());
}

}  // namespace signin
