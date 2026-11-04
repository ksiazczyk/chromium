// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Pixel test InitParams definitions
// summary: Defines the default constructor, move operations, and destructor for the pixel_test::InitParams struct.
// ---

#include "ash/test/pixel/ash_pixel_test_init_params.h"

namespace ash::pixel_test {

InitParams::InitParams() = default;

InitParams::InitParams(InitParams&&) = default;

InitParams& InitParams::operator=(InitParams&&) = default;

InitParams::~InitParams() = default;

}  // namespace ash::pixel_test
