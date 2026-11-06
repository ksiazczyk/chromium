// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock frame node observer implementation
// summary: Defines the constructor and destructor for the lenient GMock frame node observer used in performance manager graph tests.
// ---

#include "components/performance_manager/test_support/graph/mock_frame_node_observer.h"

namespace performance_manager {

LenientMockFrameNodeObserver::LenientMockFrameNodeObserver() = default;
LenientMockFrameNodeObserver::~LenientMockFrameNodeObserver() = default;

}  // namespace performance_manager
