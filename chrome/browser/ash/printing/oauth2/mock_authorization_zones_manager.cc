// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Implementation of the mock authorization zones manager
// summary: Provides constructor and destructor definitions for the gmock mock of the AuthorizationZonesManager interface used in tests.
// ---

#include "chrome/browser/ash/printing/oauth2/mock_authorization_zones_manager.h"

namespace ash::printing::oauth2 {

MockAuthorizationZoneManager::MockAuthorizationZoneManager() = default;

MockAuthorizationZoneManager::~MockAuthorizationZoneManager() = default;

}  // namespace ash::printing::oauth2
