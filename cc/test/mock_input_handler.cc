// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock input handler implementation
// summary: Implements the MockInputHandler constructor and destructor, backed by a fake compositor delegate for input handling tests.
// ---

#include "cc/test/mock_input_handler.h"

#include "base/no_destructor.h"

namespace cc {

namespace {

FakeCompositorDelegateForInput& GetFakeCompositorDelegate() {
  static base::NoDestructor<FakeCompositorDelegateForInput>
      fake_compositor_delegate;
  return *fake_compositor_delegate;
}

}  // namespace

MockInputHandler::MockInputHandler()
    : InputHandler(GetFakeCompositorDelegate()) {}

MockInputHandler::~MockInputHandler() = default;

}  // namespace cc
