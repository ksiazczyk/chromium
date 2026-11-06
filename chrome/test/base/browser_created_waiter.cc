// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BrowserCreatedWaiter implementation
// summary: Implements a test helper that observes the global browser collection and blocks until a new browser is created, then returns it to the caller.
// ---

#include "chrome/test/base/browser_created_waiter.h"

#include "base/run_loop.h"
#include "base/scoped_observation.h"
#include "chrome/browser/ui/browser_window/public/global_browser_collection.h"

BrowserCreatedWaiter::BrowserCreatedWaiter() {
  observation_.Observe(GlobalBrowserCollection::GetInstance());
}

BrowserCreatedWaiter::~BrowserCreatedWaiter() = default;

BrowserWindowInterface* BrowserCreatedWaiter::Wait() {
  if (browser_) {
    return browser_;
  }
  // Wait for open.
  run_loop_.Run();
  return browser_;
}

void BrowserCreatedWaiter::OnBrowserCreated(BrowserWindowInterface* browser) {
  browser_ = browser;
  if (run_loop_.running()) {
    run_loop_.Quit();
  }
}
