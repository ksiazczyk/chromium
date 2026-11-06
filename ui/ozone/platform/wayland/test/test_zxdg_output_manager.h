// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for the test zxdg_output_manager global object
// summary: Declares TestZXdgOutputManager, a GlobalObject for the mock compositor that hands out zxdg_output resources for test outputs.
// ---

#ifndef UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_ZXDG_OUTPUT_MANAGER_H_
#define UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_ZXDG_OUTPUT_MANAGER_H_

#include "ui/ozone/platform/wayland/test/global_object.h"

namespace wl {

class TestZXdgOutputManager : public GlobalObject {
 public:
  TestZXdgOutputManager();

  TestZXdgOutputManager(const TestZXdgOutputManager&) = delete;
  TestZXdgOutputManager& operator=(const TestZXdgOutputManager&) = delete;

  ~TestZXdgOutputManager() override;
};

}  // namespace wl

#endif  // UI_OZONE_PLATFORM_WAYLAND_TEST_TEST_ZXDG_OUTPUT_MANAGER_H_
