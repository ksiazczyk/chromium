// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Camera app prefs function declarations
// summary: Declares functions for registering camera app profile preferences and reading or writing the dev tools and cancel upload dialog settings.
// relations:
//   - depends_on /ash/ash_export.h
// ---

#ifndef ASH_SYSTEM_CAMERA_CAMERA_APP_PREFS_H_
#define ASH_SYSTEM_CAMERA_CAMERA_APP_PREFS_H_

#include "ash/ash_export.h"

class PrefRegistrySimple;

namespace ash::camera_app_prefs {

ASH_EXPORT void RegisterProfilePrefs(PrefRegistrySimple* registry);

ASH_EXPORT bool ShouldDevToolsOpen();

ASH_EXPORT void SetDevToolsOpenState(bool is_opened);

ASH_EXPORT bool ShouldSkipCancelUploadDialog();

ASH_EXPORT void SetSkipCancelUploadDialog();

}  // namespace ash::camera_app_prefs

#endif  // ASH_SYSTEM_CAMERA_CAMERA_APP_PREFS_H_
