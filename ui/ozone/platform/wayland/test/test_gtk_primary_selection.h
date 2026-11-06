// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GTK primary selection test manager factory declaration
// summary: Declares CreateTestSelectionManagerGtk, a factory that builds a GTK primary selection device manager for the test Wayland server.
// ---

#ifndef UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_GTK_PRIMARY_SELECTION_H_
#define UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_GTK_PRIMARY_SELECTION_H_

#include <memory>

#include "ui/ozone/platform/wayland/test/test_selection_device_manager.h"

namespace wl {

std::unique_ptr<TestSelectionDeviceManager> CreateTestSelectionManagerGtk();
}

#endif  // UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_GTK_PRIMARY_SELECTION_H_
