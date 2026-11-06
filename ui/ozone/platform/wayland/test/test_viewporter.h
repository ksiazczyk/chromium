// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestViewporter class managing the wl_viewporter test object
// summary: Declares the TestViewporter global object that manages the wl_viewporter protocol object in the test Wayland server.
// ---

#ifndef UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_VIEWPORTER_H_
#define UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_VIEWPORTER_H_

#include "ui/ozone/platform/wayland/test/global_object.h"

namespace wl {

// Manage wl_viewporter object.
class TestViewporter : public GlobalObject {
 public:
  TestViewporter();
  ~TestViewporter() override;
  TestViewporter(const TestViewporter& rhs) = delete;
  TestViewporter& operator=(const TestViewporter& rhs) = delete;
};

}  // namespace wl

#endif  // UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_VIEWPORTER_H_
