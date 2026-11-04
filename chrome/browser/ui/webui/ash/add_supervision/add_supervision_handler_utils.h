// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Add Supervision handler utils header
// summary: Declares the ShouldIncludeAppUpdate, LogOutHelper and EnrollmentCompleted helpers used by the Add Supervision handler.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_ASH_ADD_SUPERVISION_ADD_SUPERVISION_HANDLER_UTILS_H_
#define CHROME_BROWSER_UI_WEBUI_ASH_ADD_SUPERVISION_ADD_SUPERVISION_HANDLER_UTILS_H_

namespace apps {
class AppUpdate;
}  // namespace apps

// Returns true if the app indicated by the specified AppUpdate should be
// returned to clients or uninstalled.
bool ShouldIncludeAppUpdate(const apps::AppUpdate& app_update);

// Records UMA metric and signs out the user.
void LogOutHelper();

// Checks if the user has completed enrollment in supervision.
bool EnrollmentCompleted();

#endif  // CHROME_BROWSER_UI_WEBUI_ASH_ADD_SUPERVISION_ADD_SUPERVISION_HANDLER_UTILS_H_
