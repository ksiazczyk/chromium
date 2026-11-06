// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for the system input injector UI controls
// summary: Declares EnableUIControlsSystemInputInjector, which enables the evdev-level system input injector used by UI controls in tests.
// ---

#ifndef UI_OZONE_PLATFORM_DRM_TEST_UI_CONTROLS_SYSTEM_INPUT_INJECTOR_H_
#define UI_OZONE_PLATFORM_DRM_TEST_UI_CONTROLS_SYSTEM_INPUT_INJECTOR_H_

namespace ui::test {

void EnableUIControlsSystemInputInjector();

}  // namespace ui::test

#endif  // UI_OZONE_PLATFORM_DRM_TEST_UI_CONTROLS_SYSTEM_INPUT_INJECTOR_H_
