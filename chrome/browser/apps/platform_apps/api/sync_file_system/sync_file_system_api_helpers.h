// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: syncFileSystem API helpers declarations
// summary: Declares the helper that maps extension conflict resolution policy enums to internal sync file system values.
// ---

#ifndef CHROME_BROWSER_APPS_PLATFORM_APPS_API_SYNC_FILE_SYSTEM_SYNC_FILE_SYSTEM_API_HELPERS_H_
#define CHROME_BROWSER_APPS_PLATFORM_APPS_API_SYNC_FILE_SYSTEM_SYNC_FILE_SYSTEM_API_HELPERS_H_

#include "chrome/browser/sync_file_system/conflict_resolution_policy.h"
#include "chrome/common/apps/platform_apps/api/sync_file_system.h"

namespace chrome_apps {
namespace api {

::sync_file_system::ConflictResolutionPolicy
    ExtensionEnumToConflictResolutionPolicy(
        sync_file_system::ConflictResolutionPolicy);

}  // namespace api
}  // namespace chrome_apps

#endif  // CHROME_BROWSER_APPS_PLATFORM_APPS_API_SYNC_FILE_SYSTEM_SYNC_FILE_SYSTEM_API_HELPERS_H_
