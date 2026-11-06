// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TouchTransformControllerTestApi implementation
// summary: Implements a test API wrapper giving tests access to a TouchTransformController's touch transform setter.
// ---

#include "ui/display/manager/test/touch_transform_controller_test_api.h"

namespace display::test {

TouchTransformControllerTestApi::TouchTransformControllerTestApi(
    TouchTransformController* controller)
    : controller_(controller) {}

TouchTransformControllerTestApi::~TouchTransformControllerTestApi() = default;

}  // namespace display::test
