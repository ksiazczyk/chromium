// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Contains constants for known URLs and portions thereof.

// ---docerion
// type: source
// title: Android WebView URL constant declarations
// summary: Declares special Android file path constants, the video poster scheme, and a helper to detect special file URLs.
// relations:
//   - depends_on /url/gurl.h
// ---

#ifndef ANDROID_WEBVIEW_COMMON_URL_CONSTANTS_H_
#define ANDROID_WEBVIEW_COMMON_URL_CONSTANTS_H_

#include "url/gurl.h"

namespace android_webview {

// Special Android file paths.
extern const char kAndroidAssetPath[];
extern const char kAndroidResourcePath[];
// Returns whether the given URL is for loading a file from a special path.
bool IsAndroidSpecialFileUrl(const GURL& url);

extern const char kAndroidWebViewVideoPosterScheme[];

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_COMMON_URL_CONSTANTS_H_
