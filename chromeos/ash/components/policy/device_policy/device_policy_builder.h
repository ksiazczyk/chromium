// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DevicePolicyBuilder type alias header
// summary: Defines DevicePolicyBuilder as a TypedPolicyBuilder alias for ChromeDeviceSettingsProto used to build fake device policies in tests.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_POLICY_DEVICE_POLICY_DEVICE_POLICY_BUILDER_H_
#define CHROMEOS_ASH_COMPONENTS_POLICY_DEVICE_POLICY_DEVICE_POLICY_BUILDER_H_

#include "components/policy/core/common/cloud/test/policy_builder.h"
#include "components/policy/proto/chrome_device_policy.pb.h"

namespace policy {

using DevicePolicyBuilder =
    TypedPolicyBuilder<enterprise_management::ChromeDeviceSettingsProto>;

}  // namespace policy

#endif  // CHROMEOS_ASH_COMPONENTS_POLICY_DEVICE_POLICY_DEVICE_POLICY_BUILDER_H_
