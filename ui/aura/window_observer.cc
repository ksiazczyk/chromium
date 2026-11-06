// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Window observer base implementation
// summary: Implements the WindowObserver constructor and destructor, checking that observers are no longer in an observer list when destroyed.
// ---

#include "ui/aura/window_observer.h"

#include "base/check.h"

namespace aura {

WindowObserver::WindowObserver() = default;

WindowObserver::~WindowObserver() {
  CHECK(!IsInObserverList());
}

}  // namespace aura
