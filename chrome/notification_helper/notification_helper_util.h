// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Notification helper utility header
// summary: Declares GetChromeExePath, which returns the Chrome browser executable path or an empty path.
// ---

#ifndef CHROME_NOTIFICATION_HELPER_NOTIFICATION_HELPER_UTIL_H_
#define CHROME_NOTIFICATION_HELPER_NOTIFICATION_HELPER_UTIL_H_

#include "base/files/file_path.h"

namespace notification_helper {

// Returns the file path of chrome.exe if found, or an empty file path if not.
base::FilePath GetChromeExePath();

}  // namespace notification_helper

#endif  // CHROME_NOTIFICATION_HELPER_NOTIFICATION_HELPER_UTIL_H_
