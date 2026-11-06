// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Empty InstallOverrides stub for tests
// summary: Implements InstallOverrides as a no-op so iOS Chrome tests run without any provider overrides installed.
// ---

#include "ios/public/provider/chrome/browser/overrides/overrides_api.h"

namespace ios {
namespace provider {

void InstallOverrides() {
  // No overrides for tests.
}

}  // namespace provider
}  // namespace ios
