// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake apps access manager implementation
// summary: Implements a fake apps access manager that returns a preset access status and grants access when the setup operation completes successfully, for use in tests.
// ---

#include "ash/webui/eche_app_ui/fake_apps_access_manager.h"
#include "chromeos/ash/components/phonehub/multidevice_feature_access_manager.h"

namespace ash {
namespace eche_app {

using AccessStatus =
    ash::phonehub::MultideviceFeatureAccessManager::AccessStatus;

FakeAppsAccessManager::FakeAppsAccessManager(AccessStatus access_status)
    : access_status_(access_status) {}

FakeAppsAccessManager::~FakeAppsAccessManager() = default;

AccessStatus FakeAppsAccessManager::GetAccessStatus() const {
  return access_status_;
}

void FakeAppsAccessManager::SetAccessStatusInternal(
    AccessStatus access_status) {
  access_status_ = access_status;
  NotifyAppsAccessChanged();
}

void FakeAppsAccessManager::NotifyAppsAccessCanceled() {}

void FakeAppsAccessManager::OnSetupRequested() {}

void FakeAppsAccessManager::SetAppsSetupOperationStatus(
    AppsAccessSetupOperation::Status new_status) {
  switch (new_status) {
    case AppsAccessSetupOperation::Status::kCompletedSuccessfully:
      SetAccessStatusInternal(AccessStatus::kAccessGranted);
      break;
    default:
      // Do not update access status based on other operation status values.
      break;
  }

  AppsAccessManager::SetAppsSetupOperationStatus(new_status);
}

}  // namespace eche_app
}  // namespace ash
