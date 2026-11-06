// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Webstore extension test fixture base
// summary: Defines the generic test fixture base class shared by webstore extension browser tests, disabling accessibility checks and preloading a dummy URL.
// ---

/** Generic parts of the test fixture for webstore extension tests. */
WebstoreExtensionTest = class extends testing.Test {
  /** @override */
  testGenCppIncludes() {
    GEN(`
#include "content/public/test/browser_test.h"
        `);
  }

  /** @override */
  get accessibilityChecks() {
    return false;
  }

  /** @override */
  get browsePreload() {
    return DUMMY_URL;
  }
}
