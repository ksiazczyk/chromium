// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App sync UI state observer implementation
// summary: Defines the AppSyncUIStateObserver destructor that checks the observer is removed from its list.
// ---

#include "chrome/browser/ash/app_list/app_sync_ui_state_observer.h"

#include "base/check.h"

AppSyncUIStateObserver::~AppSyncUIStateObserver() {
  CHECK(!IsInObserverList());
}
