// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DeviceCloudPolicyValidator template instantiation
// summary: Instantiates the CloudPolicyValidator template for Chrome device settings protos used by Ash device policy validation.
// ---

#include "chrome/browser/ash/policy/core/device_cloud_policy_validator.h"

#include "components/policy/proto/chrome_device_policy.pb.h"
#include "components/policy/proto/device_management_backend.pb.h"

namespace em = enterprise_management;

namespace policy {

template class CloudPolicyValidator<em::ChromeDeviceSettingsProto>;

}  // namespace policy
