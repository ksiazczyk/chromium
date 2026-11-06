// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test wl_keyboard server object implementation
// summary: Implements the minimal TestKeyboard server object with a release-only wl_keyboard interface for the test Wayland compositor.
// ---

#include "ui/ozone/platform/wayland/test/test_keyboard.h"

namespace wl {

const struct wl_keyboard_interface kTestKeyboardImpl = {
    &DestroyResource,  // release
};

TestKeyboard::TestKeyboard(wl_resource* resource) : ServerObject(resource) {}

TestKeyboard::~TestKeyboard() = default;

}  // namespace wl
