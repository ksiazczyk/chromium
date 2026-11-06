// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chromium overrides stub
// summary: Implements InstallOverrides as a no-op, since the Chromium build applies no provider overrides.
// ---

#include "ios/public/provider/chrome/browser/overrides/overrides_api.h"

namespace ios {
namespace provider {

void InstallOverrides() {
  // No overrides in Chromium.
}

}  // namespace provider
}  // namespace ios
