// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RemoteAppsError enum header
// summary: Defines the RemoteAppsError enum with error codes for remote apps operations such as missing app or folder IDs and an uninitialized manager.
// ---

#ifndef CHROME_BROWSER_ASH_REMOTE_APPS_REMOTE_APPS_TYPES_H_
#define CHROME_BROWSER_ASH_REMOTE_APPS_REMOTE_APPS_TYPES_H_

namespace ash {

enum class RemoteAppsError {
  kNone = 0,
  kAppIdDoesNotExist,
  kFolderIdDoesNotExist,
  kFailedToPinAnApp,
  kPinningMultipleAppsNotSupported,
  // Manager has not been initialized.
  kNotReady,
};

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_REMOTE_APPS_REMOTE_APPS_TYPES_H_
