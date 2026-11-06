// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockInputEventActivationProtector implementation for tests
// summary: Implements a mock input event activation protector that can be constructed with an injected policy for verifying input protection behavior in tests.
// ---

#include "ui/views/test/mock_input_event_activation_protector.h"

#include <utility>

#include "ui/views/input_protection/input_protection_policy.h"

namespace views {
MockInputEventActivationProtector::MockInputEventActivationProtector() =
    default;
MockInputEventActivationProtector::MockInputEventActivationProtector(
    std::unique_ptr<InputProtectionPolicy> policy)
    : InputEventActivationProtector(std::move(policy)) {}
MockInputEventActivationProtector::~MockInputEventActivationProtector() =
    default;
}  // namespace views
