// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Testing controls implementation
// summary: Implements the TestingControls Mojo interface, providing a Crash method that intentionally crashes the service for testing purposes.
// ---

#include "services/video_capture/testing_controls_impl.h"

#include "base/notreached.h"

namespace video_capture {

TestingControlsImpl::TestingControlsImpl() = default;

TestingControlsImpl::~TestingControlsImpl() = default;

void TestingControlsImpl::Crash() {
  NOTREACHED() << "This is an intentional crash for the purpose of testing";
}

}  // namespace video_capture
