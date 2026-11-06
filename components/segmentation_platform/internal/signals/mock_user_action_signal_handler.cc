// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock user action signal handler implementation
// summary: Implements MockUserActionSignalHandler, a test stub that constructs the base user action signal handler with empty defaults for use in unit tests.
// ---

#include "components/segmentation_platform/internal/signals/mock_user_action_signal_handler.h"

namespace segmentation_platform {

MockUserActionSignalHandler::MockUserActionSignalHandler()
    : UserActionSignalHandler("", nullptr, nullptr) {}

MockUserActionSignalHandler::~MockUserActionSignalHandler() = default;

}  // namespace segmentation_platform
