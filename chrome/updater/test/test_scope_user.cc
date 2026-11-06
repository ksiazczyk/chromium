// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User scope for testing
// summary: Implements GetUpdaterScopeForTesting to return the user scope for user-level test builds.
// ---

#include "chrome/updater/test/test_scope.h"
#include "chrome/updater/updater_scope.h"

namespace updater {

UpdaterScope GetUpdaterScopeForTesting() {
  return UpdaterScope::kUser;
}

}  // namespace updater
