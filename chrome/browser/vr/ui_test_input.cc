// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: UI test input implementation
// summary: Implements the UiVisibilityState helpers used to track VR UI element visibility changes during testing.
// ---

#include "chrome/browser/vr/ui_test_input.h"
namespace vr {

UiVisibilityState::UiVisibilityState() = default;
UiVisibilityState::~UiVisibilityState() = default;
UiVisibilityState::UiVisibilityState(UiVisibilityState&& other) = default;
UiVisibilityState& UiVisibilityState::operator=(UiVisibilityState&& other) =
    default;
}  // namespace vr
