// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast runner command-line switch declarations
// summary: Declares command-line switch constants used to configure the cast runner for tests.
// ---

#ifndef FUCHSIA_WEB_RUNNERS_CAST_CAST_RUNNER_SWITCHES_H_
#define FUCHSIA_WEB_RUNNERS_CAST_CAST_RUNNER_SWITCHES_H_

// Disable Vulkan flag for the cast runner. Used for tests.
extern const char kDisableVulkanForTestsSwitch[];

// Force headless mode.
extern const char kForceHeadlessForTestsSwitch[];

#endif  // FUCHSIA_WEB_RUNNERS_CAST_CAST_RUNNER_SWITCHES_H_
