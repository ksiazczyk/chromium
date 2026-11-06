// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile cache and cookie filename constants
// summary: Defines file path constants for the cache directory name, cookie filename, and network persistent state filename used by Chrome on iOS.
// ---

#include "ios/chrome/browser/profile/model/constants.h"

const base::FilePath::CharType kIOSChromeCacheDirname[] =
    FILE_PATH_LITERAL("Cache");
const base::FilePath::CharType kIOSChromeCookieFilename[] =
    FILE_PATH_LITERAL("Cookies");
const base::FilePath::CharType kIOSChromeNetworkPersistentStateFilename[] =
    FILE_PATH_LITERAL("Network Persistent State");
