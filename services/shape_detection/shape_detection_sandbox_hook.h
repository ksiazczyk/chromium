// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shape detection sandbox hook declaration
// summary: Declares the ShapeDetectionPreSandboxHook function used to prepare the Linux sandbox for shape detection.
// ---

#ifndef SERVICES_SHAPE_DETECTION_SHAPE_DETECTION_SANDBOX_HOOK_H_
#define SERVICES_SHAPE_DETECTION_SHAPE_DETECTION_SANDBOX_HOOK_H_

#include "sandbox/policy/linux/sandbox_linux.h"

namespace shape_detection {

bool ShapeDetectionPreSandboxHook(
    sandbox::policy::SandboxLinux::Options options);

}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_SHAPE_DETECTION_SANDBOX_HOOK_H_
