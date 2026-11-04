// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of the system routine controller delegate
// summary: Implements RunGoogleServicesConnectivity by forwarding the call to the NetworkHealthManager singleton.
// ---

#include "chrome/browser/ash/diagnostics/system_routine_controller_delegate_impl.h"

#include "chrome/browser/ash/net/network_health/network_health_manager.h"

namespace ash::diagnostics {

SystemRoutineControllerDelegateImpl::SystemRoutineControllerDelegateImpl()
    : network_health_manager_(
          *network_health::NetworkHealthManager::GetInstance()) {}

SystemRoutineControllerDelegateImpl::~SystemRoutineControllerDelegateImpl() =
    default;

void SystemRoutineControllerDelegateImpl::RunGoogleServicesConnectivity(
    RunGoogleServicesConnectivityCallback callback) {
  network_health_manager_->RunGoogleServicesConnectivity(std::move(callback));
}

}  // namespace ash::diagnostics
