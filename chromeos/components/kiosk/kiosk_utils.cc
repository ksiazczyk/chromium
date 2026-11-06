// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Kiosk session detection implementation
// summary: Implements checks that report whether a kiosk session of a given type is currently running via the user manager.
// ---

#include "chromeos/components/kiosk/kiosk_utils.h"

#include "components/user_manager/user_manager.h"

namespace chromeos {

bool IsKioskSession() {
  return user_manager::UserManager::IsInitialized() &&
         user_manager::UserManager::Get()->IsLoggedInAsAnyKioskApp();
}

bool IsChromeAppKioskSession() {
  return user_manager::UserManager::IsInitialized() &&
         user_manager::UserManager::Get()->IsLoggedInAsKioskChromeApp();
}

bool IsWebKioskSession() {
  return user_manager::UserManager::IsInitialized() &&
         user_manager::UserManager::Get()->IsLoggedInAsKioskWebApp();
}

bool IsIwaKioskSession() {
  return user_manager::UserManager::IsInitialized() &&
         user_manager::UserManager::Get()->IsLoggedInAsKioskIWA();
}

}  // namespace chromeos
