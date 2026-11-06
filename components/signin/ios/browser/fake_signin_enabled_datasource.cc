// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake signin enabled data source implementation
// summary: Implements a test-only data source that always reports sign-in as enabled.
// ---

#include "components/signin/ios/browser/fake_signin_enabled_datasource.h"

namespace signin {

bool FakeSigninEnabledDataSource::SigninEnabled() const {
  return true;
}

}  // namespace signin
