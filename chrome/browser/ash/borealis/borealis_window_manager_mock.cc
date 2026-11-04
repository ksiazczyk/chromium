// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Borealis window manager mock implementation
// summary: Implements the mock anonymous-app and lifetime observer classes used to test BorealisWindowManager notifications.
// ---

#include "chrome/browser/ash/borealis/borealis_window_manager_mock.h"

namespace borealis {

MockAnonObserver::MockAnonObserver() = default;

MockAnonObserver::~MockAnonObserver() = default;

MockLifetimeObserver::MockLifetimeObserver() = default;

MockLifetimeObserver::~MockLifetimeObserver() = default;

}  // namespace borealis
