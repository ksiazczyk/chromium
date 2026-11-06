// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Definitions of web content file path constants
// summary: Defines the file path constants kCookieFilename and kNetworkDataDirname for the cookie file and network data directory in the web namespace.
// ---

#include "ios/web/content/common/constants.h"

#define FPL FILE_PATH_LITERAL

namespace web {

const base::FilePath::CharType kCookieFilename[] = FPL("Cookies");
const base::FilePath::CharType kNetworkDataDirname[] = FPL("Network");

}  // namespace web
