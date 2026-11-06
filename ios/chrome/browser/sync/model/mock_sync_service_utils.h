// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock sync service creation utility header
// summary: Declares CreateMockSyncService, a helper returning a basic MockSyncService keyed to a profile.
// ---

#ifndef IOS_CHROME_BROWSER_SYNC_MODEL_MOCK_SYNC_SERVICE_UTILS_H_
#define IOS_CHROME_BROWSER_SYNC_MODEL_MOCK_SYNC_SERVICE_UTILS_H_

#include "components/sync/test/mock_sync_service.h"
#include "ios/chrome/browser/shared/model/profile/profile_ios.h"

// Returns a basic MockSyncService.
std::unique_ptr<KeyedService> CreateMockSyncService(ProfileIOS* profile);

#endif  // IOS_CHROME_BROWSER_SYNC_MODEL_MOCK_SYNC_SERVICE_UTILS_H_
