// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock build state observer implementation
// summary: Implements the constructor and destructor of the mock BuildState observer used by upgrade detector tests.
// ---

#include "chrome/browser/upgrade_detector/mock_build_state_observer.h"

MockBuildStateObserver::MockBuildStateObserver() = default;

MockBuildStateObserver::~MockBuildStateObserver() = default;
