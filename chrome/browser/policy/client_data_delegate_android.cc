// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android client data delegate
// summary: Fills Android-specific OS platform, version, and hardware info into RegisterBrowserRequest protos for the device management server.
// ---

#include "chrome/browser/policy/client_data_delegate_android.h"

#include <utility>

#include "base/functional/bind.h"
#include "base/functional/callback.h"
#include "base/system/sys_info.h"
#include "chrome/browser/policy/android/cloud_management_android_connection.h"
#include "components/policy/core/common/cloud/cloud_policy_util.h"
#include "components/policy/proto/device_management_backend.pb.h"

namespace policy {

namespace {

void SetHardwareInfo(enterprise_management::RegisterBrowserRequest* request,
                     base::OnceClosure callback,
                     base::SysInfo::HardwareInfo hardware_info) {
  request->set_device_model(hardware_info.model);
  request->set_brand_name(hardware_info.manufacturer);
  std::move(callback).Run();
}

}  // namespace

void ClientDataDelegateAndroid::FillRegisterBrowserRequest(
    enterprise_management::RegisterBrowserRequest* request,
    base::OnceClosure callback) const {
  request->set_os_platform(GetOSPlatform());
  request->set_os_version(GetOSVersion());

  base::SysInfo::GetHardwareInfo(
      base::BindOnce(&SetHardwareInfo, request, std::move(callback)));
}

}  // namespace policy
