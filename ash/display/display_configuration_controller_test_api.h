// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DisplayConfigurationController test API header
// summary: Declares a test API that accesses private DisplayConfigurationController state to control animations and screen rotation animators in tests.
// relations:
//   - depends_on /base/memory/raw_ptr.h
//   - references /ash/display/display_configuration_controller.h
// ---

#ifndef ASH_DISPLAY_DISPLAY_CONFIGURATION_CONTROLLER_TEST_API_H_
#define ASH_DISPLAY_DISPLAY_CONFIGURATION_CONTROLLER_TEST_API_H_

#include <stdint.h>

#include <memory>

#include "base/memory/raw_ptr.h"

namespace ash {
class DisplayConfigurationController;
class ScreenRotationAnimator;

// Accesses private data from a DisplayConfigurationController for testing.
class DisplayConfigurationControllerTestApi {
 public:
  explicit DisplayConfigurationControllerTestApi(
      DisplayConfigurationController* controller);

  DisplayConfigurationControllerTestApi(
      const DisplayConfigurationControllerTestApi&) = delete;
  DisplayConfigurationControllerTestApi& operator=(
      const DisplayConfigurationControllerTestApi&) = delete;

  // Wrapper functions for DisplayConfigurationController.
  void SetDisplayAnimator(bool enable);
  ScreenRotationAnimator* GetScreenRotationAnimatorForDisplay(
      int64_t display_id);

  void SetScreenRotationAnimatorForDisplay(
      int64_t display_id,
      std::unique_ptr<ScreenRotationAnimator> animator);

 private:
  raw_ptr<DisplayConfigurationController> controller_;
};

}  // namespace ash

#endif  // ASH_DISPLAY_DISPLAY_CONFIGURATION_CONTROLLER_TEST_API_H_
