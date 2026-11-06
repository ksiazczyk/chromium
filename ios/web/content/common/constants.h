// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declarations of web content file path constants
// summary: Declares kCookieFilename and kNetworkDataDirname and can only be included when the USE_BLINK build flag is enabled.
// ---

#ifndef IOS_WEB_CONTENT_COMMON_CONSTANTS_H_
#define IOS_WEB_CONTENT_COMMON_CONSTANTS_H_

#include "base/files/file_path.h"
#include "build/blink_buildflags.h"

#if !BUILDFLAG(USE_BLINK)
#error File can only be included when USE_BLINK is true
#endif

namespace web {

extern const base::FilePath::CharType kCookieFilename[];
extern const base::FilePath::CharType kNetworkDataDirname[];

}  // namespace web

#endif  // IOS_WEB_CONTENT_COMMON_CONSTANTS_H_
