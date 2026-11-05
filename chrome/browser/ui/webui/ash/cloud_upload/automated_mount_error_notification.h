// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Automated mount error notification interface
// summary: Declares the function that shows the persistent automated OneDrive mount error notification for the active user.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_ASH_CLOUD_UPLOAD_AUTOMATED_MOUNT_ERROR_NOTIFICATION_H_
#define CHROME_BROWSER_UI_WEBUI_ASH_CLOUD_UPLOAD_AUTOMATED_MOUNT_ERROR_NOTIFICATION_H_

namespace user_manager {
class User;
}  // namespace user_manager

namespace ash::cloud_upload {

// Shows the error state for the automated mount indefinitely, until closed by
// the user. The notification is only visible while `user` is the active user.
void ShowAutomatedMountErrorNotification(const user_manager::User& user);

}  // namespace ash::cloud_upload

#endif  // CHROME_BROWSER_UI_WEBUI_ASH_CLOUD_UPLOAD_AUTOMATED_MOUNT_ERROR_NOTIFICATION_H_
