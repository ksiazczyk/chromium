// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock TF handwriting implementation
// summary: Provides stub definitions for the mock Text Services framework handwriting classes used to exercise Windows Shell Handwriting handling in tests.
// ---

#include "content/browser/renderer_host/input/mock_tfhandwriting.h"

namespace content {

MockTfImpl::MockTfImpl() = default;
MockTfImpl::~MockTfImpl() = default;

MockTfHandwritingRequest::MockTfHandwritingRequest() = default;
MockTfHandwritingRequest::~MockTfHandwritingRequest() = default;

MockTfFocusHandwritingTargetArgsImpl::MockTfFocusHandwritingTargetArgsImpl() =
    default;
MockTfFocusHandwritingTargetArgsImpl::~MockTfFocusHandwritingTargetArgsImpl() =
    default;

}  // namespace content
