// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestBrowserContextWithPrefs implementation
// summary: Implements TestBrowserContextWithPrefs, marking the context live, wiring a testing pref service into UserPrefs, and destroying browser context services on teardown.
// ---

#include "components/user_prefs/test/test_browser_context_with_prefs.h"

#include "components/user_prefs/user_prefs.h"

namespace user_prefs {

TestBrowserContextWithPrefs::TestBrowserContextWithPrefs()
    : browser_context_dependency_manager_(
          BrowserContextDependencyManager::GetInstance()) {
  browser_context_dependency_manager_->MarkBrowserContextLive(this);
  user_prefs::UserPrefs::Set(this, &prefs_);
}

TestBrowserContextWithPrefs::~TestBrowserContextWithPrefs() {
  browser_context_dependency_manager_->DestroyBrowserContextServices(this);
}

}  // namespace user_prefs
