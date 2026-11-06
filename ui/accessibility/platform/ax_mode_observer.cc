// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Accessibility mode observer implementation
// summary: Implements the AXModeObserver destructor, verifying the observer is not in an observer list when destroyed.
// ---

#include "ui/accessibility/platform/ax_mode_observer.h"

#include "base/check.h"

namespace ui {

AXModeObserver::~AXModeObserver() {
  CHECK(!IsInObserverList());
}

}  // namespace ui
