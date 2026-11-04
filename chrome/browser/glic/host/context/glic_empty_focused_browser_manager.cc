// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic empty focused browser manager implementation
// summary: Implements a no-op focused browser manager that returns no browser and ignores focused and active browser callback registrations.
// ---

#include "chrome/browser/glic/host/context/glic_empty_focused_browser_manager.h"

namespace glic {

GlicEmptyFocusedBrowserManager::GlicEmptyFocusedBrowserManager() = default;

GlicEmptyFocusedBrowserManager::~GlicEmptyFocusedBrowserManager() = default;

base::CallbackListSubscription
GlicEmptyFocusedBrowserManager::AddFocusedBrowserChangedCallback(
    FocusedBrowserChangedCallback callback) {
  return {};
}

base::CallbackListSubscription
GlicEmptyFocusedBrowserManager::AddActiveBrowserChangedCallback(
    base::RepeatingCallback<void(BrowserWindowInterface*)> callback) {
  return {};
}

BrowserWindowInterface* GlicEmptyFocusedBrowserManager::GetFocusedBrowser()
    const {
  return nullptr;
}

BrowserWindowInterface* GlicEmptyFocusedBrowserManager::GetActiveBrowser()
    const {
  return nullptr;
}

BrowserWindowInterface* GlicEmptyFocusedBrowserManager::GetCandidateBrowser()
    const {
  return nullptr;
}

}  // namespace glic
